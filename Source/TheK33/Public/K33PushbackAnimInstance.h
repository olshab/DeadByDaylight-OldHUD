#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "Engine/EngineTypes.h"
#include "K33PushbackAnimInstance.generated.h"

class ACharacter;

UCLASS(NonTransient)
class UK33PushbackAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
	bool IsActive;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
	bool IsFPV;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ETraceTypeQuery> _traceTypeQuery;

	UPROPERTY(EditDefaultsOnly)
	bool _traceComplex;

	UPROPERTY(EditDefaultsOnly)
	bool _ignoreTouches;

	UPROPERTY(EditDefaultsOnly)
	float _forwardCheckDistance;

	UPROPERTY(EditDefaultsOnly)
	float _backwardCheckDistance;

	UPROPERTY(EditDefaultsOnly)
	FVector _lineTraceStartOffset;

	UPROPERTY(BlueprintReadOnly)
	float ForwardHitDistance;

	UPROPERTY(BlueprintReadOnly)
	float BackwardHitDistance;

private:
	UPROPERTY(Transient)
	ACharacter* _character;

public:
	UK33PushbackAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK33PushbackAnimInstance) { return 0; }
