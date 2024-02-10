#pragma once

#include "CoreMinimal.h"
#include "AkAcousticTextureSetComponent.h"
#include "AkMeshType.h"
#include "AkGeometrySurfaceOverride.h"
#include "AkGeometryData.h"
#include "AkGeometryComponent.generated.h"

class AActor;
class UMaterialInterface;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkGeometryComponent : public UAkAcousticTextureSetComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	AkMeshType MeshType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WeldingThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableDiffraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableDiffractionOnBoundaryEdges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* AssociatedRoom;

private:
	UPROPERTY()
	FAkGeometryData GeometryData;

	UPROPERTY()
	TMap<int32, double> SurfaceAreas;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateGeometry();

	UFUNCTION(BlueprintCallable)
	void SendGeometry();

	UFUNCTION(BlueprintCallable)
	void RemoveGeometry();

	UFUNCTION(BlueprintCallable)
	void ConvertMesh();

public:
	UAkGeometryComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAkGeometryComponent) { return 0; }
