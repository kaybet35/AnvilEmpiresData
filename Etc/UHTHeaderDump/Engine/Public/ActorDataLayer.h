#pragma once
#include "CoreMinimal.h"
#include "ActorDataLayer.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FActorDataLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FActorDataLayer();
};

