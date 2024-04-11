#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_FindItemsWithMetadataTag.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_FindItemsWithMetadataTag : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    FRigUnit_FindItemsWithMetadataTag();
};

