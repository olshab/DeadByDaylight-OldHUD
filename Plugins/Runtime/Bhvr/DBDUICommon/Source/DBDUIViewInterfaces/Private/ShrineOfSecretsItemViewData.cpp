#include "ShrineOfSecretsItemViewData.h"

FShrineOfSecretsItemViewData::FShrineOfSecretsItemViewData()
{
	this->ItemId = NAME_None;
	this->BPCost = 0;
	this->Perk = NULL;
	this->PerkTooltip = FLoadoutTooltipData{};
	this->PerkMaxed = false;
	this->BPClaimed = false;
	this->PriceTag = FPriceTagViewData{};
}
