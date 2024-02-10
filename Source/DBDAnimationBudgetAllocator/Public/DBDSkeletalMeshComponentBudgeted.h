#pragma once

#include "CoreMinimal.h"
#include "AnimationDependency.h"
#include "SleepableSkeletalMesh.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "DBDSkeletalMeshComponentBudgeted.generated.h"

class USkeletalMeshComponent;
class UAnimBudgeterSignificanceStrategy;
class USignificanceStrategy;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDANIMATIONBUDGETALLOCATOR_API UDBDSkeletalMeshComponentBudgeted : public USkeletalMeshComponentBudgeted, public IAnimationDependency, public ISleepableSkeletalMesh
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _autoRegisterToAnimBudgeter;

	UPROPERTY(EditDefaultsOnly)
	bool _autoComputeSignificance;

	UPROPERTY(EditAnywhere, Export)
	USignificanceStrategy* _significanceStrategy;

	UPROPERTY(EditAnywhere, Export)
	UAnimBudgeterSignificanceStrategy* _animBudgeterSignificanceStrategy;

public:
	UFUNCTION(BlueprintCallable)
	void SetAnimationDependency(USkeletalMeshComponent* meshDependency);

public:
	UDBDSkeletalMeshComponentBudgeted();
};

FORCEINLINE uint32 GetTypeHash(const UDBDSkeletalMeshComponentBudgeted) { return 0; }
