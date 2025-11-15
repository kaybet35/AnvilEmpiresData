#pragma once
#include "CoreMinimal.h"
#include "CollisionResponseContainer.h"
#include "ResponseChannel.h"
#include "CollisionResponse.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCollisionResponse {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer ResponseToChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResponseChannel> ResponseArray;
    
public:
    FCollisionResponse();
};

