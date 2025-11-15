#pragma once
#include "CoreMinimal.h"
#include "PerQualityLevelInt.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPerQualityLevelInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> PerQuality;
    
    FPerQualityLevelInt();
};

