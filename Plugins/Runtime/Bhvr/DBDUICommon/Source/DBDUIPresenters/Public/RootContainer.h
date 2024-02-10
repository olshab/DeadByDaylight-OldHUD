#pragma once

#include "CoreMinimal.h"
#include "UIComponent.h"
#include "Templates/SubclassOf.h"
#include "EGameLayer.h"
#include "RootContainer.generated.h"

class UUserWidget;
class UPresenterParentWidget;

UCLASS(BlueprintType, EditInlineNew)
class DBDUIPRESENTERS_API URootContainer : public UUIComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EGameLayer GameLayer;

	UPROPERTY(EditAnywhere)
	float UnfocusedOpacity;

private:
	UPROPERTY(Transient, Export)
	TMap<TSubclassOf<UPresenterParentWidget>, UPresenterParentWidget*> _presenterParentWidgets;

	UPROPERTY(Transient, Export)
	UUserWidget* _rootWidget;

public:
	URootContainer();
};

FORCEINLINE uint32 GetTypeHash(const URootContainer) { return 0; }
