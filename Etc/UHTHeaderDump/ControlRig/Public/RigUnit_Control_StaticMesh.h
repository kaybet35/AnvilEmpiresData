#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_Control.h"
#include "RigUnit_Control_StaticMesh.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Control_StaticMesh : public FRigUnit_Control {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshTransform;
    
    FRigUnit_Control_StaticMesh();
};

