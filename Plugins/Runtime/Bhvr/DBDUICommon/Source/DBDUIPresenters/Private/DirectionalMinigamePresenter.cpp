#include "DirectionalMinigamePresenter.h"
#include "EDirectionalInputKey.h"
#include "DirectionalMiniGameDefinition.h"
#include "EDirectionalMinigameResult.h"

void UDirectionalMinigamePresenter::OnMinigameStart(TArray<EDirectionalInputKey> sequence, int32 currentIndex)
{

}

void UDirectionalMinigamePresenter::OnMinigameInit(FDirectionalMiniGameDefinition miniGameDefinition) const
{

}

void UDirectionalMinigamePresenter::OnMinigameEnterKey(EDirectionalInputKey enteredKey, int32 enteredIndex, bool isCorrect, int32 currentIndex)
{

}

void UDirectionalMinigamePresenter::OnMinigameEnd(EDirectionalMinigameResult result)
{

}

UDirectionalMinigamePresenter::UDirectionalMinigamePresenter()
{
	this->DirectionalMinigameWidgetClass = NULL;
}
