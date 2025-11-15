#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SequencePlayerBase.h"
#include "AnimNode_SequencePlayer.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_SequencePlayer : public FAnimNode_SequencePlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Sequence;
    
public:
    FAnimNode_SequencePlayer();
};

