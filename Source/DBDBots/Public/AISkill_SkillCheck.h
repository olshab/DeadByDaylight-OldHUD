#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "AITunableParameter.h"
#include "AISkill_SkillCheck.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_SkillCheck : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MaxSuccessLength;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter HalfSuccessLength;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter SkillCheckDifficultyCurve;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter SkillCheckUndesiredZonePenalty;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter SkillCheckDifficultyModifierReversed;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter SkillCheckDifficultyModifierOffCenter;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter SkillCheckDifficultyModifierSpeed;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter SkillCheckDifficultyModifierWarningSound;

public:
	UAISkill_SkillCheck();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_SkillCheck) { return 0; }
