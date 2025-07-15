#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DefaultPawn -FallbackName=DefaultPawn
#include "ProxyPawn.generated.h"

class AVisController;
class AVisPlayer;

UCLASS(Blueprintable)
class ANVIL_API AProxyPawn : public ADefaultPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVisPlayer* VisPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVisController* VisController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCameraDistance;
    
    AProxyPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void StopBandwidthRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartBandwidthRecording(const FString& WatchTarget);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDrawCollisions(bool bDrawCollisions);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraHeight(float Height);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraFov(float FOV);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraAngle(float Angle);
    
    UFUNCTION(BlueprintCallable)
    void OnRotateCameraStop();
    
    UFUNCTION(BlueprintCallable)
    void OnRotateCameraStart();
    
    UFUNCTION(BlueprintCallable)
    void OnPanCameraStop();
    
    UFUNCTION(BlueprintCallable)
    void OnPanCameraStart();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyRotateCameraRightStop();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyRotateCameraRightStart();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyRotateCameraLeftStop();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyRotateCameraLeftStart();
    
    UFUNCTION()
    void EnterBuildMode(const uint32 BuildSiteCodeName, const uint64 ContextID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawSphere(float Radius);
    
    UFUNCTION(BlueprintCallable)
    void ChangeHeight(float Adjust);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoMoveOff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoMove(const FString& Arg, bool bIsSprint);
    
};

