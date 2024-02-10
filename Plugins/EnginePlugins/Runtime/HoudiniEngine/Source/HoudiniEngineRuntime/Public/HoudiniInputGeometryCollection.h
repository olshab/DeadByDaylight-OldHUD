#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputGeometryCollection.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputGeometryCollection : public UHoudiniInputObject
{
	GENERATED_BODY()

public:
	UHoudiniInputGeometryCollection();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputGeometryCollection) { return 0; }
