#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathBase.h"
#include "RigUnit_NoiseVector2.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_NoiseVector2 : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Frequency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Minimum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Maximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Time;
    
    FRigUnit_NoiseVector2();
};

