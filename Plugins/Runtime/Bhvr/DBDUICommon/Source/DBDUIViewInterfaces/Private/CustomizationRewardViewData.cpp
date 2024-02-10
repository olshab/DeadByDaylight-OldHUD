#include "CustomizationRewardViewData.h"

FCustomizationRewardViewData::FCustomizationRewardViewData()
{
	this->CustomizationId = NAME_None;
	this->OutfitId = NAME_None;
	this->ReleaseDate = FDateTime{};
	this->Rarity = EItemRarity::Common;
	this->IsOwned = false;
	this->IsBuyable = false;
	this->IsEquipped = false;
	this->IsUnbreakable = false;
	this->IsEventItem = false;
	this->TooltipData = FCustomizationTooltipViewData{};
	this->CustomizationCategory = ECustomizationCategory::None;
	this->AssociatedCharacter = 0;
	this->IsEnabled = false;
	this->GrantsMilestonePointOnUnlock = false;
	this->PriceTagData = TArray<FPriceTagViewData>();
	this->InclusionVersion = TEXT("");
}
