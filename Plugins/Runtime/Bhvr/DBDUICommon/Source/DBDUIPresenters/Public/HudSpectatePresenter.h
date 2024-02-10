#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "EGameState.h"
#include "HudSpectatePresenter.generated.h"

class UUserWidget;
class ADBDPlayerState;

UCLASS(EditInlineNew)
class UHudSpectatePresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CoreSpectateBarWidget;

private:
	UFUNCTION()
	void OnPreviousPlayerTriggered();

	UFUNCTION()
	void OnPlayerGameStateChanged(ADBDPlayerState* dbdPlayerState, EGameState newGameState);

	UFUNCTION()
	void OnNextPlayerTriggered();

	UFUNCTION()
	void OnLeaveTriggered();

public:
	UHudSpectatePresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudSpectatePresenter) { return 0; }
