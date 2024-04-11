#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetMultiControlBool_Entry.h"
#include "RigUnit_SetMultiControlBool.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetMultiControlBool : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_SetMultiControlBool_Entry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCachedRigElement> CachedControlIndices;
    
    FRigUnit_SetMultiControlBool();
};

