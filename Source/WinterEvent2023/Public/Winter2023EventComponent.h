#pragma once

#include "CoreMinimal.h"
#include "BaseSnowmanEventComponent.h"
#include "DBDTunableRowHandle.h"
#include "Winter2023EventComponent.generated.h"

class UAuthoritativeActorPoolComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class WINTEREVENT2023_API UWinter2023EventComponent : public UBaseSnowmanEventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxNumSpawnableMrMarch;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minNumMrMarchAtStart;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _percentChanceSpawnMrMarch;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _mrMarchSpawnLimit;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _snowmanRespawnLimit;

	UPROPERTY(EditDefaultsOnly, NoClear, Export)
	UAuthoritativeActorPoolComponent* _mrMarchPool;

	UPROPERTY(EditDefaultsOnly, NoClear, Export)
	UAuthoritativeActorPoolComponent* _snowmanActorPool;

private:
	UFUNCTION(Exec)
	void DBD_Winter2023SetMaxMrMarchAndPercentChance(int32 maxMrMarch, float percentChance);

	UFUNCTION(Exec)
	void DBD_Winter2023ForceRespawnSnowmen();

public:
	UWinter2023EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWinter2023EventComponent) { return 0; }
