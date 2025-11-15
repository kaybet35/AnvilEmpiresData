#pragma once
#include "CoreMinimal.h"
#include "BoneReductionSetting.generated.h"

USTRUCT(BlueprintType)
struct FBoneReductionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BonesToRemove;
    
    ENGINE_API FBoneReductionSetting();
};

