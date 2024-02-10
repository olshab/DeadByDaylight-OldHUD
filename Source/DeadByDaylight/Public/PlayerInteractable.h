#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "PlayerInteractable.generated.h"

class USceneComponent;
class ADBDPlayer;
class UPrimitiveComponent;
class UInteractor;

UCLASS()
class DEADBYDAYLIGHT_API APlayerInteractable : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UPrimitiveComponent* _mainInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UInteractor* _selfInteractionsInteractor;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	USceneComponent* _rootComponent;

protected:
	UFUNCTION(BlueprintNativeEvent)
	void InitInteractable(ADBDPlayer* player);

public:
	APlayerInteractable();
};

FORCEINLINE uint32 GetTypeHash(const APlayerInteractable) { return 0; }
