#pragma once
#include "CoreMinimal.h"
#include "DebugDisplayProperty.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FDebugDisplayProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Obj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* WithinClass;
    
    ENGINE_API FDebugDisplayProperty();
};

