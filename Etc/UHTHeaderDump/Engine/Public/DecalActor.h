#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "DecalActor.generated.h"

class UDecalComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable)
class ENGINE_API ADecalActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* Decal;
    
public:
    ADecalActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDecalMaterial(UMaterialInterface* NewDecalMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetDecalMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
    
};

