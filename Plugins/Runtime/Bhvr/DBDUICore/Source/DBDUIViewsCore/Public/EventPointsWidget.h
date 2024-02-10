#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EventPointsWidget.generated.h"

UCLASS(EditInlineNew)
class UEventPointsWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetValue(int32 newValue);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Highlight(bool isHighlighted);

public:
	UEventPointsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventPointsWidget) { return 0; }
