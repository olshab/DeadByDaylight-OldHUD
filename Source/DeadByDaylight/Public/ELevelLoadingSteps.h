#pragma once

#include "CoreMinimal.h"
#include "ELevelLoadingSteps.generated.h"

UENUM(BlueprintType)
enum class ELevelLoadingSteps : uint8
{
	Invalid,
	WaitingForProceduralLevelBuilder,
	WaitingForPlayersToBeSpawned,
	WaitingForAIPawnToBeSpawned,
	WaitingForKillerSpecificStateComponentLogic,
	WaitingForMapSpecificComponentLogic,
	WaitingForAssetPreloader,
	WaitingForLoadoutAndTheme,
	WaitingForPIAToBeSpawnedAndInitialized,
	WaitingForNavmeshComputation,
	SetGameLoadedAndReadyToPlay,
	WaitingForIntroToBeDone,
	LoadingCompleted,
	FirstLoadingStep = 1,
	Count = 12,
};
