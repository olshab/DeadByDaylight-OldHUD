#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SteamPipeResetSwitchAnimInstance.generated.h"

class ASteamPipeResetSwitch;

UCLASS(NonTransient)
class DBDANIMATION_API USteamPipeResetSwitchAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _handleIsDown;

	UPROPERTY(Transient)
	ASteamPipeResetSwitch* _resetSwitch;

public:
	USteamPipeResetSwitchAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USteamPipeResetSwitchAnimInstance) { return 0; }
