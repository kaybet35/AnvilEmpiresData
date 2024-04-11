#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EWaveTableResolution.h"
#include "WaveTableBankEntry.h"
#include "WaveTableBank.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WAVETABLE_API UWaveTableBank : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaveTableResolution Resolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBipolar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveTableBankEntry> Entries;
    
    UWaveTableBank();

};

