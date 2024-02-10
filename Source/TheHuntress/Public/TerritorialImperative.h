#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "TerritorialImperative.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTerritorialImperative : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealSurvivorStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	float _survivorRevealedTime;

	UPROPERTY(EditDefaultsOnly)
	float _killerMinimumDistance;

	UPROPERTY(EditDefaultsOnly)
	float _perkCooldown;

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnPerkTriggered(ADBDPlayer* triggerer);

public:
	UTerritorialImperative();
};

FORCEINLINE uint32 GetTypeHash(const UTerritorialImperative) { return 0; }
