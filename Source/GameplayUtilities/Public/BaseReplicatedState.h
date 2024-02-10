#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BaseReplicatedState.generated.h"

class UStateController;

UCLASS(Abstract)
class GAMEPLAYUTILITIES_API UBaseReplicatedState : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _id;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UStateController* _stateController;

public:
	UBaseReplicatedState();
};

FORCEINLINE uint32 GetTypeHash(const UBaseReplicatedState) { return 0; }
