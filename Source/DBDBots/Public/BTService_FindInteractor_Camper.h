#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "EFindInteractableCamperFilter.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_Camper.generated.h"

class UStatusEffect;

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Camper : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	EFindInteractableCamperFilter StatusFilter;

	UPROPERTY(EditInstanceOnly)
	TArray<TSubclassOf<UStatusEffect>> IgnoreWhenTargetStatusEffects;

	UPROPERTY(EditInstanceOnly)
	float RequiredAttentionMovementFrequency;

	UPROPERTY(EditInstanceOnly)
	float AttentionMovementFrequencyLerp;

	UPROPERTY(EditInstanceOnly)
	float AttentionValidTime;

	UPROPERTY(EditInstanceOnly)
	float AttentionValidDistance;

	UPROPERTY(EditInstanceOnly)
	float AttentionCooldownReduction;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter AllyDangerStateGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter IncapacitatedAlliesGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter CrawlingRecoveryProgressGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter CrawlingDeathTimerGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter IdealKillerDistanceFromCrawling;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter MaxKillerProximityWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter AttentionWeight;

public:
	UBTService_FindInteractor_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Camper) { return 0; }
