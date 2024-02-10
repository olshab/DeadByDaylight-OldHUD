#include "SteamPipeResetSwitch.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "Net/UnrealNetwork.h"

void ASteamPipeResetSwitch::OnRep_SharedChargeableComponent()
{

}

void ASteamPipeResetSwitch::OnRep_NumberOfDisabledSteamPipes()
{

}

void ASteamPipeResetSwitch::OnRep_IsOnCooldown()
{

}

int32 ASteamPipeResetSwitch::GetTotalSteamPipesInLevel() const
{
	return 0;
}

void ASteamPipeResetSwitch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASteamPipeResetSwitch, _sharedChargeableComponent);
	DOREPLIFETIME(ASteamPipeResetSwitch, _isOnCooldown);
	DOREPLIFETIME(ASteamPipeResetSwitch, _numberOfDisabledSteamPipes);
	DOREPLIFETIME(ASteamPipeResetSwitch, _canUseResetSwitch);
}

ASteamPipeResetSwitch::ASteamPipeResetSwitch()
{
	this->_skeletalMeshComponent = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("SkeletalMesh"));
	this->_managerComponentClass = NULL;
	this->_sharedChargeableComponent = NULL;
	this->_isOnCooldown = false;
	this->_numberOfDisabledSteamPipes = 0;
	this->_totalSteamPipesInLevel = 0;
	this->_steamPipeManagerComponent = NULL;
	this->_canUseResetSwitch = false;
}
