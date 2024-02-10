#pragma once

#include "CoreMinimal.h"
#include "KnownActorCallback.generated.h"

class UActorKnowledgeCollection;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FKnownActorCallback, UActorKnowledgeCollection*, knowledgeCollection, AActor*, knownActor);
