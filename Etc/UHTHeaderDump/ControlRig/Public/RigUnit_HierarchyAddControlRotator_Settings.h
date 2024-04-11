#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyAddControlRotator_LimitSettings.h"
#include "RigUnit_HierarchyAddControl_ProxySettings.h"
#include "RigUnit_HierarchyAddControl_Settings.h"
#include "RigUnit_HierarchyAddControl_ShapeSettings.h"
#include "RigUnit_HierarchyAddControlRotator_Settings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControlRotator_LimitSettings Limits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;
    
    FRigUnit_HierarchyAddControlRotator_Settings();
};

