#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "KeyBind.h"
#include "PlayerInput.generated.h"

class APlayerController;

UCLASS(Blueprintable, Transient, Config=Input)
class ENGINE_API UPlayerInput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyBind> DebugExecBindings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InvertedAxis;
    
    UPlayerInput();

    UFUNCTION(BlueprintCallable, Exec)
    void SetMouseSensitivity(const float Sensitivity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBind(FName BindName, const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InvertAxisKey(const FKey AxisKey);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InvertAxis(const FName AxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetOuterAPlayerController() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearSmoothing();
    
};

