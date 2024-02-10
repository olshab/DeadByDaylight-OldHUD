#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "StatProperty.h"
#include "UObject/NoExportTypes.h"
#include "K31Scanner.generated.h"

class UTexture;
class AActor;
class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31Scanner : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnScannerUpdated);

public:
	UPROPERTY(BlueprintAssignable)
	FOnScannerUpdated OnScannerUpdated;

private:
	UPROPERTY(EditAnywhere)
	FStatProperty _radarRadius;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _levelHeightThreshold;

	UPROPERTY(EditDefaultsOnly)
	UTexture* _debugPointTexture;

	UPROPERTY(Transient)
	AActor* _owningActor;

	UPROPERTY(Transient)
	TSet<ADBDPlayer*> _playersShownOnRadar;

public:
	UFUNCTION(BlueprintPure)
	TArray<FLinearColor> GetEncodedPoints() const;

public:
	UK31Scanner();
};

FORCEINLINE uint32 GetTypeHash(const UK31Scanner) { return 0; }
