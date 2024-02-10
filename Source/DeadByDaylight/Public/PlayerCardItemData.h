#pragma once

#include "CoreMinimal.h"
#include "PlayerCardItemData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCardItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FString IconPath;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString SecondaryIconPath;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString AnimationFilePath;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString AnimationLinkageId;

public:
	DEADBYDAYLIGHT_API FPlayerCardItemData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerCardItemData) { return 0; }
