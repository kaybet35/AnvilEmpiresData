#pragma once
#include "CoreMinimal.h"
#include "AnimNode_MirrorBase.h"
#include "AnimNode_Mirror_Standalone.generated.h"

class UMirrorDataTable;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorDataTable* MirrorDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetChild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBoneMirroring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurveMirroring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttributeMirroring;
    
public:
    FAnimNode_Mirror_Standalone();
};

