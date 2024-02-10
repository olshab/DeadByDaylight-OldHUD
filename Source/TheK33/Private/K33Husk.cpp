#include "K33Husk.h"
#include "MontagePlayer.h"
#include "TerrorRadiusEmitterComponent.h"
#include "AkComponent.h"

AK33Husk::AK33Husk()
{
	this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("MontagePlayer"));
	this->_terrorRadiusEmitterComponent = CreateDefaultSubobject<UTerrorRadiusEmitterComponent>(TEXT("TerrorRadiusEmitterComponent"));
	this->_huskAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("audioComponent"));
	this->_terrorRadiusDistanceOffsetCurve = NULL;
}
