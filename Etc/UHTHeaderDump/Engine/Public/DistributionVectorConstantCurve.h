#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
#include "DistributionVector.h"
#include "EDistributionVectorLockFlags.h"
#include "DistributionVectorConstantCurve.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionVectorConstantCurve : public UDistributionVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveVector ConstantCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockAxes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
    
    UDistributionVectorConstantCurve();

};

