#include "S3GameConfigsData.h"

FS3GameConfigsData::FS3GameConfigsData()
{
	this->Analytics = FS3AnalyticsConfig{};
	this->Archives = FArchivesConfig{};
	this->BalanceTool = FBalanceToolGameConfig{};
	this->BalanceTool_IsSet = false;
	this->BeginnerTutorialLevel = FS3BeginnerTutorialLevelConfig{};
	this->BotMatch = FBotMatchConfig{};
	this->DedicatedServer = FDedicatedServerGameConfig{};
	this->Dlc = FS3DLCConfig{};
	this->EnableNetAsyncLoading = false;
	this->EnablePlayersConnectionStatus = false;
	this->EnablePlayerIdInSurvey = false;
	this->EnableBotsInCustomMatch = false;
	this->DisableNavigationDuringMatchmaking = false;
	this->RTMTimeoutThreshold = 0.0f;
	this->GameLoadingTimeout = 0.0f;
	this->EnableHapticVibration = false;
	this->EnableWinGDKAccountMismatchPopup = false;
	this->EnableAntiMoveHack = false;
	this->EnablePostIISCinematic = false;
	this->EnablePlayStationTrophiesIISSync = false;
	this->CrossPromoManagerPlatforms = TMap<FString, bool>();
	this->CrossPromoManagerPlatforms_IsSet = false;
	this->FriendsList = FS3FriendsListGameConfig{};
	this->HitValidation = FHitValidationGameConfig{};
	this->AnimBudgeter = FAnimBudgeterGameConfig{};
	this->AnimBudgeter_IsSet = false;
	this->Jwt = FJwtGameConfig{};
	this->Match = FS3MatchConfig{};
	this->HangTimes = TArray<FHangTimesPerStep>();
	this->MatchmakingCrossplayPlatforms = TMap<FString, bool>();
	this->MirrorsDefaultRetryPolicy = FS3MirrorsDefaultRetryPolicyConfig{};
	this->Online = FS3OnlineConfig{};
	this->Security = FS3SecurityConfig{};
	this->KrakenSdkValidation = FS3KrakenSdkValidationConfig{};
	this->ContentVersion = FS3ContentVersionConfig{};
	this->DisconnectionBotReplacement = FS3DisconnectionBotReplacementConfig{};
	this->SocialCrossfriendsPlatforms = TMap<FString, bool>();
	this->SocialCrossprogressionPlatforms = TMap<FString, bool>();
	this->EnableMoriPreviewButton = false;
	this->EnableAntiCamping = false;
	this->EnableConsumableQueryFromKraken = false;
	this->EnableLimitRegressionEvents = false;
	this->EnableConsoleSuspendSave = false;
	this->EnableLobbyLeaveSave = false;
}
