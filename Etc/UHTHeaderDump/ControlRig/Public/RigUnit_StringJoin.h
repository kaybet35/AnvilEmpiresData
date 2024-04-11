#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringJoin.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringJoin : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Separator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    FRigUnit_StringJoin();
};

