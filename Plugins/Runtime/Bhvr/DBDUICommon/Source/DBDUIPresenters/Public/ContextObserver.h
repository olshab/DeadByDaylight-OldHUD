#pragma once

#include "CoreMinimal.h"
#include "UIComponent.h"
#include "EContext.h"
#include "ContextObserver.generated.h"

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UContextObserver : public UUIComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<EContext> ObservedContexts;

public:
	UContextObserver();
};

FORCEINLINE uint32 GetTypeHash(const UContextObserver) { return 0; }
