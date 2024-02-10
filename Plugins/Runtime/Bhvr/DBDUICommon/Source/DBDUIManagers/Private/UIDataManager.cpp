#include "UIDataManager.h"
#include "EItemRarity.h"
#include "ECurrencyType.h"
#include "UObject/SoftObjectPtr.h"

class UMaterialInterface;
class UTexture2D;

UMaterialInterface* UUIDataManager::GetTooltipRarityMaterial(EItemRarity rarity) const
{
	return NULL;
}

UTexture2D* UUIDataManager::GetTooltipEventHeader(const FString& eventBannerLabel) const
{
	return NULL;
}

UMaterialInterface* UUIDataManager::GetLoadoutPartRarityMaterial(EItemRarity rarity) const
{
	return NULL;
}

UMaterialInterface* UUIDataManager::GetCustomizationRarityMaterial(EItemRarity rarity) const
{
	return NULL;
}

TSoftObjectPtr<UTexture2D> UUIDataManager::GetCurrencyIcon(const ECurrencyType currencyType) const
{
	return NULL;
}

UTexture2D* UUIDataManager::GetAlertRewardEventBackground(const FString& eventThemeLabel) const
{
	return NULL;
}

UUIDataManager::UUIDataManager()
{
	this->RarityMaterialMap = TMap<EItemRarity, FRarityMaterialData>();
	this->RichTextStyleMap = TMap<FString, FTextBlockStyle>();
	this->CurrencyUIDataMap = TMap<ECurrencyType, FCurrencyProgressionUIData>();
	this->ProgressionUIDataMap = TMap<EProgressionType, FCurrencyProgressionUIData>();
	this->ArchiveTomeSkinDataMap = TMap<EArchiveMenuState, FArchiveTomeSkinData>();
	this->TooltipEventSkinUIDataMap = TMap<FString, UTexture2D*>();
	this->AlertRewardEventSkinUIDataMap = TMap<FString, UTexture2D*>();
}
