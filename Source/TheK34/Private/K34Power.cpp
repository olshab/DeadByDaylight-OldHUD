#include "K34Power.h"
#include "K34PowerChargePresentationItemProgressComponent.h"
#include "AuthoritativeActorPoolComponent.h"
#include "K34PowerChargePresentationPowerFadeComponent.h"

class AActor;
class ASlasherPlayer;

void AK34Power::OnKillerIntroCompleted() const
{

}

void AK34Power::OnFootstepAddedToPool(AActor* actor) const
{

}

ASlasherPlayer* AK34Power::GetOwningKiller() const
{
	return NULL;
}

AK34Power::AK34Power()
{
	this->_tipToeModeComponentClassToSpawn = NULL;
	this->_footstepsComponentClassToSpawn = NULL;
	this->_dodsonComponentClassToSpawn = NULL;
	this->_k34PerspectiveChangeComponentClass = NULL;
	this->_k34ScoringComponentClass = NULL;
	this->_feetActorPool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("K34FootstepPool"));
	this->_presentationPowerFadeComponent = CreateDefaultSubobject<UK34PowerChargePresentationPowerFadeComponent>(TEXT("PresentationPowerFadeComponent"));
	this->_presentationItemProgressComponent = CreateDefaultSubobject<UK34PowerChargePresentationItemProgressComponent>(TEXT("PresentationPowerProgressComponent"));
	this->_viewRotationStrategy = NULL;
}
