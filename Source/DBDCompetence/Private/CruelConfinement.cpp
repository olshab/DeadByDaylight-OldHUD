#include "CruelConfinement.h"

float UCruelConfinement::GetBlockDurationAtLevel()
{
	return 0.0f;
}

UCruelConfinement::UCruelConfinement()
{
	this->_blockDuration = 0.000000;
	this->_blockables = TArray<TWeakObjectPtr<UBlockableComponent>>();
}
