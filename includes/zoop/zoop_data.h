AddBlockTimers
    .byte #21
    .byte #18
    .byte #15
    .byte #15
    .byte #12
    .byte #12
    .byte #6
Colors
    .byte #CONS_COLOR_RED
    .byte #CONS_COLOR_ORANGE
    .byte #CONS_COLOR_YELLOW
    .byte #CONS_COLOR_GREEN
    .byte #CONS_COLOR_BLUE
    .byte #CONS_COLOR_PURPLE
PlayerZone_Colors
    .byte #CONS_PLAYERZONE_ACTION
    .byte #CONS_PLAYERZONE_NOACT
    .byte #CONS_PLAYERZONE_ACTION
PlayerColMemAddresses
    .byte BlockQueue_Top_0
    .byte BlockQueue_Top_1
    .byte BlockQueue_Top_2
    .byte BlockQueue_Top_3
    .byte BlockQueue_Top_4
    .byte BlockQueue_Bot_0
    .byte BlockQueue_Bot_1
    .byte BlockQueue_Bot_2
    .byte BlockQueue_Bot_3
    .byte BlockQueue_Bot_4
;;;;;;;;;;;;;;;;;;;;;;;
PlayerPositions_Columns
    .byte #$2D
    .byte #$41
    .byte #$55
    .byte #$69
    .byte #$7D
    .byte #$7D
;;;;;;;;;;;;;;;;;;;;;;;
Sounds_AUDC0
    .byte #00
    .byte #12
    .byte #12
    .byte #15
    .byte #12
Sounds_AUDF0
    .byte #00
    .byte #20
    .byte #30
    .byte #30
    .byte #30
Sounds_AUDV0
    .byte #0
    .byte #5
    .byte #5
    .byte #5
    .byte #5
;;;;;;;;;;;;;;;;;;;;;;;
Minus_Sign
    .byte #%00000000
    .byte #%00000000
    .byte #%00000000
    .byte #%00000000
    .byte #%11111111
    .byte #%00000000
    .byte #%00000000
;;;;;;;;;;;;;;;;;;;;;;; 
Score_Numbers
    ; ---- 00
    .byte #%11111111
    .byte #%11100011
    .byte #%11100011
    .byte #%11100011
    .byte #%11100011
    .byte #%11111111
    ; ---- 11
    .byte #%11111111
    .byte #%00011100
    .byte #%00011100
    .byte #%00011100
    .byte #%11011100
    .byte #%01111100
    ; ---- 22
    .byte #%11111110
    .byte #%11100000
    .byte #%00111000
    .byte #%00001110
    .byte #%11100110
    .byte #%01111100
    ; ---- 33
    .byte #%01111100
    .byte #%11100011
    .byte #%00001110
    .byte #%00001110
    .byte #%11100011
    .byte #%01111100
    ; ---- 44
    .byte #%00001110
    .byte #%00001110
    .byte #%00001110
    .byte #%11111111
    .byte #%11001110
    .byte #%11001110
    ; ---- 55
    .byte #%11111111
    .byte #%00000011
    .byte #%00011111
    .byte #%11100000
    .byte #%11100000
    .byte #%11111111
    ; ---- 66
    .byte #%11111111
    .byte #%11100011
    .byte #%11111111
    .byte #%11100000
    .byte #%11100000
    .byte #%11111111
    ; ---- 77
    .byte #%00011000
    .byte #%00011000
    .byte #%00011000
    .byte #%00000111
    .byte #%00000111
    .byte #%11111111
    ; ---- 88
    .byte #%11111111
    .byte #%11000011
    .byte #%11100111
    .byte #%11111111
    .byte #%11000011
    .byte #%11111111
    ; ---- 99
    .byte #%00000111
    .byte #%00000111
    .byte #%11111111
    .byte #%11000111
    .byte #%11000111
    .byte #%11111111
;;;;;;;;;;;;;;;;;;;;;;; 
Title_Screen_PF1_LEFT
    .byte #%01111110
    .byte #%01100010
    .byte #%00110000
    .byte #%00001100
    .byte #%01000110
    .byte #%01111110  
Title_Screen_PF1_RIGHT
    .byte #%00000011
    .byte #%00000110
    .byte #%00000110
    .byte #%01111110
    .byte #%01100110
    .byte #%01111110
Title_Screen_PF2_LEFT
    .byte #%01111110
    .byte #%01100110
    .byte #%01100110
    .byte #%01100110
    .byte #%01100110
    .byte #%01111110
Title_Screen_Option1_Sprite1
    .byte #%11101110
    .byte #%10001000
    .byte #%10001110
    .byte #%10001000
    .byte #%10001000
    .byte #%10001110
Title_Screen_Option1_Sprite2
    .byte #%01001110
    .byte #%10101000
    .byte #%10101110
    .byte #%10101000
    .byte #%10101000
    .byte #%10101110
Title_Screen_Option1_Sprite3
    .byte #%11100000
    .byte #%10001000
    .byte #%10000000
    .byte #%10001000
    .byte #%10000000
    .byte #%10000000
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
Title_Screen_Option2_Sprite1
    .byte #%11001110
    .byte #%10101000
    .byte #%11001000
    .byte #%10101000
    .byte #%10101000
    .byte #%11001000
Title_Screen_Option2_Sprite2
    .byte #%11101110
    .byte #%10101000
    .byte #%10101000
    .byte #%10101000
    .byte #%10101000
    .byte #%11101110
Title_Screen_Option2_Sprite3
    .byte #%11100000
    .byte #%00101000
    .byte #%01100000
    .byte #%11001000
    .byte #%10000000
    .byte #%11100000