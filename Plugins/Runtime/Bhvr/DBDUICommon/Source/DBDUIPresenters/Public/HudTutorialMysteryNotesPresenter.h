#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudTutorialMysteryNotesPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UHudTutorialMysteryNotesPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CoreTutorialMysteryNoteWidget;

public:
	UHudTutorialMysteryNotesPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudTutorialMysteryNotesPresenter) { return 0; }
