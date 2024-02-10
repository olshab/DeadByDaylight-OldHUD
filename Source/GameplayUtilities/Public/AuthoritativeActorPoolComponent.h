#pragma once

#include "CoreMinimal.h"
#include "ActorPoolComponent.h"
#include "AuthoritativeActorPoolComponent.generated.h"

class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UAuthoritativeActorPoolComponent : public UActorPoolComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_ReplicatedPool, Transient)
	TArray<AActor*> _replicatedPool;

	UPROPERTY(Transient)
	TArray<AActor*> _local_oldPool;

private:
	UFUNCTION()
	void OnRep_ReplicatedPool();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAuthoritativeActorPoolComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAuthoritativeActorPoolComponent) { return 0; }
