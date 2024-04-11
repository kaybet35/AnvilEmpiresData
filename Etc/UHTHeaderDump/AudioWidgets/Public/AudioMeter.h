#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "AudioMeterStyle.h"
#include "MeterChannelInfo.h"
#include "AudioMeter.generated.h"

UCLASS(Blueprintable)
class AUDIOWIDGETS_API UAudioMeter : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal(TArray<FMeterChannelInfo>, FGetMeterChannelInfo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeterChannelInfo> MeterChannelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMeterChannelInfo MeterChannelInfoDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioMeterStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MeterBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MeterValueColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MeterPeakColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MeterClippingColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MeterScaleColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MeterScaleLabelColor;
    
    UAudioMeter();

    UFUNCTION(BlueprintCallable)
    void SetMeterValueColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterScaleLabelColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterScaleColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterPeakColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterClippingColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterChannelInfo(const TArray<FMeterChannelInfo>& InMeterChannelInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMeterChannelInfo> GetMeterChannelInfo() const;
    
};

