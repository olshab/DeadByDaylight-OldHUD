#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "S40P02.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US40P02 : public UPerk
{
	GENERATED_BODY()

public:
	US40P02();
};

FORCEINLINE uint32 GetTypeHash(const US40P02) { return 0; }
