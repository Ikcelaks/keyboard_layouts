# Magic Sturdy

```
V M L C P "        | B ^ U O , \
S T R D Y Q        $ F N E A I =
X K J G W            Z H - / .
        ⎵ ⇥     ' @ ⇧
```
`^` is the `magic` key, and `@` is the `repeat` key.

## Magic Key Mappings

|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Prev  | `A` | `B` | `C` | `D` | `E` | `F` | `G` | `H` | `I`  | `J`   | `K` | `L` | `M`   | `N`   | `O` | `P` |
| Magic | `O` | --  | `Y` | `Y` | `U` | --  | `Y` | --  | `ON` | `UST` | `S` | `k` | `ENT` | `ION` | `A` | `Y` |

|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Prev  | `Q` | `R` | `S` | `T`    | `U` | `V`  | `X`   | `Y` | `Z` | `,`    | `.` | `/` | `-` | `=` | WS and `"` |
| Magic | --  | `L` | `K` | `MENT` | `E` | `ER` | `ES`  | `P` | --  | `⎵AND` | `\` | --  | `>` | `>` | `THE`      |

A second press of the `magic` key outputs `N`, regardless of the previous key.

See the [README](../README.md) for an overview on how the `magic` key works.

## Repeat Key Overrides

| Prev | Repeat |
| --- | --- |
| `A` | `ND` |
| `I` | `NG` |
| `N` | `F` |

The `repeat` key simply repeats any other previous key. For example `L` `repeat` outputs `L` `L`.

## Goals

Magic Sturdy is a minor but powerful variation of the already excellent STRD1 layout that @O-X-E-Y
generated in Oxeylyzer. The core purpose of the `magic` key is to nearly eliminate all problem SFBs
and scissors from the layout.

Soon after, it was extended to provide briefs for the four most common trigrams and a few other sequences.

## Features

The most important mappings for improving typing flow are the vowel mappings that convert the SFBs on `UE`, `EU`, and `OA`
to inward rolls; the left-index mappings that convert the SFBs involving `Y` to alternations; and the mappings involving
`K` that eliminates those scissors.

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

## Metrics

TODO
