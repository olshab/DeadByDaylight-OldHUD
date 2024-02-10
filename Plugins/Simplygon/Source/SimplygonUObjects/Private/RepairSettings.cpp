#include "RepairSettings.h"

FRepairSettings::FRepairSettings()
{
	this->UseTJunctionRemover = false;
	this->TJuncDist = 0.0f;
	this->UseWelding = false;
	this->WeldOnlyBorderVertices = false;
	this->WeldOnlyWithinMaterial = false;
	this->WeldOnlyWithinSceneNode = false;
	this->WeldOnlyBetweenSceneNodes = false;
	this->WeldDist = 0.0f;
	this->ProgressivePasses = 0;
}
