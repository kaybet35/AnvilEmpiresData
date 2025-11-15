#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EDataLayerType.h"
#include "DataLayerAsset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UDataLayerAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataLayerType DataLayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugColor;
    
public:
    UDataLayerAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRuntime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetDebugColor() const;
    
};

