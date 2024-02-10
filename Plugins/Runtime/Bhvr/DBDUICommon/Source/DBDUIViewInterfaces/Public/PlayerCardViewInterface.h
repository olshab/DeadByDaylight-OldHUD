#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerCardViewData.h"
#include "PlayerCardViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPlayerCardViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPlayerCardViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FPlayerCardViewData playerCardData);

};
