#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MarionetteMeshData.h"
#include "Templates/SubclassOf.h"
#include "Anniversary2023Marionette.generated.h"

class URespawnableComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class ANNIVERSARY2023_API AAnniversary2023Marionette : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	URespawnableComponent* _respawnableComponent;

	UPROPERTY(BlueprintReadWrite, Transient)
	AActor* _dancerMask1;

	UPROPERTY(BlueprintReadWrite, Transient)
	AActor* _dancerMask2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _rotationRate;

private:
	UPROPERTY(EditAnywhere, Export)
	USphereComponent* _playerTracker;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _dancingCharacter;

	UPROPERTY(EditDefaultsOnly)
	TArray<FMarionetteMeshData> _potentialMarionetteMeshes;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<AActor>> _potentialMasks;

	UPROPERTY(EditDefaultsOnly)
	FName _maskLSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _maskRSocketName;

public:
	AAnniversary2023Marionette();
};

FORCEINLINE uint32 GetTypeHash(const AAnniversary2023Marionette) { return 0; }
