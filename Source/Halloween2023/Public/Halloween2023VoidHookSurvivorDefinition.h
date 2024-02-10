#pragma once

#include "CoreMinimal.h"
#include "HookSurvivorDefinition.h"
#include "Halloween2023VoidHookSurvivorDefinition.generated.h"

class ACamperPlayer;
class AMeatHook;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHalloween2023VoidHookSurvivorDefinition : public UHookSurvivorDefinition
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHookEvent, ACamperPlayer*, survivor);

protected:
	UPROPERTY(BlueprintAssignable)
	FOnHookEvent Cosmetic_OnPlayerHooked;

	UPROPERTY(BlueprintAssignable)
	FOnHookEvent Cosmetic_OnPlayerTeleported;

private:
	UPROPERTY(EditDefaultsOnly)
	float _animationDuration;

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PlacePlayerOnHook(ACamperPlayer* survivorBeingHooked);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnPlayerMovedToStandardHook(ACamperPlayer* player, AMeatHook* closestMeatHook);

	UFUNCTION()
	void Authority_SetPlayerOnStandardHook(ACamperPlayer* player);

public:
	UHalloween2023VoidHookSurvivorDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UHalloween2023VoidHookSurvivorDefinition) { return 0; }
