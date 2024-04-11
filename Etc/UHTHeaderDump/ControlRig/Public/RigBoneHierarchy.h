#pragma once
#include "CoreMinimal.h"
#include "RigBone.h"
#include "RigBoneHierarchy.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigBoneHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigBone> Bones;
    
public:
    FRigBoneHierarchy();
};

