#pragma once
#include "CoreMinimal.h"
#include "TransformableHandle.h"
#include "TransformableComponentHandle.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class CONSTRAINTS_API UTransformableComponentHandle : public UTransformableHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UTransformableComponentHandle();

};

