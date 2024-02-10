#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EOnboardingMenuState.h"
#include "UObject/ScriptInterface.h"
#include "OnboardingMenuViewInterface.generated.h"

class IOnboardingTutorialViewInterface;
class IGameManualViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UOnboardingMenuViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IOnboardingMenuViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetUIEnabled(bool enabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetQuitGameButtonVisible(bool visible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetOnboardingMenuState(EOnboardingMenuState menuState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetFirstTimeUserExperience(bool ftue);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetChangeAccountInputSwitcherVisible(bool visible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetChangeAccountInputSwitcherPlayerNickname(const FString& playerNickname);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetBackButtonVisible(bool visible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IOnboardingTutorialViewInterface> GetOnboardingTutorialInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IGameManualViewInterface> GetGameManualInterface() const;

};
