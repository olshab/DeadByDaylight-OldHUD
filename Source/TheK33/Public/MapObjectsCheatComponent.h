#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MapObjectsCheatComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UMapObjectsCheatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(Exec)
	void DBD_ShowQuesita(bool enable);

	UFUNCTION(Exec)
	void DBD_ShowFatherKey(bool enable);

public:
	UMapObjectsCheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMapObjectsCheatComponent) { return 0; }
