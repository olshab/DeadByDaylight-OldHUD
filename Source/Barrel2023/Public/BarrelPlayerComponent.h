#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBarrelType.h"
#include "BarrelPlayerComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class BARREL2023_API UBarrelPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadOnly, Replicated, meta=(AllowPrivateAccess=true))
	TArray<EBarrelType> _interactedBarrels;

private:
	UFUNCTION(Server, Reliable)
	void Server_SetCharmInfo(const bool isRedUnlocked, const bool isGreenUnlocked, const bool isBlueUnlocked);

public:
	UFUNCTION(BlueprintPure)
	TArray<EBarrelType> GetInteractedBarrels();

private:
	UFUNCTION(Exec)
	void DBD_BarrelResetInteractedBarrels();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerPlayerVignette(const ADBDPlayer* player, const EBarrelType barrelType);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBarrelPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBarrelPlayerComponent) { return 0; }
