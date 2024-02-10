#include "AISelfHelpInteraction.h"

FAISelfHelpInteraction::FAISelfHelpInteraction()
{
	this->InteractionID = TEXT("");
	this->InputType = EInputInteractionType::VE_None;
	this->BasicWeight = FAITunableParameter{};
	this->UsesSurvivorItem = false;
	this->PreferHelpFromOther = false;
	this->UsesAISkill = false;
}
