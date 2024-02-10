#include "OriginalMaterials.h"

FOriginalMaterials::FOriginalMaterials()
{
	this->OriginalMaterialIndex = TArray<int32>();
	this->OriginalMaterial = TArray<UMaterialInterface*>();
	this->MeshWithChangedMaterials = NULL;
	this->OcclusionRefreshInterval = 0.0f;
}
