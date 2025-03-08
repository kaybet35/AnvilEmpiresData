#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R2ConfigTradeResources.generated.h"

class UEntityTemplate;

USTRUCT(BlueprintType)
struct FR2ConfigTradeResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UEntityTemplate>> TradeResources;
    
    R2_API FR2ConfigTradeResources();
};

