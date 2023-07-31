#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "KillerStatusDataMapping.generated.h"

USTRUCT()
struct DBDUIVIEWINTERFACES_API FKillerStatusDataMapping : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 CharacterId;

    UPROPERTY(EditAnywhere)
    FText Description;

    FKillerStatusDataMapping();
};

