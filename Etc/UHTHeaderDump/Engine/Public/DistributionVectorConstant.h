#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DistributionVector.h"
#include "EDistributionVectorLockFlags.h"
#include "DistributionVectorConstant.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionVectorConstant : public UDistributionVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Constant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockAxes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
    
    UDistributionVectorConstant();

};

