#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NavMovementComponent.h"
#include "PawnMovementComponent.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPawnMovementComponent : public UNavMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* PawnOwner;
    
public:
    UPawnMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPendingInputVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawnOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastInputVector() const;
    
    UFUNCTION(BlueprintCallable)
    FVector ConsumeInputVector();
    
    UFUNCTION(BlueprintCallable)
    void AddInputVector(FVector WorldVector, bool bForce);
    
};

