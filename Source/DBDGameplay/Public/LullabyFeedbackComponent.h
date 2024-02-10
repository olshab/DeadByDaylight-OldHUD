#pragma once

#include "CoreMinimal.h"
#include "LullabyKillerData.h"
#include "Components/ActorComponent.h"
#include "LullabyFeedbackComponent.generated.h"

class ASlasherPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API ULullabyFeedbackComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FLullabyKillerData> _killersData;

private:
	UFUNCTION()
	void OnSlasherSet(ASlasherPlayer* killer);

public:
	ULullabyFeedbackComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULullabyFeedbackComponent) { return 0; }
