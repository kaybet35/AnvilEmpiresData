#pragma once
#include "CoreMinimal.h"
#include "GameStateBase.h"
#include "GameState.generated.h"

UCLASS(Blueprintable)
class ENGINE_API AGameState : public AGameStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MatchState, meta=(AllowPrivateAccess=true))
    FName MatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousMatchState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ElapsedTime, meta=(AllowPrivateAccess=true))
    int32 ElapsedTime;
    
    AGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_MatchState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ElapsedTime();
    
};

