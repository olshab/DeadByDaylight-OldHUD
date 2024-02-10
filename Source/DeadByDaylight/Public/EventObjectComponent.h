#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "EventObjectComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEventObjectComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FColor _eventOutlineColour;

public:
	UEventObjectComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEventObjectComponent) { return 0; }
