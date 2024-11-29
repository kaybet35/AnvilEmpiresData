#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilItemQualityType -FallbackName=EAnvilItemQualityType
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilPlayerOnlineStatus -FallbackName=EAnvilPlayerOnlineStatus
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilWorldEntityType -FallbackName=EAnvilWorldEntityType
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "EMapIconType.h"
#include "MapIconTypeProperty.h"
#include "Templates/SubclassOf.h"
#include "UIGlobals.generated.h"

class UTexture2D;
class UUserWidget;
class UWorldEntityMapIcon;

UCLASS(Blueprintable)
class ANVIL_API AUIGlobals : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TooltipClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TownNames1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TownNames2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TownNames3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapIconType, FMapIconTypeProperty> IconTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilWorldEntityType, TSubclassOf<UWorldEntityMapIcon>> WorldEntityIconClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilItemQualityType, UTexture2D*> QualityIconTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilPlayerOnlineStatus, UTexture2D*> OnlineStatusIconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilPlayerOnlineStatus, FSlateColor> OnlineStatusColorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture2D*> UnderworldModuleDebugBoxTextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BuildSiteVisualGuideValidColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BuildSiteVisualGuideInvalidColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BuildSiteVisualGuideObstructedColour;
    
    AUIGlobals(const FObjectInitializer& ObjectInitializer);

};

