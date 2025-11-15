#pragma once
#include "CoreMinimal.h"
#include "ECollisionResponse.h"
#include "ResponseChannel.generated.h"

USTRUCT(BlueprintType)
struct FResponseChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionResponse> Response;
    
    ENGINE_API FResponseChannel();
};

