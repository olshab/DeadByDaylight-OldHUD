#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "ESpecialEventStatus.h"
#include "Presenter.h"
#include "CombinedSpecialEventData.h"
#include "Templates/SubclassOf.h"
#include "ShopWalletUpdate.h"
#include "PlayerProfilePresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UPlayerProfilePresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CorePlayerProfileWidgetClass;

private:
	UFUNCTION()
	void UnfocusPlayerProfile();

	UFUNCTION()
	void ShowPlayerProfile();

	UFUNCTION()
	void SetSpecialEventCurrency(const ECurrencyType specialEventCurrencyType);

	UFUNCTION()
	void RefreshWallet();

	UFUNCTION()
	void RefreshPlayerCard();

	UFUNCTION()
	void OnWalletUpdated(const TArray<FShopWalletUpdate>& walletUpdates);

	UFUNCTION()
	void OnUpdatePlayerProfileFilter(const uint8 filter);

	UFUNCTION()
	void OnUpdatePlayerProfileCurrencyFilter(const uint8 currencyFilter);

	UFUNCTION()
	void OnUpdatePlayerCardAnimationMode() const;

	UFUNCTION()
	void OnResetPlayerProfileFilter();

	UFUNCTION()
	void OnResetPlayerProfileCurrencyFilter();

	UFUNCTION()
	void OnPlayerProfileCurrencyClicked(ECurrencyType currencyType);

	UFUNCTION()
	void OnPlayerProfileClicked();

	UFUNCTION()
	void OnCurrentSpecialEventChanged(const FCombinedSpecialEventData& previousSpecialEvent, ESpecialEventStatus previousSpecialEventStatus, const FCombinedSpecialEventData& currentSpecialEvent, ESpecialEventStatus currentSpecialEventStatus);

	UFUNCTION()
	void HidePlayerProfile();

	UFUNCTION()
	FText GetPlayerName() const;

	UFUNCTION()
	void FocusPlayerProfile(const uint8 filter, const uint8 currencyFilter);

public:
	UPlayerProfilePresenter();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerProfilePresenter) { return 0; }
