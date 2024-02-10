#include "InLockerPerk.h"

FInLockerPerk::FInLockerPerk()
{
	this->PerkID = FDataTableDropdown{};
	this->PerkNeedToBeFullyCharged = false;
	this->RequiredHeldItemSlots = EInLockerPerkEmptyHandType::None;
	this->RequiredEmptyHandedSlots = EInLockerPerkEmptyHandType::None;
	this->NeedToBeInjured = false;
	this->NeedPerkSkillToBeRunnableAtLocation = false;
	this->MustBeFarFromLinkedObject = false;
	this->MinimumDistanceFromObject = 0.0f;
	this->LinkedObjectClass = NULL;
	this->UnusableIfLockerPenaltyReceived = false;
	this->BBLockerPenaltyReceived = FBlackboardKeySelector{};
	this->UnusableUnlessKillerIsFartherThan = 0.0f;
	this->PerkWeight = FAITunableParameter{};
}
