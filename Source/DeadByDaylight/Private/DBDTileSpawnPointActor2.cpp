#include "DBDTileSpawnPointActor2.h"
#include "TileSpawnPoint.h"

ADBDTileSpawnPointActor2::ADBDTileSpawnPointActor2()
{
	this->tileSpawnPointComponent = CreateDefaultSubobject<UTileSpawnPoint>(TEXT("TileSpawnPointComponent"));
}
