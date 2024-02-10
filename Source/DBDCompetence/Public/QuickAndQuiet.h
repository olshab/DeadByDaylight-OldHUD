#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "QuickAndQuiet.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UQuickAndQuiet : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FGameplayTagContainer _rushedActions;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _silentRushedActionStatusEffect;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _cooldownDurationSeconds;

public:
	UFUNCTION(BlueprintPure)
	float GetCooldownDurationSecondsAtLevel() const;

private:
	UFUNCTION()
	void Authority_OnPlayerRushedActionFinished();

public:
	UQuickAndQuiet();
};

FORCEINLINE uint32 GetTypeHash(const UQuickAndQuiet) { return 0; }
