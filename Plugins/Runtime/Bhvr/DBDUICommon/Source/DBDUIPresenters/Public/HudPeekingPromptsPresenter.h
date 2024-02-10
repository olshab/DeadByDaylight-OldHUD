#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "ELeanState.h"
#include "HudPeekingPromptsPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UHudPeekingPromptsPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> LeaningArrowsWidgetClass;

private:
	UFUNCTION()
	void UpdatePeekingState(ELeanState potentialLeanState);

	UFUNCTION()
	void HandleBestPlayerInteractionsChanged();

	UFUNCTION()
	bool CanPlayerLean() const;

public:
	UHudPeekingPromptsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudPeekingPromptsPresenter) { return 0; }
