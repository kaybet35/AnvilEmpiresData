#pragma once
#include "CoreMinimal.h"
#include "AnimSlotDesc.generated.h"

USTRUCT(BlueprintType)
struct FAnimSlotDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumChannels;
    
    ENGINE_API FAnimSlotDesc();
};

