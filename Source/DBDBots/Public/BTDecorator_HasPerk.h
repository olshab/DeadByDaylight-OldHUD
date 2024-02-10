#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "AIHasPerkCondition.h"
#include "EPlayerFilter.h"
#include "BTDecorator_HasPerk.generated.h"

class ADBDPlayer;

UCLASS()
class DBDBOTS_API UBTDecorator_HasPerk : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	EPlayerFilter PlayerFilter;

	UPROPERTY(EditInstanceOnly)
	TArray<FAIHasPerkCondition> Perks;

private:
	UPROPERTY(Transient)
	TArray<ADBDPlayer*> _players;

public:
	UBTDecorator_HasPerk();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_HasPerk) { return 0; }
