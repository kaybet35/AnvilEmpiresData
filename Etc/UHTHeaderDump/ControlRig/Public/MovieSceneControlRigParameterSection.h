#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Constraints -ObjectName=ConstraintAndActiveChannel -FallbackName=ConstraintAndActiveChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneConstrainedSection -FallbackName=MovieSceneConstrainedSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneParameterSection -FallbackName=MovieSceneParameterSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneTransformMask -FallbackName=MovieSceneTransformMask
#include "ChannelMapInfo.h"
#include "EnumParameterNameAndCurve.h"
#include "IntegerParameterNameAndCurve.h"
#include "SpaceControlNameAndChannel.h"
#include "Templates/SubclassOf.h"
#include "MovieSceneControlRigParameterSection.generated.h"

class UControlRig;

UCLASS(Blueprintable)
class CONTROLRIG_API UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection, public IMovieSceneConstrainedSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlRig* ControlRig;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UControlRig> ControlRigClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ControlsMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTransformMask TransformMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FChannelMapInfo> ControlChannelMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpaceControlNameAndChannel> SpaceChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstraintAndActiveChannel> ConstraintsChannels;
    
public:
    UMovieSceneControlRigParameterSection();


    // Fix for true pure virtual functions not being implemented
};

