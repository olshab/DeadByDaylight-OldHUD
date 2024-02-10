#include "ReductionSettings.h"

FReductionSettings::FReductionSettings()
{
	this->ReductionTargetTriangleRatioEnabled = false;
	this->ReductionTargetTriangleRatio = 0.0f;
	this->ReductionTargetTriangleCountEnabled = false;
	this->ReductionTargetTriangleCount = 0;
	this->ReductionTargetMaxDeviationEnabled = false;
	this->ReductionTargetMaxDeviation = 0.0f;
	this->ReductionTargetOnScreenSizeEnabled = false;
	this->ReductionTargetOnScreenSize = 0;
	this->ReductionPerformanceMode = EReductionPerformanceMode::AllFeatures;
	this->ReductionTargetStopCondition = EReductionTargetStopCondition::Any;
	this->ReductionHeuristics = EReductionHeuristics::Fast;
	this->GeometryImportance = 0.0f;
	this->MaterialImportance = 0.0f;
	this->TextureImportance = 0.0f;
	this->ShadingImportance = 0.0f;
	this->GroupImportance = 0.0f;
	this->VertexColorImportance = 0.0f;
	this->EdgeSetImportance = 0.0f;
	this->SkinningImportance = 0.0f;
	this->OutwardMoveMultiplier = 0.0f;
	this->InwardMoveMultiplier = 0.0f;
	this->MaxEdgeLength = 0.0f;
	this->KeepSymmetry = false;
	this->UseSymmetryQuadRetriangulator = false;
	this->UseAutomaticSymmetryDetection = false;
	this->SymmetryDetectionTolerance = 0.0f;
	this->SymmetryAxis = ESymmetryAxis::X;
	this->SymmetryOffset = 0.0f;
	this->CreateGeomorphGeometry = false;
	this->GenerateGeomorphData = false;
	this->DataCreationPreferences = EDataCreationPreferences::OnlyUseOriginalData;
	this->UseHighQualityNormalCalculation = false;
	this->LockGeometricBorder = false;
	this->MergeGeometries = false;
	this->AllowDegenerateTexCoords = false;
	this->ProcessSelectionSetID = 0;
	this->ProcessSelectionSetName = TEXT("");
	this->KeepUnprocessedSceneMeshes = false;
	this->PreserveQuadFlags = false;
}
