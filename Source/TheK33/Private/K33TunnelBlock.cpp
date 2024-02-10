#include "K33TunnelBlock.h"
#include "UObject/NoExportTypes.h"
#include "K33TunnelBlockCosmeticActorSpawner.h"
#include "Components/SceneComponent.h"

FRotator AK33TunnelBlock::GetExitTunnelInteractableSpawnRotation_Implementation() const
{
	return FRotator{};
}

FVector AK33TunnelBlock::GetExitTunnelInteractableSpawnLocation_Implementation() const
{
	return FVector{};
}

FVector AK33TunnelBlock::GetEnterTunnelTeleportLocation_Implementation() const
{
	return FVector{};
}

AK33TunnelBlock::AK33TunnelBlock()
{
	this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->_cosmeticActorSpawner = CreateDefaultSubobject<UK33TunnelBlockCosmeticActorSpawner>(TEXT("CosmeticTunnelBlockActorSpawner"));
	this->_tunnelCosmeticActor = NULL;
}
