#include "CharacterTooltipWidget.h"
#include "CharacterTooltipViewData.h"
#include "ECharacterDifficulty.h"

void UCharacterTooltipWidget::SetLockDetails(const FCharacterTooltipViewData& characterViewData)
{

}

void UCharacterTooltipWidget::SetLevel(int32 level)
{

}

void UCharacterTooltipWidget::SetDifficulty(ECharacterDifficulty difficulty)
{

}

UCharacterTooltipWidget::UCharacterTooltipWidget()
{
	this->InstructionTB = NULL;
	this->LevelTB = NULL;
	this->LockDetailsTB = NULL;
	this->DifficultyRTB = NULL;
}
