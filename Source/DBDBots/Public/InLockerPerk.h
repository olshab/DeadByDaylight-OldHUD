#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "AITunableParameter.h"
#include "EInLockerPerkEmptyHandType.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "InLockerPerk.generated.h"

class AActor;

USTRUCT()
struct FInLockerPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FDataTableDropdown PerkID;

	UPROPERTY(EditInstanceOnly)
	bool PerkNeedToBeFullyCharged;

	UPROPERTY(EditInstanceOnly)
	EInLockerPerkEmptyHandType RequiredHeldItemSlots;

	UPROPERTY(EditInstanceOnly)
	EInLockerPerkEmptyHandType RequiredEmptyHandedSlots;

	UPROPERTY(EditInstanceOnly)
	bool NeedToBeInjured;

	UPROPERTY(EditInstanceOnly)
	bool NeedPerkSkillToBeRunnableAtLocation;

	UPROPERTY(EditInstanceOnly)
	bool MustBeFarFromLinkedObject;

	UPROPERTY(EditInstanceOnly)
	float MinimumDistanceFromObject;

	UPROPERTY(EditInstanceOnly)
	TSubclassOf<AActor> LinkedObjectClass;

	UPROPERTY(EditInstanceOnly)
	bool UnusableIfLockerPenaltyReceived;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBLockerPenaltyReceived;

	UPROPERTY(EditInstanceOnly)
	float UnusableUnlessKillerIsFartherThan;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PerkWeight;

public:
	DBDBOTS_API FInLockerPerk();
};

FORCEINLINE uint32 GetTypeHash(const FInLockerPerk) { return 0; }
