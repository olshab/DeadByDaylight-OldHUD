#pragma once

#include "CoreMinimal.h"
#include "GeneratorToolboxRepairInteraction.h"
#include "InstallBrandNewPartInteraction.generated.h"

class ACollectable;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInstallBrandNewPartInteraction : public UGeneratorToolboxRepairInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	ACollectable* _toolbox;

	UPROPERTY(EditDefaultsOnly)
	float _permanentProgressPercent;

	UPROPERTY(EditDefaultsOnly)
	float _existingSkillCheckDelay;

	UPROPERTY(EditDefaultsOnly)
	FText _repairToolboxText;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnTriggerSkillCheck(ADBDPlayer* player);

public:
	UInstallBrandNewPartInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UInstallBrandNewPartInteraction) { return 0; }
