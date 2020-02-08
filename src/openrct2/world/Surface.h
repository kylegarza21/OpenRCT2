/*****************************************************************************
 * Copyright (c) 2014-2019 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../common.h"
#include "TileElement.h"

enum
{
    TERRAIN_GRASS,
    TERRAIN_SAND,
    TERRAIN_DIRT,
    TERRAIN_ROCK,
    TERRAIN_MARTIAN,
    TERRAIN_CHECKERBOARD,
    TERRAIN_GRASS_CLUMPS,
    TERRAIN_ICE,
    TERRAIN_GRID_RED,
    TERRAIN_GRID_YELLOW,
    TERRAIN_GRID_BLUE,
    TERRAIN_GRID_GREEN,
    TERRAIN_SAND_DARK,
    TERRAIN_SAND_LIGHT,
    TERRAIN_ROOF_BROWN,
    TERRAIN_ROOF_LOG,
    TERRAIN_ROOF_IRON,
    TERRAIN_ROOF_GREY,

    // Technical types (not selectable)
    TERRAIN_CHECKERBOARD_INVERTED = 14,
    TERRAIN_UNDERGROUND_VIEW,
};

enum
{
    TERRAIN_EDGE_ROCK,
    TERRAIN_EDGE_WOOD_RED,
    TERRAIN_EDGE_WOOD_BLACK,
    TERRAIN_EDGE_ICE,

    TERRAIN_EDGE_RCT2_COUNT,

    TERRAIN_EDGE_BRICK = TERRAIN_EDGE_RCT2_COUNT,
    TERRAIN_EDGE_IRON,
    TERRAIN_EDGE_GREY,
    TERRAIN_EDGE_YELLOW,
    TERRAIN_EDGE_RED,
    TERRAIN_EDGE_PURPLE,
    TERRAIN_EDGE_GREEN,
    TERRAIN_EDGE_STONE_BROWN,
    TERRAIN_EDGE_STONE_GREY,
    TERRAIN_EDGE_SKYSCRAPER_A,
    TERRAIN_EDGE_SKYSCRAPER_B,

    TERRAIN_EDGE_COUNT
};

enum
{
    GRASS_LENGTH_MOWED,
    GRASS_LENGTH_CLEAR_0,
    GRASS_LENGTH_CLEAR_1,
    GRASS_LENGTH_CLEAR_2,
    GRASS_LENGTH_CLUMPS_0,
    GRASS_LENGTH_CLUMPS_1,
    GRASS_LENGTH_CLUMPS_2
};

enum
{
    OWNERSHIP_UNOWNED = 0,
    OWNERSHIP_CONSTRUCTION_RIGHTS_OWNED = (1 << 4),
    OWNERSHIP_OWNED = (1 << 5),
    OWNERSHIP_CONSTRUCTION_RIGHTS_AVAILABLE = (1 << 6),
    OWNERSHIP_AVAILABLE = (1 << 7)
};

enum
{
    TILE_ELEMENT_SLOPE_FLAT = 0x00,
    TILE_ELEMENT_SLOPE_ALL_CORNERS_UP = 0x0F,

    TILE_ELEMENT_SLOPE_N_CORNER_UP = (1 << 0),
    TILE_ELEMENT_SLOPE_E_CORNER_UP = (1 << 1),
    TILE_ELEMENT_SLOPE_S_CORNER_UP = (1 << 2),
    TILE_ELEMENT_SLOPE_W_CORNER_UP = (1 << 3),
    TILE_ELEMENT_SLOPE_DOUBLE_HEIGHT = (1 << 4),

    TILE_ELEMENT_SLOPE_W_CORNER_DN = TILE_ELEMENT_SLOPE_ALL_CORNERS_UP & ~TILE_ELEMENT_SLOPE_W_CORNER_UP,
    TILE_ELEMENT_SLOPE_S_CORNER_DN = TILE_ELEMENT_SLOPE_ALL_CORNERS_UP & ~TILE_ELEMENT_SLOPE_S_CORNER_UP,
    TILE_ELEMENT_SLOPE_E_CORNER_DN = TILE_ELEMENT_SLOPE_ALL_CORNERS_UP & ~TILE_ELEMENT_SLOPE_E_CORNER_UP,
    TILE_ELEMENT_SLOPE_N_CORNER_DN = TILE_ELEMENT_SLOPE_ALL_CORNERS_UP & ~TILE_ELEMENT_SLOPE_N_CORNER_UP,

    TILE_ELEMENT_SLOPE_NE_SIDE_UP = TILE_ELEMENT_SLOPE_N_CORNER_UP | TILE_ELEMENT_SLOPE_E_CORNER_UP,
    TILE_ELEMENT_SLOPE_SE_SIDE_UP = TILE_ELEMENT_SLOPE_E_CORNER_UP | TILE_ELEMENT_SLOPE_S_CORNER_UP,
    TILE_ELEMENT_SLOPE_NW_SIDE_UP = TILE_ELEMENT_SLOPE_N_CORNER_UP | TILE_ELEMENT_SLOPE_W_CORNER_UP,
    TILE_ELEMENT_SLOPE_SW_SIDE_UP = TILE_ELEMENT_SLOPE_S_CORNER_UP | TILE_ELEMENT_SLOPE_W_CORNER_UP,

    TILE_ELEMENT_SLOPE_W_E_VALLEY = TILE_ELEMENT_SLOPE_E_CORNER_UP | TILE_ELEMENT_SLOPE_W_CORNER_UP,
    TILE_ELEMENT_SLOPE_N_S_VALLEY = TILE_ELEMENT_SLOPE_N_CORNER_UP | TILE_ELEMENT_SLOPE_S_CORNER_UP
};

// Surface
#define TILE_ELEMENT_SURFACE_DIAGONAL_FLAG 0x10       // in TileElement.properties.surface.slope
#define TILE_ELEMENT_SURFACE_RAISED_CORNERS_MASK 0x0F // in TileElement.properties.surface.slope
#define TILE_ELEMENT_SURFACE_SLOPE_MASK                                                                                        \
    (TILE_ELEMENT_SURFACE_DIAGONAL_FLAG | TILE_ELEMENT_SURFACE_RAISED_CORNERS_MASK) // in TileElement.properties.surface.slope

#define TILE_ELEMENT_SURFACE_OWNERSHIP_MASK 0xF0
#define TILE_ELEMENT_SURFACE_PARK_FENCE_MASK 0x0F
