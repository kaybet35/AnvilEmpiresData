#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigBaseMetadata.h"
#include "RigTransformMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigTransformMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
public:
    FRigTransformMetadata();
};

