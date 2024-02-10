#pragma once

#include "CoreMinimal.h"
#include "EUIActionType.generated.h"

UENUM(BlueprintType)
enum class EUIActionType : uint8
{
	None,
	Accept,
	Cancel,
	Previous,
	Next,
	PreviousSecondary,
	NextSecondary,
	ArchivesSurvivorSlot,
	ArchivesKillerAndSurvivorSlot,
	ArchivesKillerSlot,
	FaceButtonLeft,
	FaceButtonTop,
	Scroll,
	Options,
	Extra1,
	Extra2,
	Extra3,
	Extra4,
	Select,
};
