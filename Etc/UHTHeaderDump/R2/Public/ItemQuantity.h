#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemQuantity.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FItemQuantity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Quantity;
    
    R2_API FItemQuantity();
};

