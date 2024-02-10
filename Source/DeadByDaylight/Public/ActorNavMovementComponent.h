#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "ActorNavMovementComponent.generated.h"

class AActor;
class UPathFollowingComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorNavMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient, DuplicateTransient)
	AActor* _owningActor;

	UPROPERTY(Transient, DuplicateTransient, meta=(BindWidgetOptional))
	UPathFollowingComponent* _pathFollowingComponent;

	UPROPERTY(Transient)
	uint8 bPositionCorrected : 1;

	UPROPERTY(EditAnywhere)
	float _maxSpeed;

	UPROPERTY(EditAnywhere)
	float _acceleration;

	UPROPERTY(EditAnywhere)
	float _deceleration;

	UPROPERTY(EditAnywhere)
	float _brakingDeceleration;

public:
	UFUNCTION(BlueprintCallable)
	void SetMaxSpeed(float maxSpeed);

	UFUNCTION(BlueprintCallable)
	void SetDeceleration(float deceleration);

	UFUNCTION(BlueprintCallable)
	void SetAcceleration(float acceleration);

	UFUNCTION(BlueprintPure)
	AActor* GetOwningActor() const;

public:
	UActorNavMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UActorNavMovementComponent) { return 0; }
