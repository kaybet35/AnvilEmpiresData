#pragma once
#include "CoreMinimal.h"
#include "EWindSourceType.h"
#include "SceneComponent.h"
#include "WindDirectionalSourceComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UWindDirectionalSourceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MinGustAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MaxGustAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPointWind: 1;
    
    UWindDirectionalSourceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWindType(EWindSourceType InNewType);
    
    UFUNCTION(BlueprintCallable)
    void SetStrength(float InNewStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float InNewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetRadius(float InNewRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumGustAmount(float InNewMinGust);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumGustAmount(float InNewMaxGust);
    
};

