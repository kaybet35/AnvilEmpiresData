#include "GLTFLevelExporter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=World -FallbackName=World

UGLTFLevelExporter::UGLTFLevelExporter() {
    this->SupportedClass = UWorld::StaticClass();
    this->FormatExtension.AddDefaulted(2);
    this->FormatDescription.AddDefaulted(2);
}


