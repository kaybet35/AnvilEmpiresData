#pragma once
#include "CoreMinimal.h"
#include "InstanceCacheDataBase.h"
#include "Templates/SubclassOf.h"
#include "ActorInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENGINE_API FActorInstanceData : public FInstanceCacheDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
public:
    FActorInstanceData();
};

