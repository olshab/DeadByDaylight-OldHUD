#include "AuricCellsViewData.h"

FAuricCellsViewData::FAuricCellsViewData()
{
	this->Bundles = TArray<FAuricCellsBundleViewData>();
	this->FirstPurchase = FAuricCellsFirstPurchaseViewData{};
	this->TaxIncludeMessage = TEXT("");
}
