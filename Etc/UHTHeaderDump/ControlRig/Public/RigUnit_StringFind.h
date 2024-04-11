#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringFind.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringFind : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Search;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Found;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FRigUnit_StringFind();
};

