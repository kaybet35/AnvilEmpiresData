#pragma once
#include "CoreMinimal.h"
#include "ShapeComponent.h"
#include "CapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UCapsuleComponent : public UShapeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float CapsuleRadius;
    
public:
    UCapsuleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnscaledCapsuleRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnscaledCapsuleHalfHeight_WithoutHemisphere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnscaledCapsuleHalfHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShapeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaledCapsuleRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaledCapsuleHalfHeight_WithoutHemisphere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaledCapsuleHalfHeight() const;
    
};

