#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFAnimSequenceExporter.generated.h"

UCLASS(Blueprintable, NonTransient)
class GLTFEXPORTER_API UGLTFAnimSequenceExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFAnimSequenceExporter();

};

