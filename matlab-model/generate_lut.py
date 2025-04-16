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
            continue
        hex_value = entry[coef_index].replace("0x", "")
        lines.append(f"        7'b{format(i, '07b')} : {var_name} = 32'h{hex_value};")
    return "\n".join(lines)

def generate_lut_sv(hex_file_path, output_path):
    with open(hex_file_path, "r") as f:
        lines = [line.strip() for line in f if line.strip() and not line.startswith("#")]

    entries = [line.split() for line in lines]
    a_cases = format_case_lines(entries, 1, 'a')
    b_cases = format_case_lines(entries, 2, 'b')
    c_cases = format_case_lines(entries, 3, 'c')

    lut_code = lut_template.format(a_cases=a_cases, b_cases=b_cases, c_cases=c_cases)

    with open(output_path, "w") as f:
        f.write(lut_code)

    print(f"Wygenerowano {output_path} na podstawie {hex_file_path}")

def generate_coefftable_hpp(coeffs_file_path, output_path):
    with open(coeffs_file_path, "r") as f:
        lines = [line.strip() for line in f if line.strip() and not line.startswith("#")]

    entries = []
    for line in lines:
        parts = line.split()
        if len(parts) >= 4:
            index, a, b, c = parts[:4]
            entries.append((int(index), a, b, c))

    with open(output_path, "w") as f:
        f.write("const double CoeffTable [128][4] =\n{\n")
        f.write("//      k                                  a                                  b                                  c\n")
        for index, a, b, c in entries:
            f.write(f"    {{ {index:3}, {a:>35}, {b:>35}, {c:>35} }},\n")
        f.write("};\n")

    print(f"Wygenerowano {output_path} na podstawie {coeffs_file_path}")


if __name__ == "__main__":

    lut_path = "/mnt/e/Intel_interview/rtl-model/quadra_aprox/src/lut.sv"
    hpp_lut_path = "/mnt/e/Intel_interview/c++-model/CoeffTable.hpp"
    generate_lut_sv("hex_coeffs.txt", lut_path)
    generate_coefftable_hpp("coeffs.txt", hpp_lut_path)
