#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudObjectivesPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UHudObjectivesPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CoreHudObjectivesWidgetClass;

public:
	UHudObjectivesPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudObjectivesPresenter) { return 0; }
