#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "DailyRitualsPopupPresenter.generated.h"

UCLASS(EditInlineNew)
class UDailyRitualsPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnRitualsSyncErrorEvent() const;

	UFUNCTION()
	void OnRitualsFetchedEvent() const;

	UFUNCTION()
	void OnRemoveRitual(const FString& id);

	UFUNCTION()
	void OnClaimRitual(const FString& id);

	UFUNCTION()
	void OnClaimAllRituals();

public:
	UDailyRitualsPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UDailyRitualsPopupPresenter) { return 0; }
