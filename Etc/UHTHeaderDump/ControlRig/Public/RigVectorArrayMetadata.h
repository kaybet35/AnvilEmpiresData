#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigBaseMetadata.h"
#include "RigVectorArrayMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigVectorArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Value;
    
public:
    FRigVectorArrayMetadata();
};

