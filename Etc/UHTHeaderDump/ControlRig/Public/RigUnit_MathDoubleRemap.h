#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleRemap.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleRemap : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SourceMinimum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SourceMaximum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TargetMinimum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TargetMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClamp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Result;
    
    FRigUnit_MathDoubleRemap();
};

