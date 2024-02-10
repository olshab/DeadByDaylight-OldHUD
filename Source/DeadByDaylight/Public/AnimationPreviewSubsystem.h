#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AnimationPreviewSubsystem.generated.h"

class UKillInteractionDefinition;
class ACamperPlayer;
class ASlasherPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UAnimationPreviewSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ASlasherPlayer* _killer;

	UPROPERTY(Transient)
	ACamperPlayer* _survivor;

	UPROPERTY(Transient, Export)
	UKillInteractionDefinition* _moriKillInteraction;

private:
	UFUNCTION()
	void OnPawnClassesLoaded();

	UFUNCTION()
	void OnInteractionFinished();

	UFUNCTION()
	void OnFadeOutForClosureComplete();

	UFUNCTION()
	void OnFadeOutComplete();

	UFUNCTION()
	void OnFadeInComplete();

public:
	UFUNCTION(BlueprintPure)
	bool IsPreviewingAnimation() const;

public:
	UAnimationPreviewSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UAnimationPreviewSubsystem) { return 0; }
