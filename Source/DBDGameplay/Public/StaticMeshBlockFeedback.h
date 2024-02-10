#pragma once

#include "CoreMinimal.h"
#include "FadingBlockFeedback.h"
#include "StaticMeshBlockFeedback.generated.h"

class UStaticMeshComponent;
class UMaterialHelper;

UCLASS(Abstract)
class AStaticMeshBlockFeedback : public AFadingBlockFeedback
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _mesh;

	UPROPERTY(Export)
	UMaterialHelper* _materialHelper;

public:
	AStaticMeshBlockFeedback();
};

FORCEINLINE uint32 GetTypeHash(const AStaticMeshBlockFeedback) { return 0; }
