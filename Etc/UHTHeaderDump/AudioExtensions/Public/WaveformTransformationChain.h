#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WaveformTransformationChain.generated.h"

class UWaveformTransformationBase;

UCLASS(Blueprintable, EditInlineNew)
class AUDIOEXTENSIONS_API UWaveformTransformationChain : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWaveformTransformationBase*> Transformations;
    
    UWaveformTransformationChain();

};

