#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MeshDeformerInstanceSettings.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UMeshDeformerInstanceSettings : public UObject {
    GENERATED_BODY()
public:
    UMeshDeformerInstanceSettings();

};

