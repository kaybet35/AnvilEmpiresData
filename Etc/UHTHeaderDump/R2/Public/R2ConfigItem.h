#pragma once
#include "CoreMinimal.h"
#include "EAnvilItemTag.h"
#include "R2ConfigItem.generated.h"

USTRUCT(BlueprintType)
struct FR2ConfigItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAnvilItemTag> CrateAcceptedTags;
    
    R2_API FR2ConfigItem();
};

