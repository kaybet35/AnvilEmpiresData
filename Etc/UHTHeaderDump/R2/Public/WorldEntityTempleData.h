#pragma once
#include "CoreMinimal.h"
#include "WorldEntityTempleData.generated.h"

USTRUCT(BlueprintType)
struct FWorldEntityTempleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnderAttack;
    
    R2_API FWorldEntityTempleData();
};

