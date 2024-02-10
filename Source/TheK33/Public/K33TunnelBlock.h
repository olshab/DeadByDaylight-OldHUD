#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "K33TunnelBlock.generated.h"

class USceneComponent;
class UK33TunnelBlockCosmeticActorSpawner;
class AK33TunnelBlockCosmetic;

UCLASS()
class AK33TunnelBlock : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Export)
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, Export)
	UK33TunnelBlockCosmeticActorSpawner* _cosmeticActorSpawner;

	UPROPERTY(Transient)
	AK33TunnelBlockCosmetic* _tunnelCosmeticActor;

public:
	UFUNCTION(BlueprintNativeEvent)
	FRotator GetExitTunnelInteractableSpawnRotation() const;

	UFUNCTION(BlueprintNativeEvent)
	FVector GetExitTunnelInteractableSpawnLocation() const;

	UFUNCTION(BlueprintNativeEvent)
	FVector GetEnterTunnelTeleportLocation() const;

public:
	AK33TunnelBlock();
};

FORCEINLINE uint32 GetTypeHash(const AK33TunnelBlock) { return 0; }
