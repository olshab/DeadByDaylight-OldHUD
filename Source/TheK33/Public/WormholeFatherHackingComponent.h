#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WormholeFatherHackingComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UWormholeFatherHackingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWrmFatherHackedStateChangedDelegate, bool, hasBeenHacked);

public:
	UPROPERTY(BlueprintAssignable)
	FOnWrmFatherHackedStateChangedDelegate Cosmetic_OnHasBeenHackedChanged;

private:
	UPROPERTY(ReplicatedUsing=OnRep_HasBeenHacked)
	bool _hasBeenHacked;

public:
	UFUNCTION(BlueprintCallable)
	void SetHasBeenHacked(const bool hasBeenHacked);

protected:
	UFUNCTION()
	void OnRep_HasBeenHacked() const;

public:
	UFUNCTION(BlueprintPure)
	bool HasBeenHacked() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UWormholeFatherHackingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWormholeFatherHackingComponent) { return 0; }
