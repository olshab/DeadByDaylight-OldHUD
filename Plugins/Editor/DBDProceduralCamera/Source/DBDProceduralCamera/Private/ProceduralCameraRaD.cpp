#include "ProceduralCameraRaD.h"
#include "CameraShot.h"
#include "Camera/CameraComponent.h"

void AProceduralCameraRaD::SelectTracks()
{

}

void AProceduralCameraRaD::PlayCinematic()
{

}

void AProceduralCameraRaD::ComputeTrackObstructionScore(FCameraShot& CameraShot)
{

}

void AProceduralCameraRaD::BeginCinematic()
{

}

AProceduralCameraRaD::AProceduralCameraRaD()
{
	this->CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	this->TargetActor = NULL;
	this->Shots = TArray<FCameraShot>();
	this->MaximumCinematicLengthWanted = 10.000000;
	this->CinematicTotalLength = 0.000000;
}
