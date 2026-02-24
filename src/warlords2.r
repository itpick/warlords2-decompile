#include "Processes.r"
#include "CodeFragments.r"

resource 'cfrg' (0) {
	{
		kPowerPCCFragArch, kIsCompleteCFrag, kNoVersionNum, kNoVersionNum,
		kDefaultStackSize, kNoAppSubFolder,
		kApplicationCFrag, kDataForkCFragLocator, kZeroOffset, kCFragGoesToEOF,
		"Warlords II"
	}
};

/* 256-color switch confirmation dialog */
#include "Dialogs.r"

resource 'DITL' (256) {
	{
		/* Item 1: "Switch" button (OK) — bottom-right */
		{72, 232, 92, 312},
		Button { enabled, "Switch" };

		/* Item 2: "Cancel" button */
		{72, 142, 92, 222},
		Button { enabled, "Cancel" };

		/* Item 3: Static text message */
		{10, 72, 58, 312},
		StaticText { disabled,
			"Warlords II works best with "
			"256 colors.\n\n"
			"Switch display to 256 colors?"
		};

		/* Item 4: Note icon */
		{10, 20, 42, 52},
		Icon { disabled, 1 };
	}
};

resource 'ALRT' (256) {
	{80, 120, 184, 444},
	256,
	{
		OK, visible, silent,
		OK, visible, silent,
		OK, visible, silent,
		OK, visible, silent
	},
	alertPositionMainScreen
};

resource 'SIZE' (-1) {
	reserved,
	acceptSuspendResumeEvents,
	reserved,
	canBackground,
	needsActivateOnFGSwitch,
	backgroundAndForeground,
	getFrontClicks,
	ignoreChildDiedEvents,
	is32BitCompatible,
	isHighLevelEventAware,
	onlyLocalHLEvents,
	notStationeryAware,
	dontUseTextEditServices,
	reserved,
	reserved,
	reserved,
	5 * 1024 * 1024,
	3 * 1024 * 1024
};
