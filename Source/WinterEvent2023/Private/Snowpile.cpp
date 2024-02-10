#include "Snowpile.h"
#include "Interactor.h"
#include "Components/StaticMeshComponent.h"
#include "ChargeableComponent.h"
#include "SnowpileInteraction.h"
#include "Components/BoxComponent.h"

ASnowpile::ASnowpile()
{
	this->_snowpileStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SnowpileStaticMesh"));
	this->_snowpileInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("SnowpileInteractionZone"));
	this->_snowpileInteractor = CreateDefaultSubobject<UInteractor>(TEXT("SnowpileInteractor"));
	this->_snowpileInteractionSurvivor = CreateDefaultSubobject<USnowpileInteraction>(TEXT("SnowpileInteractionSurvivor"));
	this->_snowpileInteractionKiller = CreateDefaultSubobject<USnowpileInteraction>(TEXT("SnowpileInteractionKiller"));
	this->_snowpileInteractionChargeableSurvivor = CreateDefaultSubobject<UChargeableComponent>(TEXT("SnowpileInteractionChargeableSurvivor"));
	this->_snowpileInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("SnowpileInteractionChargeableKiller"));
}
