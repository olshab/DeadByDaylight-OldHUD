#pragma once

#include "CoreMinimal.h"
#include "EStoreMenuState.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "StoreMenuPresenter.generated.h"

class UStoreSpecialPacksSubPresenter;
class UStoreCollectionsSubPresenter;
class UShopManager;
class UStoreCharactersSubPresenter;
class UStoreSpecialsSubPresenter;
class UUserWidget;
class UStoreFeaturedSubPresenter;
class UStoreSubPresenter;
class USubPresenter;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UStoreMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> StoreMenuWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName DisplayStandName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float InStoreCameraTransitionDurationSeconds;

private:
	UPROPERTY(Transient)
	UStoreFeaturedSubPresenter* _storeFeaturedSubPresenter;

	UPROPERTY(Transient)
	UStoreSpecialsSubPresenter* _storeSpecialsSubPresenter;

	UPROPERTY(Transient)
	UStoreCollectionsSubPresenter* _storeCollectionsSubPresenter;

	UPROPERTY(Transient)
	UStoreSpecialPacksSubPresenter* _storeSpecialPacksSubPresenter;

	UPROPERTY(Transient)
	UStoreCharactersSubPresenter* _storeKillersSubPresenter;

	UPROPERTY(Transient)
	UStoreCharactersSubPresenter* _storeSurvivorsSubPresenter;

	UPROPERTY(Transient)
	UStoreSubPresenter* _activeSubPresenter;

	UPROPERTY(Transient)
	UShopManager* _shopManager;

private:
	UFUNCTION()
	void OpenRedeemCodePopup();

	UFUNCTION()
	void OpenAuricCellsOverlay();

	UFUNCTION()
	void OnStopSubPresenterAsyncOperation(USubPresenter* subPresenter);

	UFUNCTION()
	void OnStartSubPresenterAsyncOperation(USubPresenter* subPresenter);

	UFUNCTION()
	void OnMenuTabSelected(EStoreMenuState menuState);

	UFUNCTION()
	void OnBackAction();

	UFUNCTION()
	void OnAllStoreDataLoadComplete(bool success);

public:
	UStoreMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreMenuPresenter) { return 0; }
