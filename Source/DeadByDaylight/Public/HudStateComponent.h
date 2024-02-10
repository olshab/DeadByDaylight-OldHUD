#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HudStateComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHudStateComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsHudVisible, Transient)
	bool _isHudVisible;

private:
	UFUNCTION()
	void OnRep_IsHudVisible(const bool oldValue);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHudStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHudStateComponent) { return 0; }
