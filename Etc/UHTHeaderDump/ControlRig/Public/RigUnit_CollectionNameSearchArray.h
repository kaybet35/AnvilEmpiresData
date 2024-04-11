#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKey.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionNameSearchArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType TypeToSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    FRigUnit_CollectionNameSearchArray();
};

