#pragma once
#include "CoreMinimal.h"
#include "EComponentCreationMethod.h"
#include "InstanceCacheDataBase.h"
#include "ActorComponentInstanceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct ENGINE_API FActorComponentInstanceData : public FInstanceCacheDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SourceComponentTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComponentCreationMethod SourceComponentCreationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceComponentTypeSerializedIndex;
    
public:
    FActorComponentInstanceData();
};

