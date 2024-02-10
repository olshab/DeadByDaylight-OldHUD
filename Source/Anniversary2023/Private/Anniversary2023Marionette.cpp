#include "Anniversary2023Marionette.h"
#include "RespawnableComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

AAnniversary2023Marionette::AAnniversary2023Marionette()
{
	this->_respawnableComponent = CreateDefaultSubobject<URespawnableComponent>(TEXT("RespawnableComponent"));
	this->_dancerMask1 = NULL;
	this->_dancerMask2 = NULL;
	this->_rotationRate = 5.000000;
	this->_playerTracker = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerTracker"));
	this->_dancingCharacter = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DancingCharacter"));
	this->_potentialMarionetteMeshes = TArray<FMarionetteMeshData>();
	this->_potentialMasks = TArray<TSubclassOf<AActor>>();
	this->_maskLSocketName = TEXT("MaskL");
	this->_maskRSocketName = TEXT("MaskR");
}
