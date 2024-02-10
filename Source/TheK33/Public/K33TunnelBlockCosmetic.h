#pragma once

#include "CoreMinimal.h"
#include "K33SelectedControlStationOutlineFollower.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "K33TunnelBlockCosmetic.generated.h"

class USceneComponent;
class USplineComponent;
class AK33TunnelProceduralConnection;

UCLASS()
class THEK33_API AK33TunnelBlockCosmetic : public AActor, public IK33SelectedControlStationOutlineFollower
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _hasTunnelExitTile;

private:
	UPROPERTY(EditDefaultsOnly, Export)
	USplineComponent* _splineComponent;

	UPROPERTY(EditDefaultsOnly, Export)
	USceneComponent* _rootComponent;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK33TunnelProceduralConnection> _tunnelProceduralConnectionClass;

	UPROPERTY(EditDefaultsOnly)
	uint32 _numberOfConnectionActors;

	UPROPERTY(EditDefaultsOnly)
	float _initialConnectionOffsetFromCenter;

	UPROPERTY(EditDefaultsOnly)
	float _endConnectionOffsetFromCenter;

	UPROPERTY(EditDefaultsOnly)
	float _lengthBetweenSplinePoints;

	UPROPERTY(EditDefaultsOnly)
	float _rotationPerSplinePoint;

	UPROPERTY(EditDefaultsOnly)
	float _firstSplinePointOffsetValue;

	UPROPERTY(EditDefaultsOnly)
	float _secondSplinePointOffsetValue;

	UPROPERTY(Transient)
	TArray<AK33TunnelProceduralConnection*> _tunnelProceduralConnections;

	UPROPERTY(Transient, Export)
	TArray<TWeakObjectPtr<USceneComponent>> _vfxPathLightsTransforms;

public:
	UFUNCTION(BlueprintNativeEvent)
	FVector GetExitTunnelLocation() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShowTunnelBlockExit();

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetTunnelExitAsBlocked(bool isBlocked);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTunnelBlockExitSelected(bool isSelected);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_EnableTunnelVFXPathLight(const FVector& location, const FRotator& rotation);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DisableTunnelVFXPathLight();

public:
	AK33TunnelBlockCosmetic();
};

FORCEINLINE uint32 GetTypeHash(const AK33TunnelBlockCosmetic) { return 0; }
