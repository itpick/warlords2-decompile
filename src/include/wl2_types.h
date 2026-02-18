/*
 * wl2_types.h - Warlords II Data Structure Definitions
 *
 * Reconstructed from Ghidra analysis of PowerPC binary.
 * All offsets verified against RE_data_structures.md
 *
 * Memory layout: Big-endian (PowerPC)
 */

#ifndef WL2_TYPES_H
#define WL2_TYPES_H

/*
 * Army Record - 0x42 (66) bytes
 * Base: GameState + army_index * 0x42 + 0x1604
 * Count: GameState + 0x1602
 */
typedef struct ArmyRecord {
    short       x;                      /* +0x00: map X coordinate */
    short       y;                      /* +0x02: map Y coordinate */
    char        name[ARMY_NAME_LEN];    /* +0x04: army name (16 bytes) */
    unsigned char sprite_index;         /* +0x14: icon/sprite index */
    char        owner;                  /* +0x15: player index (0-7, 0x0F=neutral) */
    char        unit_types[4];          /* +0x16: unit type IDs per slot (-1=empty) */
    char        unit_moves[4];          /* +0x1A: movement points remaining per unit */
    char        unit_hits[4];           /* +0x1E: hit points per unit */
    char        unit_bonus[4];          /* +0x22: combat bonus per unit */
    char        unit_experience[4];     /* +0x26: experience level per unit */
    short       strength_display;       /* +0x2A: displayed army strength */
    char        active_unit_type;       /* +0x2C: leading unit type (0xFF=none) */
    char        turns_fortified;        /* +0x2D: fortification counter */
    char        unknown_2e;             /* +0x2E: copied from turns_fortified */
    unsigned char origin_player;        /* +0x2F: original owner */
    short       unknown_30;             /* +0x30: rarely accessed */
    short       has_orders;             /* +0x32: 0=idle, 1=moving to target */
    short       target_x;              /* +0x34: move destination X (-1=none, -2=vectoring) */
    short       target_y;              /* +0x36: move destination Y */
    unsigned long packed_data_1;        /* +0x38: packed byte fields */
    short       hero_items[4];         /* +0x3A: hero artifact slots (0=empty) */
} ArmyRecord;                          /* total: 0x42 bytes */

/*
 * City Record - 0x5C (92) bytes
 * Base: ExtState + city_index * 0x5C + 0x24C
 * Count: ExtState + 0x24A
 */
typedef struct CityRecord {
    short       active;                 /* +0x00: 0=destroyed, nonzero=active */
    short       producing_type;         /* +0x02: unit type being produced (-1=none) */
    short       garrison_army;          /* +0x04: index of garrisoned army */
    short       production_slots[4];    /* +0x06: army indices being produced (-1=empty) */
    short       build_queue[12];        /* +0x0E: unit types in build queue (-1=empty) */
    short       build_queue_turns[12];  /* +0x26: turns remaining per queue item */
    short       build_queue_data[6];    /* +0x3E: additional queue data */
    short       vectoring_targets[4];   /* +0x4A: vectoring destination city indices */
    short       vectoring_data_2[4];    /* +0x52: additional vectoring data */
    short       production_turns;       /* +0x58: base production time */
    short       city_flags;             /* +0x5A: facility bitmask */
} CityRecord;                          /* total: 0x5C bytes */

/*
 * Unit Type Definition - 0x16 (22) bytes
 * Base: *gUnitTypeTable + type_id * 0x16
 * Count: up to 29 (0x1D)
 */
typedef struct UnitTypeDef {
    short       type_id;                /* +0x00: type identifier */
    short       cost;                   /* +0x02: production cost / name ID */
    char        unit_class;             /* +0x04: index into class table */
    char        faction;                /* +0x05: which faction can build */
    char        defense;                /* +0x06: defense strength */
    char        attack;                 /* +0x07: attack strength */
    char        movement_points;        /* +0x08: base movement */
    char        _pad09;                 /* +0x09: padding/unknown */
    char        terrain_group;          /* +0x0A: terrain bonus index */
    char        _pad0b;                 /* +0x0B: padding/unknown */
    unsigned long capabilities;         /* +0x0C: capability flags bitmask */
    short       _extra_10;             /* +0x10: additional data */
    short       _extra_12;             /* +0x12: additional data */
    short       _extra_14;             /* +0x14: additional data */
} UnitTypeDef;                         /* total: 0x16 bytes */

/*
 * Unit Class Record - 6 bytes
 * Base: *gUnitClassTable + class_id * 6
 * Count: ~29
 */
typedef struct UnitClassDef {
    char        exists;                 /* +0x00: nonzero if valid class */
    char        terrain_strength;       /* +0x01: terrain-based strength mod */
    char        defense_modifier;       /* +0x02: defense combat modifier */
    char        _pad03;                 /* +0x03: padding */
    char        is_special;             /* +0x04: nonzero = flying/naval */
    char        transport_type;         /* +0x05: 1 = can carry units */
} UnitClassDef;                        /* total: 6 bytes */

/*
 * Unit Instance Template - 0x3E (62) bytes
 * Used by GetUnitTypeInfo (FUN_10049628)
 * Base: *gUnitInstanceTable + index * 0x3E
 */
typedef struct UnitInstance {
    short       type_id;                /* +0x00: matched against requested type */
    char        data[0x14];             /* +0x02: name/stats data (bulk copied) */
    short       hit_points;             /* +0x16: -> army unit_hits */
    short       move_points;            /* +0x18: -> army unit_moves */
    short       experience;             /* +0x1A: -> army unit_experience */
    short       combat_bonus;           /* +0x1C: -> army unit_bonus */
    short       gold_cost;              /* +0x1E: subtracted from treasury */
    char        remaining[0x1E];        /* +0x20: rest of template */
} UnitInstance;                        /* total: 0x3E bytes */

/*
 * Site/Ruin Record - 0x20 (32) bytes
 * Base: GameState + site_index * 0x20 + 0x812
 * Count: GameState + 0x810
 */
typedef struct SiteRecord {
    short       x;                      /* +0x00: map X coordinate */
    short       y;                      /* +0x02: map Y coordinate */
    short       data_1;                 /* +0x04: reward type? */
    char        _pad06[0x12];           /* +0x06: unknown fields */
    char        site_type;              /* +0x18: 2=temple, 5=ruin, 6=library */
    char        site_subtype;           /* +0x19: item table index */
    char        unknown_1a;             /* +0x1A: unknown */
    char        _pad1b;                 /* +0x1B: padding */
    short       is_active;              /* +0x1C: 0=searched, nonzero=available */
    short       visited_bitmask;        /* +0x1E: one bit per player */
} SiteRecord;                          /* total: 0x20 bytes */

/*
 * Artifact/Item Record - 0x1E (30) bytes
 * Base: GameState + item_index * 0x1E + 0xD26
 */
typedef struct ItemRecord {
    char        item_class;             /* +0x00: item classification */
    char        unknown_01;             /* +0x01: unknown */
    char        item_state;             /* +0x02: 1=active, 3=placed on map */
    char        _pad03;                 /* +0x03: padding */
    short       owner_army;             /* +0x04: army index holding item */
    short       location_x;             /* +0x06: map X / bonus value */
    short       location_y;             /* +0x08: map Y / bonus value */
    char        remaining[0x14];        /* +0x0A: rest of record */
} ItemRecord;                          /* total: 0x1E bytes */

/*
 * Per-Player Statistics - 0x14 (20) bytes
 * Base: GameState + player * 0x14 + 0x186
 */
typedef struct PlayerStats {
    short       gold;                   /* +0x00: treasury amount */
    short       stats[9];               /* +0x02: income, upkeep, etc. */
} PlayerStats;                         /* total: 0x14 bytes */

/*
 * Hero Data - stored within GameState
 * Names: GameState + hero_index * 0x14 + 0x224 (20 chars each)
 * Active: GameState + hero_index * 2 + 0x544
 * Data1:  GameState + hero_index * 2 + 0x594
 * Packed: GameState + hero_index + 0x5E4
 */
typedef struct HeroData {
    char        name[HERO_NAME_LEN];    /* 20 bytes */
    /* active/data1/packed stored in separate arrays */
} HeroData;

/*
 * Map Tile - 4 bytes (accessed as uint at y * 0xE0 + x * 2)
 * Upper byte = terrain type
 * Bits 16-19 = owner player
 * Bit 22 = visibility
 * Lower 16 bits = tile graphic
 */
typedef unsigned long MapTile;

/*
 * Main Game State Structure
 * Pointed to by gGameState (piRam1011735c)
 * Size: ~0x1604 header + army_count * 0x42
 */
typedef struct GameState {
    char            _header[0x8C];                          /* +0x000 */
    short           player_color_idx[MAX_PLAYERS];          /* +0x08C */
    char            _pad9c[4];                              /* +0x09C */
    short           player_color_primary[MAX_PLAYERS];      /* +0x0A0 */
    short           player_color_secondary[MAX_PLAYERS];    /* +0x0B0 */
    short           player_faction[MAX_PLAYERS];            /* +0x0C0 */
    short           player_type[MAX_PLAYERS];               /* +0x0D0: 0=human, 1=AI */
    char            _padE0[0x30];                           /* +0x0E0 */
    short           current_player;                         /* +0x110 */
    short           _pad112;                                /* +0x112 */
    short           combat_bonus;                           /* +0x114: difficulty level */
    short           fog_of_war_enabled;                     /* +0x116 */
    short           resource_offset_1;                      /* +0x118 */
    short           hero_questing_enabled;                  /* +0x11A */
    short           allied_victory_enabled;                 /* +0x11C */
    short           _pad11e;                                /* +0x11E */
    short           message_pending;                        /* +0x120 */
    short           random_events_enabled;                  /* +0x122 */
    short           vectoring_enabled;                      /* +0x124 */
    short           crazed_setting;                         /* +0x126 */
    short           city_defense_bonus;                     /* +0x128 */
    short           observers_allowed;                      /* +0x12A */
    short           _pad12c;                                /* +0x12C */
    short           hero_generation_enabled;                /* +0x12E */
    short           resource_offset_2;                      /* +0x130 */
    short           save_data_field;                        /* +0x132 */
    unsigned long   game_flags;                             /* +0x134: bits 27,28 used */
    short           current_turn;                           /* +0x136 */
    short           player_alive[MAX_PLAYERS];              /* +0x138 */
    long            resource_handle_3;                      /* +0x148 */
    char            _pad14c[4];                             /* +0x14C */
    long            resource_handle_4;                      /* +0x150 */
    char            _pad154[4];                             /* +0x154 */
    short           intro_movie_flag;                       /* +0x158 */
    short           sound_enabled;                          /* +0x15A */
    long            resource_handle_5;                      /* +0x15C */
    short           game_started_flag;                      /* +0x15E: 0=not started */
    long            resource_handle_6;                      /* +0x160 */
    short           turn_display_number;                    /* +0x162 */
    short           player_order[MAX_PLAYERS];              /* +0x164 */
    short           resource_offset_3;                      /* +0x170 */
    char            _pad172[4];                             /* +0x172 */
    short           viewport_scroll_y;                      /* +0x176 */
    short           viewport_scroll_x;                      /* +0x178 */
    short           map_height;                             /* +0x17A */
    short           map_width;                              /* +0x17C */
    short           viewport_center_x;                      /* +0x17E */
    short           viewport_center_y;                      /* +0x180 */
    short           max_armies;                             /* +0x182 */
    char            _pad184[2];                             /* +0x184 */
    PlayerStats     player_stats[MAX_PLAYERS];              /* +0x186: 0x14 * 8 = 0xA0 */
    char            hero_names[MAX_HEROES][HERO_NAME_LEN];  /* +0x224: 20 * 40 = 0x320 */
    short           hero_active[MAX_HEROES];                /* +0x544 */
    short           hero_data_1[MAX_HEROES];                /* +0x594 */
    unsigned long   hero_packed[MAX_HEROES];                /* +0x5E4: ?? may be smaller */
    char            _pad_terrain[0x22];                     /* padding to 0x60C */
    char            terrain_move_cost[MAX_TERRAIN_TYPES][MAX_UNIT_CLASSES]; /* +0x60C */
    char            _pad_terrain2[0x06];                    /* alignment */
    char            terrain_properties[0xFF];               /* +0x711 */
    short           site_count;                             /* +0x810 */
    SiteRecord      sites[MAX_SITES];                       /* +0x812: 0x20 * 40 = 0x500 */
    /* +0xD12 .. pad to 0xD26 */
    char            _pad_items[0x14];                       /* alignment */
    ItemRecord      items[MAX_ITEMS];                       /* +0xD26: 0x1E * 20 */
    char            _pad_score[0xAE];                       /* pad to 0x1122 */
    short           player_score[MAX_PLAYERS];              /* +0x1122 */
    short           player_tracking[MAX_PLAYERS];           /* +0x1132 */
    char            _pad_diplo[0x440];                      /* pad to 0x1582 */
    unsigned long   diplomacy[MAX_PLAYERS][MAX_PLAYERS];    /* +0x1582: packed entries */
    short           army_count;                             /* +0x1602 */
    ArmyRecord      armies[1];                              /* +0x1604: variable length */
} GameState;

/*
 * Extended State Structure
 * Pointed to by gExtState (piRam10117468)
 */
typedef struct ExtState {
    char            _header[0x0C];                  /* +0x00 */
    short           unknown_0c;                     /* +0x0C */
    short           unknown_0e;                     /* +0x0E */
    char            _pad10[0x10];                   /* +0x10 */
    short           search_depth;                   /* +0x20: pathfinding depth */
    short           unknown_22;                     /* +0x22 */
    char            _pad24[0x0C];                   /* +0x24 */
    short           unknown_30;                     /* +0x30 */
    short           unknown_32;                     /* +0x32 */
    short           production_modifier;            /* +0x34 */
    char            _pad36[2];                      /* +0x36 */
    short           allied_victory_check;           /* +0x38 */
    char            _pad3a[6];                      /* +0x3A */
    short           unknown_40;                     /* +0x40 */
    short           unknown_42;                     /* +0x42 */
    char            _pad44[2];                      /* +0x44 */
    short           selected_city_index;            /* +0x46: -1 = none */
    short           ai_mode_flag;                   /* +0x48: 0=normal, nonzero=AI */
    short           unknown_4a;                     /* +0x4A */
    char            _pad4c[0x0A];                   /* +0x4C */
    unsigned char   army_state[MAX_ARMIES];         /* +0x56: per-army state */
    char            _pad_flags[0x00];               /* gap to 0x11E */
    /* Note: actual gap size depends on MAX_ARMIES */
    unsigned char   army_flags[MAX_ARMIES];         /* +0x11E: per-army flags */
    unsigned char   army_move_count[MAX_ARMIES];    /* +0x182: moves taken this turn */
    unsigned char   army_extra[MAX_ARMIES];         /* +0x1E6: unknown per-army data */
    short           city_count;                     /* +0x24A */
    CityRecord      cities[1];                      /* +0x24C: variable length */
} ExtState;

/*
 * Note: ExtState per-army arrays have gaps between them.
 * In practice, access them as:
 *   army_state:  (char*)ext + 0x56  + army_index
 *   army_flags:  (char*)ext + 0x11E + army_index
 *   army_moves:  (char*)ext + 0x182 + army_index
 *   army_extra:  (char*)ext + 0x1E6 + army_index
 *   city_count:  *(short*)((char*)ext + 0x24A)
 *   city[i]:     (CityRecord*)((char*)ext + 0x24C + i * 0x5C)
 */

#endif /* WL2_TYPES_H */
