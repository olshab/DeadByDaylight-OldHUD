#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "Templates/SubclassOf.h"
#include "K11AnimInstance.generated.h"

class UInteractionDefinition;
class UAnimSequence;

UCLASS(NonTransient)
class UK11AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isAmbushAttack;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouched;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouchPressed;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _crouchPlayRate;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _uncrouchPlayRate;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _crouchInteractionDefinitionClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _uncrouchInteractionDefinitionClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* _crouchToStand;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* _standToCrouch;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* _crouchToStandFPV;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* _standToCrouchFPV;

private:
	UPROPERTY(Transient, Export)
	UInteractionDefinition* _crouchInteractionDefinition;

	UPROPERTY(Transient, Export)
	UInteractionDefinition* _uncrouchInteractionDefinition;

public:
	UK11AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK11AnimInstance) { return 0; }
