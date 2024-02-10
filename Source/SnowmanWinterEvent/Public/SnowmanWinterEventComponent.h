#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseSnowmanEventComponent.h"
#include "SnowmanWinterEventComponent.generated.h"

class ASnowman;

UCLASS(meta=(BlueprintSpawnableComponent))
class USnowmanWinterEventComponent : public UBaseSnowmanEventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASnowman> _snowmanClass;

	UPROPERTY(Transient)
	TArray<ASnowman*> _snowmen;

private:
	UFUNCTION(Exec)
	void DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds);

	UFUNCTION(Exec)
	void DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds);

	UFUNCTION(Exec)
	void DBD_Winter2021RecalculateSpawnPoints();

	UFUNCTION(Exec)
	void DBD_Winter2021ForceRespawnAllSnowmen();

public:
	USnowmanWinterEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const USnowmanWinterEventComponent) { return 0; }
