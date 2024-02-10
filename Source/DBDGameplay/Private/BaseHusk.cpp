#include "BaseHusk.h"
#include "CustomizedSkeletalMesh.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "Components/SceneComponent.h"

class USkeletalMeshComponent;

void ABaseHusk::SetScalarParameterOnAllChildrenMeshes(FName parameterName, float value, USkeletalMeshComponent* mesh)
{

}

void ABaseHusk::SetHuskVisibility(bool visible)
{

}

void ABaseHusk::InitializeHusk(UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy)
{

}

UCustomizedSkeletalMesh* ABaseHusk::GetCopiedCustomizedSkeletalMesh() const
{
	return NULL;
}

ABaseHusk::ABaseHusk()
{
	this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->_huskMesh = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("HuskMesh"));
	this->_huskCustomizedSkeletalMesh = CreateDefaultSubobject<UCustomizedSkeletalMesh>(TEXT("CustomizedSkeletalMesh"));
	this->_shouldDeactivateVFX = false;
	this->_updateWeaponAccessories = false;
	this->_shouldWeaponBeVisible = true;
}
