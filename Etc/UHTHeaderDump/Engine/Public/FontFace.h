#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EFontHinting -FallbackName=EFontHinting
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EFontLayoutMethod -FallbackName=EFontLayoutMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EFontLoadingPolicy -FallbackName=EFontLoadingPolicy
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=FontFaceInterface -FallbackName=FontFaceInterface
#include "FontFace.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFontFace : public UObject, public IFontFaceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceFilename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFontHinting Hinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFontLoadingPolicy LoadingPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFontLayoutMethod LayoutMethod;
    
    UFontFace();


    // Fix for true pure virtual functions not being implemented
};

