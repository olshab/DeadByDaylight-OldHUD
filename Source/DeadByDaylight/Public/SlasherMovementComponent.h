#pragma once

#include "CoreMinimal.h"
#include "DBDCharacterMovementComponent.h"
#include "SlasherMovementComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USlasherMovementComponent : public UDBDCharacterMovementComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHitLedgeEvent);

public:
	UPROPERTY(BlueprintAssignable)
	FOnHitLedgeEvent OnHitLedgeEvent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float OnHitLedgeEventCooldown;

public:
	UFUNCTION(BlueprintPure)
	float GetBaseMaxSpeed() const;

public:
	USlasherMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const USlasherMovementComponent) { return 0; }
