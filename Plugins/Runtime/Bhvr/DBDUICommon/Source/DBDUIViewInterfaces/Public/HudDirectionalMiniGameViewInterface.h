#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EDirectionalMinigameResult.h"
#include "EDirectionalInputKey.h"
#include "EDirectionalMiniGameType.h"
#include "HudDirectionalMiniGameViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UHudDirectionalMiniGameViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IHudDirectionalMiniGameViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateResult(int32 index, bool isSuccessful);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateFinalResult(EDirectionalMinigameResult finalResult);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Show(const TArray<EDirectionalInputKey>& directions);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Init(int32 maxItems, EDirectionalMiniGameType type);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Hide();

};
