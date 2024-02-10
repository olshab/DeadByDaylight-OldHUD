#include "EscapeDoor.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"
#include "ChargeableComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "BlockableComponent.h"

class ADBDPlayer;
class AActor;
class USkeletalMeshComponent;

void AEscapeDoor::SetIsActivated(bool isActivated)
{

}

void AEscapeDoor::OnRep_Activated(bool oldActivated)
{

}

void AEscapeDoor::OnPlayerExitExitArea(ADBDPlayer* player)
{

}

void AEscapeDoor::OnPlayerEnterExitArea(ADBDPlayer* player)
{

}

void AEscapeDoor::OnExitGateOpened(ADBDPlayer* player)
{

}

void AEscapeDoor::OnEscapeZoneEndOverlap(AActor* overlappingActor)
{

}

void AEscapeDoor::OnEscapeZoneBeginOverlap(AActor* overlappingActor)
{

}

bool AEscapeDoor::IsDoorSwitchBlocked() const
{
	return false;
}

bool AEscapeDoor::IsActivated() const
{
	return false;
}

FVector AEscapeDoor::GetParadiseServerLocation_Implementation() const
{
	return FVector{};
}

float AEscapeDoor::GetOpenTime() const
{
	return 0.0f;
}

bool AEscapeDoor::GetIsOpen() const
{
	return false;
}

USkeletalMeshComponent* AEscapeDoor::GetDoorSkeletalMeshComponent_Implementation() const
{
	return NULL;
}

void AEscapeDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AEscapeDoor, _activated);
}

AEscapeDoor::AEscapeDoor()
{
	this->EscapePositions = TArray<FVector>();
	this->EscapeFire = TArray<UObject*>();
	this->_killerOpenChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("KillerOpenChargeable"));
	this->_openChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("openChargeable"));
	this->_ak_audio_escape = CreateDefaultSubobject<UAkComponent>(TEXT("ak_audio_escape"));
	this->_escapeDoorAnimInstance = NULL;
	this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("rootComponent"));
	this->_activated = false;
	this->_spotlight = NULL;
	this->_localOverlappingSurvivors = TArray<TWeakObjectPtr<ACamperPlayer>>();
	this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
	this->_doorSwitchBlockableComponent = CreateDefaultSubobject<UBlockableComponent>(TEXT("DoorSwitchBlockableComponent"));
}
