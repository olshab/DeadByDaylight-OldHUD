#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "SpawningEffectOnGameEventData.h"
#include "ESpawningEffectGameEventSubject.h"
#include "SpawningEffectOnGameEventPerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USpawningEffectOnGameEventPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _shouldStartActivationTimerOnGameEventWithLifetime;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldCheckIfOwnerIsInstigatorOrTarget;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _gameEvents;

	UPROPERTY(EditDefaultsOnly)
	ESpawningEffectGameEventSubject _subjectType;

	UPROPERTY(EditDefaultsOnly)
	FSpawningEffectOnGameEventData _statusEffects;

public:
	UFUNCTION(BlueprintCallable)
	float GetLifetimeOfStatusEffectAtLevel();

	UFUNCTION(BlueprintCallable)
	float GetCustomParameterOfStatusEffectAtLevel();

public:
	USpawningEffectOnGameEventPerk();
};

FORCEINLINE uint32 GetTypeHash(const USpawningEffectOnGameEventPerk) { return 0; }
