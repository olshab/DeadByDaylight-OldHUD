#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlockFeedbackStyleOverride.h"
#include "Templates/SubclassOf.h"
#include "BlockFeedbackComponent.generated.h"

class ULocalPlayerTrackerComponent;
class ABlockFeedbackBase;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UBlockFeedbackComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	ULocalPlayerTrackerComponent* _localPlayerTracker;

	UPROPERTY(Transient)
	TArray<ABlockFeedbackBase*> _defaultBlockSelfFeedbacks;

	UPROPERTY(Transient)
	TArray<ABlockFeedbackBase*> _defaultBlockOtherFeedbacks;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<ABlockFeedbackBase>> _defaultBlockSelfFeedbackClasses;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<ABlockFeedbackBase>> _defaultBlockOtherFeedbackClasses;

	UPROPERTY(Transient)
	TArray<FBlockFeedbackStyleOverride> _styleOverrides;

private:
	UFUNCTION()
	void OnLocallyObservedChanged();

public:
	UBlockFeedbackComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlockFeedbackComponent) { return 0; }
