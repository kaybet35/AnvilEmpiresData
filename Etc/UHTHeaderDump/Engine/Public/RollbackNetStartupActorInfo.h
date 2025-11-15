#pragma once
#include "CoreMinimal.h"
#include "RollbackNetStartupActorInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FRollbackNetStartupActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Archetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ObjReferences;
    
    ENGINE_API FRollbackNetStartupActorInfo();
};

