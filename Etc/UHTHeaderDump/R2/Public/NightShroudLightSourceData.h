#pragma once
#include "CoreMinimal.h"
#include "NightShroudLightSource.h"
#include "NightShroudLightSourceData.generated.h"

USTRUCT(BlueprintType)
struct FNightShroudLightSourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNightShroudLightSource> LightSourceArray;
    
    R2_API FNightShroudLightSourceData();
};

