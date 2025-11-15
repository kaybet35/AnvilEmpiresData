#include "SoundWave.h"

USoundWave::USoundWave() {
    this->CompressionQuality = 40;
    this->StreamingPriority = 0;
    this->SampleRateQuality = ESoundwaveSampleRateSettings::Max;
    this->SoundGroup = SOUNDGROUP_Default;
    this->bLooping = false;
    this->bStreaming = false;
    this->SoundAssetCompressionType = ESoundAssetCompressionType::ProjectDefined;
    this->bSeekableStreaming = false;
    this->bUseBinkAudio = false;
    this->FrequenciesToAnalyze.AddDefaulted(4);
    this->InitialChunkSize = 0;
    this->bMature = false;
    this->bManualWordWrap = false;
    this->bSingleLine = false;
    this->bIsAmbisonics = false;
    this->LoadingBehavior = ESoundWaveLoadingBehavior::Inherited;
    this->SubtitlePriority = 10000.00f;
    this->Volume = 1.00f;
    this->Pitch = 1.00f;
    this->NumChannels = 0;
    this->SampleRate = 0;
    this->Curves = NULL;
    this->InternalCurves = NULL;
}

void USoundWave::SetSoundAssetCompressionType(ESoundAssetCompressionType InSoundAssetCompressionType, bool bMarkDirty) {
}

ESoundAssetCompressionType USoundWave::GetSoundAssetCompressionType() const {
    return ESoundAssetCompressionType::BinkAudio;
}


