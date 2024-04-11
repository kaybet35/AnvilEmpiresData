#pragma once
#include "CoreMinimal.h"
#include "AudioVolumeClass.h"
#include "AnvilOptionsManager.generated.h"

class UAnvilGameInstance;
class UAnvilOptionsSave;

USTRUCT(BlueprintType)
struct FAnvilOptionsManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FAudioVolumeClass> AudioVolumeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnvilGameInstance* GameInstance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnvilOptionsSave* OptionsSave;
    
public:
    ANVIL_API FAnvilOptionsManager();
};

