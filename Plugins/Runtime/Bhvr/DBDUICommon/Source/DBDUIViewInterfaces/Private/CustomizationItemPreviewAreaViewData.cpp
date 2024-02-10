#include "CustomizationItemPreviewAreaViewData.h"

FCustomizationItemPreviewAreaViewData::FCustomizationItemPreviewAreaViewData()
{
	this->PreviewItem = NULL;
	this->ItemsData = TArray<UStoreCustomizationItemViewData*>();
	this->IsOutfit = false;
}
