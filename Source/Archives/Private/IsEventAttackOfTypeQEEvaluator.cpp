#include "IsEventAttackOfTypeQEEvaluator.h"

UIsEventAttackOfTypeQEEvaluator::UIsEventAttackOfTypeQEEvaluator()
{
	this->_attackEvent = TArray<FGameplayTag>();
	this->_attackerSubject = EAttackerSubject::Instigator;
	this->_attackOfType = TArray<EAttackType>();
}
