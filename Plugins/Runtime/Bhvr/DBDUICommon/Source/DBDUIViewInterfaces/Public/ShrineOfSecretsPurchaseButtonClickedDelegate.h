#pragma once

#include "CoreMinimal.h"
#include "ShrineOfSecretsItemViewData.h"
#include "ShrineOfSecretsPurchaseButtonClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShrineOfSecretsPurchaseButtonClickedDelegate, const FShrineOfSecretsItemViewData&, shrineOfSecretsItemViewData);
