#include "SurvivorAnimInstance.h"

USurvivorAnimInstance::USurvivorAnimInstance()
{
	this->CamperPlayer = NULL;
	this->IsHooked = false;
	this->IsSacrificeStruggling = false;
	this->MontageMadnessTierUp = NULL;
	this->ArrayCarryAttackMontage = TArray<UAnimCompositeBase*>();
	this->_introState = EIntroState::WaitingToStart;
	this->_isFrightScreaming = false;
	this->IsBeingCarried = false;
	this->IsBeingPutOnHook = false;
	this->IsCrouched = false;
	this->GuidedAction = EGuidedState::VE_None;
	this->IsCrawling = false;
	this->IsDead = false;
	this->MaxSpeed = 0.000000;
	this->IsInsideCloset = false;
	this->IsPlayingMadnessTierUpWeight = 0.000000;
	this->IsBeingKilled = false;
	this->IsBeingHealed = false;
	this->IsCarryAttackSucess = false;
	this->IsUsingAimItem = false;
	this->IsHoldingAimItem = false;
	this->AllowLookAt = false;
	this->DropStaggerTimeLeft = 0.000000;
	this->RightArmIKAlpha = 0.000000;
	this->Strafe = false;
	this->IsInteracting = false;
	this->Injured = false;
	this->InteractionType = EInteractionAnimation::VE_None;
	this->PreviousInteractionType = EInteractionAnimation::VE_None;
	this->IsSlasherInFPV = false;
	this->CarriedAlpha = 0.000000;
	this->IsHoldingHandleItem = false;
	this->IsHoldingSmallItem = false;
	this->IsHoldingFirecracker = false;
	this->IsHoldingFlashbang = false;
	this->IsHoldingVaccine = false;
	this->IsHoldingAnyItem = false;
	this->IsHoldingLamentConfiguration = false;
	this->IsHoldingFragileObject = false;
	this->IsHoldingSprayObject = false;
	this->IsHoldingVhs = false;
	this->IsHoldingWormholeFatherKeyCard = false;
	this->IsArmOverrideDisabled = false;
	this->InAir = false;
	this->_walkAnimSpeed = 0.000000;
	this->Direction = 0.000000;
	this->Pitch = 0.000000;
	this->Yaw = 0.000000;
	this->Idle = false;
	this->HasAnyMontagePlaying = false;
	this->CurrentlyPlayerMontageId = NAME_None;
	this->IsBeingCarriedByTheSpirit = false;
	this->IsBeingCarriedByTheNightmare = false;
	this->IsBeingCarriedByThePig = false;
	this->IsBeingCarriedByTheHag = false;
	this->IsBeingCarriedByTheLegion = false;
	this->IsBeingCarriedByTheGhostFace = false;
	this->IsPlayingWakeUpOther = false;
	this->IsPlayingFreddyMori = false;
	this->HasLinkInput = false;
	this->_isMale = false;
	this->_animMontageLeaderForwardVelocity = 0.000000;
	this->_animMontageLeaderLateralVelocity = 0.000000;
}
