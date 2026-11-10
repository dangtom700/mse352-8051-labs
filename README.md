# 8051 Microcontroller Labs (MSE 352)

Lab coursework on the 8051: digital-logic simulation in Proteus and bare-metal
assembly/C on the microcontroller itself, built in Keil uVision.

**Course:** MSE 352, Simon Fraser University · **Term:** Fall 2024 (labs dated Oct 2024)

## Scope — this is the LABS half

MSE 352 is split across two repositories, deliberately:

| | Where |
|---|---|
| **Lab exercises** (this repo) | you are here |
| **Final project — fan speed control** | [github.com/dangtom700/microcontroller8051](https://github.com/dangtom700/microcontroller8051) |

This folder is the **lab work**: LED patterns and seven-segment displays driven by
bit-shift and rotate loops on ports P0/P1 with software delay loops, BCD-to-seven-segment
decoding, and up/down counters. Proteus for simulation, Keil uVision for the toolchain.

**The fan controller is not here — it is in the project repo above.** Don't cite this
repository as evidence for it. What this one legitimately evidences: bare-metal
register-level programming on 8051 in both assembly and C, and digital-logic design
validated in simulation before hardware.

## What's here

| Path | What it is |
|---|---|
| `lab 3 MSE 352/` | BCD to seven-segment decoder (Proteus) |
| `lab4 MSE 352/` | Lab 4 exercise + handout + bench screenshot |
| `lab5 MSE 352/` | Up/down counter (`cout_down_UP.pdsprj`) |
| `lab6 MSE 352/` | LED blink timing (`LED_blink_blink.pdsprj`) |
| `LAB7MSE352/` | 8051 **assembly** — `Lab7part2.asm` rotates a bit across P1 with a 500 ms delay subroutine; `DEMOARM.asm`; `STARTUP.A51` |
| `final-project/` | Final project in **C** (`main.c`) — port-shift output sequence — with Keil build output and `.hex` |

`final-project/Objects/*.hex` are the built images, kept as proof the projects compile
and link.

## What was excluded

Proteus `Project Backups/` autosave history (32 near-duplicate snapshots), Keil
per-user GUI and option state (`*.uvgui.*`, `*.uvopt`), Proteus `*.workspace` layout
files, and `Thumbs.db`. All are per-user or regenerable, none are source.

## Opening these

`.pdsprj` requires **Proteus Design Suite**. `.uvproj` requires **Keil uVision** (8051
toolchain). The `.asm`, `.A51` and `.c` files are plain text and readable on GitHub —
those are the real evidence here.
