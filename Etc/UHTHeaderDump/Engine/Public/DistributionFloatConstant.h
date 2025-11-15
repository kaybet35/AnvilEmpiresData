#pragma once
#include "CoreMinimal.h"
#include "DistributionFloat.h"
#include "DistributionFloatConstant.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionFloatConstant : public UDistributionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Constant;
    
    UDistributionFloatConstant();

};

