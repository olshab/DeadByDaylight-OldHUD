#pragma once

#include "CoreMinimal.h"
#include "HudDirectionalMiniGameViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "EDirectionalMiniGameType.h"
#include "Templates/SubclassOf.h"
#include "CoreHudDirectionalMiniGameWidget.generated.h"

class UCoreHudDirectionalMiniGameItemWidget;
class UHorizontalBox;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHudDirectionalMiniGameWidget : public UCoreBaseHudWidget, public IHudDirectionalMiniGameViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<UCoreHudDirectionalMiniGameItemWidget> SkullMerchantItemWidgetClass;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<UCoreHudDirectionalMiniGameItemWidget> WormholeItemWidgetClass;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* Container;

private:
	UPROPERTY(Transient, Export)
	TArray<UCoreHudDirectionalMiniGameItemWidget*> _widgets;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	EDirectionalMiniGameType _currentType;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowVisual();

	UFUNCTION(BlueprintCallable)
	TArray<UCoreHudDirectionalMiniGameItemWidget*> GetWidgets();

	UFUNCTION(BlueprintPure)
	EDirectionalMiniGameType GetCurrentType() const;

public:
	UCoreHudDirectionalMiniGameWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudDirectionalMiniGameWidget) { return 0; }
