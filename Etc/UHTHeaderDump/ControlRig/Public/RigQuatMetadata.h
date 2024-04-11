#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigBaseMetadata.h"
#include "RigQuatMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigQuatMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Value;
    
public:
    FRigQuatMetadata();
};

