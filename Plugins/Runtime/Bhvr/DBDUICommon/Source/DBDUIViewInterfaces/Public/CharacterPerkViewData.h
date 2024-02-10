#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LoadoutTooltipData.h"
#include "CharacterPerkViewData.generated.h"

class UMenuPerkViewData;

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UCharacterPerkViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UMenuPerkViewData* Perk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FLoadoutTooltipData PerkTooltip;

public:
	UCharacterPerkViewData();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterPerkViewData) { return 0; }
