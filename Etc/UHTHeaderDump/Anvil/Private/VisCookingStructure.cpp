#include "VisCookingStructure.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CombustionDataComponent -FallbackName=CombustionDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CookingDataComponent -FallbackName=CookingDataComponent

AVisCookingStructure::AVisCookingStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowCheatSheet = false;
    this->CookingDataComponent = CreateDefaultSubobject<UCookingDataComponent>(TEXT("CookingDataComponent"));
    this->CombustionDataComponent = CreateDefaultSubobject<UCombustionDataComponent>(TEXT("CombustionDataComponent"));
    this->WaterLevelMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaterLevelMesh"));
    this->WaterHeightCurve = NULL;
    this->WaterScaleCurve = NULL;
    this->BoilingTemperatureHighAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("BoilingTemperatureHighAudio"));
    this->BoilingTemperatureLowAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("BoilingTemperatureLowAudio"));
    this->WaterLevelMesh->SetupAttachment(RootComponent);
    this->BoilingTemperatureHighAudio->SetupAttachment(RootComponent);
    this->BoilingTemperatureLowAudio->SetupAttachment(RootComponent);
}


