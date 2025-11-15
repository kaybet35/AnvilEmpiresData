#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyEventReference.generated.h"

class UMirrorDataTable;
class UObject;

USTRUCT(BlueprintType)
struct FAnimNotifyEventReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMirrorDataTable* MirrorTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* NotifySource;
    
public:
    ENGINE_API FAnimNotifyEventReference();
};

