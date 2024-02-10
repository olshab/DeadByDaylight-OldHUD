#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "KillerSpecificSurvivorAnimationPicker.generated.h"

class UAnimInstance;
class UDataTable;

UCLASS(meta=(BlueprintSpawnableComponent))
class UKillerSpecificSurvivorAnimationPicker : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TSubclassOf<UAnimInstance> _killerSpecificAnimInstanceClass;

	UPROPERTY(EditDefaultsOnly)
	UDataTable* _killerSpecificSurvivorAnimationDB;

public:
	UKillerSpecificSurvivorAnimationPicker();
};

FORCEINLINE uint32 GetTypeHash(const UKillerSpecificSurvivorAnimationPicker) { return 0; }
