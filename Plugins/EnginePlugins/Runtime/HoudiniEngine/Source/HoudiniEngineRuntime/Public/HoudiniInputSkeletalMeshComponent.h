#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "HoudiniInputSkeletalMeshComponent.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
{
	GENERATED_BODY()

public:
	UHoudiniInputSkeletalMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputSkeletalMeshComponent) { return 0; }
