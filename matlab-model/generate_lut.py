# generate_lut.py

lut_template = """
`include "quadra.vh"

module lut
(
    input  x1_t  x1,
    output a_t   a,
    output b_t   b,
    output c_t   c
);

    // Read coefficients:
    always_comb
    unique case (x1)
{a_cases}
        default: a = 'x;
    endcase

    always_comb
    unique case (x1)
{b_cases}
        default: b = 'x;
    endcase

    always_comb
    unique case (x1)
{c_cases}
        default: c = 'x;
    endcase

endmodule
"""

def format_case_lines(entries, coef_index, var_name):
    lines = []
    for i, entry in enumerate(entries):
        if len(entry) < 4:
            continue  # skip invalid lines
        hex_value = entry[coef_index].replace("0x", "")
        lines.append(f"        7'b{format(i, '07b')} : {var_name} = 32'h{hex_value};")
    return "\n".join(lines)

with open("hex_coeffs.txt", "r") as f:
    lines = f.readlines()

entries = [line.strip().split() for line in lines if line.strip() and not line.startswith("#")]

a_cases = format_case_lines(entries, 1, 'a')
b_cases = format_case_lines(entries, 2, 'b')
c_cases = format_case_lines(entries, 3, 'c')

lut_code = lut_template.format(a_cases=a_cases, b_cases=b_cases, c_cases=c_cases)

output_path = "/mnt/e/Intel_interview/rtl-model/quadra_aprox/src/lut.sv"

with open(output_path, "w") as f:
    f.write(lut_code)

print("Wygenerowano lut.sv na podstawie hex_coeffs.txt")
