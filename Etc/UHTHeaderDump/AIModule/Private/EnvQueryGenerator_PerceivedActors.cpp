#include "EnvQueryGenerator_PerceivedActors.h"
#include "EnvQueryContext_Querier.h"
#include "EnvQueryItemType_Actor.h"

UEnvQueryGenerator_PerceivedActors::UEnvQueryGenerator_PerceivedActors() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->AllowedActorClass = NULL;
    this->ListenerContext = UEnvQueryContext_Querier::StaticClass();
    this->SenseToUse = NULL;
    this->bIncludeKnownActors = true;
}


