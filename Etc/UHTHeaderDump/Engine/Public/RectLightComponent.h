#pragma once
#include "CoreMinimal.h"
#include "LocalLightComponent.h"
#include "RectLightComponent.generated.h"

class UTexture;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API URectLightComponent : public ULocalLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SourceWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SourceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BarnDoorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BarnDoorLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* SourceTexture;
    
    URectLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSourceWidth(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceTexture(UTexture* NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceHeight(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBarnDoorLength(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBarnDoorAngle(float NewValue);
    
};

