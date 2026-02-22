# Warlords II Original Asset Resource Forks

Extracted from the original Warlords II (Mac OS, SSG 1993) application bundle.
Git cannot track Mac resource forks directly, so these are extracted copies of
the `..namedfork/rsrc` data for each file.

## Directory Structure

```
assets/
├── terrain/
│   ├── grasslands.rsrc         # Grasslands terrain set (512KB)
│   ├── mudflats.rsrc           # Mudflats terrain set (542KB)
│   └── ice_world.rsrc          # Ice World terrain set (472KB)
│                                  Each contains: PICT 30020-30023 (terrain tiles),
│                                  RD/RV/SH resources (road/river/shore maps)
├── armies/
│   ├── spectremia_armies.rsrc  # Army sprite sheets (109KB)
│   └── icon.rsrc               # Finder icon
├── cities/
│   ├── spectremia_cities.rsrc  # City sprite sheets (68KB)
│   └── icon.rsrc               # Finder icon
├── shields/
│   ├── elemental_shields.rsrc  # Shield/faction icons (114KB)
│   └── icon.rsrc               # Finder icon
└── scenarios/
    ├── erythea_campaign.rsrc   # Erythea (181KB)
    ├── isladia_campaign.rsrc   # Isladia (183KB)
    ├── hadesha_campaign.rsrc   # Hadesha (153KB)
    ├── tutoria.rsrc            # Tutorial (175KB)
    ├── dragon_realms.rsrc      # Dragon Realms (142KB)
    └── isles_of_sorcery.rsrc   # Isles of Sorcery (172KB)
                                  Each scenario contains: MAP, CITY, ARMY,
                                  ARMYTYPE, HERO resources + scenario metadata
```

## Usage

These `.rsrc` files are raw Mac resource fork data. Parse them with:
- `tools/parse_resource_fork.py` — Python resource fork parser
- `tools/view_resources.py` — Extract and view PICT/cicn/icon resources as PNG

The main app resource fork is at `tools/ppc_verification/wl2_rsrc.bin` (3.6MB).

The `deploy.sh` build script copies the original files (with resource forks intact)
to SheepShaver via `ditto`, so these extracted copies are for analysis and
version control only.
