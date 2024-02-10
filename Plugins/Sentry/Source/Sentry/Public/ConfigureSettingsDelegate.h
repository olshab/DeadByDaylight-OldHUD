#pragma once

#include "CoreMinimal.h"
#include "ConfigureSettingsDelegate.generated.h"

class USentrySettings;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FConfigureSettingsDelegate, USentrySettings*, Settings);
