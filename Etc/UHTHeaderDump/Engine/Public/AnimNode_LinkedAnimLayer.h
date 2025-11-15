#pragma once
#include "CoreMinimal.h"
#include "AnimNode_LinkedAnimGraph.h"
#include "Templates/SubclassOf.h"
#include "AnimNode_LinkedAnimLayer.generated.h"

class IAnimLayerInterface;
class UAnimLayerInterface;

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimLayerInterface> Interface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Layer;
    
    FAnimNode_LinkedAnimLayer();
};

