#include "DBDFeatureLockProgress.h"

FDBDFeatureLockProgress::FDBDFeatureLockProgress()
{
	this->_wasSeen = false;
	this->_totalSteps = 0;
	this->_remainingSteps = 0;
}
