#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFLevelExporter.generated.h"

UCLASS(Blueprintable, NonTransient)
class GLTFEXPORTER_API UGLTFLevelExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFLevelExporter();

};

