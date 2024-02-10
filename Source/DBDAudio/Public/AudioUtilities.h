#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnAkBankCallback.h"
#include "AudioUtilities.generated.h"

class UAkAudioBank;
class UObject;
class UAkComponent;
class UAkAudioEvent;

UCLASS(BlueprintType)
class DBDAUDIO_API UAudioUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	static void PostEventByNameOnComponent(UAkComponent* component, const FString& audioEventName);

	UFUNCTION(BlueprintCallable)
	static void PostAkAudioEvent(UAkAudioEvent* audioEvent);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	static void DBD_UnloadAudioBank(UAkAudioBank* bank, const UObject* worldContextObject);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	static void DBD_LoadAudioBankWithCallback(UAkAudioBank* bank, const FOnAkBankCallback& bankLoadedCallback, const UObject* worldContextObject);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	static void DBD_LoadAudioBankPersistentWithCallback(UAkAudioBank* bank, const FOnAkBankCallback& bankLoadedCallback, const UObject* worldContextObject);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	static void DBD_LoadAudioBankPersistent(UAkAudioBank* bank, const UObject* worldContextObject);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	static void DBD_LoadAudioBank(UAkAudioBank* bank, const UObject* worldContextObject);

public:
	UAudioUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UAudioUtilities) { return 0; }
