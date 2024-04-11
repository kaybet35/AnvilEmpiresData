#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TickableTransformConstraint.h"
#include "TickableLookAtConstraint.generated.h"

UCLASS(Blueprintable)
class CONSTRAINTS_API UTickableLookAtConstraint : public UTickableTransformConstraint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Axis;
    
public:
    UTickableLookAtConstraint();

};

