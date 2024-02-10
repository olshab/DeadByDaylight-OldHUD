#include "DBDDesignTunables.h"
#include "EGameType.h"
#include "EGameTypeModifierName.h"

class UObject;

float UDBDDesignTunables::GetTunableValue(FName ID, bool warnIfRowMissing) const
{
	return 0.0f;
}

FString UDBDDesignTunables::GetStringGameTypeTunable(EGameType gameType, EGameTypeModifierName tunableName, const UObject* worldContextObject)
{
	return TEXT("");
}

int32 UDBDDesignTunables::GetIntGameTypeTunable(EGameType gameType, EGameTypeModifierName tunableName, const UObject* worldContextObject)
{
	return 0;
}

bool UDBDDesignTunables::GetBoolGameTypeTunable(EGameType gameType, EGameTypeModifierName tunableName, const UObject* worldContextObject)
{
	return false;
}

TArray<FString> UDBDDesignTunables::GetArrayGameTypeTunable(EGameType gameType, EGameTypeModifierName tunableName, const UObject* worldContextObject)
{
	return TArray<FString>();
}

UDBDDesignTunables::UDBDDesignTunables()
{
	this->EntityDispleasedKills = 0;
	this->BrutalKillerKills = 1;
	this->RuthlessKillerKills = 3;
	this->MercilessKillerKills = 4;
	this->WinStreakThresholdLarge = 0;
	this->WinStreakThresholdSmall = 0;
	this->MaxFearTokens = 0;
	this->QuantityOfItemsToBuyBeforeFreeBloodwebRefresh = 0;
	this->PerkLevelDefinitions = TArray<FPerkLevelDefinition>();
	this->MetaModifiers = TSet<FGameplayTag>();
	this->RangedSurvivorAuraPerceptionModifiers = TSet<FGameplayTag>();
	this->SurvivorRevelatoryAuraPerceptionModifiers = TSet<FGameplayTag>();
	this->DisruptableAuraReadingFlags = TSet<FGameplayTag>();
	this->TextDesignTunableClass = NULL;
	this->TextTunables = NULL;
	this->GameEventForwarderInfos = TArray<FGameEventForwarderInfo>();
	this->CoreUMGDesignTunableClass = NULL;
	this->CoreUMGDesignTunables = NULL;
	this->GameTypeModifierDefaults = NULL;
	this->SoftMenuCameraDesignTunable = NULL;
	this->MenuCameraDesignTunables = NULL;
	this->_overrideDefaultLobby = false;
	this->_lobbyOverrideName = NAME_None;
	this->_conspicuousActionEvents = TArray<FGameplayTag>();
}
