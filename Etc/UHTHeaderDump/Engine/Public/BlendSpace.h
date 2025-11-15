#pragma once
#include "CoreMinimal.h"
#include "AnimationAsset.h"
#include "BlendParameter.h"
#include "BlendSample.h"
#include "BlendSpaceData.h"
#include "EBlendSpaceAxis.h"
#include "ENotifyTriggerMode.h"
#include "EPreferredTriangulationDirection.h"
#include "EditorElement.h"
#include "InterpolationParameter.h"
#include "PerBoneInterpolation.h"
#include "BlendSpace.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlendSpace : public UAnimationAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContainsRotationOffsetMeshSpaceSamples;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpolationParameter InterpolationParam[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetWeightInterpolationSpeedPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetWeightInterpolationEaseInOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMeshSpaceBlending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENotifyTriggerMode::Type> NotifyTriggerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterpolateUsingGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreferredTriangulationDirection PreferredTriangulationDirection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerBoneInterpolation> PerBoneBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleIndexWithMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlendSample> SampleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditorElement> GridSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendSpaceData BlendSpaceData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendParameter BlendParameters[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBlendSpaceAxis> AxisToScaleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DimensionIndices;
    
public:
    UBlendSpace();

};

