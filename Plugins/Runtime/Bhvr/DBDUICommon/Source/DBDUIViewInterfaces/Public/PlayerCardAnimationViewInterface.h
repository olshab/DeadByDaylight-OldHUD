#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/SoftObjectPtr.h"
#include "PlayerCardAnimationViewInterface.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPlayerCardAnimationViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPlayerCardAnimationViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetRetainerBoxOpacity(const float opacity);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetRetainerBoxMaterial(const TSoftObjectPtr<UTexture2D>& bannerTexture);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStopAnimation();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPlayAnimation();

};
