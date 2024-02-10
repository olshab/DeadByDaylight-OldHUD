#include "StoreCustomizationItemViewData.h"

UStoreCustomizationItemViewData::UStoreCustomizationItemViewData()
{
	this->MirrorsId = NAME_None;
	this->DisplayName = TEXT("");
	this->DisplayCollectionName = TEXT("");
	this->Description = TEXT("");
	this->RoleCategoryInfo = TEXT("");
	this->RarityPartInfo = TEXT("");
	this->ParentBundleIds = TArray<FName>();
	this->ChildrenItemIds = TArray<FName>();
	this->IsVisceral = false;
	this->IsLocked = false;
	this->AssociatedRole = EPlayerRole::VE_None;
}
