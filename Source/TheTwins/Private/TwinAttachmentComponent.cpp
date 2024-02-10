#include "TwinAttachmentComponent.h"
#include "AnimationMontageDescriptor.h"
#include "Net/UnrealNetwork.h"
#include "ECamperDamageState.h"

class UChargeableComponent;
class ADBDPlayer;

void UTwinAttachmentComponent::OnRep_AttachedPlayer(ADBDPlayer* oldAttachedPlayer)
{

}

void UTwinAttachmentComponent::OnMoriMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted)
{

}

void UTwinAttachmentComponent::OnLevelReadyToPlay()
{

}

void UTwinAttachmentComponent::OnAttachedSurvivorDamageStateChanged(const ECamperDamageState oldState, const ECamperDamageState newState)
{

}

void UTwinAttachmentComponent::Multicast_QuickDestroyTwin_Implementation()
{

}

bool UTwinAttachmentComponent::IsAttachedToSurvivor() const
{
	return false;
}

bool UTwinAttachmentComponent::IsAttachedToSister() const
{
	return false;
}

void UTwinAttachmentComponent::Authority_OnRemoveTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{

}

void UTwinAttachmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTwinAttachmentComponent, _attachedPlayer);
}

UTwinAttachmentComponent::UTwinAttachmentComponent()
{
	this->_attachedPlayer = NULL;
	this->_gateBlockerEffectClass = NULL;
	this->_graspBrokenEffectClass = NULL;
	this->_graspIncapacitatedEffectClass = NULL;
	this->_graspObliviousEffectClass = NULL;
	this->_graspKillerInstinctEffectClass = NULL;
	this->_gateBlockerStatusEffect = NULL;
	this->_hasBeenDetachedBySurvivorDamageChanged = false;
	this->_escapeBlockerLingerTimers = TMap<ADBDPlayer*, FFastTimer>();
}
