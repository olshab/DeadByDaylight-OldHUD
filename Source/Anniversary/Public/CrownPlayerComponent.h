#pragma once

#include "CoreMinimal.h"
#include "AnniversaryPlayerComponentInterface.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "TagStateBool.h"
#include "CrownPlayerComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ANNIVERSARY_API UCrownPlayerComponent : public USceneComponent, public IAnniversaryPlayerComponentInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _crownVFXParticleDeactivateTags;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _unhookGameEvents;

	UPROPERTY(Transient)
	FTagStateBool _isCrownEventActive;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void Cosmetic_SetVFXParticlesVisibility(bool isVisible);

public:
	UCrownPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCrownPlayerComponent) { return 0; }
