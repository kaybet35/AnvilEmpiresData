#pragma once
#include "CoreMinimal.h"
#include "RigControlSettings.h"
#include "RigCurrentAndInitialTransform.h"
#include "RigMultiParentElement.h"
#include "RigPreferredEulerAngles.h"
#include "RigControlElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControlElement : public FRigMultiParentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigCurrentAndInitialTransform Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigCurrentAndInitialTransform Shape;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPreferredEulerAngles PreferredEulerAngles;
    
public:
    FRigControlElement();
};

