#include "BoneSettings.h"

FBoneSettings::FBoneSettings()
{
	this->UseBoneReducer = false;
	this->RemoveUnusedBones = false;
	this->LimitBonesPerVertex = false;
	this->MaxBonePerVertex = 0;
	this->BoneReductionTargetBoneRatioEnabled = false;
	this->BoneReductionTargetBoneRatio = 0.0f;
	this->BoneReductionTargetBoneCountEnabled = false;
	this->BoneReductionTargetBoneCount = 0;
	this->BoneReductionTargetMaxDeviationEnabled = false;
	this->BoneReductionTargetMaxDeviation = 0.0f;
	this->BoneReductionTargetOnScreenSizeEnabled = false;
	this->BoneReductionTargetOnScreenSize = 0;
	this->BoneReductionTargetStopCondition = EBoneReductionTargetStopCondition::Any;
	this->LockBoneSelectionSetID = 0;
	this->LockBoneSelectionSetName = TEXT("");
	this->RemoveBoneSelectionSetID = 0;
	this->RemoveBoneSelectionSetName = TEXT("");
}
