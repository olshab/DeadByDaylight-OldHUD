#pragma once

#include "CoreMinimal.h"
#include "LockedFeatureElementViewInterface.h"
#include "DBDFeatureLockProgress.h"
#include "CoreButtonWidget.h"
#include "EDBDFeatureType.h"
#include "CoreLockedFeatureButtonWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreLockedFeatureButtonWidget : public UCoreButtonWidget, public ILockedFeatureElementViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isFeatureGatingEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EDBDFeatureType _lockedFeatureType;

	UPROPERTY(BlueprintReadOnly)
	FDBDFeatureLockProgress _lockedFeatureData;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateLockedFeatureVisuals(bool isLockedFeature);

	UFUNCTION(BlueprintPure)
	bool HasValidLockedFeatureData() const;

public:
	UCoreLockedFeatureButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreLockedFeatureButtonWidget) { return 0; }
