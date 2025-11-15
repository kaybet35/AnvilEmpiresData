#pragma once
#include "CoreMinimal.h"
#include "AnimCompositeBase.h"
#include "AnimTrack.h"
#include "AnimComposite.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAnimComposite : public UAnimCompositeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimTrack AnimationTrack;
    
    UAnimComposite();

};

