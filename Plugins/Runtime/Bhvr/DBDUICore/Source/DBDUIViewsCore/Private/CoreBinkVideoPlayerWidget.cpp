#include "CoreBinkVideoPlayerWidget.h"
#include "UObject/NoExportTypes.h"

class UUITweenInstance;

void UCoreBinkVideoPlayerWidget::SetSize_Implementation(FVector2D size)
{

}

void UCoreBinkVideoPlayerWidget::OnSubtitlesChanged(const TArray<FString>& subtitlesText)
{

}

void UCoreBinkVideoPlayerWidget::OnSkipInputSwitcherTriggered()
{

}

void UCoreBinkVideoPlayerWidget::OnMediaOpened(const FString& openedUrl)
{

}

void UCoreBinkVideoPlayerWidget::OnMediaClosed()
{

}

void UCoreBinkVideoPlayerWidget::OnFadeOutAnimationComplete(UUITweenInstance* tween)
{

}

void UCoreBinkVideoPlayerWidget::OnFadeInAnimationComplete(UUITweenInstance* tween)
{

}

void UCoreBinkVideoPlayerWidget::OnEndReached()
{

}

void UCoreBinkVideoPlayerWidget::FadeOutAnimation_Implementation(const float fadeOutDuration, const float delay)
{

}

void UCoreBinkVideoPlayerWidget::FadeInAnimation_Implementation(const float fadeInDuration, const float delay)
{

}

UCoreBinkVideoPlayerWidget::UCoreBinkVideoPlayerWidget()
{
	this->VideoBinkCanvas = NULL;
	this->VideoBinkBG = NULL;
	this->VideoBinkSizeBox = NULL;
	this->VideoBinkScaleBox = NULL;
	this->VideoBinkImage = NULL;
	this->SkipInputSwitcher = NULL;
	this->_binkMediaPlayer = NULL;
}
