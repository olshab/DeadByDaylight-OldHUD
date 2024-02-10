#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudTutorialObjectivesPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UHudTutorialObjectivesPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> TutorialObjectivesWidgetClass;

private:
	UFUNCTION()
	bool IsInTutorial() const;

public:
	UHudTutorialObjectivesPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudTutorialObjectivesPresenter) { return 0; }
