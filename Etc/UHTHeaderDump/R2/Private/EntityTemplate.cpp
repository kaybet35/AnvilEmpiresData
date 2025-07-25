#include "EntityTemplate.h"

UEntityTemplate::UEntityTemplate() {
    this->CodeName = 0;
    this->bStatic = true;
    this->RelevancyPolicy = EEntityRelevancyPolicy::DistanceBased;
    this->RelevancyDistSqr = 25000000.00f;
    this->bSkipPersist = false;
    this->bShowOnMap = false;
    this->bUseScale = false;
    this->bObserver = false;
    this->SerializationType = SerializationTypeDefault;
    this->bGenerateBoxCollisionsFromVisActor = false;
    this->bGenerateMeshCollisionsFromVisActor = false;
    this->GenerateMeshCollisionMask = 0;
    this->GenerateMeshCollisionStepAngle = 0.00f;
    this->bGenerateMeshCollisionVaultable = true;
    this->GenerateMeshCollisionSurfaceType = EAnvilPhysicalSurfaceType::Default;
    this->VisActorClass = NULL;
    this->VisActorTemplateClass = NULL;
    this->bIgnoreErrorNoInteractionMask = false;
    this->VisActorDefaultObject = NULL;
}

UProxyComponent* UEntityTemplate::GetProxyComponent(UClass* EntityType, UClass* ComponentType) {
    return NULL;
}


