#include "PathBuilder_EvadeLoop.h"

UPathBuilder_EvadeLoop::UPathBuilder_EvadeLoop()
{
	this->ChaserMeleeAttackRange = 500.000000;
	this->ForceEvadePointUnderDistance = 600.000000;
	this->ChaserCrossingVaultTimePenalty = 1.200000;
	this->ChaserCrossingPalletTimePenalty = 10.000000;
	this->ActivePathTimeBonus = 1.000000;
	this->InactivePathTimePenalty = 0.500000;
	this->SwapPathTimePenalty = 0.500000;
	this->BreakPalletInteractionId = TEXT("Destroy");
	this->OnPathRadius = 150.000000;
	this->ClosePathPointRadius = 50.000000;
	this->MaxEvadeInteractableWeightDistance = 6400.000000;
	this->WeightAtMaxDistance = 1.000000;
	this->MaxWeightAtNearestDistanceIfHostileHasRangedAbility = true;
	this->WeightAtMaxSafety = 1.000000;
	this->MaxNearAllyPenaltyPathPointDistance = 1600.000000;
	this->WeightWhenNearAlly = -1.000000;
	this->WeightWhenNearLureableDangerObject = 25.000000;
	this->LureableDangerObjectWeightDropoffPerDistance = 2000.000000;
	this->SidekickToLoopInvalidateDistance = 400.000000;
	this->TrapToLoopInvalidateDistance = 100.000000;
	this->EvadeInteractableHeightAmplifierActivationHeight = 150.000000;
	this->EvadeInteractableHeightAmplifier = 3.000000;
	this->QuerierReachFallEndBeforeChaserBufferTime = 3.500000;
	this->ChaserReachFallStartTimeBeforeQuerierFall = 1.500000;
	this->_originalEvadeLoopWorkPath = NULL;
	this->_querierWorkPathA = NULL;
	this->_querierWorkPathB = NULL;
	this->_chaserWorkPath = NULL;
	this->_pickedEvadeLoopComponent = NULL;
}
