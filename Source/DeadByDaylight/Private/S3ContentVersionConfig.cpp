#include "S3ContentVersionConfig.h"

FS3ContentVersionConfig::FS3ContentVersionConfig()
{
	this->dsNewContentShutdown = false;
	this->dsNewContentShutdownMinMinutes = 0.0f;
	this->dsNewContentShutdownMaxMinutes = 0.0f;
	this->clientNewContentForceReboot = false;
	this->dsNewContentCatalogItemValidation = false;
}
