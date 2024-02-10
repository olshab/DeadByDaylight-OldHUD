#pragma once

#include "CoreMinimal.h"
#include "EOfflineLobbyState.generated.h"

UENUM(BlueprintType)
enum class EOfflineLobbyState : uint8
{
	None,
	MainMenu,
	OfflineLobby,
	Store,
	PartyLobby,
	Archives,
};
