#pragma once

#include "CoreMinimal.h"
#include "EUIFlowEvent.generated.h"

UENUM(BlueprintType)
enum class EUIFlowEvent : uint8
{
	None,
	AtlantaMainMenuScreenReady,
	AtlantaNavigationScreenReady,
	InGameHudReady,
	LoadingScreenReady,
	OfflineLobbyScreenReady,
	OnlineLobbyScreenReady,
	MainMenuScreenReady,
	SplashScreenReady,
	TallyScreenReady,
	PartyLobbyScreenReady,
	StoreScreenReady,
};
