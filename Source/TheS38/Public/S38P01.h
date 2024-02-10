#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "S38P01.generated.h"

class ACollectable;
class UAnimInstance;
class UActivatableExposedEffect;
class UActivatableStatusEffect;
class UActivatableExhaustedEffect;
class US38P01Interaction;

UCLASS(meta=(BlueprintSpawnableComponent))
class US38P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimInstance> _S38P01AnimInstance;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UActivatableExposedEffect> _exposedStatusEffectClass;

	UPROPERTY(Transient, Export)
	UActivatableExposedEffect* _exposedEffect;

	UPROPERTY(EditDefaultsOnly)
	float _exposedDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UActivatableStatusEffect> _hasteStatusEffectClass;

	UPROPERTY(Transient, Export)
	UActivatableStatusEffect* _hasteEffect;

	UPROPERTY(EditDefaultsOnly)
	float _hasteAmount;

	UPROPERTY(EditDefaultsOnly)
	float _hasteDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UActivatableExhaustedEffect> _exhaustionEffectClass;

	UPROPERTY(Transient, Export)
	UActivatableExhaustedEffect* _exhaustionEffect;

	UPROPERTY(EditDefaultsOnly)
	float _exhaustionDuration;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<ACollectable>> _collectableClasses;

	UPROPERTY(EditDefaultsOnly)
	TArray<FName> _unsupportedItemAddons;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<US38P01Interaction> _interactionBP;

	UPROPERTY(EditDefaultsOnly)
	float _animationDuration;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSecondaryPerkEffect(bool shouldScream);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnAnimationStart();

public:
	UFUNCTION(BlueprintPure)
	TArray<FName> GetUnsupportedItemAddons() const;

	UFUNCTION(BlueprintPure)
	float GetHasteDuration() const;

	UFUNCTION(BlueprintPure)
	float GetHasteAmount() const;

	UFUNCTION(BlueprintPure)
	float GetExposedDuration() const;

	UFUNCTION(BlueprintPure)
	float GetExhaustionDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	TArray<TSubclassOf<ACollectable>> GetCollectableClasses() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_MakeSurvivorScream();

private:
	UFUNCTION()
	void Authority_OnPerkActivated(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnAnimationFinish();

	UFUNCTION()
	void Authority_GiveSecondaryPerkEffect();

public:
	US38P01();
};

FORCEINLINE uint32 GetTypeHash(const US38P01) { return 0; }
