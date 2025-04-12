# Intel_interview
GPU HW IP Design and Verification Engineer Intern 

# Intel Interview – Function Approximation

This repository contains the implementation of a hardware-approximated trigonometric function:

f(x) = sin(2x - π/4),   for x ∈ [0, 2)

## Task I – Modeling (Octave)

The Octave model generates approximation coefficients using a quadratic interpolator based on the Taylor series.

### Files (`matlab-model/`)

- `approx.m` – computes coefficients `a`, `b`, `c`
- `print_coeffs.m` – converts coefficients to fixed-point (s4.28) hex format
- `plot_err.m` – plots approximation error using data from the C++ model (`err.dat`)
- `run-approx.sh` – automates coefficient generation and conversion

### Output

- `coeffs.txt` – double-precision coefficients
- `hex_coeffs.txt` – fixed-point hex coefficients

### Usage

```bash
cd matlab-model
chmod +x run-approx.sh
./run-approx.sh
