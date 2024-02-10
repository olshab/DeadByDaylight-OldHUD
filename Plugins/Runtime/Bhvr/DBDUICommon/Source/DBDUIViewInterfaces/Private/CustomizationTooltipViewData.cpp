#include "CustomizationTooltipViewData.h"

FCustomizationTooltipViewData::FCustomizationTooltipViewData()
{
	this->DisplayName = FText::GetEmpty();
	this->ParentName = FText::GetEmpty();
	this->RarityPartInfo = FText::GetEmpty();
	this->CollectionDisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->RoleCategoryInfo = FText::GetEmpty();
	this->CustomizationOriginState = EOriginWidgetState::None;
	this->CustomizationOriginInfo = FText::GetEmpty();
	this->IsLocked = false;
	this->IsUnbreakable = false;
	this->IsEquipped = false;
	this->IsBuyable = false;
	this->IsOwned = false;
	this->IsOutfitPart = false;
	this->OutfitInfoText = FText::GetEmpty();
	this->AssociatedRole = EPlayerRole::VE_None;
	this->Rarity = EItemRarity::Common;
	this->Prices = TArray<FPriceTagViewData>();
	this->IsEnabled = false;
	this->CustomizationDisabledMessage = FText::GetEmpty();
	this->EventBannerLabel = TEXT("");
}
