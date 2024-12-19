#include "BuildSiteProxyComponent.h"

UBuildSiteProxyComponent::UBuildSiteProxyComponent() {
    this->BuiltStructureEntity = NULL;
    this->BuildLocation = 0;
    this->CompatibleSurfaceTypes = 0;
    this->RequiredTool = EAnvilToolType::None;
    this->bAllowRapidBuild = false;
    this->bBuildsInstantly = false;
    this->bIsGridDiagonalPiece = false;
    this->bDisableRotationSnap = false;
    this->RequiredDeployable = NULL;
    this->MaxHeightShift = 0.00f;
    this->AdditionalMaxHeightShift = 0.00f;
    this->GridDiagonalPair = NULL;
    this->VisualGuideMinDistance = 300.00f;
}


