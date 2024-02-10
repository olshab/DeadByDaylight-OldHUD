#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudMatchResultPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UHudMatchResultPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> MatchResultWidgetClass;

private:
	UFUNCTION()
	void StartEndGameSequence();

	UFUNCTION()
	void ShowEndSequence(float duration, bool isSlasher, int32 matchResult);

	UFUNCTION()
	void OnMatchResultFadeOutCompleted();

	UFUNCTION()
	void NotifyInParadiseOrEscaped();

public:
	UHudMatchResultPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudMatchResultPresenter) { return 0; }
