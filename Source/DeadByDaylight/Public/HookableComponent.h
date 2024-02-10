#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HookableComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHookableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDrainStateChangeFX, int32, drainState);

public:
	UPROPERTY(BlueprintAssignable)
	FOnDrainStateChangeFX Cosmetic_OnDrainStateChanged;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetDrainTimerPercentLeft(float percentTime);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DebugSetHookDrainStage(int32 drainStage);

public:
	UFUNCTION(BlueprintPure)
	int32 GetSacrificeStageIndex() const;

	UFUNCTION(BlueprintPure)
	int32 GetHookedCount() const;

	UFUNCTION(BlueprintPure)
	float GetDrainTimerPercentLeft() const;

	UFUNCTION(BlueprintPure)
	int32 GetDrainStage() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DebugSetHookEscapeAutoSuccess(const bool success);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DebugSetHookEscapeAutoFail(const bool fail);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DebugSetHookDrainStage(int32 drainStage);

public:
	UHookableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHookableComponent) { return 0; }
