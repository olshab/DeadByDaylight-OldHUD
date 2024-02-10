#pragma once

#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "TurretNavMesh.generated.h"

UCLASS()
class ATurretNavMesh : public ARecastNavMesh
{
	GENERATED_BODY()

public:
	ATurretNavMesh();
};

FORCEINLINE uint32 GetTypeHash(const ATurretNavMesh) { return 0; }
