#include "GLTFMaterialExporter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialInterface -FallbackName=MaterialInterface

UGLTFMaterialExporter::UGLTFMaterialExporter() {
    this->SupportedClass = UMaterialInterface::StaticClass();
    this->FormatExtension.AddDefaulted(2);
    this->FormatDescription.AddDefaulted(2);
}


