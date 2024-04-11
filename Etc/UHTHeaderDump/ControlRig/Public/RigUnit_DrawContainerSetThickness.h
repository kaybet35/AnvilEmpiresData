#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_DrawContainerSetThickness.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DrawContainerSetThickness : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InstructionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Thickness;
    
    FRigUnit_DrawContainerSetThickness();
};

