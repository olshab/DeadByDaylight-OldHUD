#include "ClipManager.h"
#include "UObject/NoExportTypes.h"

void AClipManager::SphericalDissolveAt(FVector Location, float radius)
{

}

void AClipManager::RemoveDissolveMaterials()
{

}

AClipManager::AClipManager()
{
	this->_clippingZones = TArray<UDBDClipRegionComponent*>();
	this->_meshComponents = TSet<UMeshComponent*>();
	this->_dissolvedMeshes = TArray<FMaterialOriginalState>();
	this->_normal2dissolve = TMap<UMaterialInterface*, UMaterialInterface*>();
	this->_normal2dissolveStaticMeshes = TMap<UMaterialInterface*, FStaticMeshesArrayForClip>();
	this->_dissolve2normal = TMap<UMaterialInterface*, UMaterialInterface*>();
	this->_sphericalDissolveMaterials = NULL;
}
