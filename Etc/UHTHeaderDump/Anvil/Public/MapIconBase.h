#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MapIconInstanceProperty.h"
#include "MapIconTypeProperty.h"
#include "MapIconBase.generated.h"

class UCanvasPanelSlot;
class UMapWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMapIconBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconTypeProperty TypeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconInstanceProperty InstanceProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* ParentSlot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapWidgetBase* Map;
    
public:
    UMapIconBase();

};

