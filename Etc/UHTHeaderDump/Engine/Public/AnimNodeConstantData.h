#pragma once
#include "CoreMinimal.h"
#include "AnimNodeConstantData.generated.h"

class IAnimClassInterface;
class UAnimClassInterface;

USTRUCT(BlueprintType)
struct FAnimNodeConstantData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IAnimClassInterface> AnimClassInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeIndex;
    
public:
    ENGINE_API FAnimNodeConstantData();
};

