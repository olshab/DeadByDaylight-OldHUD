#pragma once

#include "CoreMinimal.h"
#include "OriginalMaterials.generated.h"

class UMeshComponent;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FOriginalMaterials
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<int32> OriginalMaterialIndex;

	UPROPERTY(Transient)
	TArray<UMaterialInterface*> OriginalMaterial;

	UPROPERTY(Transient, Export)
	UMeshComponent* MeshWithChangedMaterials;

	UPROPERTY(Transient)
	float OcclusionRefreshInterval;

public:
	DEADBYDAYLIGHT_API FOriginalMaterials();
};

FORCEINLINE uint32 GetTypeHash(const FOriginalMaterials) { return 0; }
