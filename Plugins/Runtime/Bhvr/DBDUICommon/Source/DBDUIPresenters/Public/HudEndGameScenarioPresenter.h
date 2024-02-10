#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudEndGameScenarioPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UHudEndGameScenarioPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> EndGameCollapseBarWidgetClass;

public:
	UHudEndGameScenarioPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudEndGameScenarioPresenter) { return 0; }
