#include "GLTFLevelVariantSetsExporter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=VariantManagerContent -ObjectName=LevelVariantSets -FallbackName=LevelVariantSets

UGLTFLevelVariantSetsExporter::UGLTFLevelVariantSetsExporter() {
    this->SupportedClass = ULevelVariantSets::StaticClass();
    this->FormatExtension.AddDefaulted(2);
    this->FormatDescription.AddDefaulted(2);
}


