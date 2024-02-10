#include "CharacterHelper.h"
#include "CharmIdSlot.h"
#include "EPlayerRole.h"
#include "CharacterDescription.h"
#include "OutfitData.h"
#include "CustomizationItemData.h"

class ADBDPlayerState;
class UObject;

FCharmIdSlot UCharacterHelper::SetCharmSlot(ADBDPlayerState* playerState, const FName& charmId, int32 slotIndex)
{
	return FCharmIdSlot{};
}

TArray<FOutfitData> UCharacterHelper::GetOutfitsByCharacterID(const FString& characterId, const bool sortArray)
{
	return TArray<FOutfitData>();
}

void UCharacterHelper::GetOutfitComposition(FCustomizationItemData& returnHead, FCustomizationItemData& returnTorso, FCustomizationItemData& returnLegsWeapon, const FString& outfitId)
{

}

TArray<FCharacterDescription> UCharacterHelper::GetCharactersByRole(const UObject* worldContextObject, const EPlayerRole role, const bool sortArray)
{
	return TArray<FCharacterDescription>();
}

void UCharacterHelper::GetAllOutfitComponentsOfCharacter(TArray<FCustomizationItemData>& returnHeads, TArray<FCustomizationItemData>& returnTorsos, TArray<FCustomizationItemData>& returnLegsWeapons, const FString& characterId, const bool sortArrays)
{

}

TArray<FString> UCharacterHelper::GetAllEnabledCharms(bool sortArray)
{
	return TArray<FString>();
}

UCharacterHelper::UCharacterHelper()
{

}
