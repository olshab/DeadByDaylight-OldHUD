#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelReadyToPlayRequirements.h"
#include "LevelReadyToPlayPlayerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULevelReadyToPlayPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_LevelReadyToPlayRequirementsTarget, Transient)
	TArray<FLevelReadyToPlayRequirements> _levelReadyToPlayRequirementsTarget;

	UPROPERTY(Transient)
	TArray<FLevelReadyToPlayRequirements> _levelReadyToPlayRequirementState;

private:
	UFUNCTION(Server, Reliable)
	void Server_SetIsReadyToPlay(uint32 readyToPlay);

	UFUNCTION()
	void OnRep_LevelReadyToPlayRequirementsTarget();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULevelReadyToPlayPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULevelReadyToPlayPlayerComponent) { return 0; }
