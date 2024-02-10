#pragma once

#include "CoreMinimal.h"
#include "GameplayMutator.h"
#include "DisableTerrorRadiusAudioGameplayMutator.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDisableTerrorRadiusAudioGameplayMutator : public UGameplayMutator
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsInitialized, Transient)
	bool _isInitialized;

private:
	UFUNCTION()
	void OnRep_IsInitialized();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDisableTerrorRadiusAudioGameplayMutator();
};

FORCEINLINE uint32 GetTypeHash(const UDisableTerrorRadiusAudioGameplayMutator) { return 0; }
