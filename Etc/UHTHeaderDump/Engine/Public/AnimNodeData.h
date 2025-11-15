#pragma once
#include "CoreMinimal.h"
#include "EAnimNodeDataFlags.h"
#include "AnimNodeData.generated.h"

class IAnimClassInterface;
class UAnimClassInterface;

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNodeData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IAnimClassInterface> AnimClassInterface;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimNodeDataFlags Flags;
    
public:
    FAnimNodeData();
};

