#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnitMutable.h"
#include "RigUnit_DrawContainerSetTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DrawContainerSetTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InstructionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    FRigUnit_DrawContainerSetTransform();
};

