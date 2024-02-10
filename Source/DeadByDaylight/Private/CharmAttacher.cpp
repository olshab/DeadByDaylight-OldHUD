#include "CharmAttacher.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "CharmAttacherAnimationTweak.h"

class USkeletalMeshComponent;
class AActor;
class ACharm;

USkeletalMeshComponent* ACharmAttacher::GetSkeletalMeshComponentAttachedOn()
{
	return NULL;
}

ACharm* ACharmAttacher::GetAttachedCharm()
{
	return NULL;
}

FCharmAttacherAnimationTweak ACharmAttacher::GetAnimationTweak()
{
	return FCharmAttacherAnimationTweak{};
}

AActor* ACharmAttacher::GetActorAttachedOn()
{
	return NULL;
}

void ACharmAttacher::DispatchOnCharmAnimationTagsChanged()
{

}

void ACharmAttacher::BindOnCharmAnimationTagsChanged()
{

}

ACharmAttacher::ACharmAttacher()
{
	this->_chain = CreateDefaultSubobject<UDBDSkeletalMeshComponentBudgeted>(TEXT("ChainSkeletalMeshComponent"));
	this->_attachedCharm = NULL;
	this->_charmAttachSocketName = TEXT("charmAttach");
}
