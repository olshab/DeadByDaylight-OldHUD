#pragma once

#include "CoreMinimal.h"
#include "FadingBlockFeedback.h"
#include "NiagaraBlockFeedback.generated.h"

class UNiagaraComponent;

UCLASS(Abstract)
class ANiagaraBlockFeedback : public AFadingBlockFeedback
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Export)
	UNiagaraComponent* _effect;

public:
	ANiagaraBlockFeedback();
};

FORCEINLINE uint32 GetTypeHash(const ANiagaraBlockFeedback) { return 0; }
