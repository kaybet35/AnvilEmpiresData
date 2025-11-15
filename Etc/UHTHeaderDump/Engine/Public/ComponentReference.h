#pragma once
#include "CoreMinimal.h"
#include "BaseComponentReference.h"
#include "ComponentReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENGINE_API FComponentReference : public FBaseComponentReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OtherActor;
    
    FComponentReference();
};

