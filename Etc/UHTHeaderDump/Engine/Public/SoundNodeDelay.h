#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeDelay.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeDelay : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayMax;
    
    USoundNodeDelay();

};

