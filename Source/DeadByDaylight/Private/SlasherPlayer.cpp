#include "SlasherPlayer.h"
#include "HitValidatorConfigurator.h"
#include "DBDNavModifierComponent.h"
#include "EAttackZoneSet.h"
#include "KillerRedStainUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "EKillerAbilities.h"
#include "EAttackType.h"
#include "StillnessTrackerComponent.h"
#include "GameplayTagContainer.h"
#include "FirstPersonViewComponent.h"
#include "EKillerCarryAnimWeight.h"
#include "DBDAttackerComponent.h"
#include "KillerBlindingFXComponent.h"
#include "EStunType.h"
#include "HitValidatorComponent.h"
#include "KillerSoundCuesComponent.h"
#include "Net/UnrealNetwork.h"
#include "KillerBloodFXComponent.h"
#include "SlasherHitsWhileCarryingTrackerComponent.h"
#include "MoriComponent.h"
#include "KillerIntroComponent.h"
#include "FinisherMoriTrackerComponent.h"
#include "ArmIKSensorComponent.h"
#include "SlasherStunnableComponent.h"

class ACamperPlayer;
class ADBDPlayer;
class USceneComponent;
class AActor;
class UChaserCharacterComponent;
class USlasherMovementComponent;

bool ASlasherPlayer::WasRecentlyCloaked() const
{
	return false;
}

void ASlasherPlayer::UpdateRageTierEffect_Implementation(int32 previousTier, int32 currentTier)
{

}

void ASlasherPlayer::SpawnSlasherPower_Implementation()
{

}

bool ASlasherPlayer::ShouldApplyBloodlustSpeedModifier_Implementation() const
{
	return false;
}

void ASlasherPlayer::SetSurvivorBeingKilled(ACamperPlayer* survivor)
{

}

void ASlasherPlayer::SetStalkTierWalkSpeedMultiplier(float stalkTierWalkSpeedMultiplier)
{

}

void ASlasherPlayer::SetLightIntensity(float intensity)
{

}

void ASlasherPlayer::SetIsKilling(bool isKilling)
{

}

void ASlasherPlayer::SetIsHookingSurvivor(const bool value)
{

}

void ASlasherPlayer::SetIsCloaked(bool isCloaked, bool forced)
{

}

void ASlasherPlayer::SetForceThirdPersonAnimations(bool forceThirdPerson)
{

}

void ASlasherPlayer::SetCarriedCamper(ACamperPlayer* camper)
{

}

void ASlasherPlayer::SetAttackZonePivot(USceneComponent* attackZonePivot)
{

}

void ASlasherPlayer::Server_SendAttackInput_Implementation(bool pressed)
{

}

void ASlasherPlayer::OnSurvivorsLeftChanged(int32 survivorRemaining)
{

}

void ASlasherPlayer::OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise)
{

}

void ASlasherPlayer::OnLoudNoiseIndicatorDestroyed()
{

}

void ASlasherPlayer::OnKillerAbilityUpdateActivate_Implementation(EKillerAbilities killerAbility, float percent)
{

}

void ASlasherPlayer::OnKillerAbilityEndDeactivate_Implementation(EKillerAbilities killerAbility, bool forced)
{

}

void ASlasherPlayer::OnKillerAbilityEndActivate_Implementation(EKillerAbilities killerAbility)
{

}

void ASlasherPlayer::OnKillerAbilityBeginDeactivate_Implementation(EKillerAbilities killerAbility, bool forced)
{

}

void ASlasherPlayer::OnKillerAbilityBeginActivate_Implementation(EKillerAbilities killerAbility)
{

}

void ASlasherPlayer::OnDropCamperEnd(ADBDPlayer* camper)
{

}

void ASlasherPlayer::OnAttackStart(const EAttackType attackType)
{

}

void ASlasherPlayer::OnAttackFinish(const EAttackType attackType)
{

}

void ASlasherPlayer::Multicast_MergeLockOnDamageZones_Implementation(bool enable)
{

}

void ASlasherPlayer::Multicast_DisplayAttackZones_Implementation(bool display)
{

}

void ASlasherPlayer::Multicast_Cheat_SetAttackDetectionZoneSet_Implementation(EAttackZoneSet attackZoneSet)
{

}

bool ASlasherPlayer::Local_CancelAttack_Implementation()
{
	return false;
}

bool ASlasherPlayer::IsUncloaking_Implementation() const
{
	return false;
}

bool ASlasherPlayer::IsStunned() const
{
	return false;
}

bool ASlasherPlayer::IsOfferingAllowingKill(const ACamperPlayer* camper) const
{
	return false;
}

bool ASlasherPlayer::IsKilling() const
{
	return false;
}

bool ASlasherPlayer::IsInterruptBlocked() const
{
	return false;
}

bool ASlasherPlayer::IsImmuneToObservingPlayerDetection_Implementation(const ADBDPlayer* observingPlayer) const
{
	return false;
}

bool ASlasherPlayer::IsIdling()
{
	return false;
}

bool ASlasherPlayer::IsHooking() const
{
	return false;
}

bool ASlasherPlayer::IsCrouchAvailable_BP_Implementation()
{
	return false;
}

bool ASlasherPlayer::IsCloaking_Implementation() const
{
	return false;
}

bool ASlasherPlayer::IsCarrying() const
{
	return false;
}

bool ASlasherPlayer::IsAllowedToKill(const ACamperPlayer* camper) const
{
	return false;
}

void ASlasherPlayer::IncrementInterruptBlock()
{

}

bool ASlasherPlayer::HasPreLevelGenerationModifier(FName modifierID) const
{
	return false;
}

bool ASlasherPlayer::HasKillerAbility(EKillerAbilities killerAbility) const
{
	return false;
}

ACamperPlayer* ASlasherPlayer::GetSurvivorBeingKilled() const
{
	return NULL;
}

FDateTime ASlasherPlayer::GetStillnessStartTime() const
{
	return FDateTime{};
}

float ASlasherPlayer::GetStealthRatio() const
{
	return 0.0f;
}

float ASlasherPlayer::GetStalkTierWalkSpeedMultiplier() const
{
	return 0.0f;
}

USlasherMovementComponent* ASlasherPlayer::GetSlasherMovement() const
{
	return NULL;
}

int32 ASlasherPlayer::GetRageTier() const
{
	return 0;
}

FGameplayTag ASlasherPlayer::GetPresenceTag() const
{
	return FGameplayTag{};
}

FVector ASlasherPlayer::GetPlayerDropOffPoint_Implementation() const
{
	return FVector{};
}

ACamperPlayer* ASlasherPlayer::GetObsessionTarget() const
{
	return NULL;
}

FRotator ASlasherPlayer::GetLookRotation() const
{
	return FRotator{};
}

float ASlasherPlayer::GetLightIntensity() const
{
	return 0.0f;
}

EKillerCarryAnimWeight ASlasherPlayer::GetKillerCarryAnimWeight_Implementation() const
{
	return EKillerCarryAnimWeight::Regular;
}

bool ASlasherPlayer::GetIsForceThirdPersonAnimations() const
{
	return false;
}

bool ASlasherPlayer::GetIsAttacking() const
{
	return false;
}

float ASlasherPlayer::GetCurrentRotationYaw()
{
	return 0.0f;
}

UChaserCharacterComponent* ASlasherPlayer::GetChaserCharacterComponent() const
{
	return NULL;
}

ACamperPlayer* ASlasherPlayer::GetCarriedCamper() const
{
	return NULL;
}

float ASlasherPlayer::GetBlindedPercent() const
{
	return 0.0f;
}

float ASlasherPlayer::GetAnimDirection() const
{
	return 0.0f;
}

void ASlasherPlayer::DecrementInterruptBlock()
{

}

void ASlasherPlayer::DBD_SetAttackZones(EAttackZoneSet attackZoneSet)
{

}

void ASlasherPlayer::DBD_MergeLockOnDamageZones(bool enable)
{

}

void ASlasherPlayer::DBD_DisplayAttackZones(bool display)
{

}

void ASlasherPlayer::DBD_AllowKilling()
{

}

void ASlasherPlayer::Client_RequestStun_Implementation(EStunType stunType, ADBDPlayer* stunner)
{

}

bool ASlasherPlayer::CanSlashAttack_BP_Implementation() const
{
	return false;
}

bool ASlasherPlayer::CanPickupSurvivor() const
{
	return false;
}

bool ASlasherPlayer::CanPerformKillerAbility_Implementation(EKillerAbilities killerAbility) const
{
	return false;
}

bool ASlasherPlayer::CanGainRage_Implementation() const
{
	return false;
}

bool ASlasherPlayer::CancelAttackByInput()
{
	return false;
}

bool ASlasherPlayer::CanAttack_BP_Implementation(const EAttackType attackType) const
{
	return false;
}

bool ASlasherPlayer::CanAttack(const EAttackType attackType) const
{
	return false;
}

bool ASlasherPlayer::CanAffectLocalPlayer() const
{
	return false;
}

void ASlasherPlayer::BroadcastOnInstantTeleport()
{

}

void ASlasherPlayer::BroadcastOffensiveAction() const
{

}

void ASlasherPlayer::Authority_SetInStalkMode(bool stalkMode, bool forced)
{

}

void ASlasherPlayer::Authority_AllowKilling(int32 numKills)
{

}

void ASlasherPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASlasherPlayer, _isInStalkMode);
	DOREPLIFETIME(ASlasherPlayer, _allowedKillCount);
	DOREPLIFETIME(ASlasherPlayer, _allowedKillAfterStrugglePhase);
	DOREPLIFETIME(ASlasherPlayer, _allowedKillLastSurvivor);
	DOREPLIFETIME(ASlasherPlayer, _cachedBloodlustTier);
	DOREPLIFETIME(ASlasherPlayer, _killerPowerDebugFlags);
}

ASlasherPlayer::ASlasherPlayer()
{
	this->_setFirstPersonModeEnabledOnKillerIntroCompleted = true;
	this->DefaultSlasherPower = NAME_None;
	this->LoudNoiseDisplayTime = 5.000000;
	this->ShouldDisplayAttackZones = false;
	this->CamperExposer = NULL;
	this->KillerAbilities = TArray<EKillerAbilities>();
	this->KillerSoundCuesComponent = CreateDefaultSubobject<UKillerSoundCuesComponent>(TEXT("Killer Sound Cues Component"));
	this->ShowKillerPowerDebugInfo = false;
	this->_audioComponent = NULL;
	this->_terrorNavModifierComponent = CreateDefaultSubobject<UDBDNavModifierComponent>(TEXT("TerrorNavModifierComponent"));
	this->_bloodFXComponent = CreateDefaultSubobject<UKillerBloodFXComponent>(TEXT("Killer Blood VFX Component"));
	this->_slasherLightIntensity = 1.000000;
	this->_defaultAmountToSquish = 1.000000;
	this->_stalkTimers = TMap<ADBDPlayer*, FTargetFocusTimer>();
	this->_stillnessTracker = CreateDefaultSubobject<UStillnessTrackerComponent>(TEXT("StillnessTracker"));
	this->_aimAssistComponent = NULL;
	this->_predictedCamperHitMontages = TMap<ADBDPlayer*, FAnimationMontageDescriptor>();
	this->_loudNoiseIndicator = NULL;
	this->_hitsWhileCarryingTracker = CreateDefaultSubobject<USlasherHitsWhileCarryingTrackerComponent>(TEXT("HitsWhileCarryingTracker"));
	this->_stealthIncreaseRate = 0.000000;
	this->_stealthDecreaseRate = 0.000000;
	this->_isKilling = false;
	this->_allowedKillCount = 0;
	this->_allowedKillAfterStrugglePhase = 0;
	this->_allowedKillLastSurvivor = false;
	this->_cachedBloodlustTier = 0;
	this->_killerPowerDebugFlags = 0;
	this->_enableKillerCrouchInput = false;
	this->_canStartAttackWhileCrouched = false;
	this->_carriedCamper = NULL;
	this->_moriComponent = CreateDefaultSubobject<UMoriComponent>(TEXT("MoriComponent"));
	this->_finisherMoriTrackerComponent = CreateDefaultSubobject<UFinisherMoriTrackerComponent>(TEXT("FinisherMoriTrackerComponent"));
	this->_hitValidator = CreateDefaultSubobject<UHitValidatorComponent>(TEXT("Hit Validator"));
	this->_hitValidationConfigurator = CreateDefaultSubobject<UHitValidatorConfigurator>(TEXT("Hit Validator Configurator"));
	this->_attackerComponent = CreateDefaultSubobject<UDBDAttackerComponent>(TEXT("Attacker Component"));
	this->_basicAttackType = EAttackType::VE_None;
	this->_armIKSensorComponent = CreateDefaultSubobject<UArmIKSensorComponent>(TEXT("ArmIKSensor"));
	this->_survivorBeingKilled = NULL;
	this->_firstPersonViewComponentClass = UFirstPersonViewComponent::StaticClass();
	this->_firstPersonViewComponent = NULL;
	this->_killerIntroComponent = CreateDefaultSubobject<UKillerIntroComponent>(TEXT("KillerIntroComponent"));
	this->_blindingFXComponent = CreateDefaultSubobject<UKillerBlindingFXComponent>(TEXT("Blinding FX Component"));
	this->_redStainUpdateStrategy = CreateDefaultSubobject<UKillerRedStainUpdateStrategy>(TEXT("KillerRedStainUpdateStrategy"));
	this->_squishFactorParameter = NAME_None;
	this->_attackZonePivot = NULL;
	this->_slasherStunnableComponent = CreateDefaultSubobject<USlasherStunnableComponent>(TEXT("SlasherStunnableComponent"));
	this->_forceThirdPersonAnimations = false;
}
