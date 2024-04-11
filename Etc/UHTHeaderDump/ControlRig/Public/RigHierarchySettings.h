#pragma once
#include "CoreMinimal.h"
#include "RigHierarchySettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigHierarchySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProceduralElementLimit;
    
    FRigHierarchySettings();
};

