#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "K34Power.generated.h"

class UK34TipToeModeComponent;
class UAuthoritativeActorPoolComponent;
class UK34DodsonComponent;
class UK34PowerChargePresentationItemProgressComponent;
class UK34PerspectiveChangeComponent;
class UK34FootstepsComponent;
class UK34ScoringComponent;
class UK34PowerChargePresentationPowerFadeComponent;
class UTurnLimitationStrategy;
class AActor;
class ASlasherPlayer;

UCLASS()
class AK34Power : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK34TipToeModeComponent> _tipToeModeComponentClassToSpawn;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK34FootstepsComponent> _footstepsComponentClassToSpawn;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK34DodsonComponent> _dodsonComponentClassToSpawn;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK34PerspectiveChangeComponent> _k34PerspectiveChangeComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK34ScoringComponent> _k34ScoringComponentClass;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UAuthoritativeActorPoolComponent* _feetActorPool;

	UPROPERTY(EditDefaultsOnly, Export)
	UK34PowerChargePresentationPowerFadeComponent* _presentationPowerFadeComponent;

	UPROPERTY(EditDefaultsOnly, Export)
	UK34PowerChargePresentationItemProgressComponent* _presentationItemProgressComponent;

	UPROPERTY(Transient)
	UTurnLimitationStrategy* _viewRotationStrategy;

public:
	UFUNCTION()
	void OnKillerIntroCompleted() const;

private:
	UFUNCTION()
	void OnFootstepAddedToPool(AActor* actor) const;

protected:
	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetOwningKiller() const;

public:
	AK34Power();
};

FORCEINLINE uint32 GetTypeHash(const AK34Power) { return 0; }
