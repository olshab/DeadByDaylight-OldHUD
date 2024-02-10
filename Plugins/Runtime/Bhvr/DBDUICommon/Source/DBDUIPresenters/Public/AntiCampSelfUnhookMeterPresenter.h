#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "AntiCampSelfUnhookMeterPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UAntiCampSelfUnhookMeterPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> AntiCampSelfUnhookMeterWidget;

public:
	UAntiCampSelfUnhookMeterPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UAntiCampSelfUnhookMeterPresenter) { return 0; }
