#include "AnimationPreviewSubsystem.h"

void UAnimationPreviewSubsystem::OnPawnClassesLoaded()
{

}

void UAnimationPreviewSubsystem::OnInteractionFinished()
{

}

void UAnimationPreviewSubsystem::OnFadeOutForClosureComplete()
{

}

void UAnimationPreviewSubsystem::OnFadeOutComplete()
{

}

void UAnimationPreviewSubsystem::OnFadeInComplete()
{

}

bool UAnimationPreviewSubsystem::IsPreviewingAnimation() const
{
	return false;
}

UAnimationPreviewSubsystem::UAnimationPreviewSubsystem()
{
	this->_killer = NULL;
	this->_survivor = NULL;
	this->_moriKillInteraction = NULL;
}
