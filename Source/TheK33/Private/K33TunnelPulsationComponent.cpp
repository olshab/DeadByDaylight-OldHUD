#include "K33TunnelPulsationComponent.h"

UK33TunnelPulsationComponent::UK33TunnelPulsationComponent()
{
	this->_initialPulsePoolSize = 30;
	this->_tunnelPulseActorClass = NULL;
	this->_pulseSpeed = 0.400000;
	this->_timeBetweenPulseWaves = 1.000000;
	this->_numberOfPulsesPerWaves = 1;
	this->_timeBetweenPulsesInWave = 0.100000;
	this->_minDistanceToTriggerNextPulseWave = 500.000000;
	this->_pool = NULL;
}
