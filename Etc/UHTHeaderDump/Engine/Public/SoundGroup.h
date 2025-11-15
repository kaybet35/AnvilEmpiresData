#pragma once
#include "CoreMinimal.h"
#include "ESoundGroup.h"
#include "SoundGroup.generated.h"

USTRUCT(BlueprintType)
struct FSoundGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESoundGroup> SoundGroup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysDecompressOnLoad: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecompressedDuration;
    
    ENGINE_API FSoundGroup();
};

