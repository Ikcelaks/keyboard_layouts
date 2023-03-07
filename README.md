# Keyboard Layouts

## General Information

I don't create original layouts. Instead, I modify existing layouts to incorporate a dynamically defined
key that I call the "magic" key. To date, I have only put any real thought into the Magic Sturdy layout, and
all others should be considered rough concepts at best. As a general rule, I design layouts for a columnar
keyboard with a modest stagger. I will some times point out different options for row-stagger users, but
I'm not looking at the problem from that perspective, so I'm certainly missing optimizations.

## Magic Key

The magic key is a key that dynamically adjusts its output based on the most recent previous keycode.

The implementation that I use is the Alternate Repeat Key in QMK that is part of the Repeat Key feature designed by GitHub user @getreuer.

The output of a keypress of the magic key is determined by a function that takes the previously tapped keycode along with any modifiers (shift, ctrl, alt, etc) and returns a keycode (plus modifiers). The returned
keycode can be a simple keycode corresponding to a single character or something more complicated, like a
macro that corresponds to a series of multiple keypresses.

For example, in Magic Sturdy, the magic key outputs an `L` if the previous key was `R`, and it outputs `Y` if
the previous key was one of `C`, `P`, `D`, `G`, and `W`. Additionally, in the deluxe form, it outputs `THE`, if the previous key was `space`, `tab`, `enter`, or `"`. There are many more mappings, but this provides a
taste of the power.

## Repeat Key

I also use a repeat key, which, like the magic key, dynamically adjusts its output based on the most recent previous keycode. This key generally simply repeats the previous keycode, such that `L` + `repeat` outputs `LL`.

On a few occasions, I override this default behavior to have the `repeat` key act as a second magic key when
pressed after keys that are rarely repeated such as `I` and `A`.

## Layouts

[Magic Sturdy](/magic_sturdy/magic_sturdy.md)