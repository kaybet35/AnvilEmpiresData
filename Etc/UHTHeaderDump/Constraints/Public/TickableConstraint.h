#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConstraintTickFunction.h"
#include "TickableConstraint.generated.h"

UCLASS(Abstract, Blueprintable)
class CONSTRAINTS_API UTickableConstraint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstraintTickFunction ConstraintTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Active;
    
    UTickableConstraint();

};

