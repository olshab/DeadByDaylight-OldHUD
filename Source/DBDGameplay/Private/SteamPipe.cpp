#include "SteamPipe.h"
#include "ESteamPipeState.h"
#include "Net/UnrealNetwork.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;

void ASteamPipe::OnRep_SteamPipeState()
{

}

ESteamPipeState ASteamPipe::GetCurrentSteamPipeState() const
{
	return ESteamPipeState::Ready;
}

void ASteamPipe::Authority_OnEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void ASteamPipe::Authority_OnBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void ASteamPipe::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASteamPipe, _currentSteamPipeState);
}

ASteamPipe::ASteamPipe()
{
	this->_overlapVolume = NULL;
	this->_currentSteamPipeState = ESteamPipeState::Ready;
	this->_overlappingPlayerComponents = TArray<TWeakObjectPtr<USteamPipeEffectComponent>>();
	this->_debugResetTimer = 3.000000;
}
