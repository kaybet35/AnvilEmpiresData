#pragma once
#include "CoreMinimal.h"
#include "BoneChain.h"
#include "RetargetDefinition.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FRetargetDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneChain> BoneChains;
    
public:
    FRetargetDefinition();
};

