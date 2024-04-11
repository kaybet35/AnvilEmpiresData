#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_DynamicHierarchyBaseMutable.h"
#include "RigUnit_HierarchyImportFromSkeleton.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyImportFromSkeleton : public FRigUnit_DynamicHierarchyBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    CONTROLRIG_API FRigUnit_HierarchyImportFromSkeleton();
};

