#pragma once

#include "CoreMinimal.h"
#include "HoudiniGenericAttributeChangedProperty.generated.h"

class UObject;

USTRUCT()
struct FHoudiniGenericAttributeChangedProperty
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UObject* Object;

public:
	HOUDINIENGINERUNTIME_API FHoudiniGenericAttributeChangedProperty();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniGenericAttributeChangedProperty) { return 0; }
