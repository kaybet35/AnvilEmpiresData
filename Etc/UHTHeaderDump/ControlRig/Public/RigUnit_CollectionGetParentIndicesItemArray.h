#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionGetParentIndicesItemArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ParentIndices;
    
    FRigUnit_CollectionGetParentIndicesItemArray();
};

