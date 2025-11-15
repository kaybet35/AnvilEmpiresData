#pragma once
#include "CoreMinimal.h"
#include "DebugDisplayProperty.h"
#include "ScriptViewportClient.h"
#include "GameViewportClient.generated.h"

class UConsole;
class UGameInstance;
class UWorld;

UCLASS(Blueprintable, NonTransient, Config=Engine, Within=Engine)
class ENGINE_API UGameViewportClient : public UScriptViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConsole* ViewportConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugDisplayProperty> DebugProperties;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSplitscreenPlayers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameInstance* GameInstance;
    
public:
    UGameViewportClient();

    UFUNCTION(BlueprintCallable, Exec)
    void SSSwapControllers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowTitleSafeArea();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetConsoleTarget(int32 PlayerIndex);
    
};

