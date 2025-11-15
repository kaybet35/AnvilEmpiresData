#pragma once
#include "CoreMinimal.h"
#include "AnimCompress.h"
#include "AnimCompress_RemoveEverySecondKey.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartAtSecondKey: 1;
    
    UAnimCompress_RemoveEverySecondKey();

};

