#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BuoyancyData.h"
#include "OnPontoonEnteredWaterDelegate.h"
#include "OnPontoonExitedWaterDelegate.h"
#include "SphericalPontoon.h"
#include "BuoyancyComponent.generated.h"

class UPrimitiveComponent;
class UWaterBodyComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class WATER_API UBuoyancyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSphericalPontoon> Pontoons;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPontoonEnteredWater OnEnteredWaterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPontoonExitedWater OnExitedWaterDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuoyancyData BuoyancyData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWaterBodyComponent*> CurrentWaterBodyComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SimulatingComponent;
    
public:
    UBuoyancyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPontoonExitedWater(const FSphericalPontoon& Pontoon);
    
    UFUNCTION(BlueprintCallable)
    void OnPontoonEnteredWater(const FSphericalPontoon& Pontoon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingWaterBody() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWaterBody() const;
    
    UFUNCTION(BlueprintCallable)
    void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32& OutWaterBodyIdx, FVector& OutWaterVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWaterBodyComponent*> GetCurrentWaterBodyComponents() const;
    
};

