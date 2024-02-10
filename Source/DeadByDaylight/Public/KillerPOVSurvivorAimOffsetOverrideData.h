#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "KillerPOVSurvivorAimOffsetOverrideData.generated.h"

class UCurveFloat;

USTRUCT()
struct FKillerPOVSurvivorAimOffsetOverrideData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag PresenceTag;

protected:
	UPROPERTY(EditAnywhere)
	float _heightOffset;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _offsetPercentagePerDotProductCurve;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _conditionalTagsRequired;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> ConditionalTagsPreventing;

public:
	DEADBYDAYLIGHT_API FKillerPOVSurvivorAimOffsetOverrideData();
};

FORCEINLINE uint32 GetTypeHash(const FKillerPOVSurvivorAimOffsetOverrideData) { return 0; }
