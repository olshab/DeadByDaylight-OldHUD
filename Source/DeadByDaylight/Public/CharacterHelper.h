#pragma once

#include "CoreMinimal.h"
#include "CharacterDescription.h"
#include "UObject/NoExportTypes.h"
#include "CharmIdSlot.h"
#include "EPlayerRole.h"
#include "OutfitData.h"
#include "CustomizationItemData.h"
#include "CharacterHelper.generated.h"

class ADBDPlayerState;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCharacterHelper : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static FCharmIdSlot SetCharmSlot(ADBDPlayerState* playerState, const FName& charmId, int32 slotIndex);

	UFUNCTION(BlueprintCallable)
	static TArray<FOutfitData> GetOutfitsByCharacterID(const FString& characterId, const bool sortArray);

	UFUNCTION(BlueprintCallable)
	static void GetOutfitComposition(FCustomizationItemData& returnHead, FCustomizationItemData& returnTorso, FCustomizationItemData& returnLegsWeapon, const FString& outfitId);

	UFUNCTION(BlueprintCallable)
	static TArray<FCharacterDescription> GetCharactersByRole(const UObject* worldContextObject, const EPlayerRole role, const bool sortArray);

	UFUNCTION(BlueprintCallable)
	static void GetAllOutfitComponentsOfCharacter(TArray<FCustomizationItemData>& returnHeads, TArray<FCustomizationItemData>& returnTorsos, TArray<FCustomizationItemData>& returnLegsWeapons, const FString& characterId, const bool sortArrays);

	UFUNCTION(BlueprintCallable)
	static TArray<FString> GetAllEnabledCharms(bool sortArray);

public:
	UCharacterHelper();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterHelper) { return 0; }
