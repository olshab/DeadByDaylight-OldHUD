#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "ActorPoolComponent.generated.h"

class AActor;

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UActorPoolComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> _actorClass;

	UPROPERTY(EditAnywhere)
	int32 _size;

protected:
	UFUNCTION()
	void OnActorsInPoolAcquiredChanged(bool acquired);

private:
	UFUNCTION()
	void OnActorDestroyed(AActor* destroyedActor);

public:
	UActorPoolComponent();
};

FORCEINLINE uint32 GetTypeHash(const UActorPoolComponent) { return 0; }
