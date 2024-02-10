#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InvitationPlayerComponent.h"
#include "InvitationSurvivorComponent.generated.h"

class UInteractionDefinition;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UInvitationSurvivorComponent : public UInvitationPlayerComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _reverseBamboozleInteraction;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _fragilePalletInteraction;

	UPROPERTY(Replicated, meta=(BindWidgetOptional))
	UInteractionDefinition* _reverseBamboozle;

	UPROPERTY(Replicated, meta=(BindWidgetOptional))
	UInteractionDefinition* _fragilePallet;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInvitationSurvivorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationSurvivorComponent) { return 0; }
