#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCache

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct GeometryCache.TrackRenderData
// 0x0070 (0x0070 - 0x0000)
struct alignas(0x10) FTrackRenderData final
{
public:
	uint8                                         Pad_12BD[0x70];                                    // 0x0000(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTrackRenderData) == 0x000010, "Wrong alignment on FTrackRenderData");
static_assert(sizeof(FTrackRenderData) == 0x000070, "Wrong size on FTrackRenderData");

// ScriptStruct GeometryCache.GeometryCacheMeshData
// 0x00A8 (0x00A8 - 0x0000)
struct alignas(0x08) FGeometryCacheMeshData final
{
public:
	uint8                                         Pad_12BE[0xA8];                                    // 0x0000(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGeometryCacheMeshData) == 0x000008, "Wrong alignment on FGeometryCacheMeshData");
static_assert(sizeof(FGeometryCacheMeshData) == 0x0000A8, "Wrong size on FGeometryCacheMeshData");

// ScriptStruct GeometryCache.GeometryCacheVertexInfo
// 0x0008 (0x0008 - 0x0000)
struct FGeometryCacheVertexInfo final
{
public:
	uint8                                         Pad_12BF[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGeometryCacheVertexInfo) == 0x000001, "Wrong alignment on FGeometryCacheVertexInfo");
static_assert(sizeof(FGeometryCacheVertexInfo) == 0x000008, "Wrong size on FGeometryCacheVertexInfo");

// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FGeometryCacheMeshBatchInfo final
{
public:
	uint8                                         Pad_12C0[0xC];                                     // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGeometryCacheMeshBatchInfo) == 0x000004, "Wrong alignment on FGeometryCacheMeshBatchInfo");
static_assert(sizeof(FGeometryCacheMeshBatchInfo) == 0x00000C, "Wrong size on FGeometryCacheMeshBatchInfo");

}

