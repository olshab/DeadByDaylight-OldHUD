#pragma once

#include "CoreMinimal.h"
#include "EImmobilizedState.h"
#include "OnImmobilizeStateChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnImmobilizeStateChanged, EImmobilizedState, oldState, EImmobilizedState, newState);
