#include "BankTrackingDataV2.h"

FBankTrackingDataV2::FBankTrackingDataV2()
{
	this->Bank = NULL;
	this->OnLoadedCallbacks = TArray<FOnAkBankCallback>();
}
