#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "AISkill_K33UseTurret.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_K33UseTurret : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FName TurretItemID;

public:
	UAISkill_K33UseTurret();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_K33UseTurret) { return 0; }
