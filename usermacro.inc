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