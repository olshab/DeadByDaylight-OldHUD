#include "StoreCharacterItemViewData.h"

UStoreCharacterItemViewData::UStoreCharacterItemViewData()
{
	this->CharacterIndex = -1;
	this->DisplayName = FText::GetEmpty();
	this->Biography = FText::GetEmpty();
	this->PlayerRole = EPlayerRole::VE_None;
	this->Difficulty = ECharacterDifficulty::VE_None;
	this->KillerPowerId = NAME_None;
	this->IsEquipped = false;
	this->IsUnlocked = false;
	this->UnlockInfo = 0;
	this->ItemsOwned = 0;
	this->TotalItems = 0;
	this->HasNonSelectedPerks = false;
	this->IsDlcLockedKiller = false;
	this->IsLegacyRewardPrestigeEnabled = false;
}
