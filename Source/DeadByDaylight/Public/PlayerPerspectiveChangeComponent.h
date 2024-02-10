#pragma once

#include "CoreMinimal.h"
#include "PlayerPerspectiveChangeCameraMovementData.h"
#include "Components/ActorComponent.h"
#include "PlayerPerspectiveChangeTargetData.h"
#include "PlayerPerspectiveChangeComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerPerspectiveChangeComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	FPlayerPerspectiveChangeCameraMovementData _currentCameraTransitionData;

	UPROPERTY(Transient)
	FPlayerPerspectiveChangeTargetData _targetPerspective;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldUpdateFirstPersonMeshAndModelAfterFinalize;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void TransitionToTargetPerspective(FPlayerPerspectiveChangeTargetData targetData, float transitionDuration);

protected:
	UFUNCTION()
	void FinalizeTargetPerspective();

public:
	UPlayerPerspectiveChangeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerPerspectiveChangeComponent) { return 0; }
