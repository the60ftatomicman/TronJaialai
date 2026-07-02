; Macros
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
; WYSNC_REPEATER
; Original author: Andy Garber
; just a wrapper around REPEAT X lines of WSYNC. used to help with spacing in this game.
    MAC WYSNC_REPEATER
.LINES_TO_WAIT SET {1}
    REPEAT .LINES_TO_WAIT
        sta WSYNC
    REPEND
    ENDM
;--------
; START_FRAME
; Original author: Andy Garber
; just the first few lines when drawing a frame
    MAC START_FRAME
.GOTO_LBL_ON_RESET SET {1}
    ;lsr SWCHB      ; test Game Reset switch
    ;bcc .GOTO_LBL_ON_RESET  ; reset?
    LDA INPT4  ; Load the state of Player 1's fire button
    BPL .GOTO_LBL_ON_RESET   ; Branch if Bit 7 is clear (button pulls line low)
    VERTICAL_SYNC  ; 1 + 3 lines of VSYNC
    ENDM
;--------
; SET_SOUND
; Original author: Andy Garber
; set the sound idx and counter
    MAC SET_SOUND
.IDX      SET {1}
.COUNTER  SET {2}
    lda #.IDX
    sta PlaySoundIdx
    lda #.COUNTER
    sta PlaySoundCounter
    ENDM