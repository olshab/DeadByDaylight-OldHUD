#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K31DroneHackableComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneHackableComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _unhackableClearanceCooldownDuration;

	UPROPERTY(ReplicatedUsing=OnRep_IsHackable)
	bool _isHackable;

private:
	UFUNCTION()
	void OnRep_IsHackable();

public:
	UFUNCTION(BlueprintPure)
	bool IsHackable() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31DroneHackableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneHackableComponent) { return 0; }
