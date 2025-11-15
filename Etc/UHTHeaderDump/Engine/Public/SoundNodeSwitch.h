#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeSwitch.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeSwitch : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IntParameterName;
    
    USoundNodeSwitch();

};

