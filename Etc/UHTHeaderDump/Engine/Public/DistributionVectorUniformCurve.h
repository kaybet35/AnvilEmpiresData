#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveTwoVectors -FallbackName=InterpCurveTwoVectors
#include "DistributionVector.h"
#include "EDistributionVectorLockFlags.h"
#include "EDistributionVectorMirrorFlags.h"
#include "DistributionVectorUniformCurve.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionVectorUniformCurve : public UDistributionVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveTwoVectors ConstantCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockAxes1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockAxes2: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseExtremes: 1;
    
    UDistributionVectorUniformCurve();

};

