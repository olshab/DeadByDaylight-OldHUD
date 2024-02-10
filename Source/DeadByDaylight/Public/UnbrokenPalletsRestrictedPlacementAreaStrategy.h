#pragma once

#include "CoreMinimal.h"
#include "RestrictedPlacementAreaStrategy.h"
#include "UnbrokenPalletsRestrictedPlacementAreaStrategy.generated.h"

class APallet;

UCLASS(EditInlineNew)
class UUnbrokenPalletsRestrictedPlacementAreaStrategy : public URestrictedPlacementAreaStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<APallet*> _unbrokenPallets;

	UPROPERTY(EditDefaultsOnly)
	FName _palletCollisionBoxWhenDroppedTagName;

public:
	UUnbrokenPalletsRestrictedPlacementAreaStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UUnbrokenPalletsRestrictedPlacementAreaStrategy) { return 0; }
