#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_PerceivedActors.generated.h"

class AActor;
class UAISense;
class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AllowedActorClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> ListenerContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense> SenseToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeKnownActors;
    
public:
    UEnvQueryGenerator_PerceivedActors();

};

