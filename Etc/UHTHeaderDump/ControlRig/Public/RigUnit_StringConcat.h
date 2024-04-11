#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringConcat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringConcat : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    FRigUnit_StringConcat();
};

