#pragma once
#include "CoreMinimal.h"
#include "PoseLinkBase.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPoseLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkID;
    
    FPoseLinkBase();
};

