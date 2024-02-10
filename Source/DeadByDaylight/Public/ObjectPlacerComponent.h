#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "ObjectPlacerComponent.generated.h"

class UStaticMeshComponent;
class UObjectPlacementUpdateStrategy;
class UObjectPlacementValidationStrategy;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UObjectPlacerComponent : public USceneComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, NoClear, meta=(BindWidgetOptional))
	UObjectPlacementUpdateStrategy* _objectPlacementUpdateStrategy;

	UPROPERTY(EditDefaultsOnly, NoClear, meta=(BindWidgetOptional))
	UObjectPlacementValidationStrategy* _objectPlacementValidationStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _objectMesh;

	UPROPERTY(EditDefaultsOnly)
	float _meshOffsetZ;

private:
	UPROPERTY(EditDefaultsOnly)
	FName _socketName;

	UPROPERTY(EditDefaultsOnly)
	float _indicatorOffsetY;

	UPROPERTY(EditDefaultsOnly)
	float _indicatorOffsetX;

	UPROPERTY(EditDefaultsOnly)
	FName _itemObjectId;

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _showIndicator;

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _stayActiveWhileItemInUse;

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hideIndicatorDuringAttack;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _tagsPreventingObjectPlacement;

public:
	UFUNCTION(BlueprintCallable)
	void SetShowIndicator(bool newValue);

	UFUNCTION(BlueprintCallable)
	void SetObjectMesh(UStaticMeshComponent* objectMesh);

	UFUNCTION(BlueprintCallable)
	void SetMeshOffsetZ(float z);

	UFUNCTION(BlueprintCallable)
	void SetIndicatorOffsetY(float y);

	UFUNCTION(BlueprintCallable)
	void SetIndicatorOffsetX(float x);

	UFUNCTION(BlueprintCallable)
	void SetHideIndicatorDuringAttack(bool enable);

	UFUNCTION(BlueprintPure)
	bool IsPlacementValid() const;

	UFUNCTION(BlueprintPure)
	FRotator GetObjectPlacementRotation() const;

	UFUNCTION(BlueprintPure)
	FVector GetObjectPlacementLocation() const;

	UFUNCTION(BlueprintCallable)
	void ActivateObjectPlacement(bool active);

public:
	UObjectPlacerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UObjectPlacerComponent) { return 0; }
