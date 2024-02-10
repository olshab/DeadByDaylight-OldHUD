#pragma once

#include "CoreMinimal.h"
#include "BaseVFX.h"
#include "BaseHusk.generated.h"

class UCustomizedSkeletalMesh;
class USceneComponent;
class UDBDSkeletalMeshComponentBudgeted;
class USkeletalMeshComponent;

UCLASS()
class DBDGAMEPLAY_API ABaseHusk : public ABaseVFX
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	USceneComponent* _rootComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDSkeletalMeshComponentBudgeted* _huskMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UCustomizedSkeletalMesh* _huskCustomizedSkeletalMesh;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldDeactivateVFX;

private:
	UPROPERTY(EditDefaultsOnly)
	bool _updateWeaponAccessories;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldWeaponBeVisible;

protected:
	UFUNCTION(BlueprintCallable)
	void SetScalarParameterOnAllChildrenMeshes(FName parameterName, float value, USkeletalMeshComponent* mesh);

	UFUNCTION(BlueprintCallable)
	void SetHuskVisibility(bool visible);

public:
	UFUNCTION(BlueprintCallable)
	void InitializeHusk(UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy);

	UFUNCTION(BlueprintPure)
	UCustomizedSkeletalMesh* GetCopiedCustomizedSkeletalMesh() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_InitializeSkeletalMesh(USkeletalMeshComponent* mesh);

public:
	ABaseHusk();
};

FORCEINLINE uint32 GetTypeHash(const ABaseHusk) { return 0; }
