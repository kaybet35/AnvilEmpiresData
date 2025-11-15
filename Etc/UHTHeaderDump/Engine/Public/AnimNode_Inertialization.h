#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "InertializationRequest.h"
#include "PoseLink.h"
#include "AnimNode_Inertialization.generated.h"

class UBlendProfile;

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_Inertialization : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Source;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* DefaultBlendProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FilteredCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInertializationRequest> RequestQueue;
    
public:
    FAnimNode_Inertialization();
};

