#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "MaterialMapForFade.generated.h"

class UMaterialInterface;

USTRUCT()
struct FMaterialMapForFade: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString OriginalMaterialPath;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UMaterialInterface> GeneratedMaterial;

	UPROPERTY(EditAnywhere)
	TMap<FGuid, bool> StaticSwitches;

	UPROPERTY(EditAnywhere)
	TMap<FGuid, FName> StaticSwitchesName;

public:
	DEADBYDAYLIGHT_API FMaterialMapForFade();
};

FORCEINLINE uint32 GetTypeHash(const FMaterialMapForFade) { return 0; }
