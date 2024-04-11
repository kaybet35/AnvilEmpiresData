#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnitMutable.h"
#include "RigUnit_DrawContainerSetColor.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DrawContainerSetColor : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InstructionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    FRigUnit_DrawContainerSetColor();
};

