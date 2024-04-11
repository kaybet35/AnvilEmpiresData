#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RigUnit_SetMultiControlVector2D_Entry.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetMultiControlVector2D_Entry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Vector;
    
    FRigUnit_SetMultiControlVector2D_Entry();
};

