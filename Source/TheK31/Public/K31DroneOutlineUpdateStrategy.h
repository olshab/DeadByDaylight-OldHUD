#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "EK31DroneStateID.h"
#include "K31DroneOutlineUpdateStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK31DroneOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _killerColorNormal;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _killerColorActive;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _killerColorSelected;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _survivorColor;

	UPROPERTY(EditDefaultsOnly)
	TArray<EK31DroneStateID> _invalidStates;

	UPROPERTY(EditDefaultsOnly)
	float _killerMinimumDistance;

	UPROPERTY(EditDefaultsOnly)
	float _survivorMinimumDistance;

	UPROPERTY(EditDefaultsOnly)
	float _survivorMaximumDistanceXY;

public:
	UK31DroneOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneOutlineUpdateStrategy) { return 0; }
