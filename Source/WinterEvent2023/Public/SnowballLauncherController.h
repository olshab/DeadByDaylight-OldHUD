#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "SnowballLauncherController.generated.h"

class USnowballProvider;
class USnowballProjectileLauncher;

UCLASS()
class WINTEREVENT2023_API ASnowballLauncherController : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Export)
	USnowballProvider* _snowballProvider;

	UPROPERTY(EditDefaultsOnly, Export)
	USnowballProjectileLauncher* _snowballLauncher;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _snowballCarryLimit;

public:
	ASnowballLauncherController();
};

FORCEINLINE uint32 GetTypeHash(const ASnowballLauncherController) { return 0; }
