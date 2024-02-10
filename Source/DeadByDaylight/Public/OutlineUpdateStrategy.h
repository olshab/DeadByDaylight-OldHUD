#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "OutlineUpdateStrategy.generated.h"

class UDBDOutlineComponent;

UCLASS(BlueprintType, Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOutlineUpdateStrategy : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _requiredPlayerStateTags;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _preventativePlayerStateTags;

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

public:
	UOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UOutlineUpdateStrategy) { return 0; }
