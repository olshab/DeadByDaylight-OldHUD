#pragma once

#include "CoreMinimal.h"
#include "ConfigureScopeDelegate.generated.h"

class USentryScope;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FConfigureScopeDelegate, USentryScope*, Scope);
