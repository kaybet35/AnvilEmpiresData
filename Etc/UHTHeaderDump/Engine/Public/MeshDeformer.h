#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MeshDeformer.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UMeshDeformer : public UObject {
    GENERATED_BODY()
public:
    UMeshDeformer();

};

