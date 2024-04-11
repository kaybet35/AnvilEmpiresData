#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigInt32ArrayMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigInt32ArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Value;
    
public:
    FRigInt32ArrayMetadata();
};

