#include "Anniversary2023EventComponent.h"

void UAnniversary2023EventComponent::OnLevelReadyToPlay()
{

}

UAnniversary2023EventComponent::UAnniversary2023EventComponent()
{
	this->_fragilePalletTrackerClass = NULL;
	this->EditorPalletAssetPathName = TEXT("/Game/Blueprints/Editor/BP_Editor_Pallet.BP_Editor_Pallet_C");
}
