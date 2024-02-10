#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "FootstepCreatorComponent.generated.h"

class UCurveFloat;
class UFootstepManagerComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFootstepCreatorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _fadeCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _veinsCurve;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UFootstepManagerComponent> _footstepManagerComponentClass;

	UPROPERTY(EditDefaultsOnly)
	float _secondsUntilFootprintTrigger;

	UPROPERTY(EditDefaultsOnly)
	bool _canSpawnFootstepsDefaultValue;

public:
	UFootstepCreatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFootstepCreatorComponent) { return 0; }
