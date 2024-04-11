#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFMaterialExporter.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, NonTransient)
class GLTFEXPORTER_API UGLTFMaterialExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* DefaultPreviewMesh;
    
public:
    UGLTFMaterialExporter();

};

