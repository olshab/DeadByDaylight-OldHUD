#pragma once

#include "CoreMinimal.h"
#include "EMainMenuButtonType.generated.h"

UENUM(BlueprintType)
enum class EMainMenuButtonType : uint8
{
	News,
	Play,
	PlaySurvivor,
	PlayKiller,
	KillYourFriends,
	PlayLTE,
	PlaySurvivorLTE,
	PlayKillerLTE,
	DailyRituals,
	Store,
	Settings,
	Onboarding,
	Credits,
	QuitGame,
	Friends,
	Archives,
	Event,
	MarketingInvitation,
	Challenges,
	Count,
};
