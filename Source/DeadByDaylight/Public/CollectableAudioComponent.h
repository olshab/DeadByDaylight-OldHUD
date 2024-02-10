#pragma once

#include "CoreMinimal.h"
#include "EItemDropType.h"
#include "Components/ActorComponent.h"
#include "CollectableAudioComponent.generated.h"

class UItemAddon;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCollectableAudioComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void PostAudioEvent(const FString& audioCall);

	UFUNCTION()
	void PlayerPickedUpCollectable(ADBDPlayer* player);

	UFUNCTION()
	void OnItemDropped(EItemDropType dropType);

	UFUNCTION()
	void OnChargeEmpty();

	UFUNCTION()
	void EnableComponent();

	UFUNCTION()
	void AddonConsumed(UItemAddon* addon);

public:
	UCollectableAudioComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCollectableAudioComponent) { return 0; }
