#include "ParticleBlockFeedback.h"
#include "Particles/ParticleSystemComponent.h"

AParticleBlockFeedback::AParticleBlockFeedback()
{
	this->_effect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Effect"));
}
