#include "ResonanceAudioDirectivityVisualizer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ProceduralMeshComponent -ObjectName=ProceduralMeshComponent -FallbackName=ProceduralMeshComponent

AResonanceAudioDirectivityVisualizer::AResonanceAudioDirectivityVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("VisualizationMesh"));
    this->Material = NULL;
    this->Settings = NULL;
}


