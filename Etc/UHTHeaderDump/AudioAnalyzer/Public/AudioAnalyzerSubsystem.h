#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "AudioAnalyzerSubsystem.generated.h"

class UAudioAnalyzer;

UCLASS(Blueprintable)
class AUDIOANALYZER_API UAudioAnalyzerSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAudioAnalyzer*> AudioAnalyzers;
    
public:
    UAudioAnalyzerSubsystem();

};

