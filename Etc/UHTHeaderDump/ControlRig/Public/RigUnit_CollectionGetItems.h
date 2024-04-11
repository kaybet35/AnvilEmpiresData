#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionGetItems.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    FRigUnit_CollectionGetItems();
};

