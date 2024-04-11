#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFSkeletalMeshExporter.generated.h"

UCLASS(Blueprintable, NonTransient)
class GLTFEXPORTER_API UGLTFSkeletalMeshExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFSkeletalMeshExporter();

};

