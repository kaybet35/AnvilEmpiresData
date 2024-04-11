#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OpenColorIOColorSpace.h"
#include "OpenColorIODisplayView.h"
#include "OpenColorIOConfiguration.generated.h"

class UOpenColorIOColorTransform;

UCLASS(Blueprintable)
class OPENCOLORIO_API UOpenColorIOConfiguration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath ConfigurationFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOpenColorIOColorSpace> DesiredColorSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOpenColorIODisplayView> DesiredDisplayViews;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOpenColorIOColorTransform*> ColorTransforms;
    
public:
    UOpenColorIOConfiguration();

};

