#include "EventEntryPopupSkinUIData.h"

FEventEntryPopupSkinUIData::FEventEntryPopupSkinUIData()
{
	this->ScrollBarColor = FLinearColor{};
	this->EventImage = NULL;
	this->PreviewAreaBackground = NULL;
	this->BaseColor = FLinearColor{};
	this->BackgroundTexture = NULL;
	this->BackgroundCenterImage = NULL;
	this->TabMaterialInstance = NULL;
	this->IsUsingBackgroundTexture = false;
	this->TitleBannerMaterial = NULL;
	this->TitleIcon = NULL;
	this->HeaderBackgroundMaterial = NULL;
	this->MilestoneTrackerBackground = NULL;
	this->MilestoneTrackerHighlightBar = NULL;
	this->PreviewBGTintColor = FLinearColor{};
}
