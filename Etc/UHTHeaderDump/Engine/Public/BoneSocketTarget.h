#pragma once
#include "CoreMinimal.h"
#include "BoneReference.h"
#include "SocketReference.h"
#include "BoneSocketTarget.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBoneSocketTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSocket;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketReference SocketReference;
    
    FBoneSocketTarget();
};

