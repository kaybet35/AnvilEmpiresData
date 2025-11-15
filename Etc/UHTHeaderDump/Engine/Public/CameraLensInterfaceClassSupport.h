#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CameraLensInterfaceClassSupport.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCameraLensInterfaceClassSupport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Class;
    
    ENGINE_API FCameraLensInterfaceClassSupport();
};

