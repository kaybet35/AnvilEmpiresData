#pragma once
#include "CoreMinimal.h"
#include "RigElementWeight.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigElementWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    FRigElementWeight();
};

