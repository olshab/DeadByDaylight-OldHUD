#pragma once

#include "CoreMinimal.h"
#include "BlockFeedbackBase.h"
#include "FadingBlockFeedback.generated.h"

class UCurveFloat;

UCLASS(Abstract)
class AFadingBlockFeedback : public ABlockFeedbackBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _fadeCurve;

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnFadeOutStarted(const float fadeDuration);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnFadeOutEnded();

public:
	AFadingBlockFeedback();
};

FORCEINLINE uint32 GetTypeHash(const AFadingBlockFeedback) { return 0; }
