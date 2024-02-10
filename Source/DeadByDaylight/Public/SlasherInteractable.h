#pragma once

#include "CoreMinimal.h"
#include "PlayerInteractable.h"
#include "SlasherInteractable.generated.h"

class UInteractor;

UCLASS()
class DEADBYDAYLIGHT_API ASlasherInteractable : public APlayerInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractor* _genericStunInteractor;

public:
	ASlasherInteractable();
};

FORCEINLINE uint32 GetTypeHash(const ASlasherInteractable) { return 0; }
