#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMainMenuButtonType.h"
#include "MainMenuButtonViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UMainMenuButtonViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IMainMenuButtonViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void SetMainMenuButtonType(EMainMenuButtonType mainMenuButtonType);

	UFUNCTION(BlueprintNativeEvent)
	EMainMenuButtonType GetMainMenuButtonType();

};
