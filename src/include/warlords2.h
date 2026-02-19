/*
 * warlords2.h - Warlords II (1993) Master Header
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 * Reconstruction target: Classic Mac OS / PowerPC
 */

#ifndef WARLORDS2_H
#define WARLORDS2_H

#ifdef MODERN_BUILD
    /* Modern compatibility layer */
    #include "mac_compat.h"
#else
    /* Real Mac OS Toolbox headers */
    #include <Types.h>
    #include <Memory.h>
    #include <QuickDraw.h>
    #include <Resources.h>
    #include <Sound.h>
    #include <Events.h>
    #include <Windows.h>
    #include <Dialogs.h>
    #include <Menus.h>
    #include <TextEdit.h>
    #include <Fonts.h>
    #include <math.h>
#endif

/* Game constants */
#define MAX_PLAYERS         8
#define MAX_ARMIES          200     /* practical max from army_count */
#define MAX_CITIES          80
#define MAX_UNIT_TYPES      29      /* 0x1d */
#define MAX_UNIT_CLASSES    29      /* 0x1d */
#define MAX_UNIT_INSTANCES  28      /* 0x1c */
#define MAX_HEROES          40
#define MAX_SITES           40
#define MAX_ITEMS           20
#define MAX_TERRAIN_TYPES   9
#define UNITS_PER_ARMY      4
#define HERO_NAME_LEN       20      /* 0x14 */
#define ARMY_NAME_LEN       16

#define MAP_STRIDE          0xE0    /* bytes per row in map data (112 tiles * 2 bytes) */
#define MAP_MAX_WIDTH       112     /* 0xE0 / 2 */

/* Player type constants */
#define PLAYER_HUMAN        0
#define PLAYER_AI           1

/* Army state constants (ExtState.army_state[]) */
#define ARMY_STATE_NORMAL   0
#define ARMY_STATE_RAZED    5
#define ARMY_STATE_GARRISON 6
#define ARMY_STATE_GUARDING 7
#define ARMY_STATE_SEARCHING 8

/* Army flags bitmask (ExtState.army_flags[]) */
#define ARMY_FLAG_MOVED     0x01    /* bit 0: moved this turn */
#define ARMY_FLAG_ENGAGED   0x04    /* bit 2: in combat */
#define ARMY_FLAG_PORT      0x20    /* bit 5: has port access */
#define ARMY_FLAG_SEA       0x40    /* bit 6: sea capable */
#define ARMY_FLAG_AIR       0x80    /* bit 7: air capable */

/* City flags bitmask */
#define CITY_FLAG_REVOLT1   0x01
#define CITY_FLAG_REVOLT2   0x02
#define CITY_FLAG_REVOLT3   0x04
#define CITY_FLAG_PORT      0x08    /* has port */
#define CITY_FLAG_TOWER     0x10    /* has tower/fortification */
#define CITY_FLAG_TEMPLE    0x20    /* has temple/special */

/* Unit capabilities flags (UnitTypeDef.capabilities) */
#define UNIT_CAP_TERRAIN_MASK  0x007F
#define UNIT_CAP_SEARCH_RUINS  0x0200
#define UNIT_CAP_FLYING        0x1000
#define UNIT_CAP_MOVE_CAT_MASK 0xF000
#define UNIT_CAP_MOVE_CAT_SHIFT 12

/* Movement categories */
#define MOVE_CAT_GROUND     0
#define MOVE_CAT_NAVAL      2
#define MOVE_CAT_FLYING     3

/* Diplomacy constants */
#define DIPLO_WAR           0
#define DIPLO_ALLIED        2

/* Terrain types */
#define TERRAIN_ROAD        10
#define TERRAIN_WATER       11

/* Map tile bitmasks */
#define TILE_GRAPHIC_MASK   0x0000FFFF
#define TILE_OWNER_MASK     0x000F0000
#define TILE_OWNER_SHIFT    16
#define TILE_VISIBLE_MASK   0x00400000
#define TILE_VISIBLE_SHIFT  22
#define TILE_TERRAIN_MASK   0xFF000000
#define TILE_TERRAIN_SHIFT  24

/* Special values */
#define SLOT_EMPTY          0xFF    /* -1 as unsigned byte: empty unit slot */
#define NO_TARGET           (-1)    /* 0xFFFF: no movement target */
#define VECTORING_TARGET    (-2)    /* 0xFFFE: vectoring destination */
#define NEUTRAL_PLAYER      0x0F

/* Include sub-headers */
#include "wl2_types.h"
#include "wl2_globals.h"

#endif /* WARLORDS2_H */
