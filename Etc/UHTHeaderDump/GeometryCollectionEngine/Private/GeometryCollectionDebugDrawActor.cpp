#include "GeometryCollectionDebugDrawActor.h"

AGeometryCollectionDebugDrawActor::AGeometryCollectionDebugDrawActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugDrawWholeCollection = false;
    this->bDebugDrawHierarchy = false;
    this->bDebugDrawClustering = false;
    this->HideGeometry = EGeometryCollectionDebugDrawActorHideGeometry::HideNone;
    this->bShowRigidBodyId = false;
    this->bShowRigidBodyCollision = false;
    this->bCollisionAtOrigin = false;
    this->bShowRigidBodyTransform = false;
    this->bShowRigidBodyInertia = false;
    this->bShowRigidBodyVelocity = false;
    this->bShowRigidBodyForce = false;
    this->bShowRigidBodyInfos = false;
    this->bShowTransformIndex = false;
    this->bShowTransform = false;
    this->bShowParent = false;
    this->bShowLevel = false;
    this->bShowConnectivityEdges = false;
    this->bShowGeometryIndex = false;
    this->bShowGeometryTransform = false;
    this->bShowBoundingBox = false;
    this->bShowFaces = false;
    this->bShowFaceIndices = false;
    this->bShowFaceNormals = false;
    this->bShowSingleFace = false;
    this->SingleFaceIndex = 0;
    this->bShowVertices = false;
    this->bShowVertexIndices = false;
    this->bShowVertexNormals = false;
    this->bUseActiveVisualization = false;
    this->PointThickness = 0.00f;
    this->LineThickness = 0.00f;
    this->bTextShadow = false;
    this->TextScale = 0.00f;
    this->NormalScale = 0.00f;
    this->AxisScale = 0.00f;
    this->ArrowScale = 0.00f;
    this->RigidBodyTransformScale = 0.00f;
    this->TransformScale = 0.00f;
    this->ConnectivityEdgeThickness = 0.00f;
    this->GeometryTransformScale = 0.00f;
    this->SpriteComponent = NULL;
}


