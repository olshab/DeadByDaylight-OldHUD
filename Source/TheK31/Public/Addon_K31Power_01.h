#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K31Power_01.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UAddon_K31Power_01 : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _modifySkillCheckDifficultyEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _skillCheckDifficultyModifier;

public:
	UAddon_K31Power_01();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K31Power_01) { return 0; }
