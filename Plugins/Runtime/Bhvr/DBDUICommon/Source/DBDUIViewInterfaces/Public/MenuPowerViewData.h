#pragma once

#include "CoreMinimal.h"
#include "MenuLoadoutPartViewData.h"
#include "EInventoryItemType.h"
#include "MenuPowerViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UMenuPowerViewData : public UMenuLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInventoryItemType ItemType;

public:
	UMenuPowerViewData();
};

FORCEINLINE uint32 GetTypeHash(const UMenuPowerViewData) { return 0; }
