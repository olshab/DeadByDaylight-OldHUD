#include "CoreMemoryChallengePlayerSpecificController.h"
#include "Net/UnrealNetwork.h"

void ACoreMemoryChallengePlayerSpecificController::StartQuest()
{

}

void ACoreMemoryChallengePlayerSpecificController::OnRep_Controller()
{

}

void ACoreMemoryChallengePlayerSpecificController::OnPortalReplicated()
{

}

void ACoreMemoryChallengePlayerSpecificController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACoreMemoryChallengePlayerSpecificController, _owningPlayer);
	DOREPLIFETIME(ACoreMemoryChallengePlayerSpecificController, _controller);
	DOREPLIFETIME(ACoreMemoryChallengePlayerSpecificController, _fragments);
	DOREPLIFETIME(ACoreMemoryChallengePlayerSpecificController, _numFragmentsToCollect);
}

ACoreMemoryChallengePlayerSpecificController::ACoreMemoryChallengePlayerSpecificController()
{
	this->_owningPlayer = NULL;
	this->_controller = NULL;
	this->_fragments = TArray<UCoreMemoryFragmentComponent*>();
	this->_numFragmentsToCollect = 0;
	this->_fragmentsSpawnedBeforeBehavioursWereSetup = TArray<TWeakObjectPtr<ACoreMemoryFragment>>();
}
