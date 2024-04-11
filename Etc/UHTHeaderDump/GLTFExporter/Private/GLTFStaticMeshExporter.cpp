#include "GLTFStaticMeshExporter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMesh -FallbackName=StaticMesh

UGLTFStaticMeshExporter::UGLTFStaticMeshExporter() {
    this->SupportedClass = UStaticMesh::StaticClass();
    this->FormatExtension.AddDefaulted(2);
    this->FormatDescription.AddDefaulted(2);
}


