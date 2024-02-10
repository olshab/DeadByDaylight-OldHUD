#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AISkill_InteractionUseItem.h"
#include "DBDTunableRowHandle.h"
#include "AISkill_InteractionUseItem_LamentConfiguration.generated.h"

UCLASS(EditInlineNew)
class UAISkill_InteractionUseItem_LamentConfiguration : public UAISkill_InteractionUseItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter SolveLamentThreshold;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _solveLamentMaxCharge;

public:
	UAISkill_InteractionUseItem_LamentConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_LamentConfiguration) { return 0; }
