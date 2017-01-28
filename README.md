# DragonWarrior3
Dragon Warrior III Reverse Engineering &amp; Reconstructing

## Why DW3?
1. It's thought to be similar to DW4, but DW4 has muuuuuuuuuuch more code (scripts) to comb through
2. DW1 and DW2 are not as interesting to most people

## Mission

We have two main aims here:

1. Understand the game better and find secrets
2. Lay the groundwork for a comprehensive romhack.
 * Make the UX more clean (similar to DW4, or improved even)
 * Creative redesign work
3. Reimplement the game in C, to prove total mastery of the RE
 * This would facilitate a much more massive hack
 * This can be automatically validated against a longplay on the rom using the same inputlog (should be poll-based, not frame-based)

## Results

To begin with, we have disassembled the game and made a process for automatically re-assembling to the rom.

CaH4e3 has reprogrammed some things to be simpler, and easier to move around (For more information, see notes_eng.txt)
  * Warning: The timing of the game has changed from the original ROM due to some of the edits.
  * Warning: Occasionally we make mistakes--the code may be slightly bugged even now.
  * Warning: Old savestates won't work when the ROM changes even slightly

Of course, we've attempted to thoroughly document the code. This is nowhere near complete. As part of this, we're changing magic numbers to symbolic constants as much as possible.

It is easy to accidentally change the ROM when cleaning up. Then again, sometimes we change the ROM on purpose. In order to make it clear that most commits are simply for documentation and not meant to change the ROM, I'm labeling those "neutral". If you're working on a "neutral" commit and the rom changes (build it before you commit) then you've goofed.

I've begun an attempt to document the game mechanics succinctly in AllPossibleActions.html. It's a bit risky (error-prone) to decouple it from the code, but it really needs a digestation step before it's useful to anyone.

There is also a c#-based editor for the ORIGINAL ROM (it has hardcoded ROM offsets). It can crack area maps (calls it "mdec").

Some noteworthy findings (noteworthy to me, anyway):
* There is hardly any unused data
* The game is 'scripted' 100% in hand-coded asm
* Area maps are encoded in a bit-packed "LOGO"-like programming language (set current tile, fill boxes, move and turn). I think it's possible these were written by hand (it is daunting to think of an algorithm that creates this format economically from raw data)

## Future Work

Suggestions for introductory assistance:
* Crack overworld map storage format, update tool to decode
* Generate pattern data from pngs
* RE some more!
* Contribute to AllPossibleActions or reformat to markdown
