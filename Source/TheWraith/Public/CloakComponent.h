#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CloakComponent.generated.h"

class UBasicChargeableInteraction;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEWRAITH_API UCloakComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsCloaked, Transient)
	bool _isCloaked;

	UPROPERTY(Transient, Export)
	UBasicChargeableInteraction* _cloakInteraction;

	UPROPERTY(Transient, Export)
	UBasicChargeableInteraction* _uncloakInteraction;

private:
	UFUNCTION()
	void OnRep_IsCloaked();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCloakComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCloakComponent) { return 0; }
