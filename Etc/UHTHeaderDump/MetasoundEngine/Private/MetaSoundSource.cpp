#include "MetaSoundSource.h"

UMetaSoundSource::UMetaSoundSource() : USoundWaveProcedural(FObjectInitializer::Get()) {
    this->FrequenciesToAnalyze.AddDefaulted(4);
    this->OutputFormat = EMetasoundSourceAudioFormat::Mono;
}


