# Remake full-game recording at FAST speed — first capture attempt

Date: 2026-10-10. Goal: a FULL game of the remake recorded at Game Speed = Fast, with sound,
as the comparison counterpart to the original's `.devloop/movies/orig_fullgame.mp4`
(3.6 h, no audio).

## What is on disk

| File | What it is |
|---|---|
| `.devloop/movies/remake_fullgame_fast_final.mp4` | 5:46 (346 s), 1024x768 h264 **video + AAC audio** (9.1 MB) |
| `.devloop/movies/attempt1_supplement/remake_fullgame_fast_000.mp4` | 10:02 supplement chunk from the first recorder run (video only, no muxed audio) |
| `.devloop/audio/3201/game_fast.wav` | 5:57 raw audio (22 kHz mono mix from the bridge audio tap) |

The final movie muxes the 346 s video with the 357 s audio (`-shortest`), so it has both
streams (ffprobe: h264 video 1024x768 + aac audio).

## What the recording shows

- Isles of Sorcery, More Choices setup with all four sides Human (Magicians played, the
  other three hot-seat idle), Beginner options — the same setup as the wingame runs.
- The **Game Settings → Game Speed = Fast** radio being set at the start of the recording
  (verified by the green x-mark in the Fast checkbox, OCR/pixel checks only — zero images
  were viewed by the agent; every verification was tesseract/PIL text output).
- Turn 1: the free "A Hero!" offer hired, the White College city window closed, and the
  starting wizard walked out of White College with the numpad step keys (planner path
  `13333366633666699`, cost 18) toward Moonlight.
- Turn 1 → 2 idle hot-seat transition, opening moves of turn 2.

## What did NOT work, and why it is short

Three separate **emulator freezes** (canvas static, zero idle diff, input ignored) ended
each recorder run after 3-18 minutes of live play. The freezes hit only while the
`record.mjs` screenshot loop was running alongside interactive input; the same input
sequences worked fine before the recorder started. Each freeze forced a `wl.sh reload`
(~4 min reboot + relaunch + push + full setup). After the third freeze the session's
wall-clock budget was exhausted, so the recording was stopped with ~6 minutes of game
time captured instead of the full 25-round game.

The recorder/audio infrastructure itself works (video + audio tap both produce valid
files); the blocking problem is emulator stability under recording + interactive load.

## How to drive the remake for a future full-game capture (findings)

Everything below was re-derived and verified this session (blind, via OCR of screenshots):

- **Setup click map** (1024x768): picker Isles row (360,404), "Use Selected Scenario"
  (372,548), easy-setup "More Choices" (413,512), rollers at (372/457/542/627, 254),
  "Begin Game" (680,544), title-screen click-to-continue (512,384), hero "Hire" (703,470),
  city window "Done" (718,455), Game menu title (411,8), "Game Settings..." (460,131),
  the **Fast radio** (348,391), the dialog "OK" (376,443), "End Turn" menu item (460,22).
- Roller state is only readable as text for Knight/Lord/Warlord/Off; the Human state never
  OCRs. Use the readable anchors: cycle until "off", then click once more.
- **Selection**: clicking an own city tile opens the city window but also selects the stack
  (main.c `StackLeadAt` branch). After closing the window the stack stays selected and the
  numpad/`WASD` step keys work (`MoveSelectedArmyBy`). `S` / numpad-5 recentres the view on
  the selection but needs an existing selection.
- Step keys: arrows = cardinal, `QWEASDZXC` + numpad 1-9 = the 8-way grid (`'6'` = East).
  The walk is a **stored path**: one click on a far visible tile paths the whole route —
  no key-by-key walking needed, as long as the tile is on screen.
- The bridge drops clicks when `record.mjs` hammers `/shot`; keep the recorder at ≤0.5 fps
  or stop it during interactive phases.

## Comparison workflow note

For a side-by-side against `orig_fullgame.mp4` the remake side still needs a full-length
capture. The recipe above produces one provided the emulator freeze is fixed first
(candidates: recorder fps, headless Chromium CPU throttling, or the remake's own
`DevWaitNextEvent` timing under load). The audio tap captures hire fanfares, movement and
war sounds, which the original's recording lacks.
