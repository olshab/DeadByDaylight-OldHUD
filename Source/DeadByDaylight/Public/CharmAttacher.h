#pragma once

#include "CoreMinimal.h"
#include "OnCharmAnimationTagsChanged.h"
#include "OnAttachedOnActor.h"
#include "GameFramework/Actor.h"
#include "CharmAttacherAnimationTweak.h"
#include "CharmAttacher.generated.h"

class ACharm;
class UDBDSkeletalMeshComponentBudgeted;
class USkeletalMeshComponent;

UCLASS()
class ACharmAttacher : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnAttachedOnActor OnAttachedOnActor;

	UPROPERTY(BlueprintAssignable)
	FOnCharmAnimationTagsChanged OnCharmAnimationTagsChanged;

private:
	UPROPERTY(VisibleAnywhere, Export)
	UDBDSkeletalMeshComponentBudgeted* _chain;

	UPROPERTY(Transient)
	ACharm* _attachedCharm;

	UPROPERTY(EditDefaultsOnly)
	FName _charmAttachSocketName;

public:
	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetSkeletalMeshComponentAttachedOn();

	UFUNCTION(BlueprintPure)
	ACharm* GetAttachedCharm();

	UFUNCTION(BlueprintPure)
	FCharmAttacherAnimationTweak GetAnimationTweak();

	UFUNCTION(BlueprintPure)
	AActor* GetActorAttachedOn();

private:
	UFUNCTION()
	void DispatchOnCharmAnimationTagsChanged();

	UFUNCTION()
	void BindOnCharmAnimationTagsChanged();

public:
	ACharmAttacher();
};

FORCEINLINE uint32 GetTypeHash(const ACharmAttacher) { return 0; }
