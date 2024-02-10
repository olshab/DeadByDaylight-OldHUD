#pragma once

#include "CoreMinimal.h"
#include "Components/SplineMeshComponent.h"
#include "ClonedSplineMeshComponent.generated.h"

UCLASS(Transient, EditInlineNew, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UClonedSplineMeshComponent : public USplineMeshComponent
{
	GENERATED_BODY()

public:
	UClonedSplineMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UClonedSplineMeshComponent) { return 0; }
