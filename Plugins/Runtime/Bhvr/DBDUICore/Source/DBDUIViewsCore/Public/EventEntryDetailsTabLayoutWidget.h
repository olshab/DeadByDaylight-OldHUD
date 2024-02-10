#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EventEntryPopupSkinUIData.h"
#include "SpecialEventDetailsTabContentData.h"
#include "UObject/SoftObjectPtr.h"
#include "EventEntryDetailsTabLayoutWidget.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class UEventEntryDetailsTabLayoutWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FEventEntryPopupSkinUIData& skinData, const TArray<FSpecialEventDetailsTabContentData>& contentData, const TSoftObjectPtr<UTexture2D>& imageTexture);

public:
	UEventEntryDetailsTabLayoutWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryDetailsTabLayoutWidget) { return 0; }
