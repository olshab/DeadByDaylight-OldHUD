#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudTutorialBlockingNotificationsPresenter.generated.h"

class ATutorialsUtilities;
class UUserWidget;

UCLASS(EditInlineNew)
class UHudTutorialBlockingNotificationsPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CoreTutorialBlockingNotificationsWidget;

private:
	UPROPERTY(Transient)
	ATutorialsUtilities* _tutorialsUtilities;

private:
	UFUNCTION()
	void OnTutorialNotificationClosedByUserInput();

	UFUNCTION()
	void OnTutorialHudFadeOutTriggered();

	UFUNCTION()
	void OnTutorialHudFadeInTriggered();

public:
	UHudTutorialBlockingNotificationsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudTutorialBlockingNotificationsPresenter) { return 0; }
