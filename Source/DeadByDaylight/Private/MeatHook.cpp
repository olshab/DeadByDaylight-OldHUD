#include "MeatHook.h"
#include "AnimationMontageDescriptor.h"
#include "ChargeableComponent.h"
#include "PollableEventListener.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

class UMapActorComponent;
class UCharacterPusherComponent;
class AEntity;
class USceneComponent;
class ADBDPlayer;
class UInteractor;
class ACharacter;
class ACamperPlayer;
class UMontagePlayer;
class UPrimitiveComponent;
class UHookableComponent;

void AMeatHook::UpdateSlasherBlockerCollision()
{

}

void AMeatHook::SetMapActor(UMapActorComponent* value)
{

}

void AMeatHook::SetIsBeingSabotaged(bool isBeingSabotaged)
{

}

void AMeatHook::SetInteractingPlayer(ADBDPlayer* interactingPlayer)
{

}

void AMeatHook::SetEntity(AEntity* entity)
{

}

void AMeatHook::OnStopPushingPlayer(ACharacter* character)
{

}

void AMeatHook::OnStartPushingPlayer(ACharacter* character)
{

}

void AMeatHook::OnHookedSurvivorAttacked()
{

}

void AMeatHook::OnEscapeDoorActivated()
{

}

void AMeatHook::Multicast_SetIsSacrificed_Implementation(bool isSacrificed)
{

}

void AMeatHook::Multicast_SetIsSabotaged_Implementation(bool setIsSabotaged, ADBDPlayer* hookBreaker, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration)
{

}

void AMeatHook::Multicast_SetIsBrokenFromUnhook_Implementation(bool setIsBrokendFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration)
{

}

void AMeatHook::Multicast_SetHookedSurvivor_Implementation(ACamperPlayer* survivor)
{

}

void AMeatHook::Multicast_RefreshCharmCustomization_Implementation()
{

}

void AMeatHook::Multicast_EscapeAttemptResult_Implementation(ADBDPlayer* player, bool result)
{

}

void AMeatHook::Local_OnHookedSurvivorDrainStageChanged(const int32 drainStage, ADBDPlayer* target) const
{

}

void AMeatHook::Local_MoveSurvivorToHook(ACamperPlayer* survivor, const float duration)
{

}

FAnimationMontageDescriptor AMeatHook::GetUnhookOutMontageDescriptor() const
{
	return FAnimationMontageDescriptor{};
}

FAnimationMontageDescriptor AMeatHook::GetUnhookInMontageDescriptor() const
{
	return FAnimationMontageDescriptor{};
}

float AMeatHook::GetStruggleThreshold() const
{
	return 0.0f;
}

float AMeatHook::GetStrugglePercent() const
{
	return 0.0f;
}

ADBDPlayer* AMeatHook::GetSaboteurPlayer() const
{
	return NULL;
}

float AMeatHook::GetSabotageHookRespawnDuration() const
{
	return 0.0f;
}

UMontagePlayer* AMeatHook::GetMontagePlayer() const
{
	return NULL;
}

UInteractor* AMeatHook::GetMainInteractor_Implementation() const
{
	return NULL;
}

bool AMeatHook::GetIsSacrificed() const
{
	return false;
}

bool AMeatHook::GetIsSabotaged() const
{
	return false;
}

bool AMeatHook::GetIsInBasement() const
{
	return false;
}

bool AMeatHook::GetIsBroken() const
{
	return false;
}

UPrimitiveComponent* AMeatHook::GetInteractorPrimitiveComponent_Implementation() const
{
	return NULL;
}

ADBDPlayer* AMeatHook::GetInteractingPlayer() const
{
	return NULL;
}

ACamperPlayer* AMeatHook::GetHookedSurvivor() const
{
	return NULL;
}

UHookableComponent* AMeatHook::GetHookableComponentOfHookedActor() const
{
	return NULL;
}

UCharacterPusherComponent* AMeatHook::GetCharacterPusher() const
{
	return NULL;
}

USceneComponent* AMeatHook::GetCamperHookedSnapTransform_Implementation() const
{
	return NULL;
}

float AMeatHook::GetAntiCampMaxXYCurveDistanceTime() const
{
	return 0.0f;
}

float AMeatHook::GetAntiCampMaxUpperZCurveDistanceTime() const
{
	return 0.0f;
}

float AMeatHook::GetAntiCampMaxLowerZCurveDistanceTime() const
{
	return 0.0f;
}

float AMeatHook::GetAntiCampGracePeriod() const
{
	return 0.0f;
}

void AMeatHook::DebugHookedSurvivor(ACamperPlayer* expectedSurvivor) const
{

}

bool AMeatHook::CanUnhookSurvivor(const ACamperPlayer* survivor) const
{
	return false;
}

bool AMeatHook::CanSurvivorStruggle(ACamperPlayer* survivor) const
{
	return false;
}

bool AMeatHook::CanSurvivorAttemptEscape(const ACamperPlayer* survivor) const
{
	return false;
}

bool AMeatHook::CanHookSurvivor() const
{
	return false;
}

bool AMeatHook::CanBeSabotaged() const
{
	return false;
}

void AMeatHook::BroadcastUnhook(ADBDPlayer* rescuer)
{

}

void AMeatHook::Authority_SignalUnhookingEnter()
{

}

void AMeatHook::Authority_SignalUnhookingCharged()
{

}

void AMeatHook::Authority_SignalUnhookingAborted()
{

}

void AMeatHook::Authority_SignalSurvivorAttemptingEscapeAborted()
{

}

void AMeatHook::Authority_SignalSurvivorAttemptingEscape()
{

}

void AMeatHook::Authority_SetIsSacrificed(bool isSacrificed)
{

}

void AMeatHook::Authority_SetIsSabotaged(bool isSabotaged, ADBDPlayer* saboteur, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration)
{

}

void AMeatHook::Authority_SetIsBrokenFromUnhook(bool isBrokenFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration)
{

}

void AMeatHook::Authority_SetHookedSurvivor(ACamperPlayer* survivor)
{

}

AMeatHook::AMeatHook()
{
	this->WasSurvivorStruggleCancelled = false;
	this->IsSacrificeEnabled = true;
	this->ClipRegions = TArray<UDBDClipRegionComponent*>();
	this->IsSurvivorStruggling = false;
	this->IsInBasement = false;
	this->IsBreakable = false;
	this->IsSabotageable = false;
	this->CanBeScourgeHook = true;
	this->SnapHookedCharacter = true;
	this->FullyHooked = false;
	this->_struggleThreshold = 0.500000;
	this->_characterPusher = NULL;
	this->_slasherCollisionBlocker = NULL;
	this->_conditionalSlasherCollisionBlocker = NULL;
	this->_antiCampUnhookChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("AntiCampUnhookChargeable"));
	this->_antiCampUnhookXYDistanceToChargeCurve = NULL;
	this->_antiCampUnhookUpperZDistanceToChargeCurve = NULL;
	this->_antiCampUnhookLowerZDistanceToChargeCurve = NULL;
	this->_eventListener = CreateDefaultSubobject<UPollableEventListener>(TEXT("EventListener"));
	this->_hookedSurvivor = NULL;
	this->_hookBreakerPlayer = NULL;
	this->_campersThatSabotagedMeatHook = TSet<ACamperPlayer*>();
	this->_mainInteractor = NULL;
	this->_unhook = NULL;
	this->_camperHookedSnapTransform = NULL;
	this->_entity = NULL;
	this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
	this->_interactingPlayer = NULL;
	this->_cachedMapActor = NULL;
	this->_antiCampGracePeriod = 7.000000;
}
