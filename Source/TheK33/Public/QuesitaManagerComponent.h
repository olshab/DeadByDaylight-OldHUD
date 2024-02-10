#pragma once

#include "CoreMinimal.h"
#include "MapSpecificGameStateComponent.h"
#include "Templates/SubclassOf.h"
#include "QuesitaManagerComponent.generated.h"

class ALocker;
class UQuesitaClosetHideEnterInteraction;
class UAkComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UQuesitaManagerComponent : public UMapSpecificGameStateComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UQuesitaClosetHideEnterInteraction> _quesitaLockerInteraction;

	UPROPERTY(EditDefaultsOnly)
	float _globalJumpScareChanceIncrease;

	UPROPERTY(EditDefaultsOnly)
	float _globalJumpScareChanceInitialValue;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UAkComponent* _akQuesitaComponent;

private:
	UPROPERTY(ReplicatedUsing=OnRep_QuesitaInteraction, Export)
	UQuesitaClosetHideEnterInteraction* _interaction;

	UPROPERTY(ReplicatedUsing=OnRep_QuesitaLocker)
	ALocker* _locker;

	UPROPERTY(Replicated)
	bool _shouldImplementQuesitaInteraction;

private:
	UFUNCTION()
	void OnRep_QuesitaLocker(ALocker* lastLocker);

	UFUNCTION()
	void OnRep_QuesitaInteraction();

	UFUNCTION()
	void Authority_OnQuesitaInteractionDone();

	UFUNCTION()
	void Authority_OnLockerInteractorChanged(bool isLocked);

protected:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UQuesitaManagerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UQuesitaManagerComponent) { return 0; }
