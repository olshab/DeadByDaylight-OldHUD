#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "K33HuskAnimInstance.generated.h"

class USkeletalMeshComponent;
class UCustomizedSkeletalMesh;

UCLASS(NonTransient)
class UK33HuskAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _isFPV;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _cameraPitchValue;

public:
	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetCopiedSkeletalMesh() const;

	UFUNCTION(BlueprintPure)
	UCustomizedSkeletalMesh* GetCopiedCustomizedSkeletalMesh() const;

public:
	UK33HuskAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK33HuskAnimInstance) { return 0; }
