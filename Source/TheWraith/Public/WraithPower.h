#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "WraithPower.generated.h"

UCLASS()
class AWraithPower : public ACollectable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	bool IsUncloaking() const;

	UFUNCTION(BlueprintPure)
	bool IsCloaking() const;

	UFUNCTION(BlueprintCallable)
	void ForceUncloak();

public:
	AWraithPower();
};

FORCEINLINE uint32 GetTypeHash(const AWraithPower) { return 0; }
