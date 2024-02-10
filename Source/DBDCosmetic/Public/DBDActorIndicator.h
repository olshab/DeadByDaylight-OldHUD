#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDActorIndicator.generated.h"

UCLASS(Abstract)
class DBDCOSMETIC_API ADBDActorIndicator : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _isActivated;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateIndicatorActivationStatus(const bool isActivated);

public:
	ADBDActorIndicator();
};

FORCEINLINE uint32 GetTypeHash(const ADBDActorIndicator) { return 0; }
