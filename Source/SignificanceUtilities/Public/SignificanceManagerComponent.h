#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SignificanceManagerComponent.generated.h"

class USignificanceStrategy;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class SIGNIFICANCEUTILITIES_API USignificanceManagerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Export)
	USignificanceStrategy* _significanceStrategy;

	UPROPERTY(Replicated, Transient)
	TArray<AActor*> _dependentActorsToCheckSignficance;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USignificanceManagerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USignificanceManagerComponent) { return 0; }
