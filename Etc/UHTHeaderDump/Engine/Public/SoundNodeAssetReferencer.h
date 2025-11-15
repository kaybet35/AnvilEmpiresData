#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeAssetReferencer.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API USoundNodeAssetReferencer : public USoundNode {
    GENERATED_BODY()
public:
    USoundNodeAssetReferencer();

};

