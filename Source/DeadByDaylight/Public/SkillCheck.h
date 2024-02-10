#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESkillCheckCustomType.h"
#include "SkillCheckResponse.h"
#include "SkillCheckDefinition.h"
#include "SkillCheck.generated.h"

class ADBDPlayer;
class UChargeableInteractionDefinition;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USkillCheck : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ADBDPlayer* _owner;

	UPROPERTY(Transient, Export)
	UChargeableInteractionDefinition* _currentInteraction;

	UPROPERTY(VisibleAnywhere)
	TArray<ESkillCheckCustomType> _customSkillCheckTypesAffectedByWarningModifiers;

public:
	UFUNCTION(BlueprintCallable)
	bool ShouldShowWarning();

private:
	UFUNCTION(Server, Reliable)
	void Server_OnSkillCheckSuccess(FSkillCheckResponse skillCheckResponse);

	UFUNCTION(Server, Reliable)
	void Server_OnSkillCheckFailure(FSkillCheckResponse skillCheckResponse);

	UFUNCTION(Server, Reliable)
	void Server_DeactivateSkillCheck();

	UFUNCTION(Server, Reliable)
	void Server_ActivateSkillCheck(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType skillCheckCustomType, FSkillCheckDefinition definition);

	UFUNCTION()
	void OnSkillCheckSuccessTrigger(const bool bonus, const bool insane, ESkillCheckCustomType skillCheckCustomType, const bool failedCountedAsGood);

	UFUNCTION()
	void OnSkillCheckFailureTrigger(const bool hadInput, const bool insane, ESkillCheckCustomType skillCheckCustomType);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SkillCheckResponse(FSkillCheckResponse skillCheckResponse, bool executeOnlyOnNotControlled);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnTriggerCustomSkillCheck(UChargeableInteractionDefinition* currentInteraction, ESkillCheckCustomType skillCheckCustomType, const FString& id, const FString& salt, const FSkillCheckDefinition& definition);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnTriggerContinuousCustomSkillCheck(UChargeableInteractionDefinition* currentInteraction, ESkillCheckCustomType skillCheckCustomType, const FSkillCheckDefinition& definition);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DeactivateSkillCheck();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ActivateSkillCheck(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType skillCheckCustomType, FSkillCheckDefinition definition, bool executeOnlyOnNotControlled);

public:
	UFUNCTION(BlueprintPure)
	bool IsOffCenterSkillCheck() const;

	UFUNCTION(BlueprintPure)
	bool IsHexSkillCheck(ADBDPlayer* dbdPlayer) const;

	UFUNCTION(BlueprintPure)
	bool IsDisplayed() const;

	UFUNCTION(BlueprintPure)
	static bool CanSkillCheckTypeGrantScore(ESkillCheckCustomType type);

	UFUNCTION()
	void Authority_OnSkillCheckTimeout();

public:
	USkillCheck();
};

FORCEINLINE uint32 GetTypeHash(const USkillCheck) { return 0; }
