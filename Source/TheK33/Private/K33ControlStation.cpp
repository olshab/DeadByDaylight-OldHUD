#include "K33ControlStation.h"
#include "Components/BoxComponent.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "UObject/NoExportTypes.h"
#include "EControlStationState.h"
#include "DBDOutlineComponent.h"
#include "Net/UnrealNetwork.h"
#include "K33ControlStationTurretSpawnerOutlineUpdateStrategy.h"
#include "K33ControlStationTunnelEntranceOutlineUpdateStrategy.h"
#include "Interactor.h"
#include "MontagePlayer.h"
#include "AnimationMontageSlave.h"

void AK33ControlStation::OnRep_IsMalfunctioning()
{

}

void AK33ControlStation::OnRep_ExitTunnelInteractable()
{

}

void AK33ControlStation::OnRep_CurrentState(EControlStationState oldState)
{

}

FVector AK33ControlStation::GetKillerExitTunnelEndLocation_Implementation() const
{
	return FVector{};
}

void AK33ControlStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK33ControlStation, _exitTunnelInteractable);
	DOREPLIFETIME(AK33ControlStation, _linkedTurret);
	DOREPLIFETIME(AK33ControlStation, _currentState);
	DOREPLIFETIME(AK33ControlStation, _worldTimeAtCooldownStart);
	DOREPLIFETIME(AK33ControlStation, _isMalfunctioning);
}

AK33ControlStation::AK33ControlStation()
{
	this->_skeletalMeshComponent_TunnelEntranceSection = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("SkeletalMeshComponent_TunnelEntranceSection"));
	this->_skeletalMeshComponent_turretSpawnerSection = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("SkeletalMeshComponent_TurretSpawnerSection"));
	this->_outlineStrategy_TurretSpawnerSection = CreateDefaultSubobject<UK33ControlStationTurretSpawnerOutlineUpdateStrategy>(TEXT("ControlStation_OutlineUpdateStrategy_TurretSpawnerSection"));
	this->_outlineStrategy_TunnelEntranceSection = CreateDefaultSubobject<UK33ControlStationTunnelEntranceOutlineUpdateStrategy>(TEXT("ControlStation_OutlineUpdateStrategy_TunnelEntranceSection"));
	this->_outlineComponent_tunnelEntranceSection = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("ControlStationOutlineComponent_TunnelEntranceSection"));
	this->_outlineComponent_turretSpawnerSection = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("ControlStationOutlineComponent_TurretSpawnerSection"));
	this->_interactionCollisionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionCollisionZone"));
	this->_interactor = CreateDefaultSubobject<UInteractor>(TEXT("Interactor"));
	this->_linkedTunnelBlock = NULL;
	this->_exitTunnelInteractableClass = NULL;
	this->_exitTunnelInteractable = NULL;
	this->_montagePlayer_turretSpawnerSection = CreateDefaultSubobject<UMontagePlayer>(TEXT("ControlStationMontagePlayer_TurretSpawnerSection"));
	this->_montagePlayer_tunnelEntranceSection = CreateDefaultSubobject<UMontagePlayer>(TEXT("ControlStationMontagePlayer_TunnelEntranceSection"));
	this->_animationSlave_turretSpawnerSection = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("ControlStationAnimationMontageSlave_TurretSpawnerSection"));
	this->_animationSlave_tunnelEntranceSection = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("ControlStationAnimationMontageSlave_TunnelEntranceSection"));
	this->_linkedTurret = NULL;
	this->_currentState = EControlStationState::Available;
	this->_turretSocketName = NAME_None;
	this->_worldTimeAtCooldownStart = 0.000000;
	this->_malfunctionDuration = 2.500000;
	this->_isMalfunctioning = false;
}
