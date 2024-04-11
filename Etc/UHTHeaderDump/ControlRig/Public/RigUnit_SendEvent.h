#pragma once
#include "CoreMinimal.h"
#include "ERigEvent.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_SendEvent.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SendEvent : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigEvent Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyDuringInteraction;
    
    FRigUnit_SendEvent();
};

