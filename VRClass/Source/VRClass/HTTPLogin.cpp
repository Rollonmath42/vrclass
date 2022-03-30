// Fill out your copyright notice in the Description page of Project Settings.


#include "HTTPLogin.h"

void UHTTPLogin::ConnectToServer(FString user, FString password)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();

	SHA256_CTX context;
	char* unhashed_password = TCHAR_TO_ANSI(*password);
	unsigned char hashed_password[SHA256_DIGEST_LENGTH];

	SHA256_Init(&context);
	SHA256_Update(&context, unhashed_password, strlen(unhashed_password));
	SHA256_Final(hashed_password, &context);

	char converted_hashed_password[65];

	for (int i = 0; i < 32; i++)
	{
		sprintf(converted_hashed_password + 2 * i, "%02x", hashed_password[i]);
	}

	converted_hashed_password[64] = '\0';

	FString stringified_hashed_password(converted_hashed_password);

    FString url = "localhost/vrclass_login?pass=" + stringified_hashed_password + "&user=" + user;

	GEngine->AddOnScreenDebugMessage(-1, 12.0f, FColor::White, url);

    Request->OnProcessRequestComplete().BindStatic(&UHTTPLogin::HandleResponse);
    Request->SetURL(url);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/json");
    Request->ProcessRequest();
}

void UHTTPLogin::HandleResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool Successful)
{
	if (Response->GetResponseCode() != 200)
	{
		GEngine->AddOnScreenDebugMessage(-1, 12.0f, FColor::White, TEXT("Error: Didn't Receive Response Code 200"));
		return;
	}

	TSharedPtr<FJsonObject> JsonResponse;

	const FString ResponseBody = Response->GetContentAsString();

	GEngine->AddOnScreenDebugMessage(-1, 12.0f, FColor::White, ResponseBody);
}