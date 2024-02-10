#pragma once

#include "CoreMinimal.h"
#include "CharacterCameraTag.h"
#include "RoleGenderCharacterRotation.h"
#include "GameFramework/Actor.h"
#include "NamedButton.h"
#include "ShopCameraManager.generated.h"

class ACameraActor;

UCLASS()
class DEADBYDAYLIGHT_API AShopCameraManager : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FNamedButton ReloadDBBtn;

	UPROPERTY(EditAnywhere)
	TArray<FRoleGenderCharacterRotation> CharacterRotation;

	UPROPERTY(EditAnywhere)
	TArray<FCharacterCameraTag> CatalogCharactersCamera;

	UPROPERTY(EditAnywhere)
	TArray<FCharacterCameraTag> StoryCharactersCamera;

	UPROPERTY(EditAnywhere)
	ACameraActor* HookCamera;

public:
	AShopCameraManager();
};

FORCEINLINE uint32 GetTypeHash(const AShopCameraManager) { return 0; }
