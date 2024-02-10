#include "HookableComponent.h"

void UHookableComponent::Multicast_SetDrainTimerPercentLeft_Implementation(float percentTime)
{

}

void UHookableComponent::Multicast_DebugSetHookDrainStage_Implementation(int32 drainStage)
{

}

int32 UHookableComponent::GetSacrificeStageIndex() const
{
	return 0;
}

int32 UHookableComponent::GetHookedCount() const
{
	return 0;
}

float UHookableComponent::GetDrainTimerPercentLeft() const
{
	return 0.0f;
}

int32 UHookableComponent::GetDrainStage() const
{
	return 0;
}

void UHookableComponent::Authority_DebugSetHookEscapeAutoSuccess(const bool success)
{

}

void UHookableComponent::Authority_DebugSetHookEscapeAutoFail(const bool fail)
{

}

void UHookableComponent::Authority_DebugSetHookDrainStage(int32 drainStage)
{

}

UHookableComponent::UHookableComponent()
{

}
