#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TickableTransformConstraint.h"
#include "TickableTranslationConstraint.generated.h"

UCLASS(Blueprintable)
class CONSTRAINTS_API UTickableTranslationConstraint : public UTickableTransformConstraint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetTranslation;
    
public:
    UTickableTranslationConstraint();

};

