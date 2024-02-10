#include "ItemVfx.h"
#include "Engine/EngineTypes.h"
#include "NiagaraCommon.h"
#include "UObject/NoExportTypes.h"

class UNiagaraComponent;
class UNiagaraSystem;
class USceneComponent;
class UParticleSystemComponent;

UNiagaraComponent* AItemVfx::SpawnNiagaraSystemAttached(UNiagaraSystem* systemTemplate, USceneComponent* attachToComponent, FName attachPointName, TEnumAsByte<EAttachLocation::Type> locationType, bool autoDestroy, ENCPoolMethod poolingMethod, const FVector& location, const FRotator& rotation, const FVector& scale, bool autoActivate, bool preCullCheck, bool absoluteRotation, bool hideInFPV)
{
	return NULL;
}

void AItemVfx::ClearParticleSystems()
{

}

void AItemVfx::AddParticleSystemComponent(UParticleSystemComponent* particleSystemComponent)
{

}

void AItemVfx::AddNiagaraComponent(UNiagaraComponent* niagaraComponent)
{

}

AItemVfx::AItemVfx()
{
	this->_particleSystems = TArray<UFXSystemComponent*>();
}
