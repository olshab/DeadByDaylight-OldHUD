#pragma once

#include "CoreMinimal.h"
#include "ETooltipVerticalAlignment.h"
#include "EStoryNodeState.h"
#include "ENodeStatusChange.h"
#include "CoreButtonWidget.h"
#include "ETooltipHorizontalAlignment.h"
#include "EItemRarity.h"
#include "ArchiveNodeViewData.h"
#include "UObject/SoftObjectPtr.h"
#include "ECurrencyType.h"
#include "CoreArchiveQuestNodeWidget.generated.h"

class UDBDImage;
class UOverlay;
class UDBDRichTextBlock;
class UAkAudioEvent;
class UTexture2D;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveQuestNodeWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* Icon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UOverlay* VignetteTextIndicatorOverlay;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UOverlay* VignetteImageIndicatorOverlay;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UOverlay* VignetteCurrencyAmountOverlay;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* VignetteCurrencyAmountText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TMap<ENodeStatusChange, UAkAudioEvent*> StatusChangeAudioEvents;

	UPROPERTY(BlueprintReadOnly)
	FArchiveNodeViewData _nodeData;

	UPROPERTY(BlueprintReadOnly)
	FName _nodeId;

	UPROPERTY(BlueprintReadOnly)
	bool _isChallengeReminderNode;

	UPROPERTY(BlueprintReadOnly)
	bool _isDraggable;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateStoryIndicatorOpacity(bool isImageReward, bool isCompleted);

public:
	UFUNCTION(BlueprintCallable)
	void UpdateNode(const FArchiveNodeViewData& data);

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateAllStoryIndicators();

	UFUNCTION(BlueprintCallable)
	void ShowRewardNodeTooltip();

	UFUNCTION(BlueprintImplementableEvent)
	void SetIcon(bool isReward, const TSoftObjectPtr<UTexture2D>& iconTexture);

	UFUNCTION(BlueprintImplementableEvent)
	void SetCustomizationRewardRarity(EItemRarity rarity);

	UFUNCTION(BlueprintImplementableEvent)
	void SetCurrencyRewardBackground(ECurrencyType currencyType);

public:
	UFUNCTION()
	void Reset();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnStatusChanged(ENodeStatusChange nodeStatusChange);

	UFUNCTION(BlueprintImplementableEvent)
	void OnReset();

	UFUNCTION(BlueprintImplementableEvent)
	void OnInit();

public:
	UFUNCTION(BlueprintPure)
	bool NeedsChallengeReminderHoverAnimation() const;

	UFUNCTION(BlueprintPure)
	bool IsValidNode() const;

	UFUNCTION(BlueprintPure)
	bool IsSelectableNode() const;

	UFUNCTION(BlueprintCallable)
	void InitNode(const FName& nodeId, const FArchiveNodeViewData& data, bool isChallengeReminderNode);

protected:
	UFUNCTION(BlueprintCallable)
	void HandleStatusChange(const EStoryNodeState prevStatus, const EStoryNodeState currentStatus);

	UFUNCTION(BlueprintCallable)
	void BroadcastDragBegin();

public:
	UCoreArchiveQuestNodeWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveQuestNodeWidget) { return 0; }
