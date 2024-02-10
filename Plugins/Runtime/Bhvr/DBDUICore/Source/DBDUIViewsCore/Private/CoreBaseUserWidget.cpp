#include "CoreBaseUserWidget.h"
#include "Blueprint/UserWidget.h"

class UWidgetAnimation;

void UCoreBaseUserWidget::UpdateScale_Implementation(float scale)
{

}

bool UCoreBaseUserWidget::StopAnimationByName(FName animName)
{
	return false;
}

void UCoreBaseUserWidget::RegisterForInput()
{

}

bool UCoreBaseUserWidget::PlayAnimationByName(FName animName, float starttime, int32 loopcount, TEnumAsByte<EUMGSequencePlayMode::Type> playMode, float playbackspeed)
{
	return false;
}

UWidgetAnimation* UCoreBaseUserWidget::GetAnimationByName(FName animName) const
{
	return NULL;
}

void UCoreBaseUserWidget::DeregisterFromInput()
{

}

UCoreBaseUserWidget::UCoreBaseUserWidget() : UUserWidget(FObjectInitializer::Get())
{
	this->ScaleContainer = NULL;
	this->IsInteractive = false;
	this->_controlMode = EControlMode::MOUSE_KB;
	this->ScaleType = EScaleType::None;
	this->_inputManager = NULL;
	this->_animationMap = TMap<FName, UWidgetAnimation*>();
}
