#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SentryUser.generated.h"

UCLASS(BlueprintType)
class SENTRY_API USentryUser : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetUsername(const FString& Username);

	UFUNCTION(BlueprintCallable)
	void SetIpAddress(const FString& IpAddress);

	UFUNCTION(BlueprintCallable)
	void SetId(const FString& Id);

	UFUNCTION(BlueprintCallable)
	void SetEmail(const FString& Email);

	UFUNCTION(BlueprintCallable)
	void SetData(const TMap<FString, FString>& Data);

	UFUNCTION(BlueprintPure)
	FString GetUsername() const;

	UFUNCTION(BlueprintPure)
	FString GetIpAddress() const;

	UFUNCTION(BlueprintPure)
	FString GetId() const;

	UFUNCTION(BlueprintPure)
	FString GetEmail() const;

	UFUNCTION(BlueprintPure)
	TMap<FString, FString> GetData() const;

public:
	USentryUser();
};

FORCEINLINE uint32 GetTypeHash(const USentryUser) { return 0; }
