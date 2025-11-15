#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ActorDesc.h"
#include "BlueprintFunctionLibrary.h"
#include "WorldPartitionBlueprintLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UWorldPartitionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWorldPartitionBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnloadActors(const TArray<FGuid>& InActorsToLoad);
    
    UFUNCTION(BlueprintCallable)
    static void LoadActors(const TArray<FGuid>& InActorsToLoad);
    
    UFUNCTION(BlueprintCallable)
    static FBox GetRuntimeWorldBounds();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIntersectingActorDescs(const FBox& InBox, TArray<FActorDesc>& OutActorDescs);
    
    UFUNCTION(BlueprintCallable)
    static FBox GetEditorWorldBounds();
    
    UFUNCTION(BlueprintCallable)
    static bool GetActorDescs(TArray<FActorDesc>& OutActorDescs);
    
};

