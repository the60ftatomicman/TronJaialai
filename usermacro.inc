;--------
; FLIP_BOOL
; Original author: Andy Garber
; Takes a memory address and flips it's value than stores it
; Assumes the Memory address value is 1 or 0
; usage: FLIP_BOOL SomeAddress
        MAC FLIP_BOOL
.MEMADDR     SET {1}
        lda .MEMADDR
        EOR #$01
        sta .MEMADDR
        ENDM
;--------
; FLIP_BOOLY
; Original author: Andy Garber
; Like Flip Bool but with a Y offset.
; Assumes the Memory address value is 1 or 0
; usage: FLIP_BOOLY SomeAddress
        MAC FLIP_BOOLY
.MEMADDR     SET {1}
        lda .MEMADDR,y
        EOR #$01
        sta .MEMADDR,y
        ENDM
;--------
; CLEAR_PLAYFIELD
; Original author: Andy Garber
; sets playfield to 0 across the board
; usage: CLEAR_PLAYFIELD
        MAC CLEAR_PLAYFIELD
        lda #%00000000
        sta PF0
        sta PF1
        sta PF2
        ENDM
;--------
; LOAD_POINTER_WITH_DATA
; Original author: Andy Garber
; Loads a pointer with low byte than high byte address of data object
; usage: LOAD_POINTER_WITH_DATA pointer data
        MAC LOAD_POINTER_WITH_DATA
.POINTER      SET {1}
.DATA_BLOB    SET {2}
          lda #<.DATA_BLOB
          sta .POINTER
          lda #>.DATA_BLOB
          sta .POINTER+1
        ENDM
;--------
; LOAD_POINTER_WITH_DATA_Y
; Original author: Andy Garber
; LOAD_POINTER_WITH_DATA with Y offset
; usage: LOAD_POINTER_WITH_DATA_Y pointer data
        MAC LOAD_POINTER_WITH_DATA_Y
.POINTER      SET {1}
.DATA_BLOB    SET {2}
          lda #<.DATA_BLOB
          sta .POINTER,y
          lda #>.DATA_BLOB
          iny
          sta .POINTER+1,y
          dey
        ENDM
;--------
; MOVE_PLAYER
; Original author: Andy Garber
; Stores the given horizontal boundries (for our check) than calls moveJoystick 
; which is our subroutine for interpretting user input
        MAC MOVE_PLAYER
.PLAYEROFFSET      SET {1}
.LEFT_BOUNDRY      SET {2}
.RIGHT_BOUNDRY     SET {3}
.STARTING_JOYSTICK SET {4}
        ldx $01
        lda #.RIGHT_BOUNDRY
        sta horizontalBoundries
        lda #.LEFT_BOUNDRY
        sta horizontalBoundries,x
        lda #.STARTING_JOYSTICK
        ldy #.PLAYEROFFSET
	jsr MoveJoystick
        ENDM
;--------
; UPDATE_FRAME_COUNTER
; Original author: Andy Garber
; this updates the frame counter using Y as the offset
        MAC UPDATE_FRAME_COUNTER
        ;dec P0FrameCounter
        lda P0FrameCounter,y
        sec
        sbc #1
        sta P0FrameCounter,y
        ENDM
 