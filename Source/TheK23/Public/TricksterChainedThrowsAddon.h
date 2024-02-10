#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "TricksterChainedThrowsAddon.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTricksterChainedThrowsAddon : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(Replicated, Transient)
	int32 _consecutiveHits;

	UPROPERTY(EditDefaultsOnly)
	bool _resetOnEnteringFlurryInteraction;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTricksterChainedThrowsAddon();
};

FORCEINLINE uint32 GetTypeHash(const UTricksterChainedThrowsAddon) { return 0; }
