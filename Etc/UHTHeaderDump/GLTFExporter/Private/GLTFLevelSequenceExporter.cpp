#include "GLTFLevelSequenceExporter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequence -FallbackName=LevelSequence

UGLTFLevelSequenceExporter::UGLTFLevelSequenceExporter() {
    this->SupportedClass = ULevelSequence::StaticClass();
    this->FormatExtension.AddDefaulted(2);
    this->FormatDescription.AddDefaulted(2);
}


