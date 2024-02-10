#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "K31DroneHackableAvoidanceSensor.generated.h"

class ADBDPlayer;
class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneHackableAvoidanceSensor : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _survivorOverlapDetectionTime;

	UPROPERTY(Export)
	UPrimitiveComponent* _killerDetectionPrimitive;

	UPROPERTY(Export)
	UPrimitiveComponent* _survivorDetectionPrimitive;

	UPROPERTY(Transient)
	TSet<ADBDPlayer*> _overlappingSurvivors;

	UPROPERTY(Transient)
	TMap<ADBDPlayer*, bool> _overlappingKillerToVisibilityMap;

public:
	UFUNCTION(BlueprintCallable)
	void Init(UPrimitiveComponent* killerPrimitive, UPrimitiveComponent* survivorPrimitive);

private:
	UFUNCTION()
	void Authority_OnSurvivorCollisionEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnSurvivorCollisionBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION()
	void Authority_OnKillerCollisionEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnKillerCollisionBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UK31DroneHackableAvoidanceSensor();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneHackableAvoidanceSensor) { return 0; }
