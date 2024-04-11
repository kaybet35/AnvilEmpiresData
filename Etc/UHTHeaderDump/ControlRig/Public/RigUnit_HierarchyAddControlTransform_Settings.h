#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyAddControl_ProxySettings.h"
#include "RigUnit_HierarchyAddControl_Settings.h"
#include "RigUnit_HierarchyAddControl_ShapeSettings.h"
#include "RigUnit_HierarchyAddControlTransform_Settings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;
    
    FRigUnit_HierarchyAddControlTransform_Settings();
};

