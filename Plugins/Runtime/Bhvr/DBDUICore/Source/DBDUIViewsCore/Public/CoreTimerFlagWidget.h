#pragma once

#include "CoreMinimal.h"
#include "EFlagSize.h"
#include "CoreBaseUserWidget.h"
#include "TimerFlagViewData.h"
#include "CoreTimerFlagWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class UCoreTimerFlagWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TimerTB;

private:
	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FTimerFlagViewData _cachedData;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateTimer(const FString& newTimer);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateFlagSize(EFlagSize flagSize);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FTimerFlagViewData& data);

	UFUNCTION(BlueprintPure)
	bool IsDataSet() const;

protected:
	UFUNCTION(BlueprintPure)
	FTimerFlagViewData GetCachedData();

public:
	UCoreTimerFlagWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTimerFlagWidget) { return 0; }
