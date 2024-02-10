#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "AimingCrosshairPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UAimingCrosshairPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> AimingCrosshairWidgetClass;

public:
	UAimingCrosshairPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UAimingCrosshairPresenter) { return 0; }
