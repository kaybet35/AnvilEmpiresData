#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "SubsystemBlueprintLibrary.generated.h"

class APlayerController;
class UAudioEngineSubsystem;
class UEngineSubsystem;
class UGameInstanceSubsystem;
class ULocalPlayerSubsystem;
class UObject;
class UWorldSubsystem;

UCLASS(Blueprintable)
class ENGINE_API USubsystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USubsystemBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorldSubsystem* GetWorldSubsystem(UObject* ContextObject, TSubclassOf<UWorldSubsystem> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(APlayerController* PlayerController, TSubclassOf<ULocalPlayerSubsystem> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULocalPlayerSubsystem* GetLocalPlayerSubsystem(UObject* ContextObject, TSubclassOf<ULocalPlayerSubsystem> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameInstanceSubsystem* GetGameInstanceSubsystem(UObject* ContextObject, TSubclassOf<UGameInstanceSubsystem> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEngineSubsystem* GetEngineSubsystem(TSubclassOf<UEngineSubsystem> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAudioEngineSubsystem* GetAudioEngineSubsystem(UObject* ContextObject, TSubclassOf<UAudioEngineSubsystem> Class);
    
};

