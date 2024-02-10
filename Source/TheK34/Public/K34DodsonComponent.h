#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "K34DodsonComponent.generated.h"

class AK34Dodson;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK34DodsonComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK34Dodson> _dodsonActorClass;

	UPROPERTY(EditDefaultsOnly)
	FVector _dodsonActorOffsetOnK34;

	UPROPERTY(Transient)
	AK34Dodson* _dodsonActor;

	UPROPERTY(ReplicatedUsing=OnRep_IsDodson, Transient)
	bool _isDodson;

private:
	UFUNCTION()
	void OnRep_IsDodson();

public:
	UFUNCTION(BlueprintCallable)
	bool IsDodson();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK34DodsonComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34DodsonComponent) { return 0; }
