#pragma once
#include "CoreMinimal.h"
#include "ERigControlAxis.h"
#include "RigUnit_HierarchyAddControlVector2D_LimitSettings.h"
#include "RigUnit_HierarchyAddControl_ProxySettings.h"
#include "RigUnit_HierarchyAddControl_Settings.h"
#include "RigUnit_HierarchyAddControl_ShapeSettings.h"
#include "RigUnit_HierarchyAddControlVector2D_Settings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigControlAxis PrimaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;
    
    FRigUnit_HierarchyAddControlVector2D_Settings();
};

