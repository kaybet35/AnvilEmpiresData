#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetMultiControlInteger_Entry.h"
#include "RigUnit_SetMultiControlInteger.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetMultiControlInteger : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_SetMultiControlInteger_Entry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCachedRigElement> CachedControlIndices;
    
    FRigUnit_SetMultiControlInteger();
};

