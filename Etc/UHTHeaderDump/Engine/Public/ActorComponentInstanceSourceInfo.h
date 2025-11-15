#pragma once
#include "CoreMinimal.h"
#include "EComponentCreationMethod.h"
#include "ActorComponentInstanceSourceInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct ENGINE_API FActorComponentInstanceSourceInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SourceComponentTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComponentCreationMethod SourceComponentCreationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceComponentTypeSerializedIndex;
    
public:
    FActorComponentInstanceSourceInfo();
};

