#pragma once
#include "CoreMinimal.h"
#include "MovieSceneControlRigSpaceChannel.h"
#include "SpaceControlNameAndChannel.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FSpaceControlNameAndChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControlName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneControlRigSpaceChannel SpaceCurve;
    
    FSpaceControlNameAndChannel();
};

