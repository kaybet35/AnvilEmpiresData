#pragma once
#include "CoreMinimal.h"
#include "EAnvilRareResourceAreaType.h"
#include "Templates/SubclassOf.h"
#include "ItemCost.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FItemCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> CostItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilRareResourceAreaType RequiredRareResourceArea;
    
    R2_API FItemCost();
};

