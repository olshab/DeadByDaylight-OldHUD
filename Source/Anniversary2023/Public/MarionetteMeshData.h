#pragma once

#include "CoreMinimal.h"
#include "MarionetteMeshData.generated.h"

class UStaticMesh;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct FMarionetteMeshData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	UStaticMesh* DancingMesh;

	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* DancerMaterials;

public:
	ANNIVERSARY2023_API FMarionetteMeshData();
};

FORCEINLINE uint32 GetTypeHash(const FMarionetteMeshData) { return 0; }
