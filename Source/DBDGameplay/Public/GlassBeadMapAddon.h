#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "GlassBeadMapAddon.generated.h"

class UInteractionDefinition;
class AMapMarkerActor;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UGlassBeadMapAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _spawningCooldownTimer;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AMapMarkerActor> _mapMarkerBPClass;

	UPROPERTY(Transient)
	AMapMarkerActor* _currentMapMarker;

private:
	UFUNCTION()
	void Authority_OnSecondaryInputPressed(ADBDPlayer* player, UInteractionDefinition* interaction, bool fromCancelRequest);

public:
	UGlassBeadMapAddon();
};

FORCEINLINE uint32 GetTypeHash(const UGlassBeadMapAddon) { return 0; }
