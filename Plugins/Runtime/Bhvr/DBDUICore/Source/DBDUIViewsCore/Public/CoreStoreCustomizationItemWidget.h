#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "CoreStoreItemWidget.h"
#include "CoreStoreCustomizationItemWidget.generated.h"

class UStoreCustomizationItemViewData;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCustomizationItemWidget : public UCoreStoreItemWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	UStoreCustomizationItemViewData* _data;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetStoreCustomizationItemData(UStoreCustomizationItemViewData* data);

	UFUNCTION(BlueprintPure)
	FStoreRedirectionData MakeStoreRedirectionData() const;

public:
	UCoreStoreCustomizationItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCustomizationItemWidget) { return 0; }
