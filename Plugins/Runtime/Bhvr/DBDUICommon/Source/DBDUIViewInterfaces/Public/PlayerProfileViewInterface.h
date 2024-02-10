#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ECurrencyType.h"
#include "CurrencyLabelViewData.h"
#include "EPlayerCardAnimationMode.h"
#include "PlayerCardViewData.h"
#include "PlayerProfileViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPlayerProfileViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPlayerProfileViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateWallet(const ECurrencyType type, int32 newBalance, int32 previousBalance);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdatePlayerProfileOpacity(const bool isFocused);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdatePlayerCardButton(const bool isProfileMenuContextEntered);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ShowUI();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ShowPlayerCard();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetWalletVisibility(const bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetWalletData(const TArray<FCurrencyLabelViewData>& walletData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetPlayerName(const FText& playerNameText);

	UFUNCTION()
	virtual void SetPlayerCardEnabled(bool isEnabled) PURE_VIRTUAL(SetPlayerCardEnabled,);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetPlayerCardBannerOpacity(float opacity);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetPlayerCardAnimationMode(const EPlayerCardAnimationMode playerCardAnimationMode);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetPlayerCard(const FPlayerCardViewData& badge, const FPlayerCardViewData& banner);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HideUI();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HidePlayerName();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HidePlayerCard();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FullUpdateCurrency(const FCurrencyLabelViewData& viewData);

};
