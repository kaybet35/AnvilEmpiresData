#pragma once
#include "CoreMinimal.h"
#include "AnimSlotGroup.generated.h"

USTRUCT(BlueprintType)
struct FAnimSlotGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SlotNames;
    
    ENGINE_API FAnimSlotGroup();
};

