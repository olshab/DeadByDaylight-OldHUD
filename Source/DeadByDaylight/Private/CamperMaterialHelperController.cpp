#include "CamperMaterialHelperController.h"
#include "MaterialGroupCondition.h"

class UObject;

void UCamperMaterialHelperController::RemoveGroupsBySource(UObject* source)
{

}

void UCamperMaterialHelperController::AddManagedWithCondition(UObject* source, const FString& group, const FMaterialGroupCondition& condition)
{

}

void UCamperMaterialHelperController::AddManagedGroup(UObject* source, const FString& group)
{

}

UCamperMaterialHelperController::UCamperMaterialHelperController()
{
	this->_managedGroups = TArray<FManagedMaterialGroup>();
}
