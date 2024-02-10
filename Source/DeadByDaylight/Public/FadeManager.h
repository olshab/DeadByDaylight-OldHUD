#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OriginalMaterials.h"
#include "UObject/NoExportTypes.h"
#include "FadeManager.generated.h"

class UDataTable;
class UActorComponent;
class UMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API AFadeManager : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TSet<UMeshComponent*> _meshComponents;

	UPROPERTY(Transient)
	UDataTable* _fadeMaterials;

	UPROPERTY(Transient)
	TArray<FOriginalMaterials> _fadedMeshes;

	UPROPERTY(Transient, Export)
	TSet<UActorComponent*> _excludedActors;

public:
	UFUNCTION(BlueprintCallable)
	void RemoveFadeMaterials(bool adjustAudioOcclusions);

	UFUNCTION(BlueprintCallable)
	void FadeAt(FVector Location, bool adjustAudioOcclusions);

	UFUNCTION(Exec)
	void DBD_TurnCameraAroundPlayerWithFading(bool isTurning);

	UFUNCTION(Exec)
	void DBD_FadeAtCurrentCameraLocation(bool isEnabled);

	UFUNCTION(BlueprintCallable)
	bool AreAnyMaterialsFaded();

public:
	AFadeManager();
};

FORCEINLINE uint32 GetTypeHash(const AFadeManager) { return 0; }
