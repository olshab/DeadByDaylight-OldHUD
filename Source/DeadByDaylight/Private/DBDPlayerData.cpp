#include "DBDPlayerData.h"
#include "EInputInteractionType.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"

void UDBDPlayerData::Server_SetPlayerReady_Implementation()
{

}

void UDBDPlayerData::Server_SetMapSpecificComponentReady_Implementation()
{

}

void UDBDPlayerData::Server_SetKillerSpecificComponentReady_Implementation()
{

}

void UDBDPlayerData::Server_SetIntroCompleted_Implementation()
{

}

void UDBDPlayerData::Server_RenderingFeaturesCompleted_Implementation()
{

}

void UDBDPlayerData::Server_NotifyAIPawnSpawned_Implementation()
{

}

void UDBDPlayerData::Server_LoadoutSpawned_Implementation()
{

}

void UDBDPlayerData::Server_CampaignDataSynced_Implementation()
{

}

bool UDBDPlayerData::IsInteractionInputPressed(EInputInteractionType interactionType) const
{
	return false;
}

FRotator UDBDPlayerData::GetControlRotation() const
{
	return FRotator{};
}

void UDBDPlayerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDBDPlayerData, _controlRotation);
}

UDBDPlayerData::UDBDPlayerData()
{

}
