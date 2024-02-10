#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "PresenterParentInfo.generated.h"

class UPresenterParentWidget;

UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class UPresenterParentInfo : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPresenterParentWidget> ParentClass;

public:
	UPresenterParentInfo();
};

FORCEINLINE uint32 GetTypeHash(const UPresenterParentInfo) { return 0; }
