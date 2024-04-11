#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Constraints -ObjectName=ConstraintAndActiveChannel -FallbackName=ConstraintAndActiveChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneParameterSectionTemplate -FallbackName=MovieSceneParameterSectionTemplate
#include "EnumParameterNameAndCurve.h"
#include "IntegerParameterNameAndCurve.h"
#include "SpaceControlNameAndChannel.h"
#include "MovieSceneControlRigParameterTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnumParameterNameAndCurve> Enums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntegerParameterNameAndCurve> Integers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpaceControlNameAndChannel> Spaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstraintAndActiveChannel> Constraints;
    
public:
    CONTROLRIG_API FMovieSceneControlRigParameterTemplate();
};

