#include "MoviePipelineCommandLineEncoderSettings.h"

UMoviePipelineCommandLineEncoderSettings::UMoviePipelineCommandLineEncoderSettings() {
    this->CodecHelpText = FText::FromString(TEXT("Run 'MovieRenderPipeline.DumpCLIEncoderCodecs' in Console to see available codecs."));
    this->CommandLineFormat = TEXT("-hide_banner -y -loglevel error {AdditionalLocalArgs} {VideoInputs} {AudioInputs} -acodec {AudioCodec} -vcodec {VideoCodec} {Quality} \"{OutputPath}\"");
    this->VideoInputStringFormat = TEXT("-f concat -safe 0 -i \"{InputFile}\" -r {FrameRate}");
    this->AudioInputStringFormat = TEXT("-f concat -safe 0 -i \"{InputFile}\"");
    this->EncodeSettings_Low = TEXT("-crf 28");
    this->EncodeSettings_Med = TEXT("-crf 23");
    this->EncodeSettings_High = TEXT("-crf 20");
    this->EncodeSettings_Epic = TEXT("-crf 16");
}


