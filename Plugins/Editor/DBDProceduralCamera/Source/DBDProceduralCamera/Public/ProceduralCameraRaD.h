#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CameraShot.h"
#include "ProceduralCameraRaD.generated.h"

class UCameraComponent;
class AActor;

UCLASS()
class DBDPROCEDURALCAMERA_API AProceduralCameraRaD : public APawn
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, meta=(BindWidgetOptional))
	UCameraComponent* CameraComp;

	UPROPERTY(EditAnywhere)
	AActor* TargetActor;

	UPROPERTY(EditAnywhere)
	TArray<FCameraShot> Shots;

	UPROPERTY(EditAnywhere)
	float MaximumCinematicLengthWanted;

	UPROPERTY(EditAnywhere)
	float CinematicTotalLength;

public:
	UFUNCTION()
	void SelectTracks();

private:
	UFUNCTION()
	void PlayCinematic();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnCameraTransition(float TransitionDuration, float BeginAt);

private:
	UFUNCTION()
	void ComputeTrackObstructionScore(FCameraShot& CameraShot);

public:
	UFUNCTION()
	void BeginCinematic();

public:
	AProceduralCameraRaD();
};

FORCEINLINE uint32 GetTypeHash(const AProceduralCameraRaD) { return 0; }
