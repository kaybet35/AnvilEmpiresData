#pragma once
#include "CoreMinimal.h"
#include "ShapeComponent.h"
#include "SphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USphereComponent : public UShapeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
public:
    USphereComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnscaledSphereRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShapeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaledSphereRadius() const;
    
};

