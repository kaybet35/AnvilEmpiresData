#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "TickableTransformConstraint.h"
#include "TickableRotationConstraint.generated.h"

UCLASS(Blueprintable)
class CONSTRAINTS_API UTickableRotationConstraint : public UTickableTransformConstraint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat OffsetRotation;
    
public:
    UTickableRotationConstraint();

};

