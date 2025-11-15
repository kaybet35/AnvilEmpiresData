#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeConcatenator.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeConcatenator : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> InputVolume;
    
    USoundNodeConcatenator();

};

