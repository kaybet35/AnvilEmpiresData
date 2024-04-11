#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintGeneratedClass -FallbackName=BlueprintGeneratedClass
#include "DelegateRuntimeBinding.h"
#include "FieldNotificationId.h"
#include "WidgetBlueprintGeneratedClass.generated.h"

class UWidgetAnimation;
class UWidgetBlueprintGeneratedClassExtension;
class UWidgetTree;

UCLASS(Blueprintable)
class UMG_API UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetTree* WidgetTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidgetBlueprintGeneratedClassExtension*> Extensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFieldNotificationId> FieldNotifyNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClassRequiresNativeTick: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDelegateRuntimeBinding> Bindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NamedSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AvailableNamedSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InstanceNamedSlots;
    
    UWidgetBlueprintGeneratedClass();

};

