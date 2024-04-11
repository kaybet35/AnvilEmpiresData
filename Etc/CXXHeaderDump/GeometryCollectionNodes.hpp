#ifndef UE4SS_SDK_GeometryCollectionNodes_HPP
#define UE4SS_SDK_GeometryCollectionNodes_HPP

#include "GeometryCollectionNodes_enums.hpp"

struct FBoolToStringDataflowNode : public FDataflowNode
{
    bool bool;                                                                        // 0x00D0 (size: 0x1)
    FString String;                                                                   // 0x00D8 (size: 0x10)

}; // Size: 0xE8

struct FBoundingBoxDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00D0 (size: 0xB0)
    FBox BoundingBox;                                                                 // 0x0180 (size: 0x38)

}; // Size: 0x1B8

struct FCloseGeometryOnCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00D0 (size: 0xB0)

}; // Size: 0x180

struct FCreateNonOverlappingConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00D0 (size: 0xB0)
    float CanRemoveFraction;                                                          // 0x0180 (size: 0x4)
    float CanExceedFraction;                                                          // 0x0184 (size: 0x4)
    float SimplificationDistanceThreshold;                                            // 0x0188 (size: 0x4)

}; // Size: 0x190

struct FDegreesToRadiansDataflowNode : public FDataflowNode
{
    float Degrees;                                                                    // 0x00D0 (size: 0x4)
    float Radians;                                                                    // 0x00D4 (size: 0x4)

}; // Size: 0xD8

struct FExampleCollectionEditDataflowNode : public FDataflowNode
{
    float Scale;                                                                      // 0x00D0 (size: 0x4)
    FManagedArrayCollection Collection;                                               // 0x00D8 (size: 0xB0)

}; // Size: 0x188

struct FExpandBoundingBoxDataflowNode : public FDataflowNode
{
    FBox BoundingBox;                                                                 // 0x00D0 (size: 0x38)
    FVector Min;                                                                      // 0x0108 (size: 0x18)
    FVector Max;                                                                      // 0x0120 (size: 0x18)
    FVector Center;                                                                   // 0x0138 (size: 0x18)
    FVector HalfExtents;                                                              // 0x0150 (size: 0x18)
    float Volume;                                                                     // 0x0168 (size: 0x4)

}; // Size: 0x170

struct FExpandVectorDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x00D0 (size: 0x18)
    float X;                                                                          // 0x00E8 (size: 0x4)
    float Y;                                                                          // 0x00EC (size: 0x4)
    float Z;                                                                          // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FExplodedViewDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00D0 (size: 0xB0)
    float UniformScale;                                                               // 0x0180 (size: 0x4)
    FVector Scale;                                                                    // 0x0188 (size: 0x18)

}; // Size: 0x1A0

struct FFloatToIntDataflowNode : public FDataflowNode
{
    EFloatToIntFunctionEnum Function;                                                 // 0x00D0 (size: 0x1)
    float float;                                                                      // 0x00D4 (size: 0x4)
    int32 Int;                                                                        // 0x00D8 (size: 0x4)

}; // Size: 0xE0

struct FFloatToStringDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00D0 (size: 0x4)
    FString String;                                                                   // 0x00D8 (size: 0x10)

}; // Size: 0xE8

struct FGenerateTetrahedralCollectionDataflowNodes : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00D0 (size: 0xB0)

}; // Size: 0x180

struct FGetCollectionAssetDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Output;                                                   // 0x00D0 (size: 0xB0)

}; // Size: 0x180

struct FHashStringDataflowNode : public FDataflowNode
{
    FString String;                                                                   // 0x00D0 (size: 0x10)
    int32 Hash;                                                                       // 0x00E0 (size: 0x4)

}; // Size: 0xE8

struct FHashVectorDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x00D0 (size: 0x18)
    int32 Hash;                                                                       // 0x00E8 (size: 0x4)

}; // Size: 0xF0

struct FIntToFloatDataflowNode : public FDataflowNode
{
    int32 Int;                                                                        // 0x00D0 (size: 0x4)
    float float;                                                                      // 0x00D4 (size: 0x4)

}; // Size: 0xD8

struct FIntToStringDataflowNode : public FDataflowNode
{
    int32 Int;                                                                        // 0x00D0 (size: 0x4)
    FString String;                                                                   // 0x00D8 (size: 0x10)

}; // Size: 0xE8

struct FLogStringDataflowNode : public FDataflowNode
{
    bool PrintToLog;                                                                  // 0x00D0 (size: 0x1)
    FString String;                                                                   // 0x00D8 (size: 0x10)

}; // Size: 0xE8

struct FMakeBoxDataflowNode : public FDataflowNode
{
    EMakeBoxDataTypeEnum DataType;                                                    // 0x00D0 (size: 0x1)
    FVector Min;                                                                      // 0x00D8 (size: 0x18)
    FVector Max;                                                                      // 0x00F0 (size: 0x18)
    FVector Center;                                                                   // 0x0108 (size: 0x18)
    FVector Size;                                                                     // 0x0120 (size: 0x18)
    FBox Box;                                                                         // 0x0138 (size: 0x38)

}; // Size: 0x170

struct FMakeLiteralBoolDataflowNode : public FDataflowNode
{
    bool Value;                                                                       // 0x00D0 (size: 0x1)
    bool bool;                                                                        // 0x00D1 (size: 0x1)

}; // Size: 0xD8

struct FMakeLiteralFloatDataflowNode : public FDataflowNode
{
    float Value;                                                                      // 0x00D0 (size: 0x4)
    float float;                                                                      // 0x00D4 (size: 0x4)

}; // Size: 0xD8

struct FMakeLiteralIntDataflowNode : public FDataflowNode
{
    int32 Value;                                                                      // 0x00D0 (size: 0x4)
    int32 Int;                                                                        // 0x00D4 (size: 0x4)

}; // Size: 0xD8

struct FMakeLiteralStringDataflowNode : public FDataflowNode
{
    FString Value;                                                                    // 0x00D0 (size: 0x10)
    FString String;                                                                   // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FMakeLiteralVectorDataflowNode : public FDataflowNode
{
    FVector Value;                                                                    // 0x00D0 (size: 0x18)
    FVector Vector;                                                                   // 0x00E8 (size: 0x18)

}; // Size: 0x100

struct FMakePointsDataflowNode : public FDataflowNode
{
    TArray<FVector> Point;                                                            // 0x00D0 (size: 0x10)
    TArray<FVector> Points;                                                           // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FMathConstantsDataflowNode : public FDataflowNode
{
    EMathConstantsEnum Constant;                                                      // 0x00D0 (size: 0x1)
    float float;                                                                      // 0x00D4 (size: 0x4)

}; // Size: 0xD8

struct FPlaneCutterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00D0 (size: 0xB0)
    FBox BoundingBox;                                                                 // 0x0180 (size: 0x38)
    int32 NumPlanes;                                                                  // 0x01B8 (size: 0x4)
    float RandomSeed;                                                                 // 0x01BC (size: 0x4)
    float Grout;                                                                      // 0x01C0 (size: 0x4)
    float Amplitude;                                                                  // 0x01C4 (size: 0x4)
    float Frequency;                                                                  // 0x01C8 (size: 0x4)
    float Persistence;                                                                // 0x01CC (size: 0x4)
    float Lacunarity;                                                                 // 0x01D0 (size: 0x4)
    int32 OctaveNumber;                                                               // 0x01D4 (size: 0x4)
    float PointSpacing;                                                               // 0x01D8 (size: 0x4)
    bool AddSamplesForCollision;                                                      // 0x01DC (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x01E0 (size: 0x4)

}; // Size: 0x1E8

struct FPrintStringDataflowNode : public FDataflowNode
{
    bool PrintToScreen;                                                               // 0x00D0 (size: 0x1)
    bool PrintToLog;                                                                  // 0x00D1 (size: 0x1)
    FColor Color;                                                                     // 0x00D4 (size: 0x4)
    float Duration;                                                                   // 0x00D8 (size: 0x4)
    FString String;                                                                   // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FRadialScatterPointsDataflowNode : public FDataflowNode
{
    FVector Center;                                                                   // 0x00D0 (size: 0x18)
    FVector Normal;                                                                   // 0x00E8 (size: 0x18)
    float Radius;                                                                     // 0x0100 (size: 0x4)
    int32 AngularSteps;                                                               // 0x0104 (size: 0x4)
    int32 RadialSteps;                                                                // 0x0108 (size: 0x4)
    float AngleOffset;                                                                // 0x010C (size: 0x4)
    float Variability;                                                                // 0x0110 (size: 0x4)
    float RandomSeed;                                                                 // 0x0114 (size: 0x4)
    TArray<FVector> Points;                                                           // 0x0118 (size: 0x10)

}; // Size: 0x128

struct FRadiansToDegreesDataflowNode : public FDataflowNode
{
    float Radians;                                                                    // 0x00D0 (size: 0x4)
    float Degrees;                                                                    // 0x00D4 (size: 0x4)

}; // Size: 0xD8

struct FRandomFloatDataflowNode : public FDataflowNode
{
    bool Deterministic;                                                               // 0x00D0 (size: 0x1)
    float RandomSeed;                                                                 // 0x00D4 (size: 0x4)
    float float;                                                                      // 0x00D8 (size: 0x4)

}; // Size: 0xE0

struct FRandomFloatInRangeDataflowNode : public FDataflowNode
{
    bool Deterministic;                                                               // 0x00D0 (size: 0x1)
    float RandomSeed;                                                                 // 0x00D4 (size: 0x4)
    float Min;                                                                        // 0x00D8 (size: 0x4)
    float Max;                                                                        // 0x00DC (size: 0x4)
    float float;                                                                      // 0x00E0 (size: 0x4)

}; // Size: 0xE8

struct FRandomUnitVectorDataflowNode : public FDataflowNode
{
    bool Deterministic;                                                               // 0x00D0 (size: 0x1)
    float RandomSeed;                                                                 // 0x00D4 (size: 0x4)
    FVector Vector;                                                                   // 0x00D8 (size: 0x18)

}; // Size: 0xF0

struct FRandomUnitVectorInConeDataflowNode : public FDataflowNode
{
    bool Deterministic;                                                               // 0x00D0 (size: 0x1)
    float RandomSeed;                                                                 // 0x00D4 (size: 0x4)
    FVector ConeDirection;                                                            // 0x00D8 (size: 0x18)
    float ConeHalfAngle;                                                              // 0x00F0 (size: 0x4)
    FVector Vector;                                                                   // 0x00F8 (size: 0x18)

}; // Size: 0x110

struct FResetGeometryCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00D0 (size: 0xB0)

}; // Size: 0x180

struct FSetCollectionAssetDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00D0 (size: 0xB0)

}; // Size: 0x180

struct FSkeletalMeshToCollectionDataflowNode : public FDataflowNode
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x00D0 (size: 0x8)
    FManagedArrayCollection Collection;                                               // 0x00D8 (size: 0xB0)

}; // Size: 0x188

struct FStringAppendDataflowNode : public FDataflowNode
{
    FString String1;                                                                  // 0x00D0 (size: 0x10)
    FString String2;                                                                  // 0x00E0 (size: 0x10)
    FString String;                                                                   // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FUniformScatterPointsDataflowNode : public FDataflowNode
{
    int32 MinNumberOfPoints;                                                          // 0x00D0 (size: 0x4)
    int32 MaxNumberOfPoints;                                                          // 0x00D4 (size: 0x4)
    float RandomSeed;                                                                 // 0x00D8 (size: 0x4)
    FBox BoundingBox;                                                                 // 0x00E0 (size: 0x38)
    TArray<FVector> Points;                                                           // 0x0118 (size: 0x10)

}; // Size: 0x128

struct FVectorToStringDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x00D0 (size: 0x18)
    FString String;                                                                   // 0x00E8 (size: 0x10)

}; // Size: 0xF8

struct FVoronoiFractureDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00D0 (size: 0xB0)
    TArray<FVector> Points;                                                           // 0x0180 (size: 0x10)
    float RandomSeed;                                                                 // 0x0190 (size: 0x4)
    float ChanceToFracture;                                                           // 0x0194 (size: 0x4)
    bool GroupFracture;                                                               // 0x0198 (size: 0x1)
    float Grout;                                                                      // 0x019C (size: 0x4)
    float Amplitude;                                                                  // 0x01A0 (size: 0x4)
    float Frequency;                                                                  // 0x01A4 (size: 0x4)
    float Persistence;                                                                // 0x01A8 (size: 0x4)
    float Lacunarity;                                                                 // 0x01AC (size: 0x4)
    int32 OctaveNumber;                                                               // 0x01B0 (size: 0x4)
    float PointSpacing;                                                               // 0x01B4 (size: 0x4)
    bool AddSamplesForCollision;                                                      // 0x01B8 (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x01BC (size: 0x4)

}; // Size: 0x1C0

#endif
