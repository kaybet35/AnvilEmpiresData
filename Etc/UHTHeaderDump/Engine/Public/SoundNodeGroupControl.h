#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeGroupControl.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeGroupControl : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<int32> GroupSizes;
    
    USoundNodeGroupControl();

};

