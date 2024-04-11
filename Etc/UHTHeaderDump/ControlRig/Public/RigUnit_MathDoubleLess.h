#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleLess.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleLess : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double A;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigUnit_MathDoubleLess();
};

