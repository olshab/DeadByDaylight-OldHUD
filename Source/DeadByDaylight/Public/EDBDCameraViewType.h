#pragma once

#include "CoreMinimal.h"
#include "EDBDCameraViewType.generated.h"

UENUM(BlueprintType)
enum class EDBDCameraViewType : uint8
{
	None,
	Main,
	Offering,
	AnimationPreview,
	ArchiveIntro,
	ArchiveRewards,
	ArchiveTome,
	SurvivorOffline,
	SurvivorOnline,
	KillerOffline,
	KillerOnline,
	Shop,
	ShopEntry,
	ShopStory,
	ShopCharacter,
	ShopHook,
	Paradise,
};
