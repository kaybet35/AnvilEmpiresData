#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeSoundClass.generated.h"

class USoundClass;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeSoundClass : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* SoundClassOverride;
    
    USoundNodeSoundClass();

};

