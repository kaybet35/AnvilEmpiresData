#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Exporter -FallbackName=Exporter
#include "GLTFExportMessages.h"
#include "GLTFExporter.generated.h"

class AActor;
class UGLTFExportOptions;
class UObject;

UCLASS(Abstract, Blueprintable, NonTransient)
class GLTFEXPORTER_API UGLTFExporter : public UExporter {
    GENERATED_BODY()
public:
    UGLTFExporter();

    UFUNCTION(BlueprintCallable)
    static bool ExportToGLTF(UObject* Object, const FString& FilePath, const UGLTFExportOptions* Options, const TSet<AActor*>& SelectedActors, FGLTFExportMessages& OutMessages);
    
};

