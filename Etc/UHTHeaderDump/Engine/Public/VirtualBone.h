#pragma once
#include "CoreMinimal.h"
#include "VirtualBone.generated.h"

USTRUCT(BlueprintType)
struct FVirtualBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VirtualBoneName;
    
    ENGINE_API FVirtualBone();
};

