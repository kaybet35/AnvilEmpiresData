#pragma once
#include "CoreMinimal.h"
#include "EBoneTranslationRetargetingMode.h"
#include "BoneNode.generated.h"

USTRUCT(BlueprintType)
struct FBoneNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneTranslationRetargetingMode::Type> TranslationRetargetingMode;
    
    ENGINE_API FBoneNode();
};

