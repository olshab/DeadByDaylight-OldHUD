#include "K33TunnelBlockSpawnDatum.h"

FK33TunnelBlockSpawnDatum::FK33TunnelBlockSpawnDatum()
{
	this->_worldRotation = FRotator{};
	this->_blockType = EK33TunnelBlockType::None;
	this->_gridInfo = FK33TunnelGridCellData{};
}
