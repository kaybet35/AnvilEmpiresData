#pragma once
#include "CoreMinimal.h"
#include "Engine.h"
#include "GameEngine.generated.h"

class UGameInstance;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class ENGINE_API UGameEngine : public UEngine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerFlushLogInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameInstance* GameInstance;
    
    UGameEngine();

};

