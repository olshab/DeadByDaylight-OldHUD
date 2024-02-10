#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "AdditionalDynamicSubtree.h"
#include "GameplayTagContainer.h"
#include "KillerFilterItem.h"
#include "AISkill.generated.h"

class UNavigationQueryFilter;
class ADBDAIBTController;
class UAISenseConfig;
class UBehaviorTree;

UCLASS(Abstract, EditInlineNew)
class DBDBOTS_API UAISkill : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer RunContexts;

	UPROPERTY(EditDefaultsOnly)
	bool StopIfPausedByNavLinkProxy;

	UPROPERTY(EditDefaultsOnly)
	float RunTimeLimit;

	UPROPERTY(EditDefaultsOnly)
	float RunCooldownTime;

	UPROPERTY(EditDefaultsOnly)
	float RunCooldownTimeDeviation;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UNavigationQueryFilter> SkillNavigationFilterClass;

	UPROPERTY(EditDefaultsOnly, Export)
	TArray<UAISenseConfig*> SkillSenseConfigs;

	UPROPERTY(EditDefaultsOnly)
	TArray<FKillerFilterItem> KillerFilter;

	UPROPERTY(EditDefaultsOnly)
	UBehaviorTree* DynamicSubtree;

	UPROPERTY(EditDefaultsOnly)
	TArray<FAdditionalDynamicSubtree> AdditionalDynamicSubtrees;

private:
	UPROPERTY(Transient)
	TArray<UObject*> _pausedByObjects;

	UPROPERTY(Transient)
	ADBDAIBTController* _aiControllerOwner;

public:
	UAISkill();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill) { return 0; }
