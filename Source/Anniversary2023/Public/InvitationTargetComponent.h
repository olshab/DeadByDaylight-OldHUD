#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "InvitationTargetComponent.generated.h"

class AActor;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UInvitationTargetComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _interactionAngleInDegrees;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _revealColor;

private:
	UPROPERTY(ReplicatedUsing=OnRep_TargetGameObject)
	AActor* _targetGameObject;

private:
	UFUNCTION()
	void OnRep_TargetGameObject(AActor* previousTarget);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTargetObjectChanged(AActor* target, AActor* lastTarget);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInvitationTargetComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationTargetComponent) { return 0; }
