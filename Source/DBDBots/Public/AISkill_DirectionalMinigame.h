#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "EDirectionalMinigameResult.h"
#include "AIRoll.h"
#include "AITunableParameter.h"
#include "EDirectionalInputKey.h"
#include "AISkill_DirectionalMinigame.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_DirectionalMinigame : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAIRoll InputRoll;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter InputTimeMinimum;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter InputTimeVariance;

private:
	UFUNCTION()
	void OnMinigameStart(TArray<EDirectionalInputKey> sequence, int32 currentIndex);

	UFUNCTION()
	void OnMinigameEnd(EDirectionalMinigameResult result);

public:
	UAISkill_DirectionalMinigame();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_DirectionalMinigame) { return 0; }
