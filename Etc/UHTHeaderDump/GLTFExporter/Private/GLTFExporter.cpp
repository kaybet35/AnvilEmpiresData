#include "GLTFExporter.h"

UGLTFExporter::UGLTFExporter() {
    this->FormatExtension.AddDefaulted(2);
    this->FormatDescription.AddDefaulted(2);
}

bool UGLTFExporter::ExportToGLTF(UObject* Object, const FString& FilePath, const UGLTFExportOptions* Options, const TSet<AActor*>& SelectedActors, FGLTFExportMessages& OutMessages) {
    return false;
}


