// Copyright 2023 RISC Zero, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// This code is automatically generated

#include "ffi.h"
#include "fp.h"

#include <array>
#include <cassert>
#include <stdexcept>

// clang-format off
namespace risc0::circuit::rv32im {

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

Fp step_verify_accum(void* ctx, HostBridge host, size_t steps, size_t cycle, Fp** args) {
  size_t mask = steps - 1;
  std::array<Fp, 32> host_args;
  std::array<Fp, 32> host_outs;
  // loc("./cirgen/components/plonk.h":204:11)
  Fp4 x0(1);
  // loc("cirgen/components/bytes.cpp":21:13)
  Fp x1(0);
  // loc("Top/Code/OneHot/Reg1"("./cirgen/components/mux.h":37:25))
  Fp x2(args[0][2 * steps + ((cycle - 0) & mask)]);
  assert(x2 != Fp::invalid());
  // loc("Top/Code/OneHot/Reg2"("./cirgen/components/mux.h":37:25))
  Fp x3(args[0][3 * steps + ((cycle - 0) & mask)]);
  assert(x3 != Fp::invalid());
  // loc("Top/Code/OneHot/Reg3"("./cirgen/components/mux.h":37:25))
  Fp x4(args[0][4 * steps + ((cycle - 0) & mask)]);
  assert(x4 != Fp::invalid());
  // loc("Top/Code/OneHot/Reg4"("./cirgen/components/mux.h":37:25))
  Fp x5(args[0][5 * steps + ((cycle - 0) & mask)]);
  assert(x5 != Fp::invalid());
  // loc("Top/Code/OneHot/Reg5"("./cirgen/components/mux.h":37:25))
  Fp x6(args[0][6 * steps + ((cycle - 0) & mask)]);
  assert(x6 != Fp::invalid());
  // loc("Top/Code/OneHot/Reg"("cirgen/circuit/rv32im/top.cpp":72:27))
  Fp x7(args[0][1 * steps + ((cycle - 0) & mask)]);
  assert(x7 != Fp::invalid());
  if (x7 != 0) {
    // loc("./cirgen/components/plonk.h":58:26)
    args[4][0 * steps + cycle] = x0.elems[0];
    args[4][1 * steps + cycle] = x0.elems[1];
    args[4][2 * steps + cycle] = x0.elems[2];
    args[4][3 * steps + cycle] = x0.elems[3];
    // loc("./cirgen/components/plonk.h":58:26)
    args[4][4 * steps + cycle] = x0.elems[0];
    args[4][5 * steps + cycle] = x0.elems[1];
    args[4][6 * steps + cycle] = x0.elems[2];
    args[4][7 * steps + cycle] = x0.elems[3];
  }
  if (x2 != 0) {
    // loc("Top/PlonkHeader/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x8(args[3][0], args[3][1], args[3][2], args[3][3]);
    // loc("Top/PlonkHeader/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x9(args[3][4], args[3][5], args[3][6], args[3][7]);
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x10(args[2][16 * steps + ((cycle - 0) & mask)]);
    assert(x10 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x11(args[2][17 * steps + ((cycle - 0) & mask)]);
    assert(x11 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x12 = x8 * x10;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x13 = Fp4(x12) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x14 = x9 * x11;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x15 = Fp4(x13) + Fp4(x14);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x16 = x15 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x17(args[2][18 * steps + ((cycle - 0) & mask)]);
    assert(x17 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x18(args[2][19 * steps + ((cycle - 0) & mask)]);
    assert(x18 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x19 = x8 * x17;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x20 = Fp4(x19) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x21 = x9 * x18;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x22 = Fp4(x20) + Fp4(x21);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x23 = x16 * x22;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x24(args[2][20 * steps + ((cycle - 0) & mask)]);
    assert(x24 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x25(args[2][21 * steps + ((cycle - 0) & mask)]);
    assert(x25 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x26 = x8 * x24;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x27 = Fp4(x26) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x28 = x9 * x25;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x29 = Fp4(x27) + Fp4(x28);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x30 = x23 * x29;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x31(args[2][22 * steps + ((cycle - 0) & mask)]);
    assert(x31 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x32(args[2][23 * steps + ((cycle - 0) & mask)]);
    assert(x32 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x33 = x8 * x31;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x34 = Fp4(x33) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x35 = x9 * x32;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x36 = Fp4(x34) + Fp4(x35);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x37 = x36 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x38(args[2][24 * steps + ((cycle - 0) & mask)]);
    assert(x38 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x39(args[2][25 * steps + ((cycle - 0) & mask)]);
    assert(x39 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x40 = x8 * x38;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x41 = Fp4(x40) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x42 = x9 * x39;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x43 = Fp4(x41) + Fp4(x42);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x44 = x37 * x43;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x45(args[2][26 * steps + ((cycle - 0) & mask)]);
    assert(x45 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x46(args[2][27 * steps + ((cycle - 0) & mask)]);
    assert(x46 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x47 = x8 * x45;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x48 = Fp4(x47) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x49 = x9 * x46;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x50 = Fp4(x48) + Fp4(x49);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x51 = x44 * x50;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement9/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x52(args[2][28 * steps + ((cycle - 0) & mask)]);
    assert(x52 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement9/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x53(args[2][29 * steps + ((cycle - 0) & mask)]);
    assert(x53 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x54 = x8 * x52;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x55 = Fp4(x54) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x56 = x9 * x53;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x57 = Fp4(x55) + Fp4(x56);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x58 = x57 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement10/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x59(args[2][30 * steps + ((cycle - 0) & mask)]);
    assert(x59 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement10/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x60(args[2][31 * steps + ((cycle - 0) & mask)]);
    assert(x60 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x61 = x8 * x59;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x62 = Fp4(x61) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x63 = x9 * x60;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x64 = Fp4(x62) + Fp4(x63);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x65 = x58 * x64;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement11/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x66(args[2][32 * steps + ((cycle - 0) & mask)]);
    assert(x66 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement11/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x67(args[2][33 * steps + ((cycle - 0) & mask)]);
    assert(x67 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x68 = x8 * x66;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x69 = Fp4(x68) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x70 = x9 * x67;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x71 = Fp4(x69) + Fp4(x70);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x72 = x65 * x71;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement12/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x73(args[2][34 * steps + ((cycle - 0) & mask)]);
    assert(x73 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement12/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x74(args[2][35 * steps + ((cycle - 0) & mask)]);
    assert(x74 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x75 = x8 * x73;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x76 = Fp4(x75) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x77 = x9 * x74;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x78 = Fp4(x76) + Fp4(x77);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x79 = x78 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement13/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x80(args[2][36 * steps + ((cycle - 0) & mask)]);
    assert(x80 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement13/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x81(args[2][37 * steps + ((cycle - 0) & mask)]);
    assert(x81 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x82 = x8 * x80;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x83 = Fp4(x82) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x84 = x9 * x81;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x85 = Fp4(x83) + Fp4(x84);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x86 = x79 * x85;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement14/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x87(args[2][38 * steps + ((cycle - 0) & mask)]);
    assert(x87 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement14/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x88(args[2][39 * steps + ((cycle - 0) & mask)]);
    assert(x88 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x89 = x8 * x87;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x90 = Fp4(x89) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x91 = x9 * x88;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x92 = Fp4(x90) + Fp4(x91);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x93 = x86 * x92;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement15/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x94(args[2][40 * steps + ((cycle - 0) & mask)]);
    assert(x94 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement15/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x95(args[2][41 * steps + ((cycle - 0) & mask)]);
    assert(x95 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x96 = x8 * x94;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x97 = Fp4(x96) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x98 = x9 * x95;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x99 = Fp4(x97) + Fp4(x98);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x100 = x99 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement16/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x101(args[2][42 * steps + ((cycle - 0) & mask)]);
    assert(x101 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement16/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x102(args[2][43 * steps + ((cycle - 0) & mask)]);
    assert(x102 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x103 = x8 * x101;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x104 = Fp4(x103) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x105 = x9 * x102;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x106 = Fp4(x104) + Fp4(x105);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x107 = x100 * x106;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement17/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x108(args[2][44 * steps + ((cycle - 0) & mask)]);
    assert(x108 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement17/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x109(args[2][45 * steps + ((cycle - 0) & mask)]);
    assert(x109 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x110 = x8 * x108;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x111 = Fp4(x110) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x112 = x9 * x109;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x113 = Fp4(x111) + Fp4(x112);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x114 = x107 * x113;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement18/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x115(args[2][46 * steps + ((cycle - 0) & mask)]);
    assert(x115 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement18/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x116(args[2][47 * steps + ((cycle - 0) & mask)]);
    assert(x116 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x117 = x8 * x115;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x118 = Fp4(x117) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x119 = x9 * x116;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x120 = Fp4(x118) + Fp4(x119);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x121 = x120 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement19/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x122(args[2][48 * steps + ((cycle - 0) & mask)]);
    assert(x122 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement19/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x123(args[2][49 * steps + ((cycle - 0) & mask)]);
    assert(x123 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x124 = x8 * x122;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x125 = Fp4(x124) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x126 = x9 * x123;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x127 = Fp4(x125) + Fp4(x126);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x128 = x121 * x127;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement20/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x129(args[2][50 * steps + ((cycle - 0) & mask)]);
    assert(x129 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement20/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x130(args[2][51 * steps + ((cycle - 0) & mask)]);
    assert(x130 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x131 = x8 * x129;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x132 = Fp4(x131) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x133 = x9 * x130;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x134 = Fp4(x132) + Fp4(x133);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x135 = x128 * x134;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement24/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x136(args[2][58 * steps + ((cycle - 0) & mask)]);
    assert(x136 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement24/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x137(args[2][59 * steps + ((cycle - 0) & mask)]);
    assert(x137 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x138 = x8 * x136;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x139 = Fp4(x138) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x140 = x9 * x137;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x141 = Fp4(x139) + Fp4(x140);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x142 = x141 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement25/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x143(args[2][60 * steps + ((cycle - 0) & mask)]);
    assert(x143 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement25/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x144(args[2][61 * steps + ((cycle - 0) & mask)]);
    assert(x144 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x145 = x8 * x143;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x146 = Fp4(x145) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x147 = x9 * x144;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x148 = Fp4(x146) + Fp4(x147);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x149 = x142 * x148;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement26/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x150(args[2][62 * steps + ((cycle - 0) & mask)]);
    assert(x150 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement26/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x151(args[2][63 * steps + ((cycle - 0) & mask)]);
    assert(x151 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x152 = x8 * x150;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x153 = Fp4(x152) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x154 = x9 * x151;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x155 = Fp4(x153) + Fp4(x154);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x156 = x149 * x155;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement27/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x157(args[2][64 * steps + ((cycle - 0) & mask)]);
    assert(x157 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement27/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x158(args[2][65 * steps + ((cycle - 0) & mask)]);
    assert(x158 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x159 = x8 * x157;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x160 = Fp4(x159) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x161 = x9 * x158;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x162 = Fp4(x160) + Fp4(x161);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x163 = x162 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement28/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x164(args[2][66 * steps + ((cycle - 0) & mask)]);
    assert(x164 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement28/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x165(args[2][67 * steps + ((cycle - 0) & mask)]);
    assert(x165 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x166 = x8 * x164;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x167 = Fp4(x166) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x168 = x9 * x165;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x169 = Fp4(x167) + Fp4(x168);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x170 = x163 * x169;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement29/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x171(args[2][68 * steps + ((cycle - 0) & mask)]);
    assert(x171 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement29/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x172(args[2][69 * steps + ((cycle - 0) & mask)]);
    assert(x172 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x173 = x8 * x171;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x174 = Fp4(x173) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x175 = x9 * x172;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x176 = Fp4(x174) + Fp4(x175);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x177 = x170 * x176;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement30/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x178(args[2][70 * steps + ((cycle - 0) & mask)]);
    assert(x178 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement30/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x179(args[2][71 * steps + ((cycle - 0) & mask)]);
    assert(x179 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x180 = x8 * x178;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x181 = Fp4(x180) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x182 = x9 * x179;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x183 = Fp4(x181) + Fp4(x182);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x184 = x183 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement31/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x185(args[2][72 * steps + ((cycle - 0) & mask)]);
    assert(x185 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement31/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x186(args[2][73 * steps + ((cycle - 0) & mask)]);
    assert(x186 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x187 = x8 * x185;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x188 = Fp4(x187) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x189 = x9 * x186;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x190 = Fp4(x188) + Fp4(x189);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x191 = x184 * x190;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement32/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x192(args[2][74 * steps + ((cycle - 0) & mask)]);
    assert(x192 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement32/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x193(args[2][75 * steps + ((cycle - 0) & mask)]);
    assert(x193 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x194 = x8 * x192;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x195 = Fp4(x194) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x196 = x9 * x193;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x197 = Fp4(x195) + Fp4(x196);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x198 = x191 * x197;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement33/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x199(args[2][76 * steps + ((cycle - 0) & mask)]);
    assert(x199 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement33/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x200(args[2][77 * steps + ((cycle - 0) & mask)]);
    assert(x200 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x201 = x8 * x199;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x202 = Fp4(x201) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x203 = x9 * x200;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x204 = Fp4(x202) + Fp4(x203);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x205 = x204 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement34/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x206(args[2][78 * steps + ((cycle - 0) & mask)]);
    assert(x206 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement34/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x207(args[2][79 * steps + ((cycle - 0) & mask)]);
    assert(x207 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x208 = x8 * x206;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x209 = Fp4(x208) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x210 = x9 * x207;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x211 = Fp4(x209) + Fp4(x210);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x212 = x205 * x211;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement35/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x213(args[2][80 * steps + ((cycle - 0) & mask)]);
    assert(x213 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement35/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x214(args[2][81 * steps + ((cycle - 0) & mask)]);
    assert(x214 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x215 = x8 * x213;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x216 = Fp4(x215) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x217 = x9 * x214;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x218 = Fp4(x216) + Fp4(x217);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x219 = x212 * x218;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement36/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x220(args[2][82 * steps + ((cycle - 0) & mask)]);
    assert(x220 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement36/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x221(args[2][83 * steps + ((cycle - 0) & mask)]);
    assert(x221 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x222 = x8 * x220;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x223 = Fp4(x222) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x224 = x9 * x221;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x225 = Fp4(x223) + Fp4(x224);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x226 = x225 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement37/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x227(args[2][84 * steps + ((cycle - 0) & mask)]);
    assert(x227 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement37/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x228(args[2][85 * steps + ((cycle - 0) & mask)]);
    assert(x228 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x229 = x8 * x227;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x230 = Fp4(x229) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x231 = x9 * x228;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x232 = Fp4(x230) + Fp4(x231);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x233 = x226 * x232;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement38/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x234(args[2][86 * steps + ((cycle - 0) & mask)]);
    assert(x234 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement38/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x235(args[2][87 * steps + ((cycle - 0) & mask)]);
    assert(x235 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x236 = x8 * x234;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x237 = Fp4(x236) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x238 = x9 * x235;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x239 = Fp4(x237) + Fp4(x238);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x240 = x233 * x239;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement39/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x241(args[2][88 * steps + ((cycle - 0) & mask)]);
    assert(x241 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement39/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x242(args[2][89 * steps + ((cycle - 0) & mask)]);
    assert(x242 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x243 = x8 * x241;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x244 = Fp4(x243) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x245 = x9 * x242;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x246 = Fp4(x244) + Fp4(x245);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x247 = x246 * x0;
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement40/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x248(args[2][90 * steps + ((cycle - 0) & mask)]);
    assert(x248 != Fp::invalid());
    // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement40/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x249(args[2][91 * steps + ((cycle - 0) & mask)]);
    assert(x249 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x250 = x8 * x248;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x251 = Fp4(x250) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x252 = x9 * x249;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x253 = Fp4(x251) + Fp4(x252);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x254 = x247 * x253;
    // loc("Top/PlonkHeader/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x255(args[2][0 * steps + ((cycle - 0) & mask)]);
    assert(x255 != Fp::invalid());
    // loc("Top/PlonkHeader/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x256(args[2][1 * steps + ((cycle - 0) & mask)]);
    assert(x256 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x257 = x8 * x255;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x258 = Fp4(x257) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x259 = x9 * x256;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x260 = Fp4(x258) + Fp4(x259);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x261 = x254 * x260;
    {
      host(ctx, "plonkReadAccum", "bytes", host_args.data(), 0, host_outs.data(), 4);
      Fp4 x262(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][0 * steps + cycle] = x262.elems[0];
      args[4][1 * steps + cycle] = x262.elems[1];
      args[4][2 * steps + cycle] = x262.elems[2];
      args[4][3 * steps + cycle] = x262.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x263 = inv(x135);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x264 = x262 * x263;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x265 = x264 * x261;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][28 * steps + cycle] = x265.elems[0];
      args[4][29 * steps + cycle] = x265.elems[1];
      args[4][30 * steps + cycle] = x265.elems[2];
      args[4][31 * steps + cycle] = x265.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x266 = inv(x114);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x267 = x265 * x266;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x268 = x267 * x240;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][24 * steps + cycle] = x268.elems[0];
      args[4][25 * steps + cycle] = x268.elems[1];
      args[4][26 * steps + cycle] = x268.elems[2];
      args[4][27 * steps + cycle] = x268.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x269 = inv(x93);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x270 = x268 * x269;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x271 = x270 * x219;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][20 * steps + cycle] = x271.elems[0];
      args[4][21 * steps + cycle] = x271.elems[1];
      args[4][22 * steps + cycle] = x271.elems[2];
      args[4][23 * steps + cycle] = x271.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x272 = inv(x72);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x273 = x271 * x272;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x274 = x273 * x198;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][16 * steps + cycle] = x274.elems[0];
      args[4][17 * steps + cycle] = x274.elems[1];
      args[4][18 * steps + cycle] = x274.elems[2];
      args[4][19 * steps + cycle] = x274.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x275 = inv(x51);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x276 = x274 * x275;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x277 = x276 * x177;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][12 * steps + cycle] = x277.elems[0];
      args[4][13 * steps + cycle] = x277.elems[1];
      args[4][14 * steps + cycle] = x277.elems[2];
      args[4][15 * steps + cycle] = x277.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x278 = inv(x30);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x279 = x277 * x278;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x280 = x279 * x156;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][8 * steps + cycle] = x280.elems[0];
      args[4][9 * steps + cycle] = x280.elems[1];
      args[4][10 * steps + cycle] = x280.elems[2];
      args[4][11 * steps + cycle] = x280.elems[3];
    }
    {
      host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
      Fp4 x281(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
      // loc("./cirgen/components/plonk.h":95:7)
      args[4][4 * steps + cycle] = x281.elems[0];
      args[4][5 * steps + cycle] = x281.elems[1];
      args[4][6 * steps + cycle] = x281.elems[2];
      args[4][7 * steps + cycle] = x281.elems[3];
    }
  }
  if (x3 != 0) {
    // loc("Top/PlonkHeader/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x282(args[3][0], args[3][1], args[3][2], args[3][3]);
    // loc("Top/PlonkHeader/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x283(args[3][4], args[3][5], args[3][6], args[3][7]);
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x284(args[2][16 * steps + ((cycle - 0) & mask)]);
    assert(x284 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x285(args[2][17 * steps + ((cycle - 0) & mask)]);
    assert(x285 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x286 = x282 * x284;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x287 = Fp4(x286) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x288 = x283 * x285;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x289 = Fp4(x287) + Fp4(x288);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x290 = x289 * x0;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x291(args[2][18 * steps + ((cycle - 0) & mask)]);
    assert(x291 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x292(args[2][19 * steps + ((cycle - 0) & mask)]);
    assert(x292 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x293 = x282 * x291;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x294 = Fp4(x293) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x295 = x283 * x292;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x296 = Fp4(x294) + Fp4(x295);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x297 = x290 * x296;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x298(args[2][20 * steps + ((cycle - 0) & mask)]);
    assert(x298 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x299(args[2][21 * steps + ((cycle - 0) & mask)]);
    assert(x299 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x300 = x282 * x298;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x301 = Fp4(x300) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x302 = x283 * x299;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x303 = Fp4(x301) + Fp4(x302);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x304 = x297 * x303;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x305(args[2][22 * steps + ((cycle - 0) & mask)]);
    assert(x305 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x306(args[2][23 * steps + ((cycle - 0) & mask)]);
    assert(x306 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x307 = x282 * x305;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x308 = Fp4(x307) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x309 = x283 * x306;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x310 = Fp4(x308) + Fp4(x309);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x311 = x310 * x0;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x312(args[2][24 * steps + ((cycle - 0) & mask)]);
    assert(x312 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x313(args[2][25 * steps + ((cycle - 0) & mask)]);
    assert(x313 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x314 = x282 * x312;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x315 = Fp4(x314) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x316 = x283 * x313;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x317 = Fp4(x315) + Fp4(x316);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x318 = x311 * x317;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x319(args[2][26 * steps + ((cycle - 0) & mask)]);
    assert(x319 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x320(args[2][27 * steps + ((cycle - 0) & mask)]);
    assert(x320 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x321 = x282 * x319;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x322 = Fp4(x321) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x323 = x283 * x320;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x324 = Fp4(x322) + Fp4(x323);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x325 = x318 * x324;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement9/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x326(args[2][28 * steps + ((cycle - 0) & mask)]);
    assert(x326 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement9/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x327(args[2][29 * steps + ((cycle - 0) & mask)]);
    assert(x327 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x328 = x282 * x326;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x329 = Fp4(x328) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x330 = x283 * x327;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x331 = Fp4(x329) + Fp4(x330);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x332 = x331 * x0;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement10/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x333(args[2][30 * steps + ((cycle - 0) & mask)]);
    assert(x333 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement10/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x334(args[2][31 * steps + ((cycle - 0) & mask)]);
    assert(x334 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x335 = x282 * x333;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x336 = Fp4(x335) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x337 = x283 * x334;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x338 = Fp4(x336) + Fp4(x337);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x339 = x332 * x338;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement14/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x340(args[2][38 * steps + ((cycle - 0) & mask)]);
    assert(x340 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement14/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x341(args[2][39 * steps + ((cycle - 0) & mask)]);
    assert(x341 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x342 = x282 * x340;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x343 = Fp4(x342) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x344 = x283 * x341;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x345 = Fp4(x343) + Fp4(x344);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x346 = x345 * x0;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement15/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x347(args[2][40 * steps + ((cycle - 0) & mask)]);
    assert(x347 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement15/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x348(args[2][41 * steps + ((cycle - 0) & mask)]);
    assert(x348 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x349 = x282 * x347;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x350 = Fp4(x349) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x351 = x283 * x348;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x352 = Fp4(x350) + Fp4(x351);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x353 = x346 * x352;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement16/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x354(args[2][42 * steps + ((cycle - 0) & mask)]);
    assert(x354 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement16/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x355(args[2][43 * steps + ((cycle - 0) & mask)]);
    assert(x355 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x356 = x282 * x354;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x357 = Fp4(x356) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x358 = x283 * x355;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x359 = Fp4(x357) + Fp4(x358);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x360 = x353 * x359;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement17/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x361(args[2][44 * steps + ((cycle - 0) & mask)]);
    assert(x361 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement17/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x362(args[2][45 * steps + ((cycle - 0) & mask)]);
    assert(x362 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x363 = x282 * x361;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x364 = Fp4(x363) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x365 = x283 * x362;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x366 = Fp4(x364) + Fp4(x365);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x367 = x366 * x0;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement18/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x368(args[2][46 * steps + ((cycle - 0) & mask)]);
    assert(x368 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement18/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x369(args[2][47 * steps + ((cycle - 0) & mask)]);
    assert(x369 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x370 = x282 * x368;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x371 = Fp4(x370) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x372 = x283 * x369;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x373 = Fp4(x371) + Fp4(x372);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x374 = x367 * x373;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement19/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x375(args[2][48 * steps + ((cycle - 0) & mask)]);
    assert(x375 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement19/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x376(args[2][49 * steps + ((cycle - 0) & mask)]);
    assert(x376 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x377 = x282 * x375;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x378 = Fp4(x377) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x379 = x283 * x376;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x380 = Fp4(x378) + Fp4(x379);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x381 = x374 * x380;
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement20/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x382(args[2][50 * steps + ((cycle - 0) & mask)]);
    assert(x382 != Fp::invalid());
    // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement20/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x383(args[2][51 * steps + ((cycle - 0) & mask)]);
    assert(x383 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x384 = x282 * x382;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x385 = Fp4(x384) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x386 = x283 * x383;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x387 = Fp4(x385) + Fp4(x386);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x388 = x387 * x0;
    // loc("Top/PlonkHeader/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x389(args[2][0 * steps + ((cycle - 0) & mask)]);
    assert(x389 != Fp::invalid());
    // loc("Top/PlonkHeader/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x390(args[2][1 * steps + ((cycle - 0) & mask)]);
    assert(x390 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x391 = x282 * x389;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x392 = Fp4(x391) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x393 = x283 * x390;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x394 = Fp4(x392) + Fp4(x393);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x395 = x388 * x394;
    {
      host(ctx, "plonkReadAccum", "bytes", host_args.data(), 0, host_outs.data(), 4);
      Fp4 x396(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][0 * steps + cycle] = x396.elems[0];
      args[4][1 * steps + cycle] = x396.elems[1];
      args[4][2 * steps + cycle] = x396.elems[2];
      args[4][3 * steps + cycle] = x396.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x397 = inv(x339);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x398 = x396 * x397;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x399 = x398 * x395;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][16 * steps + cycle] = x399.elems[0];
      args[4][17 * steps + cycle] = x399.elems[1];
      args[4][18 * steps + cycle] = x399.elems[2];
      args[4][19 * steps + cycle] = x399.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x400 = inv(x325);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x401 = x399 * x400;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x402 = x401 * x381;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][12 * steps + cycle] = x402.elems[0];
      args[4][13 * steps + cycle] = x402.elems[1];
      args[4][14 * steps + cycle] = x402.elems[2];
      args[4][15 * steps + cycle] = x402.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x403 = inv(x304);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x404 = x402 * x403;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x405 = x404 * x360;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][8 * steps + cycle] = x405.elems[0];
      args[4][9 * steps + cycle] = x405.elems[1];
      args[4][10 * steps + cycle] = x405.elems[2];
      args[4][11 * steps + cycle] = x405.elems[3];
    }
    // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x406(args[3][8], args[3][9], args[3][10], args[3][11]);
    // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x407(args[3][12], args[3][13], args[3][14], args[3][15]);
    // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x408(args[3][16], args[3][17], args[3][18], args[3][19]);
    // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x409(args[3][20], args[3][21], args[3][22], args[3][23]);
    // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x410(args[3][24], args[3][25], args[3][26], args[3][27]);
    // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x411(args[3][28], args[3][29], args[3][30], args[3][31]);
    // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x412(args[3][32], args[3][33], args[3][34], args[3][35]);
    // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x413(args[2][69 * steps + ((cycle - 0) & mask)]);
    assert(x413 != Fp::invalid());
    // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x414(args[2][70 * steps + ((cycle - 0) & mask)]);
    assert(x414 != Fp::invalid());
    // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x415(args[2][71 * steps + ((cycle - 0) & mask)]);
    assert(x415 != Fp::invalid());
    // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x416(args[2][72 * steps + ((cycle - 0) & mask)]);
    assert(x416 != Fp::invalid());
    // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x417(args[2][73 * steps + ((cycle - 0) & mask)]);
    assert(x417 != Fp::invalid());
    // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x418(args[2][74 * steps + ((cycle - 0) & mask)]);
    assert(x418 != Fp::invalid());
    // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x419(args[2][75 * steps + ((cycle - 0) & mask)]);
    assert(x419 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x420 = x406 * x413;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x421 = Fp4(x420) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x422 = x407 * x414;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x423 = Fp4(x421) + Fp4(x422);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x424 = x408 * x415;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x425 = Fp4(x423) + Fp4(x424);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x426 = x409 * x416;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x427 = Fp4(x425) + Fp4(x426);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x428 = x410 * x417;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x429 = Fp4(x427) + Fp4(x428);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x430 = x411 * x418;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x431 = Fp4(x429) + Fp4(x430);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x432 = x412 * x419;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x433 = Fp4(x431) + Fp4(x432);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x434 = x433 * x0;
    // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x435(args[2][2 * steps + ((cycle - 0) & mask)]);
    assert(x435 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x436(args[2][3 * steps + ((cycle - 0) & mask)]);
    assert(x436 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x437(args[2][4 * steps + ((cycle - 0) & mask)]);
    assert(x437 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x438(args[2][5 * steps + ((cycle - 0) & mask)]);
    assert(x438 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x439(args[2][6 * steps + ((cycle - 0) & mask)]);
    assert(x439 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x440(args[2][7 * steps + ((cycle - 0) & mask)]);
    assert(x440 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x441(args[2][8 * steps + ((cycle - 0) & mask)]);
    assert(x441 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x442 = x406 * x435;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x443 = Fp4(x442) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x444 = x407 * x436;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x445 = Fp4(x443) + Fp4(x444);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x446 = x408 * x437;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x447 = Fp4(x445) + Fp4(x446);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x448 = x409 * x438;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x449 = Fp4(x447) + Fp4(x448);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x450 = x410 * x439;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x451 = Fp4(x449) + Fp4(x450);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x452 = x411 * x440;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x453 = Fp4(x451) + Fp4(x452);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x454 = x412 * x441;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x455 = Fp4(x453) + Fp4(x454);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x456 = x455 * x0;
    {
      host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
      Fp4 x457(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][4 * steps + cycle] = x457.elems[0];
      args[4][5 * steps + cycle] = x457.elems[1];
      args[4][6 * steps + cycle] = x457.elems[2];
      args[4][7 * steps + cycle] = x457.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x458 = inv(x434);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x459 = x457 * x458;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x460 = x459 * x456;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][20 * steps + cycle] = x460.elems[0];
      args[4][21 * steps + cycle] = x460.elems[1];
      args[4][22 * steps + cycle] = x460.elems[2];
      args[4][23 * steps + cycle] = x460.elems[3];
    }
  }
  if (x4 != 0) {
    // loc("Top/PlonkHeader/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x461(args[3][0], args[3][1], args[3][2], args[3][3]);
    // loc("Top/PlonkHeader/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x462(args[3][4], args[3][5], args[3][6], args[3][7]);
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x463(args[2][16 * steps + ((cycle - 0) & mask)]);
    assert(x463 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x464(args[2][17 * steps + ((cycle - 0) & mask)]);
    assert(x464 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x465 = x461 * x463;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x466 = Fp4(x465) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x467 = x462 * x464;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x468 = Fp4(x466) + Fp4(x467);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x469 = x468 * x0;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x470(args[2][18 * steps + ((cycle - 0) & mask)]);
    assert(x470 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x471(args[2][19 * steps + ((cycle - 0) & mask)]);
    assert(x471 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x472 = x461 * x470;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x473 = Fp4(x472) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x474 = x462 * x471;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x475 = Fp4(x473) + Fp4(x474);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x476 = x469 * x475;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x477(args[2][20 * steps + ((cycle - 0) & mask)]);
    assert(x477 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x478(args[2][21 * steps + ((cycle - 0) & mask)]);
    assert(x478 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x479 = x461 * x477;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x480 = Fp4(x479) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x481 = x462 * x478;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x482 = Fp4(x480) + Fp4(x481);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x483 = x476 * x482;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x484(args[2][22 * steps + ((cycle - 0) & mask)]);
    assert(x484 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x485(args[2][23 * steps + ((cycle - 0) & mask)]);
    assert(x485 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x486 = x461 * x484;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x487 = Fp4(x486) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x488 = x462 * x485;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x489 = Fp4(x487) + Fp4(x488);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x490 = x489 * x0;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x491(args[2][24 * steps + ((cycle - 0) & mask)]);
    assert(x491 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x492(args[2][25 * steps + ((cycle - 0) & mask)]);
    assert(x492 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x493 = x461 * x491;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x494 = Fp4(x493) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x495 = x462 * x492;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x496 = Fp4(x494) + Fp4(x495);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x497 = x490 * x496;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x498(args[2][26 * steps + ((cycle - 0) & mask)]);
    assert(x498 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x499(args[2][27 * steps + ((cycle - 0) & mask)]);
    assert(x499 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x500 = x461 * x498;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x501 = Fp4(x500) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x502 = x462 * x499;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x503 = Fp4(x501) + Fp4(x502);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x504 = x497 * x503;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement9/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x505(args[2][28 * steps + ((cycle - 0) & mask)]);
    assert(x505 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement9/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x506(args[2][29 * steps + ((cycle - 0) & mask)]);
    assert(x506 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x507 = x461 * x505;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x508 = Fp4(x507) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x509 = x462 * x506;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x510 = Fp4(x508) + Fp4(x509);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x511 = x510 * x0;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement10/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x512(args[2][30 * steps + ((cycle - 0) & mask)]);
    assert(x512 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement10/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x513(args[2][31 * steps + ((cycle - 0) & mask)]);
    assert(x513 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x514 = x461 * x512;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x515 = Fp4(x514) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x516 = x462 * x513;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x517 = Fp4(x515) + Fp4(x516);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x518 = x511 * x517;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement11/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x519(args[2][32 * steps + ((cycle - 0) & mask)]);
    assert(x519 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement11/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x520(args[2][33 * steps + ((cycle - 0) & mask)]);
    assert(x520 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x521 = x461 * x519;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x522 = Fp4(x521) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x523 = x462 * x520;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x524 = Fp4(x522) + Fp4(x523);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x525 = x518 * x524;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement12/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x526(args[2][34 * steps + ((cycle - 0) & mask)]);
    assert(x526 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement12/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x527(args[2][35 * steps + ((cycle - 0) & mask)]);
    assert(x527 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x528 = x461 * x526;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x529 = Fp4(x528) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x530 = x462 * x527;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x531 = Fp4(x529) + Fp4(x530);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x532 = x531 * x0;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement13/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x533(args[2][36 * steps + ((cycle - 0) & mask)]);
    assert(x533 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement13/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x534(args[2][37 * steps + ((cycle - 0) & mask)]);
    assert(x534 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x535 = x461 * x533;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x536 = Fp4(x535) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x537 = x462 * x534;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x538 = Fp4(x536) + Fp4(x537);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x539 = x532 * x538;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement14/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x540(args[2][38 * steps + ((cycle - 0) & mask)]);
    assert(x540 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement14/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x541(args[2][39 * steps + ((cycle - 0) & mask)]);
    assert(x541 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x542 = x461 * x540;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x543 = Fp4(x542) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x544 = x462 * x541;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x545 = Fp4(x543) + Fp4(x544);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x546 = x539 * x545;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement15/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x547(args[2][40 * steps + ((cycle - 0) & mask)]);
    assert(x547 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement15/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x548(args[2][41 * steps + ((cycle - 0) & mask)]);
    assert(x548 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x549 = x461 * x547;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x550 = Fp4(x549) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x551 = x462 * x548;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x552 = Fp4(x550) + Fp4(x551);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x553 = x552 * x0;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement19/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x554(args[2][48 * steps + ((cycle - 0) & mask)]);
    assert(x554 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement19/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x555(args[2][49 * steps + ((cycle - 0) & mask)]);
    assert(x555 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x556 = x461 * x554;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x557 = Fp4(x556) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x558 = x462 * x555;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x559 = Fp4(x557) + Fp4(x558);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x560 = x559 * x0;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement20/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x561(args[2][50 * steps + ((cycle - 0) & mask)]);
    assert(x561 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement20/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x562(args[2][51 * steps + ((cycle - 0) & mask)]);
    assert(x562 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x563 = x461 * x561;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x564 = Fp4(x563) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x565 = x462 * x562;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x566 = Fp4(x564) + Fp4(x565);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x567 = x560 * x566;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement21/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x568(args[2][52 * steps + ((cycle - 0) & mask)]);
    assert(x568 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement21/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x569(args[2][53 * steps + ((cycle - 0) & mask)]);
    assert(x569 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x570 = x461 * x568;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x571 = Fp4(x570) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x572 = x462 * x569;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x573 = Fp4(x571) + Fp4(x572);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x574 = x567 * x573;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement22/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x575(args[2][54 * steps + ((cycle - 0) & mask)]);
    assert(x575 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement22/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x576(args[2][55 * steps + ((cycle - 0) & mask)]);
    assert(x576 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x577 = x461 * x575;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x578 = Fp4(x577) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x579 = x462 * x576;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x580 = Fp4(x578) + Fp4(x579);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x581 = x580 * x0;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement23/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x582(args[2][56 * steps + ((cycle - 0) & mask)]);
    assert(x582 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement23/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x583(args[2][57 * steps + ((cycle - 0) & mask)]);
    assert(x583 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x584 = x461 * x582;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x585 = Fp4(x584) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x586 = x462 * x583;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x587 = Fp4(x585) + Fp4(x586);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x588 = x581 * x587;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement24/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x589(args[2][58 * steps + ((cycle - 0) & mask)]);
    assert(x589 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement24/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x590(args[2][59 * steps + ((cycle - 0) & mask)]);
    assert(x590 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x591 = x461 * x589;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x592 = Fp4(x591) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x593 = x462 * x590;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x594 = Fp4(x592) + Fp4(x593);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x595 = x588 * x594;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement25/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x596(args[2][60 * steps + ((cycle - 0) & mask)]);
    assert(x596 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement25/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x597(args[2][61 * steps + ((cycle - 0) & mask)]);
    assert(x597 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x598 = x461 * x596;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x599 = Fp4(x598) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x600 = x462 * x597;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x601 = Fp4(x599) + Fp4(x600);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x602 = x601 * x0;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement26/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x603(args[2][62 * steps + ((cycle - 0) & mask)]);
    assert(x603 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement26/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x604(args[2][63 * steps + ((cycle - 0) & mask)]);
    assert(x604 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x605 = x461 * x603;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x606 = Fp4(x605) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x607 = x462 * x604;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x608 = Fp4(x606) + Fp4(x607);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x609 = x602 * x608;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement27/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x610(args[2][64 * steps + ((cycle - 0) & mask)]);
    assert(x610 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement27/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x611(args[2][65 * steps + ((cycle - 0) & mask)]);
    assert(x611 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x612 = x461 * x610;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x613 = Fp4(x612) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x614 = x462 * x611;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x615 = Fp4(x613) + Fp4(x614);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x616 = x609 * x615;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement28/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x617(args[2][66 * steps + ((cycle - 0) & mask)]);
    assert(x617 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement28/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x618(args[2][67 * steps + ((cycle - 0) & mask)]);
    assert(x618 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x619 = x461 * x617;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x620 = Fp4(x619) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x621 = x462 * x618;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x622 = Fp4(x620) + Fp4(x621);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x623 = x622 * x0;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement29/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x624(args[2][68 * steps + ((cycle - 0) & mask)]);
    assert(x624 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement29/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x625(args[2][69 * steps + ((cycle - 0) & mask)]);
    assert(x625 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x626 = x461 * x624;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x627 = Fp4(x626) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x628 = x462 * x625;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x629 = Fp4(x627) + Fp4(x628);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x630 = x623 * x629;
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement30/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x631(args[2][70 * steps + ((cycle - 0) & mask)]);
    assert(x631 != Fp::invalid());
    // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement30/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x632(args[2][71 * steps + ((cycle - 0) & mask)]);
    assert(x632 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x633 = x461 * x631;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x634 = Fp4(x633) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x635 = x462 * x632;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x636 = Fp4(x634) + Fp4(x635);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x637 = x630 * x636;
    // loc("Top/PlonkHeader/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x638(args[2][0 * steps + ((cycle - 0) & mask)]);
    assert(x638 != Fp::invalid());
    // loc("Top/PlonkHeader/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x639(args[2][1 * steps + ((cycle - 0) & mask)]);
    assert(x639 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x640 = x461 * x638;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x641 = Fp4(x640) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x642 = x462 * x639;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x643 = Fp4(x641) + Fp4(x642);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x644 = x643 * x0;
    {
      host(ctx, "plonkReadAccum", "bytes", host_args.data(), 0, host_outs.data(), 4);
      Fp4 x645(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][0 * steps + cycle] = x645.elems[0];
      args[4][1 * steps + cycle] = x645.elems[1];
      args[4][2 * steps + cycle] = x645.elems[2];
      args[4][3 * steps + cycle] = x645.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x646 = inv(x553);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x647 = x645 * x646;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x648 = x647 * x644;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][24 * steps + cycle] = x648.elems[0];
      args[4][25 * steps + cycle] = x648.elems[1];
      args[4][26 * steps + cycle] = x648.elems[2];
      args[4][27 * steps + cycle] = x648.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x649 = inv(x546);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x650 = x648 * x649;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x651 = x650 * x637;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][20 * steps + cycle] = x651.elems[0];
      args[4][21 * steps + cycle] = x651.elems[1];
      args[4][22 * steps + cycle] = x651.elems[2];
      args[4][23 * steps + cycle] = x651.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x652 = inv(x525);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x653 = x651 * x652;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x654 = x653 * x616;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][16 * steps + cycle] = x654.elems[0];
      args[4][17 * steps + cycle] = x654.elems[1];
      args[4][18 * steps + cycle] = x654.elems[2];
      args[4][19 * steps + cycle] = x654.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x655 = inv(x504);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x656 = x654 * x655;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x657 = x656 * x595;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][12 * steps + cycle] = x657.elems[0];
      args[4][13 * steps + cycle] = x657.elems[1];
      args[4][14 * steps + cycle] = x657.elems[2];
      args[4][15 * steps + cycle] = x657.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x658 = inv(x483);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x659 = x657 * x658;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x660 = x659 * x574;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][8 * steps + cycle] = x660.elems[0];
      args[4][9 * steps + cycle] = x660.elems[1];
      args[4][10 * steps + cycle] = x660.elems[2];
      args[4][11 * steps + cycle] = x660.elems[3];
    }
    // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x661(args[3][8], args[3][9], args[3][10], args[3][11]);
    // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x662(args[3][12], args[3][13], args[3][14], args[3][15]);
    // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x663(args[3][16], args[3][17], args[3][18], args[3][19]);
    // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x664(args[3][20], args[3][21], args[3][22], args[3][23]);
    // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x665(args[3][24], args[3][25], args[3][26], args[3][27]);
    // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x666(args[3][28], args[3][29], args[3][30], args[3][31]);
    // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x667(args[3][32], args[3][33], args[3][34], args[3][35]);
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x668(args[2][108 * steps + ((cycle - 0) & mask)]);
    assert(x668 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x669(args[2][109 * steps + ((cycle - 0) & mask)]);
    assert(x669 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x670(args[2][110 * steps + ((cycle - 0) & mask)]);
    assert(x670 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x671(args[2][111 * steps + ((cycle - 0) & mask)]);
    assert(x671 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x672(args[2][112 * steps + ((cycle - 0) & mask)]);
    assert(x672 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x673(args[2][113 * steps + ((cycle - 0) & mask)]);
    assert(x673 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x674(args[2][114 * steps + ((cycle - 0) & mask)]);
    assert(x674 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x675 = x661 * x668;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x676 = Fp4(x675) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x677 = x662 * x669;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x678 = Fp4(x676) + Fp4(x677);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x679 = x663 * x670;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x680 = Fp4(x678) + Fp4(x679);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x681 = x664 * x671;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x682 = Fp4(x680) + Fp4(x681);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x683 = x665 * x672;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x684 = Fp4(x682) + Fp4(x683);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x685 = x666 * x673;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x686 = Fp4(x684) + Fp4(x685);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x687 = x667 * x674;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x688 = Fp4(x686) + Fp4(x687);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x689 = x688 * x0;
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x690(args[2][115 * steps + ((cycle - 0) & mask)]);
    assert(x690 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x691(args[2][116 * steps + ((cycle - 0) & mask)]);
    assert(x691 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x692(args[2][117 * steps + ((cycle - 0) & mask)]);
    assert(x692 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x693(args[2][118 * steps + ((cycle - 0) & mask)]);
    assert(x693 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x694(args[2][119 * steps + ((cycle - 0) & mask)]);
    assert(x694 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x695(args[2][120 * steps + ((cycle - 0) & mask)]);
    assert(x695 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x696(args[2][121 * steps + ((cycle - 0) & mask)]);
    assert(x696 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x697 = x661 * x690;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x698 = Fp4(x697) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x699 = x662 * x691;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x700 = Fp4(x698) + Fp4(x699);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x701 = x663 * x692;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x702 = Fp4(x700) + Fp4(x701);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x703 = x664 * x693;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x704 = Fp4(x702) + Fp4(x703);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x705 = x665 * x694;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x706 = Fp4(x704) + Fp4(x705);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x707 = x666 * x695;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x708 = Fp4(x706) + Fp4(x707);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x709 = x667 * x696;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x710 = Fp4(x708) + Fp4(x709);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x711 = x689 * x710;
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x712(args[2][122 * steps + ((cycle - 0) & mask)]);
    assert(x712 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x713(args[2][123 * steps + ((cycle - 0) & mask)]);
    assert(x713 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x714(args[2][124 * steps + ((cycle - 0) & mask)]);
    assert(x714 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x715(args[2][125 * steps + ((cycle - 0) & mask)]);
    assert(x715 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x716(args[2][126 * steps + ((cycle - 0) & mask)]);
    assert(x716 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x717(args[2][127 * steps + ((cycle - 0) & mask)]);
    assert(x717 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x718(args[2][128 * steps + ((cycle - 0) & mask)]);
    assert(x718 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x719 = x661 * x712;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x720 = Fp4(x719) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x721 = x662 * x713;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x722 = Fp4(x720) + Fp4(x721);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x723 = x663 * x714;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x724 = Fp4(x722) + Fp4(x723);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x725 = x664 * x715;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x726 = Fp4(x724) + Fp4(x725);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x727 = x665 * x716;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x728 = Fp4(x726) + Fp4(x727);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x729 = x666 * x717;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x730 = Fp4(x728) + Fp4(x729);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x731 = x667 * x718;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x732 = Fp4(x730) + Fp4(x731);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x733 = x732 * x0;
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x734(args[2][129 * steps + ((cycle - 0) & mask)]);
    assert(x734 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x735(args[2][130 * steps + ((cycle - 0) & mask)]);
    assert(x735 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x736(args[2][131 * steps + ((cycle - 0) & mask)]);
    assert(x736 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x737(args[2][132 * steps + ((cycle - 0) & mask)]);
    assert(x737 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x738(args[2][133 * steps + ((cycle - 0) & mask)]);
    assert(x738 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x739(args[2][134 * steps + ((cycle - 0) & mask)]);
    assert(x739 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x740(args[2][135 * steps + ((cycle - 0) & mask)]);
    assert(x740 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x741 = x661 * x734;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x742 = Fp4(x741) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x743 = x662 * x735;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x744 = Fp4(x742) + Fp4(x743);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x745 = x663 * x736;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x746 = Fp4(x744) + Fp4(x745);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x747 = x664 * x737;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x748 = Fp4(x746) + Fp4(x747);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x749 = x665 * x738;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x750 = Fp4(x748) + Fp4(x749);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x751 = x666 * x739;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x752 = Fp4(x750) + Fp4(x751);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x753 = x667 * x740;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x754 = Fp4(x752) + Fp4(x753);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x755 = x733 * x754;
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x756(args[2][136 * steps + ((cycle - 0) & mask)]);
    assert(x756 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x757(args[2][137 * steps + ((cycle - 0) & mask)]);
    assert(x757 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x758(args[2][138 * steps + ((cycle - 0) & mask)]);
    assert(x758 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x759(args[2][139 * steps + ((cycle - 0) & mask)]);
    assert(x759 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x760(args[2][140 * steps + ((cycle - 0) & mask)]);
    assert(x760 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x761(args[2][141 * steps + ((cycle - 0) & mask)]);
    assert(x761 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x762(args[2][142 * steps + ((cycle - 0) & mask)]);
    assert(x762 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x763 = x661 * x756;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x764 = Fp4(x763) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x765 = x662 * x757;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x766 = Fp4(x764) + Fp4(x765);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x767 = x663 * x758;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x768 = Fp4(x766) + Fp4(x767);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x769 = x664 * x759;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x770 = Fp4(x768) + Fp4(x769);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x771 = x665 * x760;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x772 = Fp4(x770) + Fp4(x771);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x773 = x666 * x761;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x774 = Fp4(x772) + Fp4(x773);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x775 = x667 * x762;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x776 = Fp4(x774) + Fp4(x775);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x777 = x776 * x0;
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x778(args[2][143 * steps + ((cycle - 0) & mask)]);
    assert(x778 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x779(args[2][144 * steps + ((cycle - 0) & mask)]);
    assert(x779 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x780(args[2][145 * steps + ((cycle - 0) & mask)]);
    assert(x780 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x781(args[2][146 * steps + ((cycle - 0) & mask)]);
    assert(x781 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x782(args[2][147 * steps + ((cycle - 0) & mask)]);
    assert(x782 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x783(args[2][148 * steps + ((cycle - 0) & mask)]);
    assert(x783 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x784(args[2][149 * steps + ((cycle - 0) & mask)]);
    assert(x784 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x785 = x661 * x778;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x786 = Fp4(x785) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x787 = x662 * x779;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x788 = Fp4(x786) + Fp4(x787);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x789 = x663 * x780;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x790 = Fp4(x788) + Fp4(x789);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x791 = x664 * x781;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x792 = Fp4(x790) + Fp4(x791);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x793 = x665 * x782;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x794 = Fp4(x792) + Fp4(x793);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x795 = x666 * x783;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x796 = Fp4(x794) + Fp4(x795);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x797 = x667 * x784;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x798 = Fp4(x796) + Fp4(x797);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x799 = x777 * x798;
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x800(args[2][164 * steps + ((cycle - 0) & mask)]);
    assert(x800 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x801(args[2][165 * steps + ((cycle - 0) & mask)]);
    assert(x801 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x802(args[2][166 * steps + ((cycle - 0) & mask)]);
    assert(x802 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x803(args[2][167 * steps + ((cycle - 0) & mask)]);
    assert(x803 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x804(args[2][168 * steps + ((cycle - 0) & mask)]);
    assert(x804 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x805(args[2][169 * steps + ((cycle - 0) & mask)]);
    assert(x805 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x806(args[2][170 * steps + ((cycle - 0) & mask)]);
    assert(x806 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x807 = x661 * x800;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x808 = Fp4(x807) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x809 = x662 * x801;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x810 = Fp4(x808) + Fp4(x809);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x811 = x663 * x802;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x812 = Fp4(x810) + Fp4(x811);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x813 = x664 * x803;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x814 = Fp4(x812) + Fp4(x813);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x815 = x665 * x804;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x816 = Fp4(x814) + Fp4(x815);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x817 = x666 * x805;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x818 = Fp4(x816) + Fp4(x817);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x819 = x667 * x806;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x820 = Fp4(x818) + Fp4(x819);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x821 = x820 * x0;
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x822(args[2][171 * steps + ((cycle - 0) & mask)]);
    assert(x822 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x823(args[2][172 * steps + ((cycle - 0) & mask)]);
    assert(x823 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x824(args[2][173 * steps + ((cycle - 0) & mask)]);
    assert(x824 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x825(args[2][174 * steps + ((cycle - 0) & mask)]);
    assert(x825 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x826(args[2][175 * steps + ((cycle - 0) & mask)]);
    assert(x826 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x827(args[2][176 * steps + ((cycle - 0) & mask)]);
    assert(x827 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x828(args[2][177 * steps + ((cycle - 0) & mask)]);
    assert(x828 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x829 = x661 * x822;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x830 = Fp4(x829) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x831 = x662 * x823;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x832 = Fp4(x830) + Fp4(x831);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x833 = x663 * x824;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x834 = Fp4(x832) + Fp4(x833);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x835 = x664 * x825;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x836 = Fp4(x834) + Fp4(x835);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x837 = x665 * x826;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x838 = Fp4(x836) + Fp4(x837);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x839 = x666 * x827;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x840 = Fp4(x838) + Fp4(x839);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x841 = x667 * x828;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x842 = Fp4(x840) + Fp4(x841);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x843 = x821 * x842;
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x844(args[2][178 * steps + ((cycle - 0) & mask)]);
    assert(x844 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x845(args[2][179 * steps + ((cycle - 0) & mask)]);
    assert(x845 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x846(args[2][180 * steps + ((cycle - 0) & mask)]);
    assert(x846 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x847(args[2][181 * steps + ((cycle - 0) & mask)]);
    assert(x847 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x848(args[2][182 * steps + ((cycle - 0) & mask)]);
    assert(x848 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x849(args[2][183 * steps + ((cycle - 0) & mask)]);
    assert(x849 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x850(args[2][184 * steps + ((cycle - 0) & mask)]);
    assert(x850 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x851 = x661 * x844;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x852 = Fp4(x851) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x853 = x662 * x845;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x854 = Fp4(x852) + Fp4(x853);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x855 = x663 * x846;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x856 = Fp4(x854) + Fp4(x855);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x857 = x664 * x847;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x858 = Fp4(x856) + Fp4(x857);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x859 = x665 * x848;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x860 = Fp4(x858) + Fp4(x859);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x861 = x666 * x849;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x862 = Fp4(x860) + Fp4(x861);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x863 = x667 * x850;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x864 = Fp4(x862) + Fp4(x863);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x865 = x864 * x0;
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x866(args[2][185 * steps + ((cycle - 0) & mask)]);
    assert(x866 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x867(args[2][186 * steps + ((cycle - 0) & mask)]);
    assert(x867 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x868(args[2][187 * steps + ((cycle - 0) & mask)]);
    assert(x868 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x869(args[2][188 * steps + ((cycle - 0) & mask)]);
    assert(x869 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x870(args[2][189 * steps + ((cycle - 0) & mask)]);
    assert(x870 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x871(args[2][190 * steps + ((cycle - 0) & mask)]);
    assert(x871 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x872(args[2][191 * steps + ((cycle - 0) & mask)]);
    assert(x872 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x873 = x661 * x866;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x874 = Fp4(x873) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x875 = x662 * x867;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x876 = Fp4(x874) + Fp4(x875);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x877 = x663 * x868;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x878 = Fp4(x876) + Fp4(x877);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x879 = x664 * x869;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x880 = Fp4(x878) + Fp4(x879);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x881 = x665 * x870;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x882 = Fp4(x880) + Fp4(x881);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x883 = x666 * x871;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x884 = Fp4(x882) + Fp4(x883);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x885 = x667 * x872;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x886 = Fp4(x884) + Fp4(x885);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x887 = x865 * x886;
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x888(args[2][192 * steps + ((cycle - 0) & mask)]);
    assert(x888 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x889(args[2][193 * steps + ((cycle - 0) & mask)]);
    assert(x889 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x890(args[2][194 * steps + ((cycle - 0) & mask)]);
    assert(x890 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x891(args[2][195 * steps + ((cycle - 0) & mask)]);
    assert(x891 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x892(args[2][196 * steps + ((cycle - 0) & mask)]);
    assert(x892 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x893(args[2][197 * steps + ((cycle - 0) & mask)]);
    assert(x893 != Fp::invalid());
    // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x894(args[2][198 * steps + ((cycle - 0) & mask)]);
    assert(x894 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x895 = x661 * x888;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x896 = Fp4(x895) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x897 = x662 * x889;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x898 = Fp4(x896) + Fp4(x897);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x899 = x663 * x890;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x900 = Fp4(x898) + Fp4(x899);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x901 = x664 * x891;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x902 = Fp4(x900) + Fp4(x901);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x903 = x665 * x892;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x904 = Fp4(x902) + Fp4(x903);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x905 = x666 * x893;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x906 = Fp4(x904) + Fp4(x905);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x907 = x667 * x894;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x908 = Fp4(x906) + Fp4(x907);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x909 = x908 * x0;
    // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x910(args[2][2 * steps + ((cycle - 0) & mask)]);
    assert(x910 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x911(args[2][3 * steps + ((cycle - 0) & mask)]);
    assert(x911 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x912(args[2][4 * steps + ((cycle - 0) & mask)]);
    assert(x912 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x913(args[2][5 * steps + ((cycle - 0) & mask)]);
    assert(x913 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x914(args[2][6 * steps + ((cycle - 0) & mask)]);
    assert(x914 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x915(args[2][7 * steps + ((cycle - 0) & mask)]);
    assert(x915 != Fp::invalid());
    // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x916(args[2][8 * steps + ((cycle - 0) & mask)]);
    assert(x916 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x917 = x661 * x910;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x918 = Fp4(x917) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x919 = x662 * x911;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x920 = Fp4(x918) + Fp4(x919);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x921 = x663 * x912;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x922 = Fp4(x920) + Fp4(x921);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x923 = x664 * x913;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x924 = Fp4(x922) + Fp4(x923);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x925 = x665 * x914;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x926 = Fp4(x924) + Fp4(x925);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x927 = x666 * x915;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x928 = Fp4(x926) + Fp4(x927);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x929 = x667 * x916;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x930 = Fp4(x928) + Fp4(x929);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x931 = x909 * x930;
    {
      host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
      Fp4 x932(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][4 * steps + cycle] = x932.elems[0];
      args[4][5 * steps + cycle] = x932.elems[1];
      args[4][6 * steps + cycle] = x932.elems[2];
      args[4][7 * steps + cycle] = x932.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x933 = inv(x799);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x934 = x932 * x933;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x935 = x934 * x931;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][36 * steps + cycle] = x935.elems[0];
      args[4][37 * steps + cycle] = x935.elems[1];
      args[4][38 * steps + cycle] = x935.elems[2];
      args[4][39 * steps + cycle] = x935.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x936 = inv(x755);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x937 = x935 * x936;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x938 = x937 * x887;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][32 * steps + cycle] = x938.elems[0];
      args[4][33 * steps + cycle] = x938.elems[1];
      args[4][34 * steps + cycle] = x938.elems[2];
      args[4][35 * steps + cycle] = x938.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x939 = inv(x711);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x940 = x938 * x939;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x941 = x940 * x843;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][28 * steps + cycle] = x941.elems[0];
      args[4][29 * steps + cycle] = x941.elems[1];
      args[4][30 * steps + cycle] = x941.elems[2];
      args[4][31 * steps + cycle] = x941.elems[3];
    }
  }
  if (x5 != 0) {
    // loc("Top/PlonkHeader/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x942(args[3][0], args[3][1], args[3][2], args[3][3]);
    // loc("Top/PlonkHeader/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
    Fp4 x943(args[3][4], args[3][5], args[3][6], args[3][7]);
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x944(args[2][16 * steps + ((cycle - 0) & mask)]);
    assert(x944 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x945(args[2][17 * steps + ((cycle - 0) & mask)]);
    assert(x945 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x946 = x942 * x944;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x947 = Fp4(x946) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x948 = x943 * x945;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x949 = Fp4(x947) + Fp4(x948);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x950 = x949 * x0;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x951(args[2][18 * steps + ((cycle - 0) & mask)]);
    assert(x951 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x952(args[2][19 * steps + ((cycle - 0) & mask)]);
    assert(x952 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x953 = x942 * x951;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x954 = Fp4(x953) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x955 = x943 * x952;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x956 = Fp4(x954) + Fp4(x955);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x957 = x950 * x956;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x958(args[2][20 * steps + ((cycle - 0) & mask)]);
    assert(x958 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x959(args[2][21 * steps + ((cycle - 0) & mask)]);
    assert(x959 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x960 = x942 * x958;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x961 = Fp4(x960) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x962 = x943 * x959;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x963 = Fp4(x961) + Fp4(x962);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x964 = x957 * x963;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x965(args[2][22 * steps + ((cycle - 0) & mask)]);
    assert(x965 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x966(args[2][23 * steps + ((cycle - 0) & mask)]);
    assert(x966 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x967 = x942 * x965;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x968 = Fp4(x967) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x969 = x943 * x966;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x970 = Fp4(x968) + Fp4(x969);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x971 = x970 * x0;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x972(args[2][24 * steps + ((cycle - 0) & mask)]);
    assert(x972 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x973(args[2][25 * steps + ((cycle - 0) & mask)]);
    assert(x973 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x974 = x942 * x972;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x975 = Fp4(x974) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x976 = x943 * x973;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x977 = Fp4(x975) + Fp4(x976);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x978 = x971 * x977;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x979(args[2][26 * steps + ((cycle - 0) & mask)]);
    assert(x979 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x980(args[2][27 * steps + ((cycle - 0) & mask)]);
    assert(x980 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x981 = x942 * x979;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x982 = Fp4(x981) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x983 = x943 * x980;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x984 = Fp4(x982) + Fp4(x983);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x985 = x978 * x984;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement9/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x986(args[2][28 * steps + ((cycle - 0) & mask)]);
    assert(x986 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement9/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x987(args[2][29 * steps + ((cycle - 0) & mask)]);
    assert(x987 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x988 = x942 * x986;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x989 = Fp4(x988) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x990 = x943 * x987;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x991 = Fp4(x989) + Fp4(x990);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x992 = x991 * x0;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement10/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x993(args[2][30 * steps + ((cycle - 0) & mask)]);
    assert(x993 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement10/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x994(args[2][31 * steps + ((cycle - 0) & mask)]);
    assert(x994 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x995 = x942 * x993;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x996 = Fp4(x995) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x997 = x943 * x994;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x998 = Fp4(x996) + Fp4(x997);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x999 = x992 * x998;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement11/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1000(args[2][32 * steps + ((cycle - 0) & mask)]);
    assert(x1000 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement11/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1001(args[2][33 * steps + ((cycle - 0) & mask)]);
    assert(x1001 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1002 = x942 * x1000;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1003 = Fp4(x1002) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1004 = x943 * x1001;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1005 = Fp4(x1003) + Fp4(x1004);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1006 = x999 * x1005;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement12/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1007(args[2][34 * steps + ((cycle - 0) & mask)]);
    assert(x1007 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement12/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1008(args[2][35 * steps + ((cycle - 0) & mask)]);
    assert(x1008 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1009 = x942 * x1007;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1010 = Fp4(x1009) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1011 = x943 * x1008;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1012 = Fp4(x1010) + Fp4(x1011);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1013 = x1012 * x0;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement13/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1014(args[2][36 * steps + ((cycle - 0) & mask)]);
    assert(x1014 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement13/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1015(args[2][37 * steps + ((cycle - 0) & mask)]);
    assert(x1015 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1016 = x942 * x1014;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1017 = Fp4(x1016) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1018 = x943 * x1015;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1019 = Fp4(x1017) + Fp4(x1018);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1020 = x1013 * x1019;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement14/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1021(args[2][38 * steps + ((cycle - 0) & mask)]);
    assert(x1021 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement14/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1022(args[2][39 * steps + ((cycle - 0) & mask)]);
    assert(x1022 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1023 = x942 * x1021;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1024 = Fp4(x1023) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1025 = x943 * x1022;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1026 = Fp4(x1024) + Fp4(x1025);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1027 = x1020 * x1026;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement15/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1028(args[2][40 * steps + ((cycle - 0) & mask)]);
    assert(x1028 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement15/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1029(args[2][41 * steps + ((cycle - 0) & mask)]);
    assert(x1029 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1030 = x942 * x1028;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1031 = Fp4(x1030) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1032 = x943 * x1029;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1033 = Fp4(x1031) + Fp4(x1032);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1034 = x1033 * x0;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement19/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1035(args[2][48 * steps + ((cycle - 0) & mask)]);
    assert(x1035 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement19/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1036(args[2][49 * steps + ((cycle - 0) & mask)]);
    assert(x1036 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1037 = x942 * x1035;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1038 = Fp4(x1037) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1039 = x943 * x1036;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1040 = Fp4(x1038) + Fp4(x1039);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1041 = x1040 * x0;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement20/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1042(args[2][50 * steps + ((cycle - 0) & mask)]);
    assert(x1042 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement20/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1043(args[2][51 * steps + ((cycle - 0) & mask)]);
    assert(x1043 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1044 = x942 * x1042;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1045 = Fp4(x1044) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1046 = x943 * x1043;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1047 = Fp4(x1045) + Fp4(x1046);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1048 = x1041 * x1047;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement21/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1049(args[2][52 * steps + ((cycle - 0) & mask)]);
    assert(x1049 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement21/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1050(args[2][53 * steps + ((cycle - 0) & mask)]);
    assert(x1050 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1051 = x942 * x1049;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1052 = Fp4(x1051) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1053 = x943 * x1050;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1054 = Fp4(x1052) + Fp4(x1053);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1055 = x1048 * x1054;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement22/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1056(args[2][54 * steps + ((cycle - 0) & mask)]);
    assert(x1056 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement22/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1057(args[2][55 * steps + ((cycle - 0) & mask)]);
    assert(x1057 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1058 = x942 * x1056;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1059 = Fp4(x1058) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1060 = x943 * x1057;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1061 = Fp4(x1059) + Fp4(x1060);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1062 = x1061 * x0;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement23/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1063(args[2][56 * steps + ((cycle - 0) & mask)]);
    assert(x1063 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement23/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1064(args[2][57 * steps + ((cycle - 0) & mask)]);
    assert(x1064 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1065 = x942 * x1063;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1066 = Fp4(x1065) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1067 = x943 * x1064;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1068 = Fp4(x1066) + Fp4(x1067);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1069 = x1062 * x1068;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement24/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1070(args[2][58 * steps + ((cycle - 0) & mask)]);
    assert(x1070 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement24/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1071(args[2][59 * steps + ((cycle - 0) & mask)]);
    assert(x1071 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1072 = x942 * x1070;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1073 = Fp4(x1072) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1074 = x943 * x1071;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1075 = Fp4(x1073) + Fp4(x1074);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1076 = x1069 * x1075;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement25/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1077(args[2][60 * steps + ((cycle - 0) & mask)]);
    assert(x1077 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement25/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1078(args[2][61 * steps + ((cycle - 0) & mask)]);
    assert(x1078 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1079 = x942 * x1077;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1080 = Fp4(x1079) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1081 = x943 * x1078;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1082 = Fp4(x1080) + Fp4(x1081);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1083 = x1082 * x0;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement26/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1084(args[2][62 * steps + ((cycle - 0) & mask)]);
    assert(x1084 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement26/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1085(args[2][63 * steps + ((cycle - 0) & mask)]);
    assert(x1085 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1086 = x942 * x1084;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1087 = Fp4(x1086) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1088 = x943 * x1085;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1089 = Fp4(x1087) + Fp4(x1088);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1090 = x1083 * x1089;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement27/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1091(args[2][64 * steps + ((cycle - 0) & mask)]);
    assert(x1091 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement27/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1092(args[2][65 * steps + ((cycle - 0) & mask)]);
    assert(x1092 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1093 = x942 * x1091;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1094 = Fp4(x1093) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1095 = x943 * x1092;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1096 = Fp4(x1094) + Fp4(x1095);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1097 = x1090 * x1096;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement28/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1098(args[2][66 * steps + ((cycle - 0) & mask)]);
    assert(x1098 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement28/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1099(args[2][67 * steps + ((cycle - 0) & mask)]);
    assert(x1099 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1100 = x942 * x1098;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1101 = Fp4(x1100) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1102 = x943 * x1099;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1103 = Fp4(x1101) + Fp4(x1102);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1104 = x1103 * x0;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement29/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1105(args[2][68 * steps + ((cycle - 0) & mask)]);
    assert(x1105 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement29/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1106(args[2][69 * steps + ((cycle - 0) & mask)]);
    assert(x1106 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1107 = x942 * x1105;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1108 = Fp4(x1107) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1109 = x943 * x1106;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1110 = Fp4(x1108) + Fp4(x1109);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1111 = x1104 * x1110;
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement30/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1112(args[2][70 * steps + ((cycle - 0) & mask)]);
    assert(x1112 != Fp::invalid());
    // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement30/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1113(args[2][71 * steps + ((cycle - 0) & mask)]);
    assert(x1113 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1114 = x942 * x1112;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1115 = Fp4(x1114) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1116 = x943 * x1113;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1117 = Fp4(x1115) + Fp4(x1116);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1118 = x1111 * x1117;
    // loc("Top/PlonkHeader/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1119(args[2][0 * steps + ((cycle - 0) & mask)]);
    assert(x1119 != Fp::invalid());
    // loc("Top/PlonkHeader/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
    Fp x1120(args[2][1 * steps + ((cycle - 0) & mask)]);
    assert(x1120 != Fp::invalid());
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1121 = x942 * x1119;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1122 = Fp4(x1121) + Fp4(x0);
    // loc("./cirgen/components/plonk.h":214:23)
    Fp4 x1123 = x943 * x1120;
    // loc("./cirgen/components/plonk.h":214:17)
    Fp4 x1124 = Fp4(x1122) + Fp4(x1123);
    // loc("./cirgen/components/plonk.h":216:16)
    Fp4 x1125 = x1124 * x0;
    {
      host(ctx, "plonkReadAccum", "bytes", host_args.data(), 0, host_outs.data(), 4);
      Fp4 x1126(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][0 * steps + cycle] = x1126.elems[0];
      args[4][1 * steps + cycle] = x1126.elems[1];
      args[4][2 * steps + cycle] = x1126.elems[2];
      args[4][3 * steps + cycle] = x1126.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x1127 = inv(x1034);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x1128 = x1126 * x1127;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x1129 = x1128 * x1125;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][24 * steps + cycle] = x1129.elems[0];
      args[4][25 * steps + cycle] = x1129.elems[1];
      args[4][26 * steps + cycle] = x1129.elems[2];
      args[4][27 * steps + cycle] = x1129.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x1130 = inv(x1027);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x1131 = x1129 * x1130;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x1132 = x1131 * x1118;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][20 * steps + cycle] = x1132.elems[0];
      args[4][21 * steps + cycle] = x1132.elems[1];
      args[4][22 * steps + cycle] = x1132.elems[2];
      args[4][23 * steps + cycle] = x1132.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x1133 = inv(x1006);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x1134 = x1132 * x1133;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x1135 = x1134 * x1097;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][16 * steps + cycle] = x1135.elems[0];
      args[4][17 * steps + cycle] = x1135.elems[1];
      args[4][18 * steps + cycle] = x1135.elems[2];
      args[4][19 * steps + cycle] = x1135.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x1136 = inv(x985);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x1137 = x1135 * x1136;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x1138 = x1137 * x1076;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][12 * steps + cycle] = x1138.elems[0];
      args[4][13 * steps + cycle] = x1138.elems[1];
      args[4][14 * steps + cycle] = x1138.elems[2];
      args[4][15 * steps + cycle] = x1138.elems[3];
      // loc("./cirgen/components/plonk.h":276:27)
      auto x1139 = inv(x964);
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x1140 = x1138 * x1139;
      // loc("./cirgen/components/plonk.h":276:16)
      Fp4 x1141 = x1140 * x1055;
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][8 * steps + cycle] = x1141.elems[0];
      args[4][9 * steps + cycle] = x1141.elems[1];
      args[4][10 * steps + cycle] = x1141.elems[2];
      args[4][11 * steps + cycle] = x1141.elems[3];
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1142(args[2][94 * steps + ((cycle - 0) & mask)]);
    assert(x1142 != Fp::invalid());
    if (x1142 != 0) {
      // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1143(args[3][8], args[3][9], args[3][10], args[3][11]);
      // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1144(args[3][12], args[3][13], args[3][14], args[3][15]);
      // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1145(args[3][16], args[3][17], args[3][18], args[3][19]);
      // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1146(args[3][20], args[3][21], args[3][22], args[3][23]);
      // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1147(args[3][24], args[3][25], args[3][26], args[3][27]);
      // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1148(args[3][28], args[3][29], args[3][30], args[3][31]);
      // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1149(args[3][32], args[3][33], args[3][34], args[3][35]);
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1150(args[2][122 * steps + ((cycle - 0) & mask)]);
      assert(x1150 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1151(args[2][123 * steps + ((cycle - 0) & mask)]);
      assert(x1151 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1152(args[2][124 * steps + ((cycle - 0) & mask)]);
      assert(x1152 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1153(args[2][125 * steps + ((cycle - 0) & mask)]);
      assert(x1153 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1154(args[2][126 * steps + ((cycle - 0) & mask)]);
      assert(x1154 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1155(args[2][127 * steps + ((cycle - 0) & mask)]);
      assert(x1155 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1156(args[2][128 * steps + ((cycle - 0) & mask)]);
      assert(x1156 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1157 = x1143 * x1150;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1158 = Fp4(x1157) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1159 = x1144 * x1151;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1160 = Fp4(x1158) + Fp4(x1159);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1161 = x1145 * x1152;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1162 = Fp4(x1160) + Fp4(x1161);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1163 = x1146 * x1153;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1164 = Fp4(x1162) + Fp4(x1163);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1165 = x1147 * x1154;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1166 = Fp4(x1164) + Fp4(x1165);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1167 = x1148 * x1155;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1168 = Fp4(x1166) + Fp4(x1167);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1169 = x1149 * x1156;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1170 = Fp4(x1168) + Fp4(x1169);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1171 = x1170 * x0;
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1172(args[2][129 * steps + ((cycle - 0) & mask)]);
      assert(x1172 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1173(args[2][130 * steps + ((cycle - 0) & mask)]);
      assert(x1173 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1174(args[2][131 * steps + ((cycle - 0) & mask)]);
      assert(x1174 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1175(args[2][132 * steps + ((cycle - 0) & mask)]);
      assert(x1175 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1176(args[2][133 * steps + ((cycle - 0) & mask)]);
      assert(x1176 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1177(args[2][134 * steps + ((cycle - 0) & mask)]);
      assert(x1177 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1178(args[2][135 * steps + ((cycle - 0) & mask)]);
      assert(x1178 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1179 = x1143 * x1172;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1180 = Fp4(x1179) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1181 = x1144 * x1173;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1182 = Fp4(x1180) + Fp4(x1181);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1183 = x1145 * x1174;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1184 = Fp4(x1182) + Fp4(x1183);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1185 = x1146 * x1175;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1186 = Fp4(x1184) + Fp4(x1185);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1187 = x1147 * x1176;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1188 = Fp4(x1186) + Fp4(x1187);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1189 = x1148 * x1177;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1190 = Fp4(x1188) + Fp4(x1189);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1191 = x1149 * x1178;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1192 = Fp4(x1190) + Fp4(x1191);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1193 = x1171 * x1192;
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1194(args[2][150 * steps + ((cycle - 0) & mask)]);
      assert(x1194 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1195(args[2][151 * steps + ((cycle - 0) & mask)]);
      assert(x1195 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1196(args[2][152 * steps + ((cycle - 0) & mask)]);
      assert(x1196 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1197(args[2][153 * steps + ((cycle - 0) & mask)]);
      assert(x1197 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1198(args[2][154 * steps + ((cycle - 0) & mask)]);
      assert(x1198 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1199(args[2][155 * steps + ((cycle - 0) & mask)]);
      assert(x1199 != Fp::invalid());
      // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1200(args[2][156 * steps + ((cycle - 0) & mask)]);
      assert(x1200 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1201 = x1143 * x1194;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1202 = Fp4(x1201) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1203 = x1144 * x1195;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1204 = Fp4(x1202) + Fp4(x1203);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1205 = x1145 * x1196;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1206 = Fp4(x1204) + Fp4(x1205);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1207 = x1146 * x1197;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1208 = Fp4(x1206) + Fp4(x1207);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1209 = x1147 * x1198;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1210 = Fp4(x1208) + Fp4(x1209);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1211 = x1148 * x1199;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1212 = Fp4(x1210) + Fp4(x1211);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1213 = x1149 * x1200;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1214 = Fp4(x1212) + Fp4(x1213);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1215 = x1214 * x0;
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1216(args[2][2 * steps + ((cycle - 0) & mask)]);
      assert(x1216 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1217(args[2][3 * steps + ((cycle - 0) & mask)]);
      assert(x1217 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1218(args[2][4 * steps + ((cycle - 0) & mask)]);
      assert(x1218 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1219(args[2][5 * steps + ((cycle - 0) & mask)]);
      assert(x1219 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1220(args[2][6 * steps + ((cycle - 0) & mask)]);
      assert(x1220 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1221(args[2][7 * steps + ((cycle - 0) & mask)]);
      assert(x1221 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1222(args[2][8 * steps + ((cycle - 0) & mask)]);
      assert(x1222 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1223 = x1143 * x1216;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1224 = Fp4(x1223) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1225 = x1144 * x1217;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1226 = Fp4(x1224) + Fp4(x1225);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1227 = x1145 * x1218;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1228 = Fp4(x1226) + Fp4(x1227);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1229 = x1146 * x1219;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1230 = Fp4(x1228) + Fp4(x1229);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1231 = x1147 * x1220;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1232 = Fp4(x1230) + Fp4(x1231);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1233 = x1148 * x1221;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1234 = Fp4(x1232) + Fp4(x1233);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1235 = x1149 * x1222;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1236 = Fp4(x1234) + Fp4(x1235);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1237 = x1215 * x1236;
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1238(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x1238.elems[0];
        args[4][5 * steps + cycle] = x1238.elems[1];
        args[4][6 * steps + cycle] = x1238.elems[2];
        args[4][7 * steps + cycle] = x1238.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x1239 = inv(x1193);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1240 = x1238 * x1239;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1241 = x1240 * x1237;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][28 * steps + cycle] = x1241.elems[0];
        args[4][29 * steps + cycle] = x1241.elems[1];
        args[4][30 * steps + cycle] = x1241.elems[2];
        args[4][31 * steps + cycle] = x1241.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1242(args[2][95 * steps + ((cycle - 0) & mask)]);
    assert(x1242 != Fp::invalid());
    if (x1242 != 0) {
      // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1243(args[3][8], args[3][9], args[3][10], args[3][11]);
      // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1244(args[3][12], args[3][13], args[3][14], args[3][15]);
      // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1245(args[3][16], args[3][17], args[3][18], args[3][19]);
      // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1246(args[3][20], args[3][21], args[3][22], args[3][23]);
      // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1247(args[3][24], args[3][25], args[3][26], args[3][27]);
      // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1248(args[3][28], args[3][29], args[3][30], args[3][31]);
      // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1249(args[3][32], args[3][33], args[3][34], args[3][35]);
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1250(args[2][122 * steps + ((cycle - 0) & mask)]);
      assert(x1250 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1251(args[2][123 * steps + ((cycle - 0) & mask)]);
      assert(x1251 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1252(args[2][124 * steps + ((cycle - 0) & mask)]);
      assert(x1252 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1253(args[2][125 * steps + ((cycle - 0) & mask)]);
      assert(x1253 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1254(args[2][126 * steps + ((cycle - 0) & mask)]);
      assert(x1254 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1255(args[2][127 * steps + ((cycle - 0) & mask)]);
      assert(x1255 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1256(args[2][128 * steps + ((cycle - 0) & mask)]);
      assert(x1256 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1257 = x1243 * x1250;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1258 = Fp4(x1257) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1259 = x1244 * x1251;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1260 = Fp4(x1258) + Fp4(x1259);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1261 = x1245 * x1252;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1262 = Fp4(x1260) + Fp4(x1261);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1263 = x1246 * x1253;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1264 = Fp4(x1262) + Fp4(x1263);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1265 = x1247 * x1254;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1266 = Fp4(x1264) + Fp4(x1265);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1267 = x1248 * x1255;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1268 = Fp4(x1266) + Fp4(x1267);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1269 = x1249 * x1256;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1270 = Fp4(x1268) + Fp4(x1269);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1271 = x1270 * x0;
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1272(args[2][129 * steps + ((cycle - 0) & mask)]);
      assert(x1272 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1273(args[2][130 * steps + ((cycle - 0) & mask)]);
      assert(x1273 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1274(args[2][131 * steps + ((cycle - 0) & mask)]);
      assert(x1274 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1275(args[2][132 * steps + ((cycle - 0) & mask)]);
      assert(x1275 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1276(args[2][133 * steps + ((cycle - 0) & mask)]);
      assert(x1276 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1277(args[2][134 * steps + ((cycle - 0) & mask)]);
      assert(x1277 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1278(args[2][135 * steps + ((cycle - 0) & mask)]);
      assert(x1278 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1279 = x1243 * x1272;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1280 = Fp4(x1279) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1281 = x1244 * x1273;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1282 = Fp4(x1280) + Fp4(x1281);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1283 = x1245 * x1274;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1284 = Fp4(x1282) + Fp4(x1283);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1285 = x1246 * x1275;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1286 = Fp4(x1284) + Fp4(x1285);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1287 = x1247 * x1276;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1288 = Fp4(x1286) + Fp4(x1287);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1289 = x1248 * x1277;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1290 = Fp4(x1288) + Fp4(x1289);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1291 = x1249 * x1278;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1292 = Fp4(x1290) + Fp4(x1291);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1293 = x1271 * x1292;
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1294(args[2][150 * steps + ((cycle - 0) & mask)]);
      assert(x1294 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1295(args[2][151 * steps + ((cycle - 0) & mask)]);
      assert(x1295 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1296(args[2][152 * steps + ((cycle - 0) & mask)]);
      assert(x1296 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1297(args[2][153 * steps + ((cycle - 0) & mask)]);
      assert(x1297 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1298(args[2][154 * steps + ((cycle - 0) & mask)]);
      assert(x1298 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1299(args[2][155 * steps + ((cycle - 0) & mask)]);
      assert(x1299 != Fp::invalid());
      // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1300(args[2][156 * steps + ((cycle - 0) & mask)]);
      assert(x1300 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1301 = x1243 * x1294;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1302 = Fp4(x1301) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1303 = x1244 * x1295;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1304 = Fp4(x1302) + Fp4(x1303);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1305 = x1245 * x1296;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1306 = Fp4(x1304) + Fp4(x1305);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1307 = x1246 * x1297;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1308 = Fp4(x1306) + Fp4(x1307);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1309 = x1247 * x1298;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1310 = Fp4(x1308) + Fp4(x1309);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1311 = x1248 * x1299;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1312 = Fp4(x1310) + Fp4(x1311);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1313 = x1249 * x1300;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1314 = Fp4(x1312) + Fp4(x1313);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1315 = x1314 * x0;
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1316(args[2][2 * steps + ((cycle - 0) & mask)]);
      assert(x1316 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1317(args[2][3 * steps + ((cycle - 0) & mask)]);
      assert(x1317 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1318(args[2][4 * steps + ((cycle - 0) & mask)]);
      assert(x1318 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1319(args[2][5 * steps + ((cycle - 0) & mask)]);
      assert(x1319 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1320(args[2][6 * steps + ((cycle - 0) & mask)]);
      assert(x1320 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1321(args[2][7 * steps + ((cycle - 0) & mask)]);
      assert(x1321 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1322(args[2][8 * steps + ((cycle - 0) & mask)]);
      assert(x1322 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1323 = x1243 * x1316;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1324 = Fp4(x1323) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1325 = x1244 * x1317;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1326 = Fp4(x1324) + Fp4(x1325);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1327 = x1245 * x1318;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1328 = Fp4(x1326) + Fp4(x1327);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1329 = x1246 * x1319;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1330 = Fp4(x1328) + Fp4(x1329);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1331 = x1247 * x1320;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1332 = Fp4(x1330) + Fp4(x1331);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1333 = x1248 * x1321;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1334 = Fp4(x1332) + Fp4(x1333);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1335 = x1249 * x1322;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1336 = Fp4(x1334) + Fp4(x1335);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1337 = x1315 * x1336;
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1338(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x1338.elems[0];
        args[4][5 * steps + cycle] = x1338.elems[1];
        args[4][6 * steps + cycle] = x1338.elems[2];
        args[4][7 * steps + cycle] = x1338.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x1339 = inv(x1293);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1340 = x1338 * x1339;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1341 = x1340 * x1337;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][28 * steps + cycle] = x1341.elems[0];
        args[4][29 * steps + cycle] = x1341.elems[1];
        args[4][30 * steps + cycle] = x1341.elems[2];
        args[4][31 * steps + cycle] = x1341.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1342(args[2][96 * steps + ((cycle - 0) & mask)]);
    assert(x1342 != Fp::invalid());
    if (x1342 != 0) {
      // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1343(args[3][8], args[3][9], args[3][10], args[3][11]);
      // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1344(args[3][12], args[3][13], args[3][14], args[3][15]);
      // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1345(args[3][16], args[3][17], args[3][18], args[3][19]);
      // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1346(args[3][20], args[3][21], args[3][22], args[3][23]);
      // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1347(args[3][24], args[3][25], args[3][26], args[3][27]);
      // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1348(args[3][28], args[3][29], args[3][30], args[3][31]);
      // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1349(args[3][32], args[3][33], args[3][34], args[3][35]);
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1350(args[2][122 * steps + ((cycle - 0) & mask)]);
      assert(x1350 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1351(args[2][123 * steps + ((cycle - 0) & mask)]);
      assert(x1351 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1352(args[2][124 * steps + ((cycle - 0) & mask)]);
      assert(x1352 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1353(args[2][125 * steps + ((cycle - 0) & mask)]);
      assert(x1353 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1354(args[2][126 * steps + ((cycle - 0) & mask)]);
      assert(x1354 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1355(args[2][127 * steps + ((cycle - 0) & mask)]);
      assert(x1355 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1356(args[2][128 * steps + ((cycle - 0) & mask)]);
      assert(x1356 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1357 = x1343 * x1350;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1358 = Fp4(x1357) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1359 = x1344 * x1351;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1360 = Fp4(x1358) + Fp4(x1359);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1361 = x1345 * x1352;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1362 = Fp4(x1360) + Fp4(x1361);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1363 = x1346 * x1353;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1364 = Fp4(x1362) + Fp4(x1363);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1365 = x1347 * x1354;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1366 = Fp4(x1364) + Fp4(x1365);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1367 = x1348 * x1355;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1368 = Fp4(x1366) + Fp4(x1367);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1369 = x1349 * x1356;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1370 = Fp4(x1368) + Fp4(x1369);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1371 = x1370 * x0;
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1372(args[2][129 * steps + ((cycle - 0) & mask)]);
      assert(x1372 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1373(args[2][130 * steps + ((cycle - 0) & mask)]);
      assert(x1373 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1374(args[2][131 * steps + ((cycle - 0) & mask)]);
      assert(x1374 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1375(args[2][132 * steps + ((cycle - 0) & mask)]);
      assert(x1375 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1376(args[2][133 * steps + ((cycle - 0) & mask)]);
      assert(x1376 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1377(args[2][134 * steps + ((cycle - 0) & mask)]);
      assert(x1377 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1378(args[2][135 * steps + ((cycle - 0) & mask)]);
      assert(x1378 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1379 = x1343 * x1372;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1380 = Fp4(x1379) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1381 = x1344 * x1373;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1382 = Fp4(x1380) + Fp4(x1381);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1383 = x1345 * x1374;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1384 = Fp4(x1382) + Fp4(x1383);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1385 = x1346 * x1375;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1386 = Fp4(x1384) + Fp4(x1385);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1387 = x1347 * x1376;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1388 = Fp4(x1386) + Fp4(x1387);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1389 = x1348 * x1377;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1390 = Fp4(x1388) + Fp4(x1389);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1391 = x1349 * x1378;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1392 = Fp4(x1390) + Fp4(x1391);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1393 = x1371 * x1392;
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1394(args[2][150 * steps + ((cycle - 0) & mask)]);
      assert(x1394 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1395(args[2][151 * steps + ((cycle - 0) & mask)]);
      assert(x1395 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1396(args[2][152 * steps + ((cycle - 0) & mask)]);
      assert(x1396 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1397(args[2][153 * steps + ((cycle - 0) & mask)]);
      assert(x1397 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1398(args[2][154 * steps + ((cycle - 0) & mask)]);
      assert(x1398 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1399(args[2][155 * steps + ((cycle - 0) & mask)]);
      assert(x1399 != Fp::invalid());
      // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1400(args[2][156 * steps + ((cycle - 0) & mask)]);
      assert(x1400 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1401 = x1343 * x1394;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1402 = Fp4(x1401) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1403 = x1344 * x1395;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1404 = Fp4(x1402) + Fp4(x1403);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1405 = x1345 * x1396;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1406 = Fp4(x1404) + Fp4(x1405);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1407 = x1346 * x1397;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1408 = Fp4(x1406) + Fp4(x1407);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1409 = x1347 * x1398;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1410 = Fp4(x1408) + Fp4(x1409);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1411 = x1348 * x1399;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1412 = Fp4(x1410) + Fp4(x1411);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1413 = x1349 * x1400;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1414 = Fp4(x1412) + Fp4(x1413);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1415 = x1414 * x0;
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1416(args[2][2 * steps + ((cycle - 0) & mask)]);
      assert(x1416 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1417(args[2][3 * steps + ((cycle - 0) & mask)]);
      assert(x1417 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1418(args[2][4 * steps + ((cycle - 0) & mask)]);
      assert(x1418 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1419(args[2][5 * steps + ((cycle - 0) & mask)]);
      assert(x1419 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1420(args[2][6 * steps + ((cycle - 0) & mask)]);
      assert(x1420 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1421(args[2][7 * steps + ((cycle - 0) & mask)]);
      assert(x1421 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1422(args[2][8 * steps + ((cycle - 0) & mask)]);
      assert(x1422 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1423 = x1343 * x1416;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1424 = Fp4(x1423) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1425 = x1344 * x1417;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1426 = Fp4(x1424) + Fp4(x1425);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1427 = x1345 * x1418;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1428 = Fp4(x1426) + Fp4(x1427);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1429 = x1346 * x1419;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1430 = Fp4(x1428) + Fp4(x1429);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1431 = x1347 * x1420;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1432 = Fp4(x1430) + Fp4(x1431);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1433 = x1348 * x1421;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1434 = Fp4(x1432) + Fp4(x1433);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1435 = x1349 * x1422;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1436 = Fp4(x1434) + Fp4(x1435);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1437 = x1415 * x1436;
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1438(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x1438.elems[0];
        args[4][5 * steps + cycle] = x1438.elems[1];
        args[4][6 * steps + cycle] = x1438.elems[2];
        args[4][7 * steps + cycle] = x1438.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x1439 = inv(x1393);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1440 = x1438 * x1439;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1441 = x1440 * x1437;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][28 * steps + cycle] = x1441.elems[0];
        args[4][29 * steps + cycle] = x1441.elems[1];
        args[4][30 * steps + cycle] = x1441.elems[2];
        args[4][31 * steps + cycle] = x1441.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1442(args[2][97 * steps + ((cycle - 0) & mask)]);
    assert(x1442 != Fp::invalid());
    if (x1442 != 0) {
      // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1443(args[3][8], args[3][9], args[3][10], args[3][11]);
      // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1444(args[3][12], args[3][13], args[3][14], args[3][15]);
      // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1445(args[3][16], args[3][17], args[3][18], args[3][19]);
      // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1446(args[3][20], args[3][21], args[3][22], args[3][23]);
      // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1447(args[3][24], args[3][25], args[3][26], args[3][27]);
      // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1448(args[3][28], args[3][29], args[3][30], args[3][31]);
      // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1449(args[3][32], args[3][33], args[3][34], args[3][35]);
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1450(args[2][122 * steps + ((cycle - 0) & mask)]);
      assert(x1450 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1451(args[2][123 * steps + ((cycle - 0) & mask)]);
      assert(x1451 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1452(args[2][124 * steps + ((cycle - 0) & mask)]);
      assert(x1452 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1453(args[2][125 * steps + ((cycle - 0) & mask)]);
      assert(x1453 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1454(args[2][126 * steps + ((cycle - 0) & mask)]);
      assert(x1454 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1455(args[2][127 * steps + ((cycle - 0) & mask)]);
      assert(x1455 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1456(args[2][128 * steps + ((cycle - 0) & mask)]);
      assert(x1456 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1457 = x1443 * x1450;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1458 = Fp4(x1457) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1459 = x1444 * x1451;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1460 = Fp4(x1458) + Fp4(x1459);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1461 = x1445 * x1452;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1462 = Fp4(x1460) + Fp4(x1461);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1463 = x1446 * x1453;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1464 = Fp4(x1462) + Fp4(x1463);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1465 = x1447 * x1454;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1466 = Fp4(x1464) + Fp4(x1465);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1467 = x1448 * x1455;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1468 = Fp4(x1466) + Fp4(x1467);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1469 = x1449 * x1456;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1470 = Fp4(x1468) + Fp4(x1469);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1471 = x1470 * x0;
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1472(args[2][129 * steps + ((cycle - 0) & mask)]);
      assert(x1472 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1473(args[2][130 * steps + ((cycle - 0) & mask)]);
      assert(x1473 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1474(args[2][131 * steps + ((cycle - 0) & mask)]);
      assert(x1474 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1475(args[2][132 * steps + ((cycle - 0) & mask)]);
      assert(x1475 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1476(args[2][133 * steps + ((cycle - 0) & mask)]);
      assert(x1476 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1477(args[2][134 * steps + ((cycle - 0) & mask)]);
      assert(x1477 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1478(args[2][135 * steps + ((cycle - 0) & mask)]);
      assert(x1478 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1479 = x1443 * x1472;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1480 = Fp4(x1479) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1481 = x1444 * x1473;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1482 = Fp4(x1480) + Fp4(x1481);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1483 = x1445 * x1474;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1484 = Fp4(x1482) + Fp4(x1483);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1485 = x1446 * x1475;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1486 = Fp4(x1484) + Fp4(x1485);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1487 = x1447 * x1476;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1488 = Fp4(x1486) + Fp4(x1487);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1489 = x1448 * x1477;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1490 = Fp4(x1488) + Fp4(x1489);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1491 = x1449 * x1478;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1492 = Fp4(x1490) + Fp4(x1491);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1493 = x1471 * x1492;
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1494(args[2][136 * steps + ((cycle - 0) & mask)]);
      assert(x1494 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1495(args[2][137 * steps + ((cycle - 0) & mask)]);
      assert(x1495 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1496(args[2][138 * steps + ((cycle - 0) & mask)]);
      assert(x1496 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1497(args[2][139 * steps + ((cycle - 0) & mask)]);
      assert(x1497 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1498(args[2][140 * steps + ((cycle - 0) & mask)]);
      assert(x1498 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1499(args[2][141 * steps + ((cycle - 0) & mask)]);
      assert(x1499 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1500(args[2][142 * steps + ((cycle - 0) & mask)]);
      assert(x1500 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1501 = x1443 * x1494;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1502 = Fp4(x1501) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1503 = x1444 * x1495;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1504 = Fp4(x1502) + Fp4(x1503);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1505 = x1445 * x1496;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1506 = Fp4(x1504) + Fp4(x1505);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1507 = x1446 * x1497;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1508 = Fp4(x1506) + Fp4(x1507);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1509 = x1447 * x1498;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1510 = Fp4(x1508) + Fp4(x1509);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1511 = x1448 * x1499;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1512 = Fp4(x1510) + Fp4(x1511);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1513 = x1449 * x1500;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1514 = Fp4(x1512) + Fp4(x1513);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1515 = x1514 * x0;
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1516(args[2][157 * steps + ((cycle - 0) & mask)]);
      assert(x1516 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1517(args[2][158 * steps + ((cycle - 0) & mask)]);
      assert(x1517 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1518(args[2][159 * steps + ((cycle - 0) & mask)]);
      assert(x1518 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1519(args[2][160 * steps + ((cycle - 0) & mask)]);
      assert(x1519 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1520(args[2][161 * steps + ((cycle - 0) & mask)]);
      assert(x1520 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1521(args[2][162 * steps + ((cycle - 0) & mask)]);
      assert(x1521 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1522(args[2][163 * steps + ((cycle - 0) & mask)]);
      assert(x1522 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1523 = x1443 * x1516;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1524 = Fp4(x1523) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1525 = x1444 * x1517;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1526 = Fp4(x1524) + Fp4(x1525);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1527 = x1445 * x1518;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1528 = Fp4(x1526) + Fp4(x1527);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1529 = x1446 * x1519;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1530 = Fp4(x1528) + Fp4(x1529);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1531 = x1447 * x1520;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1532 = Fp4(x1530) + Fp4(x1531);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1533 = x1448 * x1521;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1534 = Fp4(x1532) + Fp4(x1533);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1535 = x1449 * x1522;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1536 = Fp4(x1534) + Fp4(x1535);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1537 = x1536 * x0;
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1538(args[2][164 * steps + ((cycle - 0) & mask)]);
      assert(x1538 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1539(args[2][165 * steps + ((cycle - 0) & mask)]);
      assert(x1539 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1540(args[2][166 * steps + ((cycle - 0) & mask)]);
      assert(x1540 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1541(args[2][167 * steps + ((cycle - 0) & mask)]);
      assert(x1541 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1542(args[2][168 * steps + ((cycle - 0) & mask)]);
      assert(x1542 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1543(args[2][169 * steps + ((cycle - 0) & mask)]);
      assert(x1543 != Fp::invalid());
      // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1544(args[2][170 * steps + ((cycle - 0) & mask)]);
      assert(x1544 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1545 = x1443 * x1538;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1546 = Fp4(x1545) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1547 = x1444 * x1539;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1548 = Fp4(x1546) + Fp4(x1547);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1549 = x1445 * x1540;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1550 = Fp4(x1548) + Fp4(x1549);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1551 = x1446 * x1541;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1552 = Fp4(x1550) + Fp4(x1551);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1553 = x1447 * x1542;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1554 = Fp4(x1552) + Fp4(x1553);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1555 = x1448 * x1543;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1556 = Fp4(x1554) + Fp4(x1555);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1557 = x1449 * x1544;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1558 = Fp4(x1556) + Fp4(x1557);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1559 = x1537 * x1558;
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1560(args[2][2 * steps + ((cycle - 0) & mask)]);
      assert(x1560 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1561(args[2][3 * steps + ((cycle - 0) & mask)]);
      assert(x1561 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1562(args[2][4 * steps + ((cycle - 0) & mask)]);
      assert(x1562 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1563(args[2][5 * steps + ((cycle - 0) & mask)]);
      assert(x1563 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1564(args[2][6 * steps + ((cycle - 0) & mask)]);
      assert(x1564 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1565(args[2][7 * steps + ((cycle - 0) & mask)]);
      assert(x1565 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1566(args[2][8 * steps + ((cycle - 0) & mask)]);
      assert(x1566 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1567 = x1443 * x1560;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1568 = Fp4(x1567) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1569 = x1444 * x1561;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1570 = Fp4(x1568) + Fp4(x1569);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1571 = x1445 * x1562;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1572 = Fp4(x1570) + Fp4(x1571);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1573 = x1446 * x1563;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1574 = Fp4(x1572) + Fp4(x1573);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1575 = x1447 * x1564;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1576 = Fp4(x1574) + Fp4(x1575);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1577 = x1448 * x1565;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1578 = Fp4(x1576) + Fp4(x1577);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1579 = x1449 * x1566;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1580 = Fp4(x1578) + Fp4(x1579);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1581 = x1580 * x0;
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1582(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x1582.elems[0];
        args[4][5 * steps + cycle] = x1582.elems[1];
        args[4][6 * steps + cycle] = x1582.elems[2];
        args[4][7 * steps + cycle] = x1582.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x1583 = inv(x1515);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1584 = x1582 * x1583;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1585 = x1584 * x1581;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][32 * steps + cycle] = x1585.elems[0];
        args[4][33 * steps + cycle] = x1585.elems[1];
        args[4][34 * steps + cycle] = x1585.elems[2];
        args[4][35 * steps + cycle] = x1585.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x1586 = inv(x1493);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1587 = x1585 * x1586;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1588 = x1587 * x1559;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][28 * steps + cycle] = x1588.elems[0];
        args[4][29 * steps + cycle] = x1588.elems[1];
        args[4][30 * steps + cycle] = x1588.elems[2];
        args[4][31 * steps + cycle] = x1588.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1589(args[2][98 * steps + ((cycle - 0) & mask)]);
    assert(x1589 != Fp::invalid());
    if (x1589 != 0) {
      // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1590(args[3][8], args[3][9], args[3][10], args[3][11]);
      // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1591(args[3][12], args[3][13], args[3][14], args[3][15]);
      // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1592(args[3][16], args[3][17], args[3][18], args[3][19]);
      // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1593(args[3][20], args[3][21], args[3][22], args[3][23]);
      // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1594(args[3][24], args[3][25], args[3][26], args[3][27]);
      // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1595(args[3][28], args[3][29], args[3][30], args[3][31]);
      // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1596(args[3][32], args[3][33], args[3][34], args[3][35]);
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1597(args[2][122 * steps + ((cycle - 0) & mask)]);
      assert(x1597 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1598(args[2][123 * steps + ((cycle - 0) & mask)]);
      assert(x1598 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1599(args[2][124 * steps + ((cycle - 0) & mask)]);
      assert(x1599 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1600(args[2][125 * steps + ((cycle - 0) & mask)]);
      assert(x1600 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1601(args[2][126 * steps + ((cycle - 0) & mask)]);
      assert(x1601 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1602(args[2][127 * steps + ((cycle - 0) & mask)]);
      assert(x1602 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1603(args[2][128 * steps + ((cycle - 0) & mask)]);
      assert(x1603 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1604 = x1590 * x1597;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1605 = Fp4(x1604) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1606 = x1591 * x1598;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1607 = Fp4(x1605) + Fp4(x1606);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1608 = x1592 * x1599;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1609 = Fp4(x1607) + Fp4(x1608);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1610 = x1593 * x1600;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1611 = Fp4(x1609) + Fp4(x1610);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1612 = x1594 * x1601;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1613 = Fp4(x1611) + Fp4(x1612);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1614 = x1595 * x1602;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1615 = Fp4(x1613) + Fp4(x1614);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1616 = x1596 * x1603;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1617 = Fp4(x1615) + Fp4(x1616);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1618 = x1617 * x0;
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1619(args[2][129 * steps + ((cycle - 0) & mask)]);
      assert(x1619 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1620(args[2][130 * steps + ((cycle - 0) & mask)]);
      assert(x1620 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1621(args[2][131 * steps + ((cycle - 0) & mask)]);
      assert(x1621 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1622(args[2][132 * steps + ((cycle - 0) & mask)]);
      assert(x1622 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1623(args[2][133 * steps + ((cycle - 0) & mask)]);
      assert(x1623 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1624(args[2][134 * steps + ((cycle - 0) & mask)]);
      assert(x1624 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1625(args[2][135 * steps + ((cycle - 0) & mask)]);
      assert(x1625 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1626 = x1590 * x1619;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1627 = Fp4(x1626) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1628 = x1591 * x1620;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1629 = Fp4(x1627) + Fp4(x1628);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1630 = x1592 * x1621;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1631 = Fp4(x1629) + Fp4(x1630);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1632 = x1593 * x1622;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1633 = Fp4(x1631) + Fp4(x1632);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1634 = x1594 * x1623;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1635 = Fp4(x1633) + Fp4(x1634);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1636 = x1595 * x1624;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1637 = Fp4(x1635) + Fp4(x1636);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1638 = x1596 * x1625;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1639 = Fp4(x1637) + Fp4(x1638);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1640 = x1618 * x1639;
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1641(args[2][136 * steps + ((cycle - 0) & mask)]);
      assert(x1641 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1642(args[2][137 * steps + ((cycle - 0) & mask)]);
      assert(x1642 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1643(args[2][138 * steps + ((cycle - 0) & mask)]);
      assert(x1643 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1644(args[2][139 * steps + ((cycle - 0) & mask)]);
      assert(x1644 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1645(args[2][140 * steps + ((cycle - 0) & mask)]);
      assert(x1645 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1646(args[2][141 * steps + ((cycle - 0) & mask)]);
      assert(x1646 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1647(args[2][142 * steps + ((cycle - 0) & mask)]);
      assert(x1647 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1648 = x1590 * x1641;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1649 = Fp4(x1648) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1650 = x1591 * x1642;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1651 = Fp4(x1649) + Fp4(x1650);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1652 = x1592 * x1643;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1653 = Fp4(x1651) + Fp4(x1652);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1654 = x1593 * x1644;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1655 = Fp4(x1653) + Fp4(x1654);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1656 = x1594 * x1645;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1657 = Fp4(x1655) + Fp4(x1656);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1658 = x1595 * x1646;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1659 = Fp4(x1657) + Fp4(x1658);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1660 = x1596 * x1647;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1661 = Fp4(x1659) + Fp4(x1660);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1662 = x1661 * x0;
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1663(args[2][157 * steps + ((cycle - 0) & mask)]);
      assert(x1663 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1664(args[2][158 * steps + ((cycle - 0) & mask)]);
      assert(x1664 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1665(args[2][159 * steps + ((cycle - 0) & mask)]);
      assert(x1665 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1666(args[2][160 * steps + ((cycle - 0) & mask)]);
      assert(x1666 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1667(args[2][161 * steps + ((cycle - 0) & mask)]);
      assert(x1667 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1668(args[2][162 * steps + ((cycle - 0) & mask)]);
      assert(x1668 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1669(args[2][163 * steps + ((cycle - 0) & mask)]);
      assert(x1669 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1670 = x1590 * x1663;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1671 = Fp4(x1670) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1672 = x1591 * x1664;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1673 = Fp4(x1671) + Fp4(x1672);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1674 = x1592 * x1665;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1675 = Fp4(x1673) + Fp4(x1674);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1676 = x1593 * x1666;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1677 = Fp4(x1675) + Fp4(x1676);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1678 = x1594 * x1667;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1679 = Fp4(x1677) + Fp4(x1678);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1680 = x1595 * x1668;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1681 = Fp4(x1679) + Fp4(x1680);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1682 = x1596 * x1669;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1683 = Fp4(x1681) + Fp4(x1682);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1684 = x1683 * x0;
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1685(args[2][164 * steps + ((cycle - 0) & mask)]);
      assert(x1685 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1686(args[2][165 * steps + ((cycle - 0) & mask)]);
      assert(x1686 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1687(args[2][166 * steps + ((cycle - 0) & mask)]);
      assert(x1687 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1688(args[2][167 * steps + ((cycle - 0) & mask)]);
      assert(x1688 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1689(args[2][168 * steps + ((cycle - 0) & mask)]);
      assert(x1689 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1690(args[2][169 * steps + ((cycle - 0) & mask)]);
      assert(x1690 != Fp::invalid());
      // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1691(args[2][170 * steps + ((cycle - 0) & mask)]);
      assert(x1691 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1692 = x1590 * x1685;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1693 = Fp4(x1692) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1694 = x1591 * x1686;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1695 = Fp4(x1693) + Fp4(x1694);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1696 = x1592 * x1687;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1697 = Fp4(x1695) + Fp4(x1696);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1698 = x1593 * x1688;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1699 = Fp4(x1697) + Fp4(x1698);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1700 = x1594 * x1689;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1701 = Fp4(x1699) + Fp4(x1700);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1702 = x1595 * x1690;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1703 = Fp4(x1701) + Fp4(x1702);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1704 = x1596 * x1691;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1705 = Fp4(x1703) + Fp4(x1704);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1706 = x1684 * x1705;
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1707(args[2][2 * steps + ((cycle - 0) & mask)]);
      assert(x1707 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1708(args[2][3 * steps + ((cycle - 0) & mask)]);
      assert(x1708 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1709(args[2][4 * steps + ((cycle - 0) & mask)]);
      assert(x1709 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1710(args[2][5 * steps + ((cycle - 0) & mask)]);
      assert(x1710 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1711(args[2][6 * steps + ((cycle - 0) & mask)]);
      assert(x1711 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1712(args[2][7 * steps + ((cycle - 0) & mask)]);
      assert(x1712 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1713(args[2][8 * steps + ((cycle - 0) & mask)]);
      assert(x1713 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1714 = x1590 * x1707;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1715 = Fp4(x1714) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1716 = x1591 * x1708;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1717 = Fp4(x1715) + Fp4(x1716);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1718 = x1592 * x1709;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1719 = Fp4(x1717) + Fp4(x1718);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1720 = x1593 * x1710;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1721 = Fp4(x1719) + Fp4(x1720);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1722 = x1594 * x1711;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1723 = Fp4(x1721) + Fp4(x1722);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1724 = x1595 * x1712;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1725 = Fp4(x1723) + Fp4(x1724);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1726 = x1596 * x1713;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1727 = Fp4(x1725) + Fp4(x1726);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1728 = x1727 * x0;
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1729(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x1729.elems[0];
        args[4][5 * steps + cycle] = x1729.elems[1];
        args[4][6 * steps + cycle] = x1729.elems[2];
        args[4][7 * steps + cycle] = x1729.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x1730 = inv(x1662);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1731 = x1729 * x1730;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1732 = x1731 * x1728;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][32 * steps + cycle] = x1732.elems[0];
        args[4][33 * steps + cycle] = x1732.elems[1];
        args[4][34 * steps + cycle] = x1732.elems[2];
        args[4][35 * steps + cycle] = x1732.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x1733 = inv(x1640);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1734 = x1732 * x1733;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1735 = x1734 * x1706;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][28 * steps + cycle] = x1735.elems[0];
        args[4][29 * steps + cycle] = x1735.elems[1];
        args[4][30 * steps + cycle] = x1735.elems[2];
        args[4][31 * steps + cycle] = x1735.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1736(args[2][99 * steps + ((cycle - 0) & mask)]);
    assert(x1736 != Fp::invalid());
    if (x1736 != 0) {
      // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1737(args[3][8], args[3][9], args[3][10], args[3][11]);
      // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1738(args[3][12], args[3][13], args[3][14], args[3][15]);
      // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1739(args[3][16], args[3][17], args[3][18], args[3][19]);
      // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1740(args[3][20], args[3][21], args[3][22], args[3][23]);
      // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1741(args[3][24], args[3][25], args[3][26], args[3][27]);
      // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1742(args[3][28], args[3][29], args[3][30], args[3][31]);
      // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1743(args[3][32], args[3][33], args[3][34], args[3][35]);
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1744(args[2][122 * steps + ((cycle - 0) & mask)]);
      assert(x1744 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1745(args[2][123 * steps + ((cycle - 0) & mask)]);
      assert(x1745 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1746(args[2][124 * steps + ((cycle - 0) & mask)]);
      assert(x1746 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1747(args[2][125 * steps + ((cycle - 0) & mask)]);
      assert(x1747 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1748(args[2][126 * steps + ((cycle - 0) & mask)]);
      assert(x1748 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1749(args[2][127 * steps + ((cycle - 0) & mask)]);
      assert(x1749 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1750(args[2][128 * steps + ((cycle - 0) & mask)]);
      assert(x1750 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1751 = x1737 * x1744;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1752 = Fp4(x1751) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1753 = x1738 * x1745;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1754 = Fp4(x1752) + Fp4(x1753);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1755 = x1739 * x1746;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1756 = Fp4(x1754) + Fp4(x1755);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1757 = x1740 * x1747;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1758 = Fp4(x1756) + Fp4(x1757);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1759 = x1741 * x1748;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1760 = Fp4(x1758) + Fp4(x1759);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1761 = x1742 * x1749;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1762 = Fp4(x1760) + Fp4(x1761);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1763 = x1743 * x1750;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1764 = Fp4(x1762) + Fp4(x1763);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1765 = x1764 * x0;
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1766(args[2][129 * steps + ((cycle - 0) & mask)]);
      assert(x1766 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1767(args[2][130 * steps + ((cycle - 0) & mask)]);
      assert(x1767 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1768(args[2][131 * steps + ((cycle - 0) & mask)]);
      assert(x1768 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1769(args[2][132 * steps + ((cycle - 0) & mask)]);
      assert(x1769 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1770(args[2][133 * steps + ((cycle - 0) & mask)]);
      assert(x1770 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1771(args[2][134 * steps + ((cycle - 0) & mask)]);
      assert(x1771 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1772(args[2][135 * steps + ((cycle - 0) & mask)]);
      assert(x1772 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1773 = x1737 * x1766;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1774 = Fp4(x1773) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1775 = x1738 * x1767;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1776 = Fp4(x1774) + Fp4(x1775);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1777 = x1739 * x1768;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1778 = Fp4(x1776) + Fp4(x1777);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1779 = x1740 * x1769;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1780 = Fp4(x1778) + Fp4(x1779);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1781 = x1741 * x1770;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1782 = Fp4(x1780) + Fp4(x1781);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1783 = x1742 * x1771;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1784 = Fp4(x1782) + Fp4(x1783);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1785 = x1743 * x1772;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1786 = Fp4(x1784) + Fp4(x1785);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1787 = x1765 * x1786;
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1788(args[2][150 * steps + ((cycle - 0) & mask)]);
      assert(x1788 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1789(args[2][151 * steps + ((cycle - 0) & mask)]);
      assert(x1789 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1790(args[2][152 * steps + ((cycle - 0) & mask)]);
      assert(x1790 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1791(args[2][153 * steps + ((cycle - 0) & mask)]);
      assert(x1791 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1792(args[2][154 * steps + ((cycle - 0) & mask)]);
      assert(x1792 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1793(args[2][155 * steps + ((cycle - 0) & mask)]);
      assert(x1793 != Fp::invalid());
      // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1794(args[2][156 * steps + ((cycle - 0) & mask)]);
      assert(x1794 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1795 = x1737 * x1788;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1796 = Fp4(x1795) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1797 = x1738 * x1789;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1798 = Fp4(x1796) + Fp4(x1797);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1799 = x1739 * x1790;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1800 = Fp4(x1798) + Fp4(x1799);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1801 = x1740 * x1791;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1802 = Fp4(x1800) + Fp4(x1801);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1803 = x1741 * x1792;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1804 = Fp4(x1802) + Fp4(x1803);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1805 = x1742 * x1793;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1806 = Fp4(x1804) + Fp4(x1805);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1807 = x1743 * x1794;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1808 = Fp4(x1806) + Fp4(x1807);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1809 = x1808 * x0;
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1810(args[2][2 * steps + ((cycle - 0) & mask)]);
      assert(x1810 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1811(args[2][3 * steps + ((cycle - 0) & mask)]);
      assert(x1811 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1812(args[2][4 * steps + ((cycle - 0) & mask)]);
      assert(x1812 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1813(args[2][5 * steps + ((cycle - 0) & mask)]);
      assert(x1813 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1814(args[2][6 * steps + ((cycle - 0) & mask)]);
      assert(x1814 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1815(args[2][7 * steps + ((cycle - 0) & mask)]);
      assert(x1815 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1816(args[2][8 * steps + ((cycle - 0) & mask)]);
      assert(x1816 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1817 = x1737 * x1810;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1818 = Fp4(x1817) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1819 = x1738 * x1811;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1820 = Fp4(x1818) + Fp4(x1819);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1821 = x1739 * x1812;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1822 = Fp4(x1820) + Fp4(x1821);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1823 = x1740 * x1813;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1824 = Fp4(x1822) + Fp4(x1823);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1825 = x1741 * x1814;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1826 = Fp4(x1824) + Fp4(x1825);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1827 = x1742 * x1815;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1828 = Fp4(x1826) + Fp4(x1827);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1829 = x1743 * x1816;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1830 = Fp4(x1828) + Fp4(x1829);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1831 = x1809 * x1830;
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1832(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x1832.elems[0];
        args[4][5 * steps + cycle] = x1832.elems[1];
        args[4][6 * steps + cycle] = x1832.elems[2];
        args[4][7 * steps + cycle] = x1832.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x1833 = inv(x1787);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1834 = x1832 * x1833;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1835 = x1834 * x1831;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][28 * steps + cycle] = x1835.elems[0];
        args[4][29 * steps + cycle] = x1835.elems[1];
        args[4][30 * steps + cycle] = x1835.elems[2];
        args[4][31 * steps + cycle] = x1835.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1836(args[2][100 * steps + ((cycle - 0) & mask)]);
    assert(x1836 != Fp::invalid());
    if (x1836 != 0) {
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1837(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":95:7)
        args[4][4 * steps + cycle] = x1837.elems[0];
        args[4][5 * steps + cycle] = x1837.elems[1];
        args[4][6 * steps + cycle] = x1837.elems[2];
        args[4][7 * steps + cycle] = x1837.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1838(args[2][101 * steps + ((cycle - 0) & mask)]);
    assert(x1838 != Fp::invalid());
    if (x1838 != 0) {
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1839(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":95:7)
        args[4][4 * steps + cycle] = x1839.elems[0];
        args[4][5 * steps + cycle] = x1839.elems[1];
        args[4][6 * steps + cycle] = x1839.elems[2];
        args[4][7 * steps + cycle] = x1839.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1840(args[2][102 * steps + ((cycle - 0) & mask)]);
    assert(x1840 != Fp::invalid());
    if (x1840 != 0) {
      // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1841(args[3][8], args[3][9], args[3][10], args[3][11]);
      // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1842(args[3][12], args[3][13], args[3][14], args[3][15]);
      // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1843(args[3][16], args[3][17], args[3][18], args[3][19]);
      // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1844(args[3][20], args[3][21], args[3][22], args[3][23]);
      // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1845(args[3][24], args[3][25], args[3][26], args[3][27]);
      // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1846(args[3][28], args[3][29], args[3][30], args[3][31]);
      // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1847(args[3][32], args[3][33], args[3][34], args[3][35]);
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1848(args[2][122 * steps + ((cycle - 0) & mask)]);
      assert(x1848 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1849(args[2][123 * steps + ((cycle - 0) & mask)]);
      assert(x1849 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1850(args[2][124 * steps + ((cycle - 0) & mask)]);
      assert(x1850 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1851(args[2][125 * steps + ((cycle - 0) & mask)]);
      assert(x1851 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1852(args[2][126 * steps + ((cycle - 0) & mask)]);
      assert(x1852 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1853(args[2][127 * steps + ((cycle - 0) & mask)]);
      assert(x1853 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1854(args[2][128 * steps + ((cycle - 0) & mask)]);
      assert(x1854 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1855 = x1841 * x1848;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1856 = Fp4(x1855) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1857 = x1842 * x1849;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1858 = Fp4(x1856) + Fp4(x1857);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1859 = x1843 * x1850;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1860 = Fp4(x1858) + Fp4(x1859);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1861 = x1844 * x1851;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1862 = Fp4(x1860) + Fp4(x1861);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1863 = x1845 * x1852;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1864 = Fp4(x1862) + Fp4(x1863);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1865 = x1846 * x1853;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1866 = Fp4(x1864) + Fp4(x1865);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1867 = x1847 * x1854;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1868 = Fp4(x1866) + Fp4(x1867);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1869 = x1868 * x0;
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1870(args[2][129 * steps + ((cycle - 0) & mask)]);
      assert(x1870 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1871(args[2][130 * steps + ((cycle - 0) & mask)]);
      assert(x1871 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1872(args[2][131 * steps + ((cycle - 0) & mask)]);
      assert(x1872 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1873(args[2][132 * steps + ((cycle - 0) & mask)]);
      assert(x1873 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1874(args[2][133 * steps + ((cycle - 0) & mask)]);
      assert(x1874 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1875(args[2][134 * steps + ((cycle - 0) & mask)]);
      assert(x1875 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1876(args[2][135 * steps + ((cycle - 0) & mask)]);
      assert(x1876 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1877 = x1841 * x1870;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1878 = Fp4(x1877) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1879 = x1842 * x1871;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1880 = Fp4(x1878) + Fp4(x1879);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1881 = x1843 * x1872;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1882 = Fp4(x1880) + Fp4(x1881);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1883 = x1844 * x1873;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1884 = Fp4(x1882) + Fp4(x1883);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1885 = x1845 * x1874;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1886 = Fp4(x1884) + Fp4(x1885);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1887 = x1846 * x1875;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1888 = Fp4(x1886) + Fp4(x1887);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1889 = x1847 * x1876;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1890 = Fp4(x1888) + Fp4(x1889);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1891 = x1869 * x1890;
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1892(args[2][136 * steps + ((cycle - 0) & mask)]);
      assert(x1892 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1893(args[2][137 * steps + ((cycle - 0) & mask)]);
      assert(x1893 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1894(args[2][138 * steps + ((cycle - 0) & mask)]);
      assert(x1894 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1895(args[2][139 * steps + ((cycle - 0) & mask)]);
      assert(x1895 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1896(args[2][140 * steps + ((cycle - 0) & mask)]);
      assert(x1896 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1897(args[2][141 * steps + ((cycle - 0) & mask)]);
      assert(x1897 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1898(args[2][142 * steps + ((cycle - 0) & mask)]);
      assert(x1898 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1899 = x1841 * x1892;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1900 = Fp4(x1899) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1901 = x1842 * x1893;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1902 = Fp4(x1900) + Fp4(x1901);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1903 = x1843 * x1894;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1904 = Fp4(x1902) + Fp4(x1903);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1905 = x1844 * x1895;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1906 = Fp4(x1904) + Fp4(x1905);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1907 = x1845 * x1896;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1908 = Fp4(x1906) + Fp4(x1907);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1909 = x1846 * x1897;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1910 = Fp4(x1908) + Fp4(x1909);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1911 = x1847 * x1898;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1912 = Fp4(x1910) + Fp4(x1911);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1913 = x1912 * x0;
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1914(args[2][157 * steps + ((cycle - 0) & mask)]);
      assert(x1914 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1915(args[2][158 * steps + ((cycle - 0) & mask)]);
      assert(x1915 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1916(args[2][159 * steps + ((cycle - 0) & mask)]);
      assert(x1916 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1917(args[2][160 * steps + ((cycle - 0) & mask)]);
      assert(x1917 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1918(args[2][161 * steps + ((cycle - 0) & mask)]);
      assert(x1918 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1919(args[2][162 * steps + ((cycle - 0) & mask)]);
      assert(x1919 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1920(args[2][163 * steps + ((cycle - 0) & mask)]);
      assert(x1920 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1921 = x1841 * x1914;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1922 = Fp4(x1921) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1923 = x1842 * x1915;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1924 = Fp4(x1922) + Fp4(x1923);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1925 = x1843 * x1916;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1926 = Fp4(x1924) + Fp4(x1925);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1927 = x1844 * x1917;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1928 = Fp4(x1926) + Fp4(x1927);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1929 = x1845 * x1918;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1930 = Fp4(x1928) + Fp4(x1929);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1931 = x1846 * x1919;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1932 = Fp4(x1930) + Fp4(x1931);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1933 = x1847 * x1920;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1934 = Fp4(x1932) + Fp4(x1933);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1935 = x1934 * x0;
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1936(args[2][164 * steps + ((cycle - 0) & mask)]);
      assert(x1936 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1937(args[2][165 * steps + ((cycle - 0) & mask)]);
      assert(x1937 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1938(args[2][166 * steps + ((cycle - 0) & mask)]);
      assert(x1938 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1939(args[2][167 * steps + ((cycle - 0) & mask)]);
      assert(x1939 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1940(args[2][168 * steps + ((cycle - 0) & mask)]);
      assert(x1940 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1941(args[2][169 * steps + ((cycle - 0) & mask)]);
      assert(x1941 != Fp::invalid());
      // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1942(args[2][170 * steps + ((cycle - 0) & mask)]);
      assert(x1942 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1943 = x1841 * x1936;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1944 = Fp4(x1943) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1945 = x1842 * x1937;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1946 = Fp4(x1944) + Fp4(x1945);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1947 = x1843 * x1938;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1948 = Fp4(x1946) + Fp4(x1947);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1949 = x1844 * x1939;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1950 = Fp4(x1948) + Fp4(x1949);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1951 = x1845 * x1940;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1952 = Fp4(x1950) + Fp4(x1951);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1953 = x1846 * x1941;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1954 = Fp4(x1952) + Fp4(x1953);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1955 = x1847 * x1942;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1956 = Fp4(x1954) + Fp4(x1955);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1957 = x1935 * x1956;
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1958(args[2][2 * steps + ((cycle - 0) & mask)]);
      assert(x1958 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1959(args[2][3 * steps + ((cycle - 0) & mask)]);
      assert(x1959 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1960(args[2][4 * steps + ((cycle - 0) & mask)]);
      assert(x1960 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1961(args[2][5 * steps + ((cycle - 0) & mask)]);
      assert(x1961 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1962(args[2][6 * steps + ((cycle - 0) & mask)]);
      assert(x1962 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1963(args[2][7 * steps + ((cycle - 0) & mask)]);
      assert(x1963 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1964(args[2][8 * steps + ((cycle - 0) & mask)]);
      assert(x1964 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1965 = x1841 * x1958;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1966 = Fp4(x1965) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1967 = x1842 * x1959;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1968 = Fp4(x1966) + Fp4(x1967);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1969 = x1843 * x1960;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1970 = Fp4(x1968) + Fp4(x1969);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1971 = x1844 * x1961;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1972 = Fp4(x1970) + Fp4(x1971);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1973 = x1845 * x1962;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1974 = Fp4(x1972) + Fp4(x1973);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1975 = x1846 * x1963;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1976 = Fp4(x1974) + Fp4(x1975);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1977 = x1847 * x1964;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1978 = Fp4(x1976) + Fp4(x1977);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1979 = x1978 * x0;
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1980(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x1980.elems[0];
        args[4][5 * steps + cycle] = x1980.elems[1];
        args[4][6 * steps + cycle] = x1980.elems[2];
        args[4][7 * steps + cycle] = x1980.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x1981 = inv(x1913);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1982 = x1980 * x1981;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1983 = x1982 * x1979;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][32 * steps + cycle] = x1983.elems[0];
        args[4][33 * steps + cycle] = x1983.elems[1];
        args[4][34 * steps + cycle] = x1983.elems[2];
        args[4][35 * steps + cycle] = x1983.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x1984 = inv(x1891);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1985 = x1983 * x1984;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x1986 = x1985 * x1957;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][28 * steps + cycle] = x1986.elems[0];
        args[4][29 * steps + cycle] = x1986.elems[1];
        args[4][30 * steps + cycle] = x1986.elems[2];
        args[4][31 * steps + cycle] = x1986.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1987(args[2][103 * steps + ((cycle - 0) & mask)]);
    assert(x1987 != Fp::invalid());
    if (x1987 != 0) {
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1988(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x1988.elems[0];
        args[4][5 * steps + cycle] = x1988.elems[1];
        args[4][6 * steps + cycle] = x1988.elems[2];
        args[4][7 * steps + cycle] = x1988.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1989(args[2][104 * steps + ((cycle - 0) & mask)]);
    assert(x1989 != Fp::invalid());
    if (x1989 != 0) {
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1990(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x1990.elems[0];
        args[4][5 * steps + cycle] = x1990.elems[1];
        args[4][6 * steps + cycle] = x1990.elems[2];
        args[4][7 * steps + cycle] = x1990.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1991(args[2][105 * steps + ((cycle - 0) & mask)]);
    assert(x1991 != Fp::invalid());
    if (x1991 != 0) {
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x1992(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x1992.elems[0];
        args[4][5 * steps + cycle] = x1992.elems[1];
        args[4][6 * steps + cycle] = x1992.elems[2];
        args[4][7 * steps + cycle] = x1992.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1993(args[2][106 * steps + ((cycle - 0) & mask)]);
    assert(x1993 != Fp::invalid());
    if (x1993 != 0) {
      // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1994(args[3][8], args[3][9], args[3][10], args[3][11]);
      // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1995(args[3][12], args[3][13], args[3][14], args[3][15]);
      // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1996(args[3][16], args[3][17], args[3][18], args[3][19]);
      // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1997(args[3][20], args[3][21], args[3][22], args[3][23]);
      // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1998(args[3][24], args[3][25], args[3][26], args[3][27]);
      // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1999(args[3][28], args[3][29], args[3][30], args[3][31]);
      // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x2000(args[3][32], args[3][33], args[3][34], args[3][35]);
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2001(args[2][122 * steps + ((cycle - 0) & mask)]);
      assert(x2001 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2002(args[2][123 * steps + ((cycle - 0) & mask)]);
      assert(x2002 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2003(args[2][124 * steps + ((cycle - 0) & mask)]);
      assert(x2003 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2004(args[2][125 * steps + ((cycle - 0) & mask)]);
      assert(x2004 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2005(args[2][126 * steps + ((cycle - 0) & mask)]);
      assert(x2005 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2006(args[2][127 * steps + ((cycle - 0) & mask)]);
      assert(x2006 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2007(args[2][128 * steps + ((cycle - 0) & mask)]);
      assert(x2007 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2008 = x1994 * x2001;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2009 = Fp4(x2008) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2010 = x1995 * x2002;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2011 = Fp4(x2009) + Fp4(x2010);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2012 = x1996 * x2003;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2013 = Fp4(x2011) + Fp4(x2012);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2014 = x1997 * x2004;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2015 = Fp4(x2013) + Fp4(x2014);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2016 = x1998 * x2005;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2017 = Fp4(x2015) + Fp4(x2016);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2018 = x1999 * x2006;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2019 = Fp4(x2017) + Fp4(x2018);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2020 = x2000 * x2007;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2021 = Fp4(x2019) + Fp4(x2020);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x2022 = x2021 * x0;
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2023(args[2][129 * steps + ((cycle - 0) & mask)]);
      assert(x2023 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2024(args[2][130 * steps + ((cycle - 0) & mask)]);
      assert(x2024 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2025(args[2][131 * steps + ((cycle - 0) & mask)]);
      assert(x2025 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2026(args[2][132 * steps + ((cycle - 0) & mask)]);
      assert(x2026 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2027(args[2][133 * steps + ((cycle - 0) & mask)]);
      assert(x2027 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2028(args[2][134 * steps + ((cycle - 0) & mask)]);
      assert(x2028 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2029(args[2][135 * steps + ((cycle - 0) & mask)]);
      assert(x2029 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2030 = x1994 * x2023;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2031 = Fp4(x2030) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2032 = x1995 * x2024;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2033 = Fp4(x2031) + Fp4(x2032);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2034 = x1996 * x2025;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2035 = Fp4(x2033) + Fp4(x2034);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2036 = x1997 * x2026;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2037 = Fp4(x2035) + Fp4(x2036);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2038 = x1998 * x2027;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2039 = Fp4(x2037) + Fp4(x2038);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2040 = x1999 * x2028;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2041 = Fp4(x2039) + Fp4(x2040);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2042 = x2000 * x2029;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2043 = Fp4(x2041) + Fp4(x2042);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x2044 = x2022 * x2043;
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2045(args[2][150 * steps + ((cycle - 0) & mask)]);
      assert(x2045 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2046(args[2][151 * steps + ((cycle - 0) & mask)]);
      assert(x2046 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2047(args[2][152 * steps + ((cycle - 0) & mask)]);
      assert(x2047 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2048(args[2][153 * steps + ((cycle - 0) & mask)]);
      assert(x2048 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2049(args[2][154 * steps + ((cycle - 0) & mask)]);
      assert(x2049 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2050(args[2][155 * steps + ((cycle - 0) & mask)]);
      assert(x2050 != Fp::invalid());
      // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2051(args[2][156 * steps + ((cycle - 0) & mask)]);
      assert(x2051 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2052 = x1994 * x2045;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2053 = Fp4(x2052) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2054 = x1995 * x2046;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2055 = Fp4(x2053) + Fp4(x2054);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2056 = x1996 * x2047;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2057 = Fp4(x2055) + Fp4(x2056);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2058 = x1997 * x2048;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2059 = Fp4(x2057) + Fp4(x2058);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2060 = x1998 * x2049;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2061 = Fp4(x2059) + Fp4(x2060);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2062 = x1999 * x2050;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2063 = Fp4(x2061) + Fp4(x2062);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2064 = x2000 * x2051;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2065 = Fp4(x2063) + Fp4(x2064);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x2066 = x2065 * x0;
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2067(args[2][2 * steps + ((cycle - 0) & mask)]);
      assert(x2067 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2068(args[2][3 * steps + ((cycle - 0) & mask)]);
      assert(x2068 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2069(args[2][4 * steps + ((cycle - 0) & mask)]);
      assert(x2069 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2070(args[2][5 * steps + ((cycle - 0) & mask)]);
      assert(x2070 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2071(args[2][6 * steps + ((cycle - 0) & mask)]);
      assert(x2071 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2072(args[2][7 * steps + ((cycle - 0) & mask)]);
      assert(x2072 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2073(args[2][8 * steps + ((cycle - 0) & mask)]);
      assert(x2073 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2074 = x1994 * x2067;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2075 = Fp4(x2074) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2076 = x1995 * x2068;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2077 = Fp4(x2075) + Fp4(x2076);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2078 = x1996 * x2069;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2079 = Fp4(x2077) + Fp4(x2078);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2080 = x1997 * x2070;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2081 = Fp4(x2079) + Fp4(x2080);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2082 = x1998 * x2071;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2083 = Fp4(x2081) + Fp4(x2082);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2084 = x1999 * x2072;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2085 = Fp4(x2083) + Fp4(x2084);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2086 = x2000 * x2073;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2087 = Fp4(x2085) + Fp4(x2086);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x2088 = x2066 * x2087;
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x2089(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x2089.elems[0];
        args[4][5 * steps + cycle] = x2089.elems[1];
        args[4][6 * steps + cycle] = x2089.elems[2];
        args[4][7 * steps + cycle] = x2089.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x2090 = inv(x2044);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x2091 = x2089 * x2090;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x2092 = x2091 * x2088;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][28 * steps + cycle] = x2092.elems[0];
        args[4][29 * steps + cycle] = x2092.elems[1];
        args[4][30 * steps + cycle] = x2092.elems[2];
        args[4][31 * steps + cycle] = x2092.elems[3];
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x2093(args[2][107 * steps + ((cycle - 0) & mask)]);
    assert(x2093 != Fp::invalid());
    if (x2093 != 0) {
      // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x2094(args[3][8], args[3][9], args[3][10], args[3][11]);
      // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x2095(args[3][12], args[3][13], args[3][14], args[3][15]);
      // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x2096(args[3][16], args[3][17], args[3][18], args[3][19]);
      // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x2097(args[3][20], args[3][21], args[3][22], args[3][23]);
      // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x2098(args[3][24], args[3][25], args[3][26], args[3][27]);
      // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x2099(args[3][28], args[3][29], args[3][30], args[3][31]);
      // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x2100(args[3][32], args[3][33], args[3][34], args[3][35]);
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2101(args[2][134 * steps + ((cycle - 0) & mask)]);
      assert(x2101 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2102(args[2][135 * steps + ((cycle - 0) & mask)]);
      assert(x2102 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2103(args[2][136 * steps + ((cycle - 0) & mask)]);
      assert(x2103 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2104(args[2][137 * steps + ((cycle - 0) & mask)]);
      assert(x2104 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2105(args[2][138 * steps + ((cycle - 0) & mask)]);
      assert(x2105 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2106(args[2][139 * steps + ((cycle - 0) & mask)]);
      assert(x2106 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2107(args[2][140 * steps + ((cycle - 0) & mask)]);
      assert(x2107 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2108 = x2094 * x2101;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2109 = Fp4(x2108) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2110 = x2095 * x2102;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2111 = Fp4(x2109) + Fp4(x2110);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2112 = x2096 * x2103;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2113 = Fp4(x2111) + Fp4(x2112);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2114 = x2097 * x2104;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2115 = Fp4(x2113) + Fp4(x2114);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2116 = x2098 * x2105;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2117 = Fp4(x2115) + Fp4(x2116);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2118 = x2099 * x2106;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2119 = Fp4(x2117) + Fp4(x2118);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2120 = x2100 * x2107;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2121 = Fp4(x2119) + Fp4(x2120);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x2122 = x2121 * x0;
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2123(args[2][141 * steps + ((cycle - 0) & mask)]);
      assert(x2123 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2124(args[2][142 * steps + ((cycle - 0) & mask)]);
      assert(x2124 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2125(args[2][143 * steps + ((cycle - 0) & mask)]);
      assert(x2125 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2126(args[2][144 * steps + ((cycle - 0) & mask)]);
      assert(x2126 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2127(args[2][145 * steps + ((cycle - 0) & mask)]);
      assert(x2127 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2128(args[2][146 * steps + ((cycle - 0) & mask)]);
      assert(x2128 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2129(args[2][147 * steps + ((cycle - 0) & mask)]);
      assert(x2129 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2130 = x2094 * x2123;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2131 = Fp4(x2130) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2132 = x2095 * x2124;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2133 = Fp4(x2131) + Fp4(x2132);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2134 = x2096 * x2125;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2135 = Fp4(x2133) + Fp4(x2134);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2136 = x2097 * x2126;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2137 = Fp4(x2135) + Fp4(x2136);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2138 = x2098 * x2127;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2139 = Fp4(x2137) + Fp4(x2138);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2140 = x2099 * x2128;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2141 = Fp4(x2139) + Fp4(x2140);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2142 = x2100 * x2129;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2143 = Fp4(x2141) + Fp4(x2142);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x2144 = x2122 * x2143;
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2145(args[2][162 * steps + ((cycle - 0) & mask)]);
      assert(x2145 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2146(args[2][163 * steps + ((cycle - 0) & mask)]);
      assert(x2146 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2147(args[2][164 * steps + ((cycle - 0) & mask)]);
      assert(x2147 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2148(args[2][165 * steps + ((cycle - 0) & mask)]);
      assert(x2148 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2149(args[2][166 * steps + ((cycle - 0) & mask)]);
      assert(x2149 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2150(args[2][167 * steps + ((cycle - 0) & mask)]);
      assert(x2150 != Fp::invalid());
      // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2151(args[2][168 * steps + ((cycle - 0) & mask)]);
      assert(x2151 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2152 = x2094 * x2145;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2153 = Fp4(x2152) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2154 = x2095 * x2146;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2155 = Fp4(x2153) + Fp4(x2154);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2156 = x2096 * x2147;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2157 = Fp4(x2155) + Fp4(x2156);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2158 = x2097 * x2148;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2159 = Fp4(x2157) + Fp4(x2158);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2160 = x2098 * x2149;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2161 = Fp4(x2159) + Fp4(x2160);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2162 = x2099 * x2150;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2163 = Fp4(x2161) + Fp4(x2162);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2164 = x2100 * x2151;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2165 = Fp4(x2163) + Fp4(x2164);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x2166 = x2165 * x0;
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2167(args[2][2 * steps + ((cycle - 0) & mask)]);
      assert(x2167 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2168(args[2][3 * steps + ((cycle - 0) & mask)]);
      assert(x2168 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2169(args[2][4 * steps + ((cycle - 0) & mask)]);
      assert(x2169 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2170(args[2][5 * steps + ((cycle - 0) & mask)]);
      assert(x2170 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2171(args[2][6 * steps + ((cycle - 0) & mask)]);
      assert(x2171 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2172(args[2][7 * steps + ((cycle - 0) & mask)]);
      assert(x2172 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x2173(args[2][8 * steps + ((cycle - 0) & mask)]);
      assert(x2173 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2174 = x2094 * x2167;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2175 = Fp4(x2174) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2176 = x2095 * x2168;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2177 = Fp4(x2175) + Fp4(x2176);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2178 = x2096 * x2169;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2179 = Fp4(x2177) + Fp4(x2178);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2180 = x2097 * x2170;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2181 = Fp4(x2179) + Fp4(x2180);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2182 = x2098 * x2171;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2183 = Fp4(x2181) + Fp4(x2182);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2184 = x2099 * x2172;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2185 = Fp4(x2183) + Fp4(x2184);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x2186 = x2100 * x2173;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x2187 = Fp4(x2185) + Fp4(x2186);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x2188 = x2166 * x2187;
      {
        host(ctx, "plonkReadAccum", "ram", host_args.data(), 0, host_outs.data(), 4);
        Fp4 x2189(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][4 * steps + cycle] = x2189.elems[0];
        args[4][5 * steps + cycle] = x2189.elems[1];
        args[4][6 * steps + cycle] = x2189.elems[2];
        args[4][7 * steps + cycle] = x2189.elems[3];
        // loc("./cirgen/components/plonk.h":276:27)
        auto x2190 = inv(x2144);
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x2191 = x2189 * x2190;
        // loc("./cirgen/components/plonk.h":276:16)
        Fp4 x2192 = x2191 * x2188;
        // loc("./cirgen/components/plonk.h":275:9)
        args[4][28 * steps + cycle] = x2192.elems[0];
        args[4][29 * steps + cycle] = x2192.elems[1];
        args[4][30 * steps + cycle] = x2192.elems[2];
        args[4][31 * steps + cycle] = x2192.elems[3];
      }
    }
  }
  if (x6 != 0) {
    {
      host(ctx, "plonkReadAccum", "bytes", host_args.data(), 0, host_outs.data(), 4);
      Fp4 x2193(host_outs.at(0), host_outs.at(1), host_outs.at(2), host_outs.at(3));
      // loc("./cirgen/components/plonk.h":275:9)
      args[4][0 * steps + cycle] = x2193.elems[0];
      args[4][1 * steps + cycle] = x2193.elems[1];
      args[4][2 * steps + cycle] = x2193.elems[2];
      args[4][3 * steps + cycle] = x2193.elems[3];
    }
  }
  return x1;
}

} // namespace risc0::circuit::rv32im
// clang-format on
