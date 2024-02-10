#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "MoriableComponent.generated.h"

class UStatusEffect;
class UInteractionDefinition;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMoriableComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(ReplicatedUsing=OnRep_MoriInteractions, Transient, Export)
	TArray<UInteractionDefinition*> _moriInteractions;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _disruptAuraReadingStatusEffect;

protected:
	UFUNCTION()
	void OnRep_MoriInteractions();

public:
	UFUNCTION(BlueprintCallable)
	void OnMoriUpdateStart();

	UFUNCTION(BlueprintCallable)
	void OnMoriFinished(bool hasBeenKilledByMori);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UMoriableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMoriableComponent) { return 0; }
