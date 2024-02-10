#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFindInteractablePalletIntentions.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_FindInteractor.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_Pallet.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Pallet : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBPickSideRelativelyFrom;

	UPROPERTY(EditInstanceOnly)
	EFindInteractablePalletIntentions IntentionFilter;

	UPROPERTY(EditInstanceOnly)
	FName RaisePalletPerkId;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter BrokenGeneratorGoalMaxDistance;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter BrokenGeneratorGoalMaxDistanceWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter SpawnInSurvivorLOSPenalty;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter SpawnNearSurvivorMinDistanceSquared;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter SpawnNearSurvivorPenalty;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PlacedNearGamePalletMinDistanceSquared;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PlacedNearGamePalletPenalty;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter ConvincingFactorTolerance;

	UPROPERTY(EditInstanceOnly)
	bool SkipSafetyCheck;

	UPROPERTY(EditInstanceOnly)
	FVector AcceptablePalletDropExtent;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBEvadePointCrossingDest;

	UPROPERTY(EditInstanceOnly)
	float ExtraHealthySurvivorActionTime;

	UPROPERTY(EditInstanceOnly)
	float ExtraInjuredSurvivorActionTime;

	UPROPERTY(EditInstanceOnly)
	float PalletInteractorLocationOffset;

	UPROPERTY(EditInstanceOnly)
	float AcceptableEvadePointCrossingDestDist;

public:
	UBTService_FindInteractor_Pallet();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Pallet) { return 0; }
