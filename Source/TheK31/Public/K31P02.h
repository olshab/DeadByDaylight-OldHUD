#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K31P02.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealAuraToKillerEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _revealAuraSeconds;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _screamDistance;

	UPROPERTY(Replicated)
	bool _isPerkActive;

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RevealAndMakeSurvivorScream(ACamperPlayer* survivor);

public:
	UFUNCTION(BlueprintPure)
	float GetScreamDistance() const;

	UFUNCTION(BlueprintPure)
	float GetRevealAuraSeconds() const;

	UFUNCTION(BlueprintPure)
	float GetActivePerkDurationAtLevel() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_RevealAndMakeSurvivorScream(ACamperPlayer* survivorPlayer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31P02();
};

FORCEINLINE uint32 GetTypeHash(const UK31P02) { return 0; }
