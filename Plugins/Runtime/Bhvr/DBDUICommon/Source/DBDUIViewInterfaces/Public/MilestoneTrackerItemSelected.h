#pragma once

#include "CoreMinimal.h"
#include "MilestoneTrackerItemSelected.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMilestoneTrackerItemSelected, const int32, selectedIndex);
