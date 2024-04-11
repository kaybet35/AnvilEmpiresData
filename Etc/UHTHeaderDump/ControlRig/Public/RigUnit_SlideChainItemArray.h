#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_SlideChain_WorkData.h"
#include "RigUnit_SlideChainItemArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigUnit_SlideChain_WorkData WorkData;
    
    FRigUnit_SlideChainItemArray();
};

