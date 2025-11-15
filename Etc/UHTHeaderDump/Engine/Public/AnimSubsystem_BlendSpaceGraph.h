#pragma once
#include "CoreMinimal.h"
#include "AnimSubsystem.h"
#include "AnimSubsystem_BlendSpaceGraph.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct ENGINE_API FAnimSubsystem_BlendSpaceGraph : public FAnimSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBlendSpace*> BlendSpaces;
    
public:
    FAnimSubsystem_BlendSpaceGraph();
};

