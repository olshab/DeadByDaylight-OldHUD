#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K04AnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class UK04AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isFullyCharged;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _blinkPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _cooldownPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isBlinking;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isBlinkReady;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isInCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isChargingBlink;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isChainBlinking;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isInterrupting;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _blinkSequence;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _cooldownSequence;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isChainBlinkAttacking;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnBlinkTriggered();

public:
	UK04AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK04AnimInstance) { return 0; }
