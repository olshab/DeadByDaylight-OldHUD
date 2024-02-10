#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ManagedMaterialGroup.h"
#include "MaterialGroupCondition.h"
#include "CamperMaterialHelperController.generated.h"

class UObject;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperMaterialHelperController : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<FManagedMaterialGroup> _managedGroups;

public:
	UFUNCTION(BlueprintCallable)
	void RemoveGroupsBySource(UObject* source);

	UFUNCTION(BlueprintCallable)
	void AddManagedWithCondition(UObject* source, const FString& group, const FMaterialGroupCondition& condition);

	UFUNCTION(BlueprintCallable)
	void AddManagedGroup(UObject* source, const FString& group);

public:
	UCamperMaterialHelperController();
};

FORCEINLINE uint32 GetTypeHash(const UCamperMaterialHelperController) { return 0; }
