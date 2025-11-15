#pragma once
#include "CoreMinimal.h"
#include "BoneReference.h"
#include "BlendProfileBoneEntry.generated.h"

USTRUCT(BlueprintType)
struct FBlendProfileBoneEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendScale;
    
    ENGINE_API FBlendProfileBoneEntry();
};

