#pragma once

#include "CoreMinimal.h"
#include "YawAndPitchRotator_NetQuantize16.h"
#include "Components/ActorComponent.h"
#include "EInputInteractionType.h"
#include "UObject/NoExportTypes.h"
#include "DBDPlayerData.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDPlayerData : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemUseButtonStateChanged, bool, isPressed);

public:
	UPROPERTY(BlueprintAssignable)
	FOnItemUseButtonStateChanged OnItemUseButtonStateChanged;

private:
	UPROPERTY(Replicated)
	FYawAndPitchRotator_NetQuantize16 _controlRotation;

private:
	UFUNCTION(Server, Reliable)
	void Server_SetPlayerReady();

	UFUNCTION(Server, Reliable)
	void Server_SetMapSpecificComponentReady();

	UFUNCTION(Server, Reliable)
	void Server_SetKillerSpecificComponentReady();

	UFUNCTION(Server, Reliable)
	void Server_SetIntroCompleted();

	UFUNCTION(Server, Reliable)
	void Server_RenderingFeaturesCompleted();

	UFUNCTION(Server, Reliable)
	void Server_NotifyAIPawnSpawned();

	UFUNCTION(Server, Reliable)
	void Server_LoadoutSpawned();

	UFUNCTION(Server, Reliable)
	void Server_CampaignDataSynced();

public:
	UFUNCTION(BlueprintPure)
	bool IsInteractionInputPressed(EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintPure)
	FRotator GetControlRotation() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDBDPlayerData();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPlayerData) { return 0; }
