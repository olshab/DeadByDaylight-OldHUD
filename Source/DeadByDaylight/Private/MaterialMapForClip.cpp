#include "MaterialMapForClip.h"

FMaterialMapForClip::FMaterialMapForClip()
{
	this->SrcMaterial = NULL;
	this->DstMaterial = NULL;
	this->StaticMeshToApply = TArray<TSoftObjectPtr<UStaticMesh>>();
}
