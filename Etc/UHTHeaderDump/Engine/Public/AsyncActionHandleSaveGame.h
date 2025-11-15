#pragma once
#include "CoreMinimal.h"
#include "BlueprintAsyncActionBase.h"
#include "OnAsyncHandleSaveGameDelegate.h"
#include "AsyncActionHandleSaveGame.generated.h"

class UAsyncActionHandleSaveGame;
class UObject;
class USaveGame;

UCLASS(Blueprintable)
class ENGINE_API UAsyncActionHandleSaveGame : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncHandleSaveGame Completed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGame* SaveGameObject;
    
public:
    UAsyncActionHandleSaveGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(UObject* WorldContextObject, USaveGame* NewSaveGameObject, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(UObject* WorldContextObject, const FString& SlotName, const int32 UserIndex);
    
};

