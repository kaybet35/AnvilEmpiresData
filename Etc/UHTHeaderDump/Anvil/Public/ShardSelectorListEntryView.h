#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ShardConfig.h"
#include "ShardSelectorListEntryView.generated.h"

UCLASS(Blueprintable)
class ANVIL_API UShardSelectorListEntryView : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShardConfig ShardConfig;
    
    UShardSelectorListEntryView();

};

