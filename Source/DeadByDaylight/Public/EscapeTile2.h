#pragma once

#include "CoreMinimal.h"
#include "Tile2.h"
#include "EscapeTile2.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AEscapeTile2 : public ATile2
{
	GENERATED_BODY()

public:
	AEscapeTile2();
};

FORCEINLINE uint32 GetTypeHash(const AEscapeTile2) { return 0; }
