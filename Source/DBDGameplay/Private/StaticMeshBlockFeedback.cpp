#include "StaticMeshBlockFeedback.h"
#include "MaterialHelper.h"
#include "Components/StaticMeshComponent.h"

AStaticMeshBlockFeedback::AStaticMeshBlockFeedback()
{
	this->_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	this->_materialHelper = CreateDefaultSubobject<UMaterialHelper>(TEXT("MaterialHelper"));
}
