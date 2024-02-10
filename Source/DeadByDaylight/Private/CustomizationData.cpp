#include "CustomizationData.h"

FCustomizationData::FCustomizationData()
{
	this->AssociatedCharacter = 0;
	this->AssociatedRole = EPlayerRole::VE_None;
	this->Rarity = EItemRarity::Common;
	this->Prefix = ECustomizationModifier::None;
	this->UIData = FItemUIData{};
	this->Availability = FItemAvailability{};
	this->InclusionVersion = TEXT("");
	this->CustomizationId = TEXT("");
	this->SearchTags = TArray<FText>();
}
