#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringRight.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringRight : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    FRigUnit_StringRight();
};

