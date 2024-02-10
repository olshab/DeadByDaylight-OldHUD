#include "AggregationSettings.h"

FAggregationSettings::FAggregationSettings()
{
	this->MergeGeometries = false;
	this->EnableGeometryCulling = false;
	this->GeometryCullingPrecision = 0.0f;
	this->SubdivideGeometryBasedOnUVTiles = false;
	this->SubdivisionTileSize = 0;
	this->ProcessSelectionSetID = 0;
	this->ProcessSelectionSetName = TEXT("");
	this->KeepUnprocessedSceneMeshes = false;
}
