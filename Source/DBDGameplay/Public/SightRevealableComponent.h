#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "SightRevealableComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API USightRevealableComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _ignoredTags;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _revealTimeBase;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _revealRate;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _revealRegressionRate;

public:
	UFUNCTION(BlueprintCallable)
	bool Authority_IsBeingRevealed();

public:
	USightRevealableComponent();
};

FORCEINLINE uint32 GetTypeHash(const USightRevealableComponent) { return 0; }
