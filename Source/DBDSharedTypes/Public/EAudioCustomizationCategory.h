#pragma once

#include "CoreMinimal.h"
#include "EAudioCustomizationCategory.generated.h"

UENUM(BlueprintType)
enum class EAudioCustomizationCategory : uint8
{
	None,
	AudioCharacterName,
	AudioCharacterSubName,
	AudioCharacterHead,
	AudioCharacterClothes,
	AudioCharacterShoes,
	AudioCharacterWeapon,
	AudioCharacterAmbiance,
	AudioCharacterState,
	AudioCharacterCollection,
};
