#pragma once
#include "CoreMinimal.h"
#include "EngineSubsystem.h"
#include "DataDrivenCVarEngineSubsystem.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UDataDrivenCVarEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDataDrivenCVarChanged OnDataDrivenCVarDelegate;
    
    UDataDrivenCVarEngineSubsystem();

};

