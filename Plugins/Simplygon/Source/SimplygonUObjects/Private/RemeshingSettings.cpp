#include "RemeshingSettings.h"

FRemeshingSettings::FRemeshingSettings()
{
	this->OnScreenSize = 0;
	this->HoleFilling = EHoleFilling::Disabled;
	this->RemeshingMode = ERemeshingMode::Outside;
	this->SurfaceTransferMode = ESurfaceTransferMode::Fast;
	this->HardEdgeAngle = 0.0f;
	this->TransferNormals = false;
	this->TransferColors = false;
	this->PopulateAttributeTessellationDisplacement = false;
	this->GeometricalAccuracy = 0.0f;
	this->TopologicalAccuracy = 0.0f;
	this->RemeshingModeManualPositionX = 0.0f;
	this->RemeshingModeManualPositionY = 0.0f;
	this->RemeshingModeManualPositionZ = 0.0f;
	this->ProcessSelectionSetName = TEXT("");
	this->ProcessSelectionSetID = 0;
	this->KeepUnprocessedSceneMeshes = false;
	this->ForceSoftEdgesWithinTextureCharts = false;
}
