# Magic Sturdy

```
V M L C P "        | B ^ U O , \
S T R D Y Q        $ F N E A I -
X K J G W            Z H ' ? .
        ⎵ ⇥     / @ ⇧
```
`^` is the `magic` key, and `@` is the `repeat` key.

## Magic Key Mappings

|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Prev  | `A` | `B`      | `C` | `D` | `E` | `F` | `G` | `H` | `I`  | `J`   | `K` | `L` | `M`   | `N`   | `O` | `P` |
| Magic | `O` | `EFORE`  | `Y` | `Y` | `U` | --  | `Y` | --  | `ON` | `UST` | `S` | `k` | `ENT` | `ION` | `A` | `Y` |

|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Prev  | `Q` | `R` | `S` | `T`    | `U` | `V`  | `W`    | `X`   | `Y` | `Z` | `,`    | `.` | `/` | `-` | `=` | `wspc` |
| Magic | --  | `L` | `K` | `MENT` | `E` | `ER` | `HICH` | `ES`  | `P` | --  | `⎵BUT` | `\` | --  | `>` | `>` | `THE`  |

A second press of the `magic` key outputs `N`, regardless of the previous key. `wspc` stands for "white space" and
includes `space`, `tab`, `enter`, `"`, and `(`.


See the [README](../README.md) for an overview on how the `magic` key works.

## Repeat Key Overrides

| Prev | Repeat |
| --- | --- |
| `A` | `ND` |
| `I` | `NG` |
| `Y` | `OU` |
| `N` | `F` |
| `B` | `ECAUSE` |
| `W` | `OULD` |
| `,` | `⎵AND` |
| `.` | `ORG` |
| `wspc` | `FOR` |

The `repeat` key simply repeats any other previous key. For example `L` `repeat` outputs `L` `L`.

## QMK Implementation

I have added the implementation of Magic Sturdy that I use. The keymap file is for a ZSA moonlander, but the code trivially generalizes to any keyboard. However, it does rely on a pending QMK feature that is still an open PR. You will need to use the PR's branch to compile this code. Here is the PR: https://github.com/qmk/qmk_firmware/pull/19700

## Goals

Magic Sturdy is a minor but powerful variation of the already excellent STRD1 layout that @O-X-E-Y
generated in Oxeylyzer. The core purpose of the `magic` key is to nearly eliminate all problem SFBs
and scissors from the layout.

Soon after, it was extended to provide briefs for of the six most common trigrams (`THE`, `ING`, `AND`,
`ION`, `FOR`, and `YOU`) and a few other sequences. The briefs for `WOULD`, `WHICH`, `BECAUSE`, and `BEFORE`
are a recent and somewhat of an experiment to test if comparatively rare but high impact briefs are worth using.

## Features

The most important mappings for improving typing flow are the vowel mappings that convert the SFBs on `UE`, `EU`, and `OA`
to inward rolls; the left-index mappings that convert the SFBs involving `Y` to alternations; the mappings involving
`K` that eliminates those scissors; and the mapping that removes the `R` `L` SFB (which is particularly troublesome in
STURDY, because "rl" is usually expanded to "rld" or "rly", which makes it a bad candidate for alt-fingering).

I began adding macros once I realized that the reasonably common `TM` bigram was virtually always expanded to `TMENT`.
From there I added macros where they added value and there were no other flow problems to fix for a particular key.
Care was taken to avoid creating too much usage imbalances, and preference was always given to improving flom over
removing keystrokes. For example, `Y` maps to `P` instead of `OU`.

A very important detail is that all of the highest frequency uses of the `magic` key relocate a right index press
rather than adding one (`THE` contains `H` and `ON` contains `N`). For this reason, the total usage on the right-index
does not increase by as much as you might expect.

Similar to the last point, there is very little interaction between the `magic` key and any other key on the left-index.
Only the `^N` SFB is non-negligible, so I made a second press of the `magic` key always output `N`, so the SFB becomes a
double tap instead.

The overrides to the regular `repeat` key are a recent addition. They eliminate the one bad SFB on the right-index (`NF`) and
also provide briefs for the second and third most common trigrams: `AND` and `ING`. An additional bonus of the latter
two is that they reduce usage of both index fingers.

## Why Sturdy?

This layout is based on STRD1, but I call it Magic Sturdy, because that's the name that everyone knows, and the
distinguishing features of Sturdy are on its consonant hand, which this layout shares. Additionally, aside from the
right-index, the vowel hand can be setup however you personally prefer.

STRD1 is the base, because that was the layout I was learning, and the `magic` key was conceived as an elegant solution
to that layout's two biggest pain points: "RLD"/"RLD" and "Y" plus everything else on the left-index. I thought that it
would be great if I could replace the useless `Z` key with a key that would be either `Y` or `L` depending on what I
needed. When I noticed that the same spot also provided fixes for "UE", "EU", and "OA", I got very excited.

Serendipitously, there are several characteristics of STRD1 that make it very well suited for having a `magic` key on the
vowel side index. Most critically, this finger begins with fairly low usage and very low movement when compared to the 
vowel index in a typical layout (The weighted finger movement as measured by Oxeylyzer is only 0.661). 

## Metrics
The following stats are from [Mana](https://github.com/Zakkkk/mana). These stats are for the Magic Sturdy variant without any briefs, as in only the bigram rules. The stats are for monkeyracer (Monkeytype + Typeracer quotes) and e200 (the default Monkeytype word list of the most popular 200 words).

monkeyracer:
```
MagicSturdy | monkeyracer
  v m l c p " | b * u o , \
  s t r d y q $ f n e a i -
  x k j g w ~ ~ z h ' ? .

Magic rules: ao cy dy eu gy lk oa py rl sk ue yp ks tm

Handbalance: 43.12% / 56.88%

Alt: 34.813%
Rolls (Total): 51.356%
  Inroll: 22.87%
  Outroll: 26.638%
  In3roll: 1.073%
  Out3roll: 0.775%
Redirect (+sfs): 6.029%
  Redirect (Weak) (+sfs): 0.322%

┌────────────────┬──────────┬────────────┬─────────────┐
│                │  bigram  │  skipgram  │  skipgram2  │
├────────────────┼──────────┼────────────┼─────────────┤
│  same finger   │  0.439%  │  5.899%    │  8.353%     │
│  repeat        │  2.812%  │  3.113%    │  --         │
│  stretch       │  2.919%  │  3.11%     │  3.045%     │
│  half scissor  │  2.726%  │  3.943%    │  3.698%     │
│  full scissor  │  0.393%  │  1.106%    │  1.214%     │
└────────────────┴──────────┴────────────┴─────────────┘
```

e200:
```
MagicSturdy | e200
  v m l c p " | b * u o , \
  s t r d y q $ f n e a i -
  x k j g w ~ ~ z h ' ? .

Magic rules: ao cy dy eu gy lk oa py rl sk ue yp ks tm

Handbalance: 45.218% / 54.782%

Alt: 36.748%
Rolls (Total): 50.111%
  Inroll: 22.049%
  Outroll: 27.394%
  In3roll: 0.445%
  Out3roll: 0.223%
Redirect (+sfs): 6.013%
  Redirect (Weak) (+sfs): 0.223%

┌────────────────┬──────────┬────────────┬─────────────┐
│                │  bigram  │  skipgram  │  skipgram2  │
├────────────────┼──────────┼────────────┼─────────────┤
│  same finger   │  0%      │  5.345%    │  7.435%     │
│  repeat        │  3.246%  │  3.563%    │  --         │
│  stretch       │  3.709%  │  3.786%    │  4.089%     │
│  half scissor  │  2.164%  │  2.673%    │  1.859%     │
│  full scissor  │  0.155%  │  0.223%    │  0.743%     │
└────────────────┴──────────┴────────────┴─────────────┘
```
