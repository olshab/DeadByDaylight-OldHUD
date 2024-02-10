#pragma once

#include "CoreMinimal.h"
#include "EKeyBindingsType.generated.h"

UENUM()
enum class EKeyBindingsType : int64
{
	None = -1,
	Run,
	Crouch,
	UseItem,
	DropItemSurvivor,
	PickUpItem,
	ActionSurvivor,
	SecondaryActionSurvivor,
	AbilitySurvivor,
	AbilityTwoSurvivor,
	EventAbilitySurvivor,
	Gesture1,
	Gesture2,
	WiggleRightSkillCheck,
	WiggleLeftSkillCheck,
	Attack,
	Power,
	SecondaryPower,
	EventAbilityKiller,
	DropSurvivor,
	PickUp,
	Aim,
	ForwardSurvivor,
	BackSurvivor,
	LeftSurvivor,
	RightSurvivor,
	CameraUpSurvivor,
	CameraDownSurvivor,
	CameraLeftSurvivor,
	CameraRightSurvivor,
	ForwardKiller,
	BackKiller,
	LeftKiller,
	RightKiller,
	AimKiller,
	CameraUpKiller,
	CameraDownKiller,
	CameraLeftKiller,
	CameraRightKiller,
};
