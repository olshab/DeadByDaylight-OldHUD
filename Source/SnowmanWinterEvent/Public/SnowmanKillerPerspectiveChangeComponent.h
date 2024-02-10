#pragma once

#include "CoreMinimal.h"
#include "PlayerPerspectiveChangeComponent.h"
#include "PlayerPerspectiveChangeTargetData.h"
#include "Templates/SubclassOf.h"
#include "SnowmanKillerPerspectiveChangeComponent.generated.h"

class UDBDSpringArmComponent;
class ASlasherPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class SNOWMANWINTEREVENT_API USnowmanKillerPerspectiveChangeComponent : public UPlayerPerspectiveChangeComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FPlayerPerspectiveChangeTargetData _killerViewPerspectiveChangeTargetData;

	UPROPERTY(EditDefaultsOnly)
	FPlayerPerspectiveChangeTargetData _thirdPersonSnowmanKillerPerspectiveChangeTargetData;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDBDSpringArmComponent> _springArmClass;

	UPROPERTY(EditDefaultsOnly)
	float _pitchLimitLower;

	UPROPERTY(EditDefaultsOnly)
	float _pitchLimitUpper;

	UPROPERTY(Replicated, Transient, Export)
	UDBDSpringArmComponent* _snowmanSpringArm;

private:
	UFUNCTION()
	void SetFirstPersonTargetData(const ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USnowmanKillerPerspectiveChangeComponent();
};

FORCEINLINE uint32 GetTypeHash(const USnowmanKillerPerspectiveChangeComponent) { return 0; }
