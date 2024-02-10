#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InvitationPlayerComponent.h"
#include "InvitationKillerComponent.generated.h"

class UBloodlustExposeInteraction;
class URemoteDestroyInteraction;
class UKillerNegateStunInteraction;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UInvitationKillerComponent : public UInvitationPlayerComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UBloodlustExposeInteraction> _bloodlustExposeClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<URemoteDestroyInteraction> _remoteDestroyClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UKillerNegateStunInteraction> _negateStunClass;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UBloodlustExposeInteraction* _bloodlustExposeInteraction;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	URemoteDestroyInteraction* _remoteDestroyInteraction;

	UPROPERTY(ReplicatedUsing=OnRep_NegateStunInteraction, Transient, meta=(BindWidgetOptional))
	UKillerNegateStunInteraction* _negateStunInteraction;

protected:
	UFUNCTION()
	void OnRep_NegateStunInteraction(UKillerNegateStunInteraction* prevNegateStunInteraction);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetVignetteVisibility(bool isVisible);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivateVFXOnKillerStunned();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInvitationKillerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationKillerComponent) { return 0; }
