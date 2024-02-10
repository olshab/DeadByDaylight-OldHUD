#pragma once

#include "CoreMinimal.h"
#include "EDBDCameraViewType.h"
#include "MenuCameraView.h"
#include "Camera/CameraActor.h"
#include "MenuCameraActor.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AMenuCameraActor : public ACameraActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	bool TransitionInProgress() const;

	UFUNCTION(BlueprintImplementableEvent)
	void K2_TransitionStarted(EDBDCameraViewType view);

	UFUNCTION(BlueprintImplementableEvent)
	void K2_TransitionFinished(EDBDCameraViewType view);

	UFUNCTION(BlueprintPure)
	FMenuCameraView GetTransitionTargetView() const;

	UFUNCTION(BlueprintPure)
	FMenuCameraView GetTransitionInitView() const;

	UFUNCTION(BlueprintPure)
	EDBDCameraViewType GetActiveView() const;

	UFUNCTION(BlueprintPure)
	bool CanTransition();

public:
	AMenuCameraActor();
};

FORCEINLINE uint32 GetTypeHash(const AMenuCameraActor) { return 0; }
