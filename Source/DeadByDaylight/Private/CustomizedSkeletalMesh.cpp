#include "CustomizedSkeletalMesh.h"
#include "ECustomizationCategory.h"

class USkinnedMeshComponent;
class USkeletalMeshComponent;
class UCustomizedSkeletalMesh;

void UCustomizedSkeletalMesh::SetVfxsVisibility(ECustomizationCategory category, bool visible)
{

}

void UCustomizedSkeletalMesh::SetMeshVisibility(bool visible)
{

}

void UCustomizedSkeletalMesh::SetMeshOwner(USkinnedMeshComponent* mesh)
{

}

void UCustomizedSkeletalMesh::SetCastShadow(bool castShadow)
{

}

void UCustomizedSkeletalMesh::SetAllVfxsVisibility(bool visible)
{

}

void UCustomizedSkeletalMesh::SetAllAccessoriesVisibility(bool visible)
{

}

bool UCustomizedSkeletalMesh::HasValidCustomization() const
{
	return false;
}

USkeletalMeshComponent* UCustomizedSkeletalMesh::GetSkeletalMesh(ECustomizationCategory category) const
{
	return NULL;
}

USkinnedMeshComponent* UCustomizedSkeletalMesh::GetMeshOwner()
{
	return NULL;
}

TArray<FName> UCustomizedSkeletalMesh::GetCurrentCustomizationItems() const
{
	return TArray<FName>();
}

TArray<USkeletalMeshComponent*> UCustomizedSkeletalMesh::GetComponents() const
{
	return TArray<USkeletalMeshComponent*>();
}

void UCustomizedSkeletalMesh::CopyCustomization(const UCustomizedSkeletalMesh* copyFrom)
{

}

bool UCustomizedSkeletalMesh::Contains(TArray<FName> itemIds) const
{
	return false;
}

void UCustomizedSkeletalMesh::ClearAllVfxs()
{

}

UCustomizedSkeletalMesh::UCustomizedSkeletalMesh()
{
	this->_meshOwner = NULL;
	this->_ignoredItemCategories = TSet<ECustomizationCategory>();
	this->_cosmeticPiecesMesh = TArray<USkeletalMeshComponent*>();
	this->_cosmeticPiecesMeshPerCategory = TMap<ECustomizationCategory, USkeletalMeshComponent*>();
	this->_slaves = TArray<USkeletalMeshComponent*>();
	this->_itemVfxs = TMap<ECustomizationCategory, AItemVfx*>();
	this->_characterIdOverride = -1;
	this->_cosmeticPieceMeshesBeingLoaded = TMap<ECustomizationCategory, FCosmeticPieceMeshLoadingData>();
}
