#include "SpecialEventData.h"

FSpecialEventData::FSpecialEventData()
{
	this->EventId = NAME_None;
	this->CurrencyType = ECurrencyType::None;
	this->EventName = FText::GetEmpty();
	this->EventBannerLabel = TEXT("");
	this->EventThemeLabel = TEXT("");
	this->IsTrackedOnline = false;
	this->UseSpecialEventLoadingScreen = false;
	this->Objectives = TArray<FSpecialEventObjectiveData>();
	this->LobbyName = TEXT("");
	this->ShopName = TEXT("");
	this->AdditionalLobbyNames = TArray<FString>();
	this->AudioStateSpecialEvent = NAME_None;
	this->SpawnableComponents = TArray<FSpecialBehaviourSpawnableComponent>();
	this->GameMode = ESpecialEventGameMode::Progression;
	this->UseEventEntryScreen = false;
	this->EventEntryData = FSpecialEventEntryPopupData{};
	this->EventDependency = ESpecialEventDependency::None;
	this->UseMarketDiscount = false;
	this->Bloodweb = FSpecialEventBloodwebData{};
	this->OfferingSequence = FSpecialEventOfferingSequenceData{};
	this->SplashScreen = FSpecialEventSplashScreenData{};
	this->UiTakeoverData = FSpecialEventUiTakeoverData{};
	this->CommentatorAudioData = NULL;
}
