#pragma once

#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "MaterialHelperUnaffectedComponentInterface.h"
#include "MaterialHelperUnaffectedNiagaraComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UMaterialHelperUnaffectedNiagaraComponent : public UNiagaraComponent, public IMaterialHelperUnaffectedComponentInterface
{
	GENERATED_BODY()

public:
	UMaterialHelperUnaffectedNiagaraComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMaterialHelperUnaffectedNiagaraComponent) { return 0; }
