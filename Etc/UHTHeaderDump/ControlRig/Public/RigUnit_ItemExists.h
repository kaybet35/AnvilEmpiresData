#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit_ItemBase.h"
#include "RigUnit_ItemExists.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ItemExists : public FRigUnit_ItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Exists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedIndex;
    
    FRigUnit_ItemExists();
};

