#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "AudioPanelWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class ENGINE_API UAudioPanelWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class ENGINE_API IAudioPanelWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetIconBrushName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetEditorName();
    
};

