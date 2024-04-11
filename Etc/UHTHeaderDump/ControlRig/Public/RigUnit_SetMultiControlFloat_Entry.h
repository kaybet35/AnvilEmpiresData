#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetMultiControlFloat_Entry.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetMultiControlFloat_Entry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    FRigUnit_SetMultiControlFloat_Entry();
};

