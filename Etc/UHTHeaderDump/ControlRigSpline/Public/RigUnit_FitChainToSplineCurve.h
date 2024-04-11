#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=EControlRigAnimEasingType -FallbackName=EControlRigAnimEasingType
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=EControlRigCurveAlignment -FallbackName=EControlRigCurveAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigElementKeyCollection -FallbackName=RigElementKeyCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_FitChainToCurve_DebugSettings -FallbackName=RigUnit_FitChainToCurve_DebugSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_FitChainToCurve_Rotation -FallbackName=RigUnit_FitChainToCurve_Rotation
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_FitChainToCurve_WorkData -FallbackName=RigUnit_FitChainToCurve_WorkData
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_HighlevelBaseMutable -FallbackName=RigUnit_HighlevelBaseMutable
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ControlRigSpline.h"
#include "RigUnit_FitChainToSplineCurve.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIGSPLINE_API FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigSpline Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlRigCurveAlignment Alignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Maximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SamplingPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PrimaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SecondaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PoleVectorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlRigAnimEasingType RotationEaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigUnit_FitChainToCurve_WorkData WorkData;
    
    FRigUnit_FitChainToSplineCurve();
};

