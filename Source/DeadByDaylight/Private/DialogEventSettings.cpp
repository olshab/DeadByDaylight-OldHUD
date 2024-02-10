#include "DialogEventSettings.h"

FDialogEventSettings::FDialogEventSettings()
{
	this->GameEventTrigger = FGameplayTag{};
	this->ConditionSubject = EDialogConditionSubject::Instigator;
	this->OnlyPlayIfLocallyObserved = false;
	this->Clips = TArray<FDialogClipSettings>();
	this->OverrideCurrentAudio = false;
	this->DelayUntilPlay = 0.0f;
	this->PlayProbability = 0.0f;
	this->EventPriority = 0;
}
