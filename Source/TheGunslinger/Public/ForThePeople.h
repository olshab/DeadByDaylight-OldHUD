#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SecondaryInteractionProperties.h"
#include "Templates/SubclassOf.h"
#include "ForThePeople.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UForThePeople : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_SetIsHealStartedOnServer)
	bool _isHealStartedOnServer;

	UPROPERTY(EditDefaultsOnly)
	float _brokenEffectDurations;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _forThePeopleBrokenEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _forThePeopleObsessionEffect;

	UPROPERTY(EditDefaultsOnly)
	FSecondaryInteractionProperties _secondaryActionProperties;

private:
	UFUNCTION(Server, Reliable)
	void Server_OnActionInputPressed();

	UFUNCTION()
	void OnRep_SetIsHealStartedOnServer() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnHealingAbilityUsed(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor);

private:
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_OnHealAbilityUsed(ACamperPlayer* healer, ACamperPlayer* healTarget, float amountHealed);

public:
	UFUNCTION(BlueprintPure)
	float GetBrokenEffectDurationAtLevel() const;

private:
	UFUNCTION(Client, Reliable)
	void Client_OnActionInputPressedEnded();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UForThePeople();
};

FORCEINLINE uint32 GetTypeHash(const UForThePeople) { return 0; }
