#pragma once
#include "CoreMinimal.h"
#include "ConstraintInstanceAccessor.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct ENGINE_API FConstraintInstanceAccessor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Owner;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Index;
    
public:
    FConstraintInstanceAccessor();
};

