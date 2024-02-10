#include "DBDAttack.h"
#include "Engine/EngineTypes.h"
#include "PostAttackData.h"
#include "EAttackSubstate.h"
#include "ActionPredictionKey.h"
#include "AttackSubstateRequestResult.h"

class ACharacter;
class UAttackableComponent;
class ADBDPlayer;
class UDBDAttackSubstate;

void UDBDAttack::Server_RequestStateChange_Implementation(const EAttackSubstate state)
{

}

void UDBDAttack::Server_HitTarget_Implementation(ADBDPlayer* target, const float targetLocationTimestamp, FActionPredictionKey predictionKey)
{

}

void UDBDAttack::Server_HitDestroyableActorAttackableComponent_Implementation(UAttackableComponent* attackableComponent)
{

}

void UDBDAttack::Server_ClearTargets_Implementation()
{

}

void UDBDAttack::Multicast_SendPostHitTargetData_Implementation(ADBDPlayer* owningKiller, ADBDPlayer* target, const FPostAttackData& attackData)
{

}

void UDBDAttack::Multicast_RequestStateChange_Implementation(const EAttackSubstate state)
{

}

void UDBDAttack::Multicast_HitTarget_Implementation(ADBDPlayer* target, bool hitCosmeticOnly)
{

}

void UDBDAttack::Multicast_HitAttackableComponent_Implementation(UAttackableComponent* attackableComponent)
{

}

void UDBDAttack::Multicast_ClearTargets_Implementation()
{

}

void UDBDAttack::Local_OnMovementChanged(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode)
{

}

UDBDAttackSubstate* UDBDAttack::GetAttackSubstate(const EAttackSubstate state) const
{
	return NULL;
}

void UDBDAttack::Client_ReceiveHitResult_Implementation(ADBDPlayer* target, bool isValid, FActionPredictionKey predictionKey)
{

}

void UDBDAttack::Client_ReceiveAttackSubstateRequestResult_Implementation(const FAttackSubstateRequestResult result)
{

}

UDBDAttack::UDBDAttack()
{
	this->_attackType = EAttackType::VE_None;
	this->_useMontage = true;
	this->_damageZone = EDetectionZone::VE_None;
	this->_lockZone = EDetectionZone::VE_None;
	this->_obstructionZone = EDetectionZone::VE_None;
	this->_onlyApplyAccelerationMultiplierWhenWalking = false;
	this->_stateClasses = TMap<EAttackSubstate, TSubclassOf<UDBDAttackSubstate>>();
	this->_localAlreadyHitTargets = TArray<ACharacter*>();
	this->_hitTargets = TArray<ADBDPlayer*>();
	this->_targetsAwaitingServerValidation = TSet<ADBDPlayer*>();
	this->_states = TMap<EAttackSubstate, UDBDAttackSubstate*>();
	this->_hitValidationConfigName = EHitValidatorConfigName::Default;
}
