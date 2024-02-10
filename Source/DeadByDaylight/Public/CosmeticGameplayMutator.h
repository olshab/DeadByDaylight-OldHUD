#pragma once

#include "CoreMinimal.h"
#include "GameplayMutator.h"
#include "CosmeticGameplayMutator.generated.h"

class AActor;
class ADBDPlayer;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UCosmeticGameplayMutator : public UGameplayMutator
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsInitialized, Transient)
	bool _isInitialized;

	UPROPERTY(ReplicatedUsing=OnRep_IsEnabled)
	bool _isEnabled;

private:
	UFUNCTION()
	void OnRep_IsInitialized(const bool oldValue);

	UFUNCTION()
	void OnRep_IsEnabled(const bool oldValue);

	UFUNCTION()
	void OnLocallyObservedChanged();

	UFUNCTION(Exec)
	void DBD_ShowCosmeticMutators(const bool isVisible, const FString& localPlayerId);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnViewTargetChanged(AActor* viewTarget);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInitialized(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEnabled(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDisabled(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCosmeticGameplayMutator();
};

FORCEINLINE uint32 GetTypeHash(const UCosmeticGameplayMutator) { return 0; }
