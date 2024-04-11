#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "CachedRigElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FCachedRigElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Key;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContainerVersion;
    
public:
    FCachedRigElement();
};

