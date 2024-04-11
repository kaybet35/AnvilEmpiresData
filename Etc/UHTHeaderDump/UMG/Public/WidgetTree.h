#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NamedSlotInterface.h"
#include "WidgetTree.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UMG_API UWidgetTree : public UObject, public INamedSlotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* RootWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UWidget*> NamedSlotBindings;
    
    UWidgetTree();


    // Fix for true pure virtual functions not being implemented
};

