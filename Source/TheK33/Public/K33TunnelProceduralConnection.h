#pragma once

#include "CoreMinimal.h"
#include "K33SelectedControlStationOutlineFollower.h"
#include "GameFramework/Actor.h"
#include "Components/SplineMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "K33TunnelProceduralConnection.generated.h"

class USplineMeshComponent;
class UStaticMesh;
class USceneComponent;
class USplineComponent;
class UK33SelectedControlStationLinkedActorOutlineUpdateStrategy;
class UMaterial;
class UDBDOutlineComponent;

UCLASS()
class THEK33_API AK33TunnelProceduralConnection : public AActor, public IK33SelectedControlStationOutlineFollower
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Export)
	USplineComponent* _splineComponent;

	UPROPERTY(EditDefaultsOnly, Export)
	USceneComponent* _splineMeshContainer;

	UPROPERTY(EditDefaultsOnly, Export)
	UK33SelectedControlStationLinkedActorOutlineUpdateStrategy* _outlineStrategy;

	UPROPERTY(EditDefaultsOnly, Export)
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditDefaultsOnly)
	UStaticMesh* _staticMeshComponent;

	UPROPERTY(EditDefaultsOnly)
	UMaterial* _staticMeshMaterial;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ESplineMeshAxis::Type> _splineMeshAxis;

	UPROPERTY(EditDefaultsOnly)
	FVector2D _meshScaling;

	UPROPERTY(Transient, Export)
	USplineComponent* _splineMeshComponent;

	UPROPERTY(Transient, Export)
	TArray<USplineMeshComponent*> _splineMeshes;

public:
	AK33TunnelProceduralConnection();
};

FORCEINLINE uint32 GetTypeHash(const AK33TunnelProceduralConnection) { return 0; }
