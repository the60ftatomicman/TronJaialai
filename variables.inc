
; seg.u Variables
; org $80

boolDraw        .byte
boolSetupRound  .byte
LineIdx         .byte

loopIntI        .byte
loopIntJ        .byte

pf_Index        .byte

pf_TileData_Left   .DS 9
pf_TileData_Right  .DS 9

horizontalBoundries .DS 2

P0XPos          .byte ;-- X coordinates
P1XPos          .byte

P0YPos          .byte ;-- Y coordinate (offset from the start of the playfield)
P1YPos          .byte

P0MssleYPos     .byte
MissleCounter   .byte

P0Idx           .byte ;-- data index of our sprite data
P1Idx           .byte

P0FrameIdx      .byte ;--- animation frame
P1FrameIdx      .byte
P0FrameCounter  .byte ;--- frame counter
P1FrameCounter  .byte

P0Ptr		.DS 2
P1Ptr		.DS 2