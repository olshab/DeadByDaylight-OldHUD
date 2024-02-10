#include "VoidZoneHauntComponent.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class AActor;

void UVoidZoneHauntComponent::Multicast_WinHauntForTeam_Implementation(ADBDPlayer* winningPlayer, const TArray<TWeakObjectPtr<ADBDPlayer>>& playersInZone)
{

}

void UVoidZoneHauntComponent::Multicast_UpdateAllPlayerHauntTargets_Implementation(float chargeRemainingInHaunt, const TArray<TWeakObjectPtr<ADBDPlayer>>& playersInZone, bool isZoneContested, bool shouldRegressProgress)
{

}

void UVoidZoneHauntComponent::Multicast_PlayerEnterOrLeftZone_Implementation(ADBDPlayer* playerEnteringOrLeavingZone, bool isPlayerLeavingZone, float chargeRemainingInHaunt, const TArray<TWeakObjectPtr<ADBDPlayer>>& playersInZone, bool isZoneContested, bool shouldRegressProgress)
{

}

void UVoidZoneHauntComponent::Multicast_OnVoidZoneOpen_Implementation()
{

}

void UVoidZoneHauntComponent::Multicast_OnVoidZoneClose_Implementation()
{

}

void UVoidZoneHauntComponent::Multicast_AddCaptureProgress_Implementation(int32 progress)
{

}

void UVoidZoneHauntComponent::Authority_StartRegression()
{

}

void UVoidZoneHauntComponent::Authority_ResetAllProgress()
{

}

void UVoidZoneHauntComponent::Authority_PlayerInZone(ADBDPlayer* player)
{

}

void UVoidZoneHauntComponent::Authority_OnVoidZoneOpen()
{

}

void UVoidZoneHauntComponent::Authority_OnVoidZoneClose()
{

}

void UVoidZoneHauntComponent::Authority_OnInteractionCompleted(bool completed, const TArray<AActor*>& instigatorsForCompletion)
{

}

void UVoidZoneHauntComponent::Authority_GrantCaptureBonusStatusEffects(ADBDPlayer* player)
{

}

void UVoidZoneHauntComponent::Authority_DecayProgress(float deltaTime)
{

}

void UVoidZoneHauntComponent::Authority_AddCaptureProgress(int32 progress, ADBDPlayer* playerGivingEnergy)
{

}

void UVoidZoneHauntComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UVoidZoneHauntComponent, _currentRoleWinningHaunt);
}

UVoidZoneHauntComponent::UVoidZoneHauntComponent()
{
	this->_hasteStatusEffectClass = NULL;
	this->_enduranceStatusEffectClass = NULL;
	this->_undetectableStatusEffectClass = NULL;
	this->_camperActionSpeedBoostStatusEffectClass = NULL;
	this->_slasherActionSpeedBoostStatusEffectClass = NULL;
	this->_slasherAttackCooldownStatusEffectClass = NULL;
	this->_currentRoleWinningHaunt = EPlayerRole::VE_None;
	this->_heightOffsetToSpawnOrb = 100.000000;
	this->_captureHauntInteraction = NULL;
	this->_captureHauntChargeable = NULL;
}
