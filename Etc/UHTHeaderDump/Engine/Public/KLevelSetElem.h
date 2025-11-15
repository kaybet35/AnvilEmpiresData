#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "KShapeElem.h"
#include "KLevelSetElem.generated.h"

USTRUCT(BlueprintType)
struct FKLevelSetElem : public FKShapeElem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
public:
    ENGINE_API FKLevelSetElem();
};

