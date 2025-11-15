#pragma once
#include "CoreMinimal.h"
#include "BaseComponentReference.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBaseComponentReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathToComponent;
    
    FBaseComponentReference();
};

