#pragma once
#include "CoreMinimal.h"
#include "BasicItemCount.h"
#include "EntityIdAndMapHash.h"
#include "WorldEntityInventoryUserData.generated.h"

USTRUCT(BlueprintType)
struct FWorldEntityInventoryUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntityIdAndMapHash EntityInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasicItemCount> Items;
    
    R2_API FWorldEntityInventoryUserData();
};

