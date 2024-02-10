#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "CinematicViewInterface.generated.h"

class UBinkMediaPlayer;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UCinematicViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ICinematicViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSkipInputSwitcherVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSkipInputSwitcherEnabled(bool isEnabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSize(FVector2D size);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UBinkMediaPlayer* GetBinkVideoPlayer();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FadeOutAnimation(const float fadeOutDuration, const float delay);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FadeInAnimation(const float fadeInDuration, const float delay);

};
