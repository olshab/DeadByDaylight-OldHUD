#include "K33TunnelProceduralGenerationComponent.h"
#include "Net/UnrealNetwork.h"

void UK33TunnelProceduralGenerationComponent::OnRep_BlockSpawnData()
{

}

void UK33TunnelProceduralGenerationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33TunnelProceduralGenerationComponent, _blocksSpawnData);
}

UK33TunnelProceduralGenerationComponent::UK33TunnelProceduralGenerationComponent()
{
	this->_tunnelBlockAssetsReferences = TMap<EK33TunnelBlockType, TSoftClassPtr<AK33TunnelBlock>>();
	this->_tunnelBlockAssetClasses = TMap<EK33TunnelBlockType, UClass*>();
	this->_tunnelBlocks = TArray<AK33TunnelBlock*>();
	this->_blockSize = 900.000000;
	this->_basementHeightOffset = -800.000000;
}
