#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CollectionParameterBase.h"
#include "CollectionVectorParameter.generated.h"

USTRUCT(BlueprintType)
struct FCollectionVectorParameter : public FCollectionParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultValue;
    
    ENGINE_API FCollectionVectorParameter();
};

