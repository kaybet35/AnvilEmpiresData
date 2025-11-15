#pragma once
#include "CoreMinimal.h"
#include "OnCanvasRenderTargetUpdateDelegate.h"
#include "Templates/SubclassOf.h"
#include "TextureRenderTarget2D.h"
#include "CanvasRenderTarget2D.generated.h"

class UCanvas;
class UCanvasRenderTarget2D;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class ENGINE_API UCanvasRenderTarget2D : public UTextureRenderTarget2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCanvasRenderTargetUpdate OnCanvasRenderTargetUpdate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldClearRenderTargetOnReceiveUpdate;
    
public:
    UCanvasRenderTarget2D();

    UFUNCTION(BlueprintCallable)
    void UpdateResource();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdate(UCanvas* Canvas, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSize(int32& Width, int32& Height);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(UObject* WorldContextObject, TSubclassOf<UCanvasRenderTarget2D> CanvasRenderTarget2DClass, int32 Width, int32 Height);
    
};

