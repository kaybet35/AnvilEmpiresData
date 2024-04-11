#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "NiagaraPosition.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraPosition : public FVector3f {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraPosition();
};

