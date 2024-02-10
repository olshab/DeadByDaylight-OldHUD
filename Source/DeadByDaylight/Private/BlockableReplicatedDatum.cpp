#include "BlockableReplicatedDatum.h"

FBlockableReplicatedDatum::FBlockableReplicatedDatum()
{
	this->Sources = TArray<TWeakObjectPtr<UObject>>();
	this->BlockedPlayersData = TArray<FPlayerBlockData>();
}
