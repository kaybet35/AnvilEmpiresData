#pragma once
#include "CoreMinimal.h"
#include "ArmourTypeMeshes.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FArmourTypeMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* HeadArmourMeshes[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BodyArmourMeshes[3];
    
    ANVIL_API FArmourTypeMeshes();
};

