#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPtr.h"
#include "KillerSpecificComponentsData.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FKillerSpecificComponentsData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag KillerPresenceTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UActorComponent> KillerSpecificComponent;

public:
	DEADBYDAYLIGHT_API FKillerSpecificComponentsData();
};

FORCEINLINE uint32 GetTypeHash(const FKillerSpecificComponentsData) { return 0; }
