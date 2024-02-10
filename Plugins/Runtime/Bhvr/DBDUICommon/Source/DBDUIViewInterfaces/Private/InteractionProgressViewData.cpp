#include "InteractionProgressViewData.h"

FInteractionProgressViewData::FInteractionProgressViewData()
{
	this->Message = TEXT("");
	this->SecondaryMessage = TEXT("");
	this->BarColor = EBarColor::Default;
	this->ChargeBarColor = EBarColor::Default;
	this->ShowIcon = false;
	this->ShowIconCharge = false;
	this->ItemIcon = NULL;
	this->Proficiencies = TArray<FStatusEffectViewData>();
	this->PermanentProgress = 0.0f;
	this->PercentageStopDischarge = 0.0f;
}
