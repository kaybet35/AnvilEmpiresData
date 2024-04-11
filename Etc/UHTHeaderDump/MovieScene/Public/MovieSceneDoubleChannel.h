#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveExtrapolation -FallbackName=ERichCurveExtrapolation
#include "MovieSceneChannel.h"
#include "MovieSceneDoubleValue.h"
#include "MovieSceneKeyHandleMap.h"
#include "MovieSceneDoubleChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneDoubleChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneDoubleValue> Values;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieSceneKeyHandleMap KeyHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate TickResolution;
    
public:
    FMovieSceneDoubleChannel();
};

