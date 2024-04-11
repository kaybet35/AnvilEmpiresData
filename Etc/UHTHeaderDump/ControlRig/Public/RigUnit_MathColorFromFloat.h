#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_MathColorBase.h"
#include "RigUnit_MathColorFromFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Result;
    
    FRigUnit_MathColorFromFloat();
};

