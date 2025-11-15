#pragma once
#include "CoreMinimal.h"
#include "StatColorMapEntry.h"
#include "StatColorMapping.generated.h"

USTRUCT(BlueprintType)
struct FStatColorMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FStatColorMapEntry> ColorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    uint8 DisableBlend: 1;
    
    ENGINE_API FStatColorMapping();
};

