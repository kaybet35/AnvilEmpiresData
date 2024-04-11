#include "GLTFSkeletalMeshExporter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMesh -FallbackName=SkeletalMesh

UGLTFSkeletalMeshExporter::UGLTFSkeletalMeshExporter() {
    this->SupportedClass = USkeletalMesh::StaticClass();
    this->FormatExtension.AddDefaulted(2);
    this->FormatDescription.AddDefaulted(2);
}


