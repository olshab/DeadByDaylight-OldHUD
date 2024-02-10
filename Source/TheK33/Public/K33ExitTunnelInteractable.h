#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "UObject/NoExportTypes.h"
#include "K33ExitTunnelInteractable.generated.h"

class USceneComponent;
class UInteractor;
class AK33ControlStation;
class UBoxComponent;

UCLASS()
class THEK33_API AK33ExitTunnelInteractable : public AInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Export)
	USceneComponent* _rootComponent;

	UPROPERTY(EditDefaultsOnly, Export)
	UInteractor* _interactor;

	UPROPERTY(EditDefaultsOnly, Export)
	UBoxComponent* _interactionCollisionZone;

	UPROPERTY(ReplicatedUsing=OnRep_LinkedControlStation, Transient)
	AK33ControlStation* _linkedControlStation;

	UPROPERTY(ReplicatedUsing=OnRep_TargetLocation, Transient)
	FVector _targetLocation;

private:
	UFUNCTION()
	void OnRep_TargetLocation();

	UFUNCTION()
	void OnRep_LinkedControlStation();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK33ExitTunnelInteractable();
};

FORCEINLINE uint32 GetTypeHash(const AK33ExitTunnelInteractable) { return 0; }
