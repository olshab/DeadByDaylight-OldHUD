#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Entity.generated.h"

class UCurveFloat;
class UMaterialHelper;
class USkeletalMeshComponent;
class AMeatHook;

UCLASS()
class DEADBYDAYLIGHT_API AEntity : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _dissolveCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _revealsCurve;

	UPROPERTY(BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UMaterialHelper* _materialHelper;

	UPROPERTY(BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _skeletalMesh;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetAnimationStrugglePercent(float percent);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetAnimationIsStruggling(bool isStruggling);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnReactionStart();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitEntity(AMeatHook* meatHook);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void HideEntity();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void CompleteSacrifice(bool isBasementHook);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ChangeToStruggleState();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ChangeToSacrificeState();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ChangeToIdleState();

public:
	AEntity();
};

FORCEINLINE uint32 GetTypeHash(const AEntity) { return 0; }
