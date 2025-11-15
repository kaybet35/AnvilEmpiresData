#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlatformInterfaceWebResponse.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UPlatformInterfaceWebResponse : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OriginalURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResponseCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> BinaryResponse;
    
    UPlatformInterfaceWebResponse();

    UFUNCTION(BlueprintCallable)
    int32 GetNumHeaders();
    
    UFUNCTION(BlueprintCallable)
    FString GetHeaderValue(const FString& HeaderName);
    
    UFUNCTION(BlueprintCallable)
    void GetHeader(int32 HeaderIndex, FString& Header, FString& Value);
    
};

