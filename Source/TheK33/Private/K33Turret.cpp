#include "K33Turret.h"
#include "SpherePlayerOverlapComponent.h"
#include "DBDNavModifierComponent.h"
#include "Components/BoxComponent.h"
#include "CollectItemInteraction.h"
#include "AuthoritativePoolableActorComponent.h"
#include "DropItemInteraction.h"
#include "Components/SceneComponent.h"
#include "Interactor.h"
#include "DBDOutlineComponent.h"
#include "MaterialHelper.h"
#include "K33TurretOutlineUpdateStrategy.h"
#include "ChargeableComponent.h"
#include "StateController.h"
#include "MontagePlayer.h"
#include "AnimationMontageSlave.h"
#include "K33TurretDangerPredictionComponent.h"

AK33Turret::AK33Turret()
{
	this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->_interactableZone = CreateDefaultSubobject<USpherePlayerOverlapComponent>(TEXT("InteractableZone"));
	this->_turretInteractor = CreateDefaultSubobject<UInteractor>(TEXT("TurretInteractor"));
	this->_dropInteraction = CreateDefaultSubobject<UDropItemInteraction>(TEXT("DropItemInteraction"));
	this->_collectInteraction = CreateDefaultSubobject<UCollectItemInteraction>(TEXT("CollectItemInteraction"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("DBDOutlineComponent"));
	this->_materialHelper = CreateDefaultSubobject<UMaterialHelper>(TEXT("MaterialHelperComponent"));
	this->_turretOutlineUpdateStrategy = CreateDefaultSubobject<UK33TurretOutlineUpdateStrategy>(TEXT("K33TurretOutlineUpdateStrategy"));
	this->_turretRepairChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("TurretRepairChargeable"));
	this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("AnimMontagePlayer"));
	this->_montageFollower = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("MontageSlave"));
	this->_turretCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TurretCollision"));
	this->_tailAttackCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TailAttackCollision"));
	this->_dangerPredictionComponent = CreateDefaultSubobject<UK33TurretDangerPredictionComponent>(TEXT("K33TurretDangerPredictionComponent"));
	this->_navModifierComponent = CreateDefaultSubobject<UDBDNavModifierComponent>(TEXT("Nav Modifier Component"));
	this->_laserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
	this->_poolableActorComponent = CreateDefaultSubobject<UAuthoritativePoolableActorComponent>(TEXT("PoolableActorComponent"));
	this->_turretStateController = CreateDefaultSubobject<UStateController>(TEXT("TurretStateController"));
	this->_detectionSocketName = NAME_None;
}
