#pragma once

#include "CoreMinimal.h"
#include "DBDBasePlayer.h"
#include "K25Husk.generated.h"

class UCustomizedSkeletalMesh;
class UAnimationMontageSlave;

UCLASS()
class AK25Husk : public ADBDBasePlayer
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UCustomizedSkeletalMesh* _customizedSkeletalMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UAnimationMontageSlave* _montageFollower;

	UPROPERTY(EditDefaultsOnly)
	int32 _k25CharacterOverrideID;

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StartDisappearing();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StartAppearing();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_HideHusk();

public:
	AK25Husk();
};

FORCEINLINE uint32 GetTypeHash(const AK25Husk) { return 0; }
