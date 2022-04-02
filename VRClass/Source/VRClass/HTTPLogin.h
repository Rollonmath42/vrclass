// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Http.h"
#include "Kismet/BlueprintFunctionLibrary.h"

THIRD_PARTY_INCLUDES_START
#include <OpenSSL/1.1.1k/include/Win64/VS2015/openssl/sha.h>
THIRD_PARTY_INCLUDES_END


#include "HTTPLogin.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FStringDelegate, FString, response, FString, extra);

/**
 * 
 */
UCLASS()
class VRCLASS_API UHTTPLogin : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		static void ConnectToServer(FString user, FString password, FString route);//, FHttpResponsePtr& Response);

	UPROPERTY()
	FStringDelegate classDelegateVariable;
	UFUNCTION(BlueprintCallable, Category = "CustomDelegate")
	void CreateDelegateConnection(FStringDelegate delegateVariable);
private:
	static void HandleResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool Successful);
};
