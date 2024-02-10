#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "PanelScreen.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPanelScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnWebNodeSelected(int32 characterId, int32 id, int32 nodeDepth);

	UFUNCTION()
	void OnWebNodeHovered(int32 id);

	UFUNCTION()
	void OnWebBuilt(int32 characterId, bool isEmpty);

	UFUNCTION()
	void OnStoreButtonClick();

	UFUNCTION()
	void OnSideTabButtonClick(int32 tabIndex);

	UFUNCTION()
	void OnSequenceStepCompleted(int32 characterId, int32 id);

	UFUNCTION()
	void OnSelectedEquipableSlotZoomChange(bool zoomIn);

	UFUNCTION()
	void OnRotateCharacter(float mouseDistanceChange);

	UFUNCTION()
	void OnRoleButtonClick();

	UFUNCTION()
	void OnReservedBloodPoints(int32 characterId, int32 bloodPoints, bool fullCost);

	UFUNCTION()
	void OnRegenerateButtonClick(int32 characterId);

	UFUNCTION()
	void OnPrestigeUp(int32 characterId);

	UFUNCTION()
	void OnPanelsHidden();

	UFUNCTION()
	void OnNodeConsumptionAnimDone();

	UFUNCTION()
	void OnNodeCollectionAnimDone();

	UFUNCTION()
	void OnLoadoutSlotButtonClick(int32 slotIndex);

	UFUNCTION()
	void OnLoadoutSearchClicked();

	UFUNCTION()
	void OnLoadoutSearchClear();

	UFUNCTION()
	void OnLoadoutPresetClick(int32 index);

	UFUNCTION()
	void OnLevelUpShown();

	UFUNCTION()
	void OnLevelUpDone();

	UFUNCTION()
	void OnItemUnselected(int32 itemIndex);

	UFUNCTION()
	void OnItemSelected(int32 itemIndex);

	UFUNCTION()
	void OnEventButtonClick();

	UFUNCTION()
	void OnEquipableSlotClicked(int32 clickedSlotCategory, int32 clickedSlotIndex);

	UFUNCTION()
	void OnCustomizationSearchClicked();

	UFUNCTION()
	void OnCustomizationSearchClear();

	UFUNCTION()
	void OnCustomizationPresetClick(int32 index);

	UFUNCTION()
	void OnCustomizationPlayMoriSelected();

	UFUNCTION()
	void OnConfirmCollectSelectedNode(int32 characterId);

	UFUNCTION()
	void OnCharInfoClick();

	UFUNCTION()
	void OnCharacterSlotButtonClick(int32 characterIndex);

	UFUNCTION()
	void OnCharacterInfoClick();

	UFUNCTION()
	void OnBloodwebCenterButtonSelected();

	UFUNCTION()
	void OnBloodwebCenterButtonHovered();

	UFUNCTION()
	void OnAvailableItemsSortingChange(int32 newSorting);

	UFUNCTION()
	void OnAvailableItemClicked(int32 clickedItemIndex);

public:
	UPanelScreen();
};

FORCEINLINE uint32 GetTypeHash(const UPanelScreen) { return 0; }
