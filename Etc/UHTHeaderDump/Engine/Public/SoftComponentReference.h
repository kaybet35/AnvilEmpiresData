#pragma once
#include "CoreMinimal.h"
#include "BaseComponentReference.h"
#include "SoftComponentReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENGINE_API FSoftComponentReference : public FBaseComponentReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> OtherActor;
    
    FSoftComponentReference();
};

