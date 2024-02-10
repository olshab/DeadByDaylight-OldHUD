#pragma once

#include "CoreMinimal.h"
#include "Anniversary2021EventComponent.h"
#include "Templates/SubclassOf.h"
#include "Anniversary2023EventComponent.generated.h"

class ASpawnedPalletTracker;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UAnniversary2023EventComponent : public UAnniversary2021EventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASpawnedPalletTracker> _fragilePalletTrackerClass;

	UPROPERTY(EditDefaultsOnly)
	FName EditorPalletAssetPathName;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UAnniversary2023EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAnniversary2023EventComponent) { return 0; }
