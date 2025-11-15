#pragma once
#include "CoreMinimal.h"
#include "AsyncPhysicsTimestamp.generated.h"

USTRUCT(BlueprintType)
struct FAsyncPhysicsTimestamp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalFrame;
    
    ENGINE_API FAsyncPhysicsTimestamp();
};

