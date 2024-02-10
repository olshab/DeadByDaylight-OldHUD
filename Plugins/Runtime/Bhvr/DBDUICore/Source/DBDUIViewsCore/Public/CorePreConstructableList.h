#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "CorePreConstructableList.generated.h"

class UCoreBaseUserWidget;
class UPanelWidget;

UCLASS()
class DBDUIVIEWSCORE_API UCorePreConstructableList : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UCoreBaseUserWidget* _owningObject;

	UPROPERTY(Transient, Export)
	TArray<UCoreBaseUserWidget*> _widgetList;

	UPROPERTY(Transient)
	TSubclassOf<UCoreBaseUserWidget> _userWidgetClass;

	UPROPERTY(Transient, Export)
	UPanelWidget* _container;

public:
	UCorePreConstructableList();
};

FORCEINLINE uint32 GetTypeHash(const UCorePreConstructableList) { return 0; }
