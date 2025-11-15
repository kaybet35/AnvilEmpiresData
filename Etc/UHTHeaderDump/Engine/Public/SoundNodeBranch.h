#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeBranch.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeBranch : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoolParameterName;
    
    USoundNodeBranch();

};

