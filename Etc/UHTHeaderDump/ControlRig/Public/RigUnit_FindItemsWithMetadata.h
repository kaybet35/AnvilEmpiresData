#pragma once
#include "CoreMinimal.h"
#include "ERigMetadataType.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_FindItemsWithMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_FindItemsWithMetadata : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigMetadataType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    FRigUnit_FindItemsWithMetadata();
};

