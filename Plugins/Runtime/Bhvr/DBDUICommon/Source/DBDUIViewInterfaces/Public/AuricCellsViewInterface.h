#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AuricCellsViewData.h"
#include "AuricCellsViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UAuricCellsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IAuricCellsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FAuricCellsViewData& viewData);

};
