#include "S3KrakenSdkValidationConfig.h"

FS3KrakenSdkValidationConfig::FS3KrakenSdkValidationConfig()
{
	this->Enabled = false;
	this->UseWhitelist = false;
	this->Whitelist = TArray<FString>();
	this->Whitelist_IsSet = false;
}
