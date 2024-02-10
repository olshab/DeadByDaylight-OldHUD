#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "EProfileMenuState.h"
#include "ProfileMenuPresenter.generated.h"

class UProfileMenuCustomizationSubPresenter;
class UUserWidget;
class UProfileMenuStatsSubPresenter;
class USubPresenter;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UProfileMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> ProfileMenuWidgetClass;

private:
	UPROPERTY(Transient)
	UProfileMenuStatsSubPresenter* _statsSubPresenter;

	UPROPERTY(Transient)
	UProfileMenuCustomizationSubPresenter* _badgeSubPresenter;

	UPROPERTY(Transient)
	UProfileMenuCustomizationSubPresenter* _bannerSubPresenter;

	UPROPERTY(Transient)
	USubPresenter* _activeSubPresenter;

private:
	UFUNCTION()
	void SetMenuState(EProfileMenuState menuState);

	UFUNCTION()
	void OnSettingsButtonClicked();

	UFUNCTION()
	void OnBackButtonClicked();

public:
	UProfileMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuPresenter) { return 0; }
