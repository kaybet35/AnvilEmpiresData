#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFStaticMeshExporter.generated.h"

UCLASS(Blueprintable, NonTransient)
class GLTFEXPORTER_API UGLTFStaticMeshExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFStaticMeshExporter();

};

