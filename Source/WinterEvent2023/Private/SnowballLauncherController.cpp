#include "SnowballLauncherController.h"
#include "SnowballProvider.h"
#include "SnowballProjectileLauncher.h"

ASnowballLauncherController::ASnowballLauncherController()
{
	this->_snowballProvider = CreateDefaultSubobject<USnowballProvider>(TEXT("SnowballProvider"));
	this->_snowballLauncher = CreateDefaultSubobject<USnowballProjectileLauncher>(TEXT("SnowballLauncher"));
}
