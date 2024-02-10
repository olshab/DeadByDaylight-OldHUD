#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "UObject/SoftObjectPtr.h"
#include "HoudiniInputBlueprint.generated.h"

class UHoudiniInputSceneComponent;
class UObject;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputBlueprint : public UHoudiniInputObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TArray<UHoudiniInputSceneComponent*> BPComponents;

	UPROPERTY()
	TSet<TSoftObjectPtr<UObject>> BPSceneComponents;

	UPROPERTY()
	int32 LastUpdateNumComponentsAdded;

	UPROPERTY()
	int32 LastUpdateNumComponentsRemoved;

public:
	UHoudiniInputBlueprint();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputBlueprint) { return 0; }
