#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "SelfCare.generated.h"

class UInteractionDefinition;
class UStatusEffect;
class UInteractionAttacherComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USelfCare : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _selfHealNoMedkitSpeedPenaltyEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _selfHealSpeedPenalty;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _selfCareInteraction;

	UPROPERTY(ReplicatedUsing=OnRep_InteractionAttacherComponent, Transient, Export)
	UInteractionAttacherComponent* _interactionAttacherComponent;

private:
	UFUNCTION()
	void OnRep_InteractionAttacherComponent();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USelfCare();
};

FORCEINLINE uint32 GetTypeHash(const USelfCare) { return 0; }
