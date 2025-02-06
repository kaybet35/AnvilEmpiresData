#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VisStructure.h"
#include "VisCookingStructure.generated.h"

class UAudioComponent;
class UCombustionDataComponent;
class UCookingDataComponent;
class UCurveFloat;
class UCurveVector;
class UItemTemplate;
class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisCookingStructure : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCheatSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCookingDataComponent* CookingDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombustionDataComponent* CombustionDataComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UItemTemplate>, UMaterialInterface*> WaterMeshMaterialMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WaterLevelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WaterHeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* WaterScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* BoilingTemperatureHighAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* BoilingTemperatureLowAudio;
    
public:
    AVisCookingStructure(const FObjectInitializer& ObjectInitializer);

};

