#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "StyleColorList.generated.h"

USTRUCT(BlueprintType)
struct FStyleColorList {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StyleColors[61];
    
    SLATECORE_API FStyleColorList();
};

