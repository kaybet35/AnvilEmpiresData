#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_GetControlDrivenList.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetControlDrivenList : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Driven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_GetControlDrivenList();
};

