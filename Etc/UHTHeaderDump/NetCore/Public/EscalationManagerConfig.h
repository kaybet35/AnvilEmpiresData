#pragma once
#include "CoreMinimal.h"
#include "StatePerObjectConfig.h"
#include "EscalationManagerConfig.generated.h"

UCLASS(Blueprintable, Config=Engine)
class NETCORE_API UEscalationManagerConfig : public UStatePerObjectConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EscalationSeverity;
    
    UEscalationManagerConfig();

};

