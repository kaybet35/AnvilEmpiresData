#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WaveformTransformationBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOEXTENSIONS_API UWaveformTransformationBase : public UObject {
    GENERATED_BODY()
public:
    UWaveformTransformationBase();

};

