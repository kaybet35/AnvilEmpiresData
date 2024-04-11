#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "TickableTransformConstraint.h"
#include "TickableParentConstraint.generated.h"

UCLASS(Blueprintable)
class CONSTRAINTS_API UTickableParentConstraint : public UTickableTransformConstraint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaling;
    
public:
    UTickableParentConstraint();

};

