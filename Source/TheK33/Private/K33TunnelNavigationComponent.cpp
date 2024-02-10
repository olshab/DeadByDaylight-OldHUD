#include "K33TunnelNavigationComponent.h"

UK33TunnelNavigationComponent::UK33TunnelNavigationComponent()
{
	this->_dotProductDeltaValueForPathRecalculation = 0.550000;
	this->_minDistanceDeltaForPathRecalculation = 10.000000;
	this->_tunnelPulsationComponentClass = NULL;
	this->_tunnelPulsationComponent = NULL;
	this->_aimDirectionProvider = NULL;
}
