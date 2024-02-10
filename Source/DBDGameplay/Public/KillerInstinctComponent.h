#pragma once

#include "CoreMinimal.h"
#include "KillerInstinctInterface.h"
#include "CustomKillerInstinctData.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "KillerInstinctComponent.generated.h"

class UNiagaraComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UKillerInstinctComponent : public UActorComponent, public IKillerInstinctInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FCustomKillerInstinctData _defaultKillerInstinctAsset;

private:
	UPROPERTY(Transient, Export)
	UNiagaraComponent* _particleSystemComponent;

	UPROPERTY(EditAnywhere)
	FLinearColor _camperHighlightColorOverride;

	UPROPERTY(Transient)
	TArray<FCustomKillerInstinctData> _customKillerInstinctData;

	UPROPERTY(Transient)
	FCustomKillerInstinctData _currentKillerInstinctData;

protected:
	UFUNCTION(BlueprintCallable)
	void SetParticleSystem(UNiagaraComponent* particleSystemComponent);

private:
	UFUNCTION()
	void OnKillerLocallyObservedChanged(bool locallyObserved);

public:
	UFUNCTION(BlueprintPure)
	bool IsOwnerInKillerInstinctRadius() const;

private:
	UFUNCTION(BlueprintCallable)
	UNiagaraComponent* GetParticleSystem();

public:
	UKillerInstinctComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerInstinctComponent) { return 0; }
