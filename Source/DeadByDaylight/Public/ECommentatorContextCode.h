#pragma once

#include "CoreMinimal.h"
#include "ECommentatorContextCode.generated.h"

UENUM(BlueprintType)
enum class ECommentatorContextCode : uint8
{
	AnyRole_Start,
	AnyRoleInvitationCollected,
	Killer_Start = 64,
	KillerStartOfMatch,
	KillerDamageGenerator,
	KillerDamagePallet,
	KillerDamageBreakableWall,
	KillerFoundSurvivorInLocker,
	KillerLastManStanding,
	KillerWins,
	Survivor_Start = 128,
	SurvivorStartOfMatch,
	SurvivorHexTotemCleansed,
	SurvivorHit,
	SurvivorHooked,
	SurvivorHideInLocker,
	SurvivorEscapes,
	SurvivorLastManStanding,
	Menu_Start = 192,
	MenuSplashScreen,
	MenuOpenedEventPopup,
	MenuOnlineLobby,
	MenuOfferingScreen,
};
