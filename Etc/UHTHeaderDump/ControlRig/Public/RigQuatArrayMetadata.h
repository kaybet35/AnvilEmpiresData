#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigBaseMetadata.h"
#include "RigQuatArrayMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigQuatArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuat> Value;
    
public:
    FRigQuatArrayMetadata();
};

