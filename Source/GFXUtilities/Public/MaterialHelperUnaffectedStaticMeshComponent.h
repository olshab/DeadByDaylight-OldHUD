#pragma once

#include "CoreMinimal.h"
#include "MaterialHelperUnaffectedComponentInterface.h"
#include "Components/StaticMeshComponent.h"
#include "MaterialHelperUnaffectedStaticMeshComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UMaterialHelperUnaffectedStaticMeshComponent : public UStaticMeshComponent, public IMaterialHelperUnaffectedComponentInterface
{
	GENERATED_BODY()

public:
	UMaterialHelperUnaffectedStaticMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMaterialHelperUnaffectedStaticMeshComponent) { return 0; }
