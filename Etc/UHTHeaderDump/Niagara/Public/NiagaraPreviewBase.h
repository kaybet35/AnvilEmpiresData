#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NiagaraPreviewBase.generated.h"

class UNiagaraSystem;

UCLASS(Abstract, Blueprintable, Transient)
class ANiagaraPreviewBase : public AActor {
    GENERATED_BODY()
public:
    ANiagaraPreviewBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSystem(UNiagaraSystem* InSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLabelText(const FText& InXAxisText, const FText& InYAxisText);
    
};

