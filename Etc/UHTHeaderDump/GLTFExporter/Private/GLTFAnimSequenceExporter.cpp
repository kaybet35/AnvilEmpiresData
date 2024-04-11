#include "GLTFAnimSequenceExporter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimSequence -FallbackName=AnimSequence

UGLTFAnimSequenceExporter::UGLTFAnimSequenceExporter() {
    this->SupportedClass = UAnimSequence::StaticClass();
    this->FormatExtension.AddDefaulted(2);
    this->FormatDescription.AddDefaulted(2);
}


