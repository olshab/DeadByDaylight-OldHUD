#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PresenterParentWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UPresenterParentWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPresenterParentWidget();
};

FORCEINLINE uint32 GetTypeHash(const UPresenterParentWidget) { return 0; }
