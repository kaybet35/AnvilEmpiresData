#pragma once
#include "CoreMinimal.h"
#include "AnimCompress.h"
#include "AnimCompress_RemoveTrivialKeys.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPosDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScaleDiff;
    
    UAnimCompress_RemoveTrivialKeys();

};

