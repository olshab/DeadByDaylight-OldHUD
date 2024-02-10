#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DroneDeployDatum.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FDroneDeployDatum
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FVector Location;

	UPROPERTY()
	FRotator Rotation;

	UPROPERTY()
	int32 DeployCount;

	UPROPERTY()
	ACharacter* DeployingCharacter;

	UPROPERTY()
	bool HasReachedDeployLocation;

	UPROPERTY()
	bool IsDeployed;

public:
	THEK31_API FDroneDeployDatum();
};

FORCEINLINE uint32 GetTypeHash(const FDroneDeployDatum) { return 0; }
