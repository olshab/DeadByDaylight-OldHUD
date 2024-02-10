#pragma once

#include "CoreMinimal.h"
#include "EK33TunnelBlockType.h"
#include "KillerSpecificGameStateComponent.h"
#include "K33TunnelBlockSpawnData.h"
#include "UObject/SoftObjectPtr.h"
#include "K33TunnelProceduralGenerationComponent.generated.h"

class AK33TunnelBlock;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33TunnelProceduralGenerationComponent : public UKillerSpecificGameStateComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_BlockSpawnData)
	FK33TunnelBlockSpawnData _blocksSpawnData;

	UPROPERTY(EditDefaultsOnly)
	TMap<EK33TunnelBlockType, TSoftClassPtr<AK33TunnelBlock>> _tunnelBlockAssetsReferences;

	UPROPERTY(Transient)
	TMap<EK33TunnelBlockType, UClass*> _tunnelBlockAssetClasses;

	UPROPERTY(Transient)
	TArray<AK33TunnelBlock*> _tunnelBlocks;

	UPROPERTY(EditDefaultsOnly)
	float _blockSize;

	UPROPERTY(EditDefaultsOnly)
	float _basementHeightOffset;

private:
	UFUNCTION()
	void OnRep_BlockSpawnData();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33TunnelProceduralGenerationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TunnelProceduralGenerationComponent) { return 0; }
