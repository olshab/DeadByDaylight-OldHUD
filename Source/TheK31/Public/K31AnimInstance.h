#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K31AnimInstance.generated.h"

class UCustomizationAnimationSelector;

UCLASS(NonTransient)
class UK31AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isInspecting;

	UPROPERTY(BlueprintReadOnly)
	bool _isDeployingADrone;

	UPROPERTY(BlueprintReadOnly)
	bool _isReceivingADronePassively;

	UPROPERTY(BlueprintReadOnly)
	bool _isRecallingADrone;

	UPROPERTY(BlueprintReadOnly)
	bool _isActivatingADrone;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UCustomizationAnimationSelector* _animationSelector;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetIsReceivingADronePassively();

	UFUNCTION(BlueprintCallable)
	void ResetIsRecallingADrone();

	UFUNCTION(BlueprintCallable)
	void ResetIsDeployingADrone();

	UFUNCTION(BlueprintCallable)
	void ResetIsActivatingADrone();

private:
	UFUNCTION()
	void OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnCustomizationAnimationMappingIDChanged(int32 animationMappingIndex);

public:
	UFUNCTION(BlueprintPure)
	int32 GetCustomizationMappingID() const;

	UFUNCTION(BlueprintPure)
	TArray<FName> GetCustoAnimTags() const;

public:
	UK31AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK31AnimInstance) { return 0; }
