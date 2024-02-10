#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SaveTheBestForLast.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USaveTheBestForLast : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 TokensLostOnHit;

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _maxTokens;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownPerToken;

public:
	USaveTheBestForLast();
};

FORCEINLINE uint32 GetTypeHash(const USaveTheBestForLast) { return 0; }
