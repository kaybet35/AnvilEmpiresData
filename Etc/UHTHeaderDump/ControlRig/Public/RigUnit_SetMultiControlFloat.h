#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetMultiControlFloat_Entry.h"
#include "RigUnit_SetMultiControlFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetMultiControlFloat : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_SetMultiControlFloat_Entry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCachedRigElement> CachedControlIndices;
    
    FRigUnit_SetMultiControlFloat();
};

