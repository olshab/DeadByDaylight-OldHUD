#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "K31PowerSubAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class THEK31_API UK31PowerSubAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isChargingInspection;

	UPROPERTY(BlueprintReadOnly)
	float _inspectPlayRate;

	UPROPERTY(BlueprintReadOnly)
	float _inspectSequenceStartPosition;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _inspectSequence;

public:
	UK31PowerSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK31PowerSubAnimInstance) { return 0; }
