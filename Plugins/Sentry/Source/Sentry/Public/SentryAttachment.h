#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SentryAttachment.generated.h"

UCLASS(BlueprintType)
class SENTRY_API USentryAttachment : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void InitializeWithPath(const FString& Path, const FString& Filename, const FString& ContentType);

	UFUNCTION(BlueprintCallable)
	void InitializeWithData(const TArray<uint8>& Data, const FString& Filename, const FString& ContentType);

	UFUNCTION(BlueprintPure)
	FString GetPath() const;

	UFUNCTION(BlueprintPure)
	FString GetFilename() const;

	UFUNCTION(BlueprintPure)
	TArray<uint8> GetData() const;

	UFUNCTION(BlueprintPure)
	FString GetContentType() const;

public:
	USentryAttachment();
};

FORCEINLINE uint32 GetTypeHash(const USentryAttachment) { return 0; }
