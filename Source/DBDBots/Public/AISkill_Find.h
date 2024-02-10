#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "AISkill_Find.generated.h"

class AActor;
class UObject;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Find : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> FindClass;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag BlackboardWishListTag;

	UPROPERTY(EditDefaultsOnly)
	float SearchInterval;

	UPROPERTY(EditDefaultsOnly)
	bool MustBeSeen;

	UPROPERTY(EditDefaultsOnly)
	bool RejectIfWasInCooldownAndFocusedOnAnotherObject;

	UPROPERTY(EditInstanceOnly)
	bool IgnoreMindFocusCooldown;

	UPROPERTY(EditDefaultsOnly)
	bool AbandonIfInChase;

	UPROPERTY(EditDefaultsOnly)
	bool RejectIfInPressureZone;

	UPROPERTY(EditDefaultsOnly)
	bool RejectIfNotFocusedBySelf;

	UPROPERTY(EditDefaultsOnly)
	bool RejectIfInteractableFocusedByOther;

	UPROPERTY(EditDefaultsOnly)
	bool UsesActorLocation;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalBasicWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalWeightMaxDistance;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter GoalWeightAtMinDistance;

	UPROPERTY(EditInstanceOnly)
	float SearchHeightAmplifier;

	UPROPERTY(EditInstanceOnly)
	float SearchHeightAmplifierActivationHeight;

	UPROPERTY(EditInstanceOnly)
	bool IsUnsafeAction;

	UPROPERTY(EditInstanceOnly)
	FString UnsafeInteractionID;

	UPROPERTY(EditInstanceOnly)
	bool UnsafeActionUsesItemAddons;

	UPROPERTY(EditInstanceOnly)
	bool UnsafeActionIsSelfInteraction;

	UPROPERTY(EditInstanceOnly)
	float UnsafeActionRange;

protected:
	UPROPERTY(Transient)
	TArray<UObject*> _currentWishedObjects;

public:
	UAISkill_Find();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Find) { return 0; }
