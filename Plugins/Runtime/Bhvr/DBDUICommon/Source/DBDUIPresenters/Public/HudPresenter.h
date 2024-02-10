#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "EHudParentContainerType.h"
#include "HudPresenter.generated.h"

class UHudScreen;
class ADBDPlayer;
class ADBDSpectator;
class UCoreHudRootWidget;
class APawn;

UCLASS(Abstract, EditInlineNew)
class DBDUIPRESENTERS_API UHudPresenter : public UPresenter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	EHudParentContainerType HudParentContainer;

	UPROPERTY(Transient)
	ADBDPlayer* _pendingCharacter;

private:
	UPROPERTY(Transient)
	ADBDPlayer* _presentedCharacter;

	UPROPERTY(Transient)
	ADBDSpectator* _spectatorPawn;

	UPROPERTY(Transient)
	UHudScreen* _hudScreen;

	UPROPERTY(Transient, Export)
	UCoreHudRootWidget* _rootWidget;

private:
	UFUNCTION()
	void OnPawnUnpossessed(APawn* pawn);

	UFUNCTION()
	void OnPawnPossessed(APawn* pawn);

	UFUNCTION()
	void OnLocallyObservedChanged();

	UFUNCTION()
	bool IsVisibleForCurrentGameMode() const;

	UFUNCTION()
	bool IsPendingPawnReady() const;

	UFUNCTION()
	bool IsHudReady();

public:
	UHudPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudPresenter) { return 0; }
