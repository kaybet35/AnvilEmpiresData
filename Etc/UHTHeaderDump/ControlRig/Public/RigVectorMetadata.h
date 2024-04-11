#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigBaseMetadata.h"
#include "RigVectorMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigVectorMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
public:
    FRigVectorMetadata();
};

