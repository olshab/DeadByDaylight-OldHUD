#include "BloodwebChest.h"

FBloodwebChest::FBloodwebChest()
{
	this->ID = NAME_None;
	this->EventID = NAME_None;
	this->GameType = EGameType::Online;
	this->ChestType = EBloodchestType::None;
	this->Rarity = EItemRarity::Common;
	this->GivenItemRarity = TArray<float>();
}
