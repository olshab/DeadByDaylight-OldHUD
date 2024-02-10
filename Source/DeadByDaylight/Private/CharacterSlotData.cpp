#include "CharacterSlotData.h"

FCharacterSlotData::FCharacterSlotData()
{
	this->Id = NAME_None;
	this->CharacterIndex = 0;
	this->IconFilePath = TEXT("");
	this->BackgroundImagePath = TEXT("");
	this->DisplayName = FText::GetEmpty();
	this->Biography = FText::GetEmpty();
	this->DLCId = TEXT("");
	this->DLCTitle = TEXT("");
	this->PackId = TEXT("");
	this->PackTitle = TEXT("");
	this->Level = 0;
	this->PrestigeData = FPrestigeData{};
	this->Difficulty = ECharacterDifficulty::VE_None;
	this->IsUnlocked = false;
	this->IsDLCPurchasable = false;
	this->IsDLCValid = false;
	this->PurchaseDataList = TArray<FPurchaseCurrencyData>();
	this->ItemsOwned = 0;
	this->TotalItems = 0;
	this->ShowNew = false;
	this->IsDlcLockedKiller = false;
	this->EventInfo = FSpecialEventUIInfo{};
	this->IsEnabled = false;
	this->DisabledItemOption = EDisabledItemOption::Available;
	this->HasNonSelectedPerks = false;
	this->FreeTicketAffectedData = FAtlantaFreeTicketAffectedUIData{};
	this->PlayerRole = EPlayerRole::VE_None;
	this->RemainingTimeItem = TEXT("");
	this->RemainingTimeDiscount = TEXT("");
}
