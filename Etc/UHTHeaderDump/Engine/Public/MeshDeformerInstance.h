#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MeshDeformerInstance.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UMeshDeformerInstance : public UObject {
    GENERATED_BODY()
public:
    UMeshDeformerInstance();

};

