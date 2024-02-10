#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "HideInSnowmanInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class SNOWMANWINTEREVENT_API UHideInSnowmanInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _timeToEnterSnowman;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _attachToPlayerDelay;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _nonDamagingSnowmanDestroyingEvents;

	UPROPERTY(Transient)
	ADBDPlayer* _authority_attacker;

private:
	UPROPERTY(Replicated, Transient)
	bool _isSnowmanShieldDamaged;

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StopControllingSnowman(ADBDPlayer* player);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StartControllingSnowman(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHideInSnowmanInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHideInSnowmanInteraction) { return 0; }
