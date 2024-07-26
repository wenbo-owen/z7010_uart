//Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2017.4 (win64) Build 2086221 Fri Dec 15 20:55:39 MST 2017
//Date        : Fri Jul 26 16:01:41 2024
//Host        : DESKTOP-P3735U4 running 64-bit major release  (build 9200)
//Command     : generate_target system_wrapper.bd
//Design      : system_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module system_wrapper
   (AXI_GPIO0_0_tri_io,
    AXI_GPIO0_1_tri_io,
    DDR_addr,
    DDR_ba,
    DDR_cas_n,
    DDR_ck_n,
    DDR_ck_p,
    DDR_cke,
    DDR_cs_n,
    DDR_dm,
    DDR_dq,
    DDR_dqs_n,
    DDR_dqs_p,
    DDR_odt,
    DDR_ras_n,
    DDR_reset_n,
    DDR_we_n,
    FIXED_IO_ddr_vrn,
    FIXED_IO_ddr_vrp,
    FIXED_IO_mio,
    FIXED_IO_ps_clk,
    FIXED_IO_ps_porb,
    FIXED_IO_ps_srstb,
    gpio_emio_tri_io);
  inout [0:0]AXI_GPIO0_0_tri_io;
  inout [0:0]AXI_GPIO0_1_tri_io;
  inout [14:0]DDR_addr;
  inout [2:0]DDR_ba;
  inout DDR_cas_n;
  inout DDR_ck_n;
  inout DDR_ck_p;
  inout DDR_cke;
  inout DDR_cs_n;
  inout [3:0]DDR_dm;
  inout [31:0]DDR_dq;
  inout [3:0]DDR_dqs_n;
  inout [3:0]DDR_dqs_p;
  inout DDR_odt;
  inout DDR_ras_n;
  inout DDR_reset_n;
  inout DDR_we_n;
  inout FIXED_IO_ddr_vrn;
  inout FIXED_IO_ddr_vrp;
  inout [53:0]FIXED_IO_mio;
  inout FIXED_IO_ps_clk;
  inout FIXED_IO_ps_porb;
  inout FIXED_IO_ps_srstb;
  inout [2:0]gpio_emio_tri_io;

  wire [0:0]AXI_GPIO0_0_tri_i_0;
  wire [0:0]AXI_GPIO0_0_tri_io_0;
  wire [0:0]AXI_GPIO0_0_tri_o_0;
  wire [0:0]AXI_GPIO0_0_tri_t_0;
  wire [0:0]AXI_GPIO0_1_tri_i_0;
  wire [0:0]AXI_GPIO0_1_tri_io_0;
  wire [0:0]AXI_GPIO0_1_tri_o_0;
  wire [0:0]AXI_GPIO0_1_tri_t_0;
  wire [14:0]DDR_addr;
  wire [2:0]DDR_ba;
  wire DDR_cas_n;
  wire DDR_ck_n;
  wire DDR_ck_p;
  wire DDR_cke;
  wire DDR_cs_n;
  wire [3:0]DDR_dm;
  wire [31:0]DDR_dq;
  wire [3:0]DDR_dqs_n;
  wire [3:0]DDR_dqs_p;
  wire DDR_odt;
  wire DDR_ras_n;
  wire DDR_reset_n;
  wire DDR_we_n;
  wire FIXED_IO_ddr_vrn;
  wire FIXED_IO_ddr_vrp;
  wire [53:0]FIXED_IO_mio;
  wire FIXED_IO_ps_clk;
  wire FIXED_IO_ps_porb;
  wire FIXED_IO_ps_srstb;
  wire [0:0]gpio_emio_tri_i_0;
  wire [1:1]gpio_emio_tri_i_1;
  wire [2:2]gpio_emio_tri_i_2;
  wire [0:0]gpio_emio_tri_io_0;
  wire [1:1]gpio_emio_tri_io_1;
  wire [2:2]gpio_emio_tri_io_2;
  wire [0:0]gpio_emio_tri_o_0;
  wire [1:1]gpio_emio_tri_o_1;
  wire [2:2]gpio_emio_tri_o_2;
  wire [0:0]gpio_emio_tri_t_0;
  wire [1:1]gpio_emio_tri_t_1;
  wire [2:2]gpio_emio_tri_t_2;

  IOBUF AXI_GPIO0_0_tri_iobuf_0
       (.I(AXI_GPIO0_0_tri_o_0),
        .IO(AXI_GPIO0_0_tri_io[0]),
        .O(AXI_GPIO0_0_tri_i_0),
        .T(AXI_GPIO0_0_tri_t_0));
  IOBUF AXI_GPIO0_1_tri_iobuf_0
       (.I(AXI_GPIO0_1_tri_o_0),
        .IO(AXI_GPIO0_1_tri_io[0]),
        .O(AXI_GPIO0_1_tri_i_0),
        .T(AXI_GPIO0_1_tri_t_0));
  IOBUF gpio_emio_tri_iobuf_0
       (.I(gpio_emio_tri_o_0),
        .IO(gpio_emio_tri_io[0]),
        .O(gpio_emio_tri_i_0),
        .T(gpio_emio_tri_t_0));
  IOBUF gpio_emio_tri_iobuf_1
       (.I(gpio_emio_tri_o_1),
        .IO(gpio_emio_tri_io[1]),
        .O(gpio_emio_tri_i_1),
        .T(gpio_emio_tri_t_1));
  IOBUF gpio_emio_tri_iobuf_2
       (.I(gpio_emio_tri_o_2),
        .IO(gpio_emio_tri_io[2]),
        .O(gpio_emio_tri_i_2),
        .T(gpio_emio_tri_t_2));
  system system_i
       (.AXI_GPIO0_0_tri_i(AXI_GPIO0_0_tri_i_0),
        .AXI_GPIO0_0_tri_o(AXI_GPIO0_0_tri_o_0),
        .AXI_GPIO0_0_tri_t(AXI_GPIO0_0_tri_t_0),
        .AXI_GPIO0_1_tri_i(AXI_GPIO0_1_tri_i_0),
        .AXI_GPIO0_1_tri_o(AXI_GPIO0_1_tri_o_0),
        .AXI_GPIO0_1_tri_t(AXI_GPIO0_1_tri_t_0),
        .DDR_addr(DDR_addr),
        .DDR_ba(DDR_ba),
        .DDR_cas_n(DDR_cas_n),
        .DDR_ck_n(DDR_ck_n),
        .DDR_ck_p(DDR_ck_p),
        .DDR_cke(DDR_cke),
        .DDR_cs_n(DDR_cs_n),
        .DDR_dm(DDR_dm),
        .DDR_dq(DDR_dq),
        .DDR_dqs_n(DDR_dqs_n),
        .DDR_dqs_p(DDR_dqs_p),
        .DDR_odt(DDR_odt),
        .DDR_ras_n(DDR_ras_n),
        .DDR_reset_n(DDR_reset_n),
        .DDR_we_n(DDR_we_n),
        .FIXED_IO_ddr_vrn(FIXED_IO_ddr_vrn),
        .FIXED_IO_ddr_vrp(FIXED_IO_ddr_vrp),
        .FIXED_IO_mio(FIXED_IO_mio),
        .FIXED_IO_ps_clk(FIXED_IO_ps_clk),
        .FIXED_IO_ps_porb(FIXED_IO_ps_porb),
        .FIXED_IO_ps_srstb(FIXED_IO_ps_srstb),
        .gpio_emio_tri_i({gpio_emio_tri_i_2,gpio_emio_tri_i_1,gpio_emio_tri_i_0}),
        .gpio_emio_tri_o({gpio_emio_tri_o_2,gpio_emio_tri_o_1,gpio_emio_tri_o_0}),
        .gpio_emio_tri_t({gpio_emio_tri_t_2,gpio_emio_tri_t_1,gpio_emio_tri_t_0}));
endmodule
