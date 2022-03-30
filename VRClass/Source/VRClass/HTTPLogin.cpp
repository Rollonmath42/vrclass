// Fill out your copyright notice in the Description page of Project Settings.


#include "HTTPLogin.h"

void UHTTPLogin::ConnectToServer(FString user, FString password)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();

    FString url = "localhost/vrclass_login?pass=" + password + "&user=" + user;

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