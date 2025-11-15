#pragma once
#include "CoreMinimal.h"
#include "SocketReference.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSocketReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    FSocketReference();
};

