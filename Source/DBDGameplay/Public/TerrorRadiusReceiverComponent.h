#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TerrorRadiusReceiverComponent.generated.h"

class UCurveFloat;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UTerrorRadiusReceiverComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnIsInTerrorRadiusChanged);

protected:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _trVerticalDistanceFactor;

	UPROPERTY(EditAnywhere)
	float _heartbeatSmoothingInterpolationSpeed;

	UPROPERTY(BlueprintAssignable)
	FOnIsInTerrorRadiusChanged OnIsInTerrorRadiusChanged;

public:
	UFUNCTION(BlueprintPure)
	bool IsInTerrorRadiusRange() const;

	UFUNCTION(BlueprintPure)
	bool IsInTerrorRadius() const;

public:
	UTerrorRadiusReceiverComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusReceiverComponent) { return 0; }
