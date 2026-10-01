/*
 * Warlords II delayed launcher.
 *
 * Placed in the System Folder's Startup Items so it runs at boot. Instead of
 * launching Warlords immediately (which races the Sound Manager's output-device
 * init during boot and permanently wedges sound), it:
 *   1. waits for the system + Sound Manager to settle,
 *   2. plays a short beep to prime the Apple Mixer (opens the sound output
 *      cleanly while the system is in a good state),
 *   3. launches Warlords II, which then reuses the already-open mixer.
 */
#include <Processes.h>
#include <Files.h>
#include <OSUtils.h>
#include <Sound.h>

int main(void)
{
    unsigned long      t;
    FSSpec             spec;
    LaunchParamBlockRec lpb;

    /* 1. Let boot + the Sound Manager settle (~1s at 60 ticks/sec). */
    Delay(60, &t);

    /* 2. Prime the sound output so the Apple Mixer opens before the game. */
    SysBeep(20);
    Delay(120, &t);

    /* 3. Launch Warlords II (the "Warlords II" folder sits on the desktop). */
    if (FSMakeFSSpec(0, 0, "\pMacintosh HD:Desktop Folder:Warlords II:Warlords II.app", &spec) == noErr) {
        lpb.launchBlockID      = extendedBlock;
        lpb.launchEPBLength    = extendedBlockLen;
        lpb.launchFileFlags    = 0;
        lpb.launchControlFlags = launchContinue;
        lpb.launchAppSpec      = &spec;
        lpb.launchAppParameters = NULL;
        LaunchApplication(&lpb);
    }

    return 0;
}
