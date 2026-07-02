# Andy's Repo of Atari Games
Here I am keeping all my games I develop for the Atari. Why? Why Not!

## ZOOP 2 ##
status: WIP
TODO: -- fill out TODO

## PuzzleBubble ##
status: Abandoned
Why: the logic for ball to brick detection was too much for me. 

## Useful Commands ##
This is being developed in VS Code using the Atari Dev extension and setup.
Compiler is DASM for me.
* Run Game: hit F5
* Debug Commands for Stella

This is the command that'll let you know if the scanlines go over 262
```
breakif {_scan>#262}
```
These are important as ways to find what is putting a value you don't expect in block QUEUE

The *5 addresses are top queues, the *8 addresses are bot queues 
```
trapWriteIf {*$A5 == 0} $A5

trapWriteIf {*$B5 == 0} $B5 

trapWriteIf {*$C5 == 0} $C5 

trapWriteIf {*$D5 == 0} $D5 

trapWriteIf {*$E5 == 0} $E5 


trapWriteIf {*$A8 == 0} $A8

trapWriteIf {*$B8 == 0} $B8

trapWriteIf {*$C8 == 0} $C8

trapWriteIf {*$D8 == 0} $D8

trapWriteIf {*$E8 == 0} $E8
```
