#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EnhancedInputPlatformData.generated.h"

class UInputMappingContext;

UCLASS(Abstract, Blueprintable)
class ENHANCEDINPUT_API UEnhancedInputPlatformData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputMappingContext*, UInputMappingContext*> MappingContextRedirects;
    
public:
    UEnhancedInputPlatformData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInputMappingContext* GetContextRedirect(UInputMappingContext* InContext) const;
    
};

