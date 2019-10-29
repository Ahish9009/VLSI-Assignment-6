////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: O.87xd
//  \   \         Application: netgen
//  /   /         Filename: radix2fft_synthesis.v
// /___/   /\     Timestamp: Tue Oct 29 15:20:01 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim radix2fft.ngc radix2fft_synthesis.v 
// Device	: xc3s500e-5-fg320
// Input file	: radix2fft.ngc
// Output file	: /home/ahish/Desktop/Assignment-6/fft/netgen/synthesis/radix2fft_synthesis.v
// # of Modules	: 1
// Design Name	: radix2fft
// Xilinx        : /opt/Xilinx/13.4/ISE_DS/ISE/
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module radix2fft (
  clk, done, yReal, yImag, temp, x
);
  input clk;
  output done;
  output [7 : 0] yReal;
  output [7 : 0] yImag;
  output [7 : 0] temp;
  input [3 : 0] x;
  wire N0;
  wire N01;
  wire N2;
  wire N4;
  wire N6;
  wire N8;
  wire N9;
  wire clk_BUFGP_15;
  wire count_cmp_eq0000;
  wire done_OBUF_21;
  wire storedx_not0001_inv;
  wire temp_0_35;
  wire temp_0_mux0000;
  wire temp_0_mux0000_bdd0;
  wire temp_1_38;
  wire temp_1_mux0000;
  wire temp_2_40;
  wire temp_2_mux0000;
  wire temp_3_42;
  wire temp_3_mux0000;
  wire temp_4_44;
  wire temp_4_mux0000;
  wire temp_4_mux0000_bdd0;
  wire temp_5_47;
  wire temp_5_mux0000;
  wire temp_6_49;
  wire temp_6_mux0000;
  wire temp_7_51;
  wire temp_7_mux0000;
  wire x_0_IBUF_57;
  wire x_1_IBUF_58;
  wire x_2_IBUF_59;
  wire x_3_IBUF_60;
  wire yImag_2_65;
  wire yImag_3_66;
  wire yImag_7_67;
  wire yReal_0_76;
  wire yReal_1_77;
  wire yReal_2_78;
  wire yReal_3_79;
  wire yReal_5_80;
  wire [0 : 0] Madd__add0000_lut;
  wire [2 : 0] Result;
  wire [1 : 1] _add0000;
  wire [1 : 1] _sub0000;
  wire [1 : 1] _sub0001;
  wire [2 : 0] count;
  wire [3 : 0] storedx;
  GND   XST_GND (
    .G(N0)
  );
  FDE   storedx_0 (
    .C(clk_BUFGP_15),
    .CE(storedx_not0001_inv),
    .D(x_0_IBUF_57),
    .Q(storedx[0])
  );
  FDE   storedx_1 (
    .C(clk_BUFGP_15),
    .CE(storedx_not0001_inv),
    .D(x_1_IBUF_58),
    .Q(storedx[1])
  );
  FDE   storedx_2 (
    .C(clk_BUFGP_15),
    .CE(storedx_not0001_inv),
    .D(x_2_IBUF_59),
    .Q(storedx[2])
  );
  FDE   storedx_3 (
    .C(clk_BUFGP_15),
    .CE(storedx_not0001_inv),
    .D(x_3_IBUF_60),
    .Q(storedx[3])
  );
  FD   temp_5 (
    .C(clk_BUFGP_15),
    .D(temp_5_mux0000),
    .Q(temp_5_47)
  );
  FD   temp_7 (
    .C(clk_BUFGP_15),
    .D(temp_7_mux0000),
    .Q(temp_7_51)
  );
  FD   temp_6 (
    .C(clk_BUFGP_15),
    .D(temp_6_mux0000),
    .Q(temp_6_49)
  );
  FD   temp_4 (
    .C(clk_BUFGP_15),
    .D(temp_4_mux0000),
    .Q(temp_4_44)
  );
  FD   temp_3 (
    .C(clk_BUFGP_15),
    .D(temp_3_mux0000),
    .Q(temp_3_42)
  );
  FD   temp_2 (
    .C(clk_BUFGP_15),
    .D(temp_2_mux0000),
    .Q(temp_2_40)
  );
  FD   temp_1 (
    .C(clk_BUFGP_15),
    .D(temp_1_mux0000),
    .Q(temp_1_38)
  );
  FD   temp_0 (
    .C(clk_BUFGP_15),
    .D(temp_0_mux0000),
    .Q(temp_0_35)
  );
  FDSE   done_14 (
    .C(clk_BUFGP_15),
    .CE(storedx_not0001_inv),
    .D(N0),
    .S(count_cmp_eq0000),
    .Q(done_OBUF_21)
  );
  FDE #(
    .INIT ( 1'b0 ))
  yReal_3 (
    .C(clk_BUFGP_15),
    .CE(count_cmp_eq0000),
    .D(temp_3_42),
    .Q(yReal_3_79)
  );
  FDE #(
    .INIT ( 1'b0 ))
  yReal_2 (
    .C(clk_BUFGP_15),
    .CE(count_cmp_eq0000),
    .D(temp_2_40),
    .Q(yReal_2_78)
  );
  FDE #(
    .INIT ( 1'b0 ))
  yImag_2 (
    .C(clk_BUFGP_15),
    .CE(count_cmp_eq0000),
    .D(temp_6_49),
    .Q(yImag_2_65)
  );
  FDE #(
    .INIT ( 1'b0 ))
  yImag_3 (
    .C(clk_BUFGP_15),
    .CE(count_cmp_eq0000),
    .D(_sub0000[1]),
    .Q(yImag_3_66)
  );
  FDE #(
    .INIT ( 1'b0 ))
  yImag_7 (
    .C(clk_BUFGP_15),
    .CE(count_cmp_eq0000),
    .D(temp_7_51),
    .Q(yImag_7_67)
  );
  FDE #(
    .INIT ( 1'b0 ))
  yReal_1 (
    .C(clk_BUFGP_15),
    .CE(count_cmp_eq0000),
    .D(_add0000[1]),
    .Q(yReal_1_77)
  );
  FDE #(
    .INIT ( 1'b0 ))
  yReal_0 (
    .C(clk_BUFGP_15),
    .CE(count_cmp_eq0000),
    .D(Madd__add0000_lut[0]),
    .Q(yReal_0_76)
  );
  FDE #(
    .INIT ( 1'b0 ))
  yReal_5 (
    .C(clk_BUFGP_15),
    .CE(count_cmp_eq0000),
    .D(_sub0001[1]),
    .Q(yReal_5_80)
  );
  FDR #(
    .INIT ( 1'b0 ))
  count_0 (
    .C(clk_BUFGP_15),
    .D(Result[0]),
    .R(count_cmp_eq0000),
    .Q(count[0])
  );
  FDR #(
    .INIT ( 1'b0 ))
  count_1 (
    .C(clk_BUFGP_15),
    .D(Result[1]),
    .R(count_cmp_eq0000),
    .Q(count[1])
  );
  FDR #(
    .INIT ( 1'b0 ))
  count_2 (
    .C(clk_BUFGP_15),
    .D(Result[2]),
    .R(count_cmp_eq0000),
    .Q(count[2])
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \_sub0001<0>1  (
    .I0(temp_0_35),
    .I1(temp_4_44),
    .O(Madd__add0000_lut[0])
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \Result<1>1  (
    .I0(count[1]),
    .I1(count[0]),
    .O(Result[1])
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \Madd__sub0000_xor<1>11  (
    .I0(temp_7_51),
    .I1(temp_6_49),
    .O(_sub0000[1])
  );
  LUT3 #(
    .INIT ( 8'h6A ))
  \Result<2>1  (
    .I0(count[2]),
    .I1(count[1]),
    .I2(count[0]),
    .O(Result[2])
  );
  LUT4 #(
    .INIT ( 16'h3C96 ))
  \_sub0001<1>1  (
    .I0(temp_4_44),
    .I1(temp_1_38),
    .I2(temp_5_47),
    .I3(temp_0_35),
    .O(_sub0001[1])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \_add0000<1>1  (
    .I0(temp_0_35),
    .I1(temp_4_44),
    .I2(temp_5_47),
    .I3(temp_1_38),
    .O(_add0000[1])
  );
  LUT3 #(
    .INIT ( 8'h01 ))
  storedx_not0001_inv1 (
    .I0(count[0]),
    .I1(count[2]),
    .I2(count[1]),
    .O(storedx_not0001_inv)
  );
  LUT3 #(
    .INIT ( 8'h04 ))
  count_cmp_eq000011 (
    .I0(count[2]),
    .I1(count[1]),
    .I2(count[0]),
    .O(count_cmp_eq0000)
  );
  LUT4 #(
    .INIT ( 16'hABA8 ))
  temp_6_mux000011 (
    .I0(temp_6_49),
    .I1(count[1]),
    .I2(count[2]),
    .I3(N8),
    .O(temp_6_mux0000)
  );
  LUT4 #(
    .INIT ( 16'hABA8 ))
  temp_4_mux000011 (
    .I0(temp_4_44),
    .I1(count[1]),
    .I2(count[2]),
    .I3(temp_4_mux0000_bdd0),
    .O(temp_4_mux0000)
  );
  LUT4 #(
    .INIT ( 16'hABA8 ))
  temp_2_mux000011 (
    .I0(temp_2_40),
    .I1(count[1]),
    .I2(count[2]),
    .I3(N9),
    .O(temp_2_mux0000)
  );
  LUT4 #(
    .INIT ( 16'hABA8 ))
  temp_0_mux000011 (
    .I0(temp_0_35),
    .I1(count[1]),
    .I2(count[2]),
    .I3(temp_0_mux0000_bdd0),
    .O(temp_0_mux0000)
  );
  LUT4 #(
    .INIT ( 16'hA8AB ))
  temp_7_mux00001 (
    .I0(temp_7_51),
    .I1(count[2]),
    .I2(count[1]),
    .I3(N01),
    .O(temp_7_mux0000)
  );
  LUT4 #(
    .INIT ( 16'hA8AB ))
  temp_5_mux00001 (
    .I0(temp_5_47),
    .I1(count[2]),
    .I2(count[1]),
    .I3(N2),
    .O(temp_5_mux0000)
  );
  LUT4 #(
    .INIT ( 16'hA8AB ))
  temp_3_mux00001 (
    .I0(temp_3_42),
    .I1(count[2]),
    .I2(count[1]),
    .I3(N4),
    .O(temp_3_mux0000)
  );
  LUT4 #(
    .INIT ( 16'hA8AB ))
  temp_1_mux00003 (
    .I0(temp_1_38),
    .I1(count[2]),
    .I2(count[1]),
    .I3(N6),
    .O(temp_1_mux0000)
  );
  IBUF   x_3_IBUF (
    .I(x[3]),
    .O(x_3_IBUF_60)
  );
  IBUF   x_2_IBUF (
    .I(x[2]),
    .O(x_2_IBUF_59)
  );
  IBUF   x_1_IBUF (
    .I(x[1]),
    .O(x_1_IBUF_58)
  );
  IBUF   x_0_IBUF (
    .I(x[0]),
    .O(x_0_IBUF_57)
  );
  OBUF   done_OBUF (
    .I(done_OBUF_21),
    .O(done)
  );
  OBUF   yReal_7_OBUF (
    .I(yReal_3_79),
    .O(yReal[7])
  );
  OBUF   yReal_6_OBUF (
    .I(yReal_2_78),
    .O(yReal[6])
  );
  OBUF   yReal_5_OBUF (
    .I(yReal_5_80),
    .O(yReal[5])
  );
  OBUF   yReal_4_OBUF (
    .I(yReal_0_76),
    .O(yReal[4])
  );
  OBUF   yReal_3_OBUF (
    .I(yReal_3_79),
    .O(yReal[3])
  );
  OBUF   yReal_2_OBUF (
    .I(yReal_2_78),
    .O(yReal[2])
  );
  OBUF   yReal_1_OBUF (
    .I(yReal_1_77),
    .O(yReal[1])
  );
  OBUF   yReal_0_OBUF (
    .I(yReal_0_76),
    .O(yReal[0])
  );
  OBUF   yImag_7_OBUF (
    .I(yImag_7_67),
    .O(yImag[7])
  );
  OBUF   yImag_6_OBUF (
    .I(yImag_2_65),
    .O(yImag[6])
  );
  OBUF   yImag_3_OBUF (
    .I(yImag_3_66),
    .O(yImag[3])
  );
  OBUF   yImag_2_OBUF (
    .I(yImag_2_65),
    .O(yImag[2])
  );
  OBUF   temp_7_OBUF (
    .I(temp_7_51),
    .O(temp[7])
  );
  OBUF   temp_6_OBUF (
    .I(temp_6_49),
    .O(temp[6])
  );
  OBUF   temp_5_OBUF (
    .I(temp_5_47),
    .O(temp[5])
  );
  OBUF   temp_4_OBUF (
    .I(temp_4_44),
    .O(temp[4])
  );
  OBUF   temp_3_OBUF (
    .I(temp_3_42),
    .O(temp[3])
  );
  OBUF   temp_2_OBUF (
    .I(temp_2_40),
    .O(temp[2])
  );
  OBUF   temp_1_OBUF (
    .I(temp_1_38),
    .O(temp[1])
  );
  OBUF   temp_0_OBUF (
    .I(temp_0_35),
    .O(temp[0])
  );
  BUFGP   clk_BUFGP (
    .I(clk),
    .O(clk_BUFGP_15)
  );
  INV   \Mcount_count_xor<0>11_INV_0  (
    .I(count[0]),
    .O(Result[0])
  );
  LUT3_D #(
    .INIT ( 8'h60 ))
  temp_4_mux000021 (
    .I0(storedx[3]),
    .I1(storedx[1]),
    .I2(count[0]),
    .LO(N8),
    .O(temp_4_mux0000_bdd0)
  );
  LUT3_D #(
    .INIT ( 8'h60 ))
  temp_0_mux000021 (
    .I0(storedx[2]),
    .I1(storedx[0]),
    .I2(count[0]),
    .LO(N9),
    .O(temp_0_mux0000_bdd0)
  );
  LUT3_L #(
    .INIT ( 8'hBF ))
  temp_7_mux00001_SW0 (
    .I0(storedx[1]),
    .I1(storedx[3]),
    .I2(count[0]),
    .LO(N01)
  );
  LUT3_L #(
    .INIT ( 8'h7F ))
  temp_5_mux00001_SW0 (
    .I0(storedx[3]),
    .I1(storedx[1]),
    .I2(count[0]),
    .LO(N2)
  );
  LUT3_L #(
    .INIT ( 8'hBF ))
  temp_3_mux00001_SW0 (
    .I0(storedx[0]),
    .I1(storedx[2]),
    .I2(count[0]),
    .LO(N4)
  );
  LUT3_L #(
    .INIT ( 8'h7F ))
  temp_1_mux00003_SW0 (
    .I0(storedx[2]),
    .I1(storedx[0]),
    .I2(count[0]),
    .LO(N6)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

