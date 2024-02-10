#pragma once

#include "CoreMinimal.h"
#include "SpecialEventLoadingTextData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventLoadingTextData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SpecialBehaviourId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isPreviousSpecial;

	UPROPERTY(SkipSerialization)
	bool isPreviousSpecial_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isNextSpecial;

	UPROPERTY(SkipSerialization)
	bool isNextSpecial_IsSet;

public:
	DEADBYDAYLIGHT_API FSpecialEventLoadingTextData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventLoadingTextData) { return 0; }
