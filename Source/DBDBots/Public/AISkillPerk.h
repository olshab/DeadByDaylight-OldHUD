#pragma once

#include "CoreMinimal.h"
#include "PerkIdDropdown.h"
#include "AISkillPerk.generated.h"

class UAISkill;

USTRUCT(BlueprintType)
struct FAISkillPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FPerkIdDropdown> Perks;

	UPROPERTY(EditDefaultsOnly, Export)
	UAISkill* Skill;

public:
	DBDBOTS_API FAISkillPerk();
};

FORCEINLINE uint32 GetTypeHash(const FAISkillPerk) { return 0; }
