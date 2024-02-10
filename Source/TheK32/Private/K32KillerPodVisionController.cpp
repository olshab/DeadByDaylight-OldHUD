#include "K32KillerPodVisionController.h"
#include "Camera/CameraComponent.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"

class AK32KillerPod;
class ASlasherPlayer;
class UInteractionDefinition;

void AK32KillerPodVisionController::Server_TakeControlOfPod_Implementation(AK32KillerPod* killerPodToBeControlled)
{

}

void AK32KillerPodVisionController::Server_SetCameraOrientation_Implementation(FRotator newOrientation)
{

}

void AK32KillerPodVisionController::Server_ReleaseControlOfPods_Implementation()
{

}

void AK32KillerPodVisionController::OnRep_HasVisionFromKillerPod()
{

}

void AK32KillerPodVisionController::OnKillerSet(ASlasherPlayer* killer)
{

}

void AK32KillerPodVisionController::OnKillerLocallyObservedChanged(const bool isKillerLocallyObserved)
{

}

void AK32KillerPodVisionController::OnInteractionStarted(UInteractionDefinition* interaction)
{

}

void AK32KillerPodVisionController::OnControlledPodUnacquiredFromPool(const bool isAcquired)
{

}

void AK32KillerPodVisionController::Multicast_SetLocationAndRotation_Implementation(const FVector& location)
{

}

void AK32KillerPodVisionController::Multicast_SetKillerCollisionDisabledForSurvivors_Implementation(const bool isDisabled)
{

}

void AK32KillerPodVisionController::Multicast_SetCameraOrientation_Implementation(FRotator newOrientation)
{

}

void AK32KillerPodVisionController::Multicast_OnControlledPodDisabledChanged_Implementation(const bool isDisabled)
{

}

void AK32KillerPodVisionController::Authority_OnControlledPodDisabledChanged(const bool isDisabled)
{

}

void AK32KillerPodVisionController::Authority_OnCollisionDisableTimerComplete()
{

}

void AK32KillerPodVisionController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK32KillerPodVisionController, _hasVisionFromKillerPod);
}

AK32KillerPodVisionController::AK32KillerPodVisionController()
{
	this->_observerRotationSpeed = 10.000000;
	this->_minTimeBetweenCameraRotationUpdateRPC = 0.050000;
	this->_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	this->_hasVisionFromKillerPod = false;
}
