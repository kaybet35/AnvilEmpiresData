#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFLevelSequenceExporter.generated.h"

UCLASS(Blueprintable, NonTransient)
class GLTFEXPORTER_API UGLTFLevelSequenceExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFLevelSequenceExporter();

};

