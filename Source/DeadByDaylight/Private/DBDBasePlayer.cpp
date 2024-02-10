#include "DBDBasePlayer.h"
#include "UObject/NoExportTypes.h"
#include "MontagePlaybackDefinition.h"
#include "GameplayTagContainer.h"
#include "AnimationMontageDescriptor.h"
#include "Chaos/ChaosEngineInterface.h"
#include "MontagePlayer.h"

class UAnimMontage;
class UAkComponent;
class UCustomizedSkeletalMesh;
class UCustomizedAudioComponent;
class UAnimInstance;

bool ADBDBasePlayer::TeleportWithClothHandling(const FVector& location, const FRotator& rotation, bool checkCollisions)
{
	return false;
}

void ADBDBasePlayer::StopMontage()
{

}

UAnimMontage* ADBDBasePlayer::PlayMontage(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower)
{
	return NULL;
}

void ADBDBasePlayer::OnCurrentMontageComplete(UAnimMontage* MontageAsset, bool interrupted)
{

}

void ADBDBasePlayer::OnCurrentMontageBlendingOut(UAnimMontage* MontageAsset, bool interrupted)
{

}

void ADBDBasePlayer::OnAnimInstanceChanged()
{

}

void ADBDBasePlayer::Multicast_SwapCosmetics_Implementation(FName cosmeticId)
{

}

bool ADBDBasePlayer::IsPlayingMontage(FAnimationMontageDescriptor animMontageID) const
{
	return false;
}

bool ADBDBasePlayer::IsPlayingAnyMontage() const
{
	return false;
}

bool ADBDBasePlayer::GetShowBlindDebugInfo() const
{
	return false;
}

FGameplayTagContainer ADBDBasePlayer::GetSemanticTag() const
{
	return FGameplayTagContainer{};
}

TEnumAsByte<EPhysicalSurface> ADBDBasePlayer::GetRightFrontFootSurfaceType() const
{
	return SurfaceType_Default;
}

FString ADBDBasePlayer::GetRightFrontFootAudioSurfaceName() const
{
	return TEXT("");
}

TEnumAsByte<EPhysicalSurface> ADBDBasePlayer::GetRightFootSurfaceType() const
{
	return SurfaceType_Default;
}

FString ADBDBasePlayer::GetRightFootAudioSurfaceName() const
{
	return TEXT("");
}

UMontagePlayer* ADBDBasePlayer::GetMontagePlayer() const
{
	return NULL;
}

FMontagePlaybackDefinition ADBDBasePlayer::GetMontagePlaybackDefinition(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower) const
{
	return FMontagePlaybackDefinition{};
}

float ADBDBasePlayer::GetMontageLength(FAnimationMontageDescriptor animMontageID) const
{
	return 0.0f;
}

UAnimMontage* ADBDBasePlayer::GetMontage(FAnimationMontageDescriptor animMontageID) const
{
	return NULL;
}

TEnumAsByte<EPhysicalSurface> ADBDBasePlayer::GetLeftFrontFootSurfaceType() const
{
	return SurfaceType_Default;
}

FString ADBDBasePlayer::GetLeftFrontFootAudioSurfaceName() const
{
	return TEXT("");
}

TEnumAsByte<EPhysicalSurface> ADBDBasePlayer::GetLeftFootSurfaceType() const
{
	return SurfaceType_Default;
}

FString ADBDBasePlayer::GetLeftFootAudioSurfaceName() const
{
	return TEXT("");
}

UCustomizedSkeletalMesh* ADBDBasePlayer::GetCustomizedSkeletalMesh_Implementation() const
{
	return NULL;
}

UCustomizedAudioComponent* ADBDBasePlayer::GetCustomizedAudio() const
{
	return NULL;
}

FName ADBDBasePlayer::GetCharacterName() const
{
	return NAME_None;
}

int32 ADBDBasePlayer::GetCharacterIndex() const
{
	return 0;
}

UAkComponent* ADBDBasePlayer::GetAudioComponent() const
{
	return NULL;
}

void ADBDBasePlayer::GetAnimTags(TArray<FName>& outTags) const
{

}

UAnimInstance* ADBDBasePlayer::GetAnimInstance() const
{
	return NULL;
}

void ADBDBasePlayer::DBD_SwapCosmetics(FName cosmeticId)
{

}

ADBDBasePlayer::ADBDBasePlayer()
{
	this->_leftFootGroundDetector = NULL;
	this->_rightFootGroundDetector = NULL;
	this->_leftFrontFootGroundDetector = NULL;
	this->_rightFrontFootGroundDetector = NULL;
	this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("MontagePlayer"));
	this->_characterIndex = 0;
}
