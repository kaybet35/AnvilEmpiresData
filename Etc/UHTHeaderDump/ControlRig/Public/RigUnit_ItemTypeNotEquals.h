#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_ItemBase.h"
#include "RigUnit_ItemTypeNotEquals.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigUnit_ItemTypeNotEquals();
};

