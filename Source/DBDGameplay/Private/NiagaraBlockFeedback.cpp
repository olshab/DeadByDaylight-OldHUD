#include "NiagaraBlockFeedback.h"
#include "NiagaraComponent.h"

ANiagaraBlockFeedback::ANiagaraBlockFeedback()
{
	this->_effect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Effect"));
}
