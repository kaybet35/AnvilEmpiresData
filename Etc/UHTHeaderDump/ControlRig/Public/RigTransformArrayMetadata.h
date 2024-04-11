#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigBaseMetadata.h"
#include "RigTransformArrayMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigTransformArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Value;
    
public:
    FRigTransformArrayMetadata();
};

