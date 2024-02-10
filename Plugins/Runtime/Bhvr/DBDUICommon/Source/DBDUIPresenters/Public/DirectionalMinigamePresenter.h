#pragma once

#include "CoreMinimal.h"
#include "DirectionalMiniGameDefinition.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "EDirectionalInputKey.h"
#include "EDirectionalMinigameResult.h"
#include "DirectionalMinigamePresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UDirectionalMinigamePresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> DirectionalMinigameWidgetClass;

private:
	UFUNCTION()
	void OnMinigameStart(TArray<EDirectionalInputKey> sequence, int32 currentIndex);

	UFUNCTION()
	void OnMinigameInit(FDirectionalMiniGameDefinition miniGameDefinition) const;

	UFUNCTION()
	void OnMinigameEnterKey(EDirectionalInputKey enteredKey, int32 enteredIndex, bool isCorrect, int32 currentIndex);

	UFUNCTION()
	void OnMinigameEnd(EDirectionalMinigameResult result);

public:
	UDirectionalMinigamePresenter();
};

FORCEINLINE uint32 GetTypeHash(const UDirectionalMinigamePresenter) { return 0; }
