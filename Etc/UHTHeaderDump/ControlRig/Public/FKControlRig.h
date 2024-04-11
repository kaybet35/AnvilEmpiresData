#pragma once
#include "CoreMinimal.h"
#include "ControlRig.h"
#include "EControlRigFKRigExecuteMode.h"
#include "FKControlRig.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class CONTROLRIG_API UFKControlRig : public UControlRig {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> IsControlActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlRigFKRigExecuteMode ApplyMode;
    
public:
    UFKControlRig();

};

