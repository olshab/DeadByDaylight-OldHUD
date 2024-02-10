#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "InventorySlotData.h"
#include "Templates/SubclassOf.h"
#include "EPlayerRole.h"
#include "ELoadoutSlot.h"
#include "LoadoutMenuPresenter.generated.h"

class ULoadoutMenuViewData;
class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API ULoadoutMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> LoadoutMenuWidgetClass;

private:
	UPROPERTY(Transient)
	TArray<ULoadoutMenuViewData*> _loadoutMenuSlotData;

	UPROPERTY(Transient)
	TArray<ULoadoutMenuViewData*> _loadoutMenuInventoryData;

private:
	UFUNCTION()
	ULoadoutMenuViewData* SetLoadoutViewData(const FInventorySlotData& slotData, const EPlayerRole playerRole);

	UFUNCTION()
	void OnSelectedCharacterChanged(int32 selectedCharacterIndex);

	UFUNCTION()
	void OnLoadoutMenuSlotIsSelected(ELoadoutSlot slotSelected);

	UFUNCTION()
	void OnLoadoutMenuPresetSelected(const int32 presetId, const ELoadoutSlot slotSelected);

	UFUNCTION()
	void OnLoadoutMenuPresetClicked(const int32 presetId, const ELoadoutSlot slotSelected);

	UFUNCTION()
	void OnLoadoutMenuInventorySlotClick(const ELoadoutSlot itemIndex, const FName itemId);

public:
	ULoadoutMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutMenuPresenter) { return 0; }
