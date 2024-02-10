#include "PlayerScoreComponent.h"

UPlayerScoreComponent::UPlayerScoreComponent()
{
	this->_scoreEmitterDB = NULL;
	this->_emitters = TSet<UPlayerScoreEmitter*>();
}
