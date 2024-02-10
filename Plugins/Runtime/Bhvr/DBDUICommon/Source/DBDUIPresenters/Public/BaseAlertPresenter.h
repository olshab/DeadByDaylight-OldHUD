#pragma once

#include "CoreMinimal.h"
#include "EContext.h"
#include "Presenter.h"
#include "BaseAlertPresenter.generated.h"

UCLASS(Abstract, EditInlineNew)
class DBDUIPRESENTERS_API UBaseAlertPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EContext ObservedContext;

protected:
	UFUNCTION()
	void OnContextLeave(EContext context);

	UFUNCTION()
	void OnContextEnter(EContext context);

	UFUNCTION()
	bool IsContextEntered() const;

public:
	UBaseAlertPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UBaseAlertPresenter) { return 0; }
