#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "SmashHit.generated.h"

class UStatusEffect;
class UEnum;

UCLASS(meta=(BlueprintSpawnableComponent))
class USmashHit : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _exhaustedTime;

	UPROPERTY(EditDefaultsOnly)
	float _hasteTime;

	UPROPERTY(EditDefaultsOnly)
	float _hasteValue;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exhaustedEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteEffect;

	UPROPERTY(Transient)
	UEnum* stunTypeEnum;

public:
	USmashHit();
};

FORCEINLINE uint32 GetTypeHash(const USmashHit) { return 0; }
