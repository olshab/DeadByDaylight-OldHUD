#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K34Dodson.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class UAnimationMontageSlave;

UCLASS()
class AK34Dodson : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	USkeletalMeshComponent* _skeletalMesh;

private:
	UPROPERTY(EditAnywhere, Export)
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, Export)
	UAnimationMontageSlave* _animationMontageSlave;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnExitDodson();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEnterDodson();

public:
	AK34Dodson();
};

FORCEINLINE uint32 GetTypeHash(const AK34Dodson) { return 0; }
