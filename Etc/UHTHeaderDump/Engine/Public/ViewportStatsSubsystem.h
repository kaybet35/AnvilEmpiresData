#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ViewportDisplayCallbackDelegate.h"
#include "WorldSubsystem.h"
#include "ViewportStatsSubsystem.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UViewportStatsSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UViewportStatsSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveDisplayDelegate(const int32 IndexToRemove);
    
    UFUNCTION(BlueprintCallable)
    void AddTimedDisplay(FText Text, FLinearColor Color, float Duration, const FVector2D& DisplayOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDisplayDelegate(const FViewportDisplayCallback& Delegate);
    
};

