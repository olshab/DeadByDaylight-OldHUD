#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "K33FXInterface.generated.h"

class AK33Turret;
class ACamperPlayer;

UINTERFACE(Blueprintable)
class THEK33_API UK33FXInterface : public UInterface
{
	GENERATED_BODY()
};

class THEK33_API IK33FXInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateTailAttackVFX(const FVector& location, const FRotator& rotation);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerTunnelTransitionFadeOut(float timeBeforeFadeOut);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerTunnelTransitionFadeIn(float timeBeforeFadeIn);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TailAttackObstructedVFX(const FVector& obstructionLocation);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StopTailAttackVFX();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetVisibility(bool isVisible);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetKillerInvisibleUnderCurrentFloor(bool shouldKillerBeInvisibleUnderFloor);

	UFUNCTION(BlueprintImplementableEvent)
	void Cosmetic_SetKillerFPVAudioAmbiance(bool isTunnelAmbianceActive);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretMaxDamageReceived();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretHitByTailAttack(AK33Turret* turret);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretDamageChanged(float damagePercent);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorHitByTailAttack(ACamperPlayer* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSpecialModeChanged(bool isInSpecialMode);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerShotByTurret();

};
