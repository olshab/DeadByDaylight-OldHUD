#pragma once

#include "CoreMinimal.h"
#include "CoreButtonSelector.h"
#include "Templates/SubclassOf.h"
#include "EPlayerRole.h"
#include "CoreStoreFeaturedCharacterContainerWidget.generated.h"

class UHorizontalBox;
class UCoreStoreFeaturedCharacterWidget;

UCLASS(EditInlineNew)
class UCoreStoreFeaturedCharacterContainerWidget : public UCoreButtonSelector
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<UCoreStoreFeaturedCharacterWidget> CharacterTileClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* Root;

private:
	UFUNCTION()
	void OnMoveToCharactersBioPageRequested(int32 characterIndex, EPlayerRole playerRole);

public:
	UCoreStoreFeaturedCharacterContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedCharacterContainerWidget) { return 0; }
