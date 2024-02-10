#pragma once

#include "CoreMinimal.h"
#include "PlayerPerspectiveChangeComponent.h"
#include "PlayerPerspectiveChangeTargetData.h"
#include "K34PerspectiveChangeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK34PerspectiveChangeComponent : public UPlayerPerspectiveChangeComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FPlayerPerspectiveChangeTargetData _firstPersonYerkesPerspectiveChangeTargetData;

	UPROPERTY(EditDefaultsOnly)
	FPlayerPerspectiveChangeTargetData _firstPersonDodsonPerspectiveChangeTargetData;

	UPROPERTY(EditDefaultsOnly)
	FPlayerPerspectiveChangeTargetData _thirdPersonYerkesPerspectiveChangeTargetData;

	UPROPERTY(EditDefaultsOnly)
	float _dodsonThirdPersonViewTransitionTime;

public:
	UK34PerspectiveChangeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34PerspectiveChangeComponent) { return 0; }
