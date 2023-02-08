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

Fp step_compute_accum(void* ctx, HostBridge host, size_t steps, size_t cycle, Fp** args) {
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
  if (x2 != 0) {
    {
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x7(args[2][10 * steps + ((cycle - 0) & mask)]);
      assert(x7 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x8(args[2][11 * steps + ((cycle - 0) & mask)]);
      assert(x8 != Fp::invalid());
      // loc("Top/PlonkHeader/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x9(args[3][0], args[3][1], args[3][2], args[3][3]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x10 = x9 * x7;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x11 = Fp4(x10) + Fp4(x0);
      // loc("Top/PlonkHeader/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x12(args[3][4], args[3][5], args[3][6], args[3][7]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x13 = x12 * x8;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x14 = Fp4(x11) + Fp4(x13);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x15 = x14 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x16(args[2][12 * steps + ((cycle - 0) & mask)]);
      assert(x16 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x17(args[2][13 * steps + ((cycle - 0) & mask)]);
      assert(x17 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x18 = x9 * x16;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x19 = Fp4(x18) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x20 = x12 * x17;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x21 = Fp4(x19) + Fp4(x20);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x22 = x15 * x21;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x23(args[2][14 * steps + ((cycle - 0) & mask)]);
      assert(x23 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x24(args[2][15 * steps + ((cycle - 0) & mask)]);
      assert(x24 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x25 = x9 * x23;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x26 = Fp4(x25) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x27 = x12 * x24;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x28 = Fp4(x26) + Fp4(x27);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x29 = x22 * x28;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x30(args[2][16 * steps + ((cycle - 0) & mask)]);
      assert(x30 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x31(args[2][17 * steps + ((cycle - 0) & mask)]);
      assert(x31 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x32 = x9 * x30;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x33 = Fp4(x32) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x34 = x12 * x31;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x35 = Fp4(x33) + Fp4(x34);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x36 = x35 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x37(args[2][18 * steps + ((cycle - 0) & mask)]);
      assert(x37 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x38(args[2][19 * steps + ((cycle - 0) & mask)]);
      assert(x38 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x39 = x9 * x37;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x40 = Fp4(x39) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x41 = x12 * x38;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x42 = Fp4(x40) + Fp4(x41);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x43 = x36 * x42;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x44(args[2][20 * steps + ((cycle - 0) & mask)]);
      assert(x44 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x45(args[2][21 * steps + ((cycle - 0) & mask)]);
      assert(x45 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x46 = x9 * x44;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x47 = Fp4(x46) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x48 = x12 * x45;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x49 = Fp4(x47) + Fp4(x48);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x50 = x43 * x49;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x51(args[2][22 * steps + ((cycle - 0) & mask)]);
      assert(x51 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x52(args[2][23 * steps + ((cycle - 0) & mask)]);
      assert(x52 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x53 = x9 * x51;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x54 = Fp4(x53) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x55 = x12 * x52;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x56 = Fp4(x54) + Fp4(x55);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x57 = x56 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x58(args[2][24 * steps + ((cycle - 0) & mask)]);
      assert(x58 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x59(args[2][25 * steps + ((cycle - 0) & mask)]);
      assert(x59 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x60 = x9 * x58;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x61 = Fp4(x60) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x62 = x12 * x59;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x63 = Fp4(x61) + Fp4(x62);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x64 = x57 * x63;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x65(args[2][26 * steps + ((cycle - 0) & mask)]);
      assert(x65 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x66(args[2][27 * steps + ((cycle - 0) & mask)]);
      assert(x66 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x67 = x9 * x65;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x68 = Fp4(x67) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x69 = x12 * x66;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x70 = Fp4(x68) + Fp4(x69);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x71 = x64 * x70;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement9/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x72(args[2][28 * steps + ((cycle - 0) & mask)]);
      assert(x72 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement9/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x73(args[2][29 * steps + ((cycle - 0) & mask)]);
      assert(x73 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x74 = x9 * x72;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x75 = Fp4(x74) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x76 = x12 * x73;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x77 = Fp4(x75) + Fp4(x76);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x78 = x77 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement10/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x79(args[2][30 * steps + ((cycle - 0) & mask)]);
      assert(x79 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement10/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x80(args[2][31 * steps + ((cycle - 0) & mask)]);
      assert(x80 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x81 = x9 * x79;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x82 = Fp4(x81) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x83 = x12 * x80;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x84 = Fp4(x82) + Fp4(x83);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x85 = x78 * x84;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement11/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x86(args[2][32 * steps + ((cycle - 0) & mask)]);
      assert(x86 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement11/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x87(args[2][33 * steps + ((cycle - 0) & mask)]);
      assert(x87 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x88 = x9 * x86;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x89 = Fp4(x88) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x90 = x12 * x87;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x91 = Fp4(x89) + Fp4(x90);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x92 = x85 * x91;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement12/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x93(args[2][34 * steps + ((cycle - 0) & mask)]);
      assert(x93 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement12/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x94(args[2][35 * steps + ((cycle - 0) & mask)]);
      assert(x94 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x95 = x9 * x93;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x96 = Fp4(x95) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x97 = x12 * x94;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x98 = Fp4(x96) + Fp4(x97);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x99 = x98 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement13/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x100(args[2][36 * steps + ((cycle - 0) & mask)]);
      assert(x100 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement13/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x101(args[2][37 * steps + ((cycle - 0) & mask)]);
      assert(x101 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x102 = x9 * x100;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x103 = Fp4(x102) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x104 = x12 * x101;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x105 = Fp4(x103) + Fp4(x104);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x106 = x99 * x105;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement14/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x107(args[2][38 * steps + ((cycle - 0) & mask)]);
      assert(x107 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement14/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x108(args[2][39 * steps + ((cycle - 0) & mask)]);
      assert(x108 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x109 = x9 * x107;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x110 = Fp4(x109) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x111 = x12 * x108;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x112 = Fp4(x110) + Fp4(x111);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x113 = x106 * x112;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement15/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x114(args[2][40 * steps + ((cycle - 0) & mask)]);
      assert(x114 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement15/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x115(args[2][41 * steps + ((cycle - 0) & mask)]);
      assert(x115 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x116 = x9 * x114;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x117 = Fp4(x116) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x118 = x12 * x115;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x119 = Fp4(x117) + Fp4(x118);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x120 = x119 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement16/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x121(args[2][42 * steps + ((cycle - 0) & mask)]);
      assert(x121 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement16/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x122(args[2][43 * steps + ((cycle - 0) & mask)]);
      assert(x122 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x123 = x9 * x121;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x124 = Fp4(x123) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x125 = x12 * x122;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x126 = Fp4(x124) + Fp4(x125);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x127 = x120 * x126;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement17/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x128(args[2][44 * steps + ((cycle - 0) & mask)]);
      assert(x128 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement17/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x129(args[2][45 * steps + ((cycle - 0) & mask)]);
      assert(x129 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x130 = x9 * x128;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x131 = Fp4(x130) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x132 = x12 * x129;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x133 = Fp4(x131) + Fp4(x132);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x134 = x127 * x133;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement18/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x135(args[2][46 * steps + ((cycle - 0) & mask)]);
      assert(x135 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement18/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x136(args[2][47 * steps + ((cycle - 0) & mask)]);
      assert(x136 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x137 = x9 * x135;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x138 = Fp4(x137) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x139 = x12 * x136;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x140 = Fp4(x138) + Fp4(x139);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x141 = x140 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement19/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x142(args[2][48 * steps + ((cycle - 0) & mask)]);
      assert(x142 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement19/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x143(args[2][49 * steps + ((cycle - 0) & mask)]);
      assert(x143 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x144 = x9 * x142;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x145 = Fp4(x144) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x146 = x12 * x143;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x147 = Fp4(x145) + Fp4(x146);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x148 = x141 * x147;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement20/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x149(args[2][50 * steps + ((cycle - 0) & mask)]);
      assert(x149 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement20/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x150(args[2][51 * steps + ((cycle - 0) & mask)]);
      assert(x150 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x151 = x9 * x149;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x152 = Fp4(x151) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x153 = x12 * x150;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x154 = Fp4(x152) + Fp4(x153);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x155 = x148 * x154;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement21/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x156(args[2][52 * steps + ((cycle - 0) & mask)]);
      assert(x156 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement21/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x157(args[2][53 * steps + ((cycle - 0) & mask)]);
      assert(x157 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x158 = x9 * x156;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x159 = Fp4(x158) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x160 = x12 * x157;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x161 = Fp4(x159) + Fp4(x160);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x162 = x161 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement22/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x163(args[2][54 * steps + ((cycle - 0) & mask)]);
      assert(x163 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement22/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x164(args[2][55 * steps + ((cycle - 0) & mask)]);
      assert(x164 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x165 = x9 * x163;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x166 = Fp4(x165) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x167 = x12 * x164;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x168 = Fp4(x166) + Fp4(x167);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x169 = x162 * x168;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement23/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x170(args[2][56 * steps + ((cycle - 0) & mask)]);
      assert(x170 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement23/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x171(args[2][57 * steps + ((cycle - 0) & mask)]);
      assert(x171 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x172 = x9 * x170;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x173 = Fp4(x172) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x174 = x12 * x171;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x175 = Fp4(x173) + Fp4(x174);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x176 = x169 * x175;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement24/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x177(args[2][58 * steps + ((cycle - 0) & mask)]);
      assert(x177 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement24/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x178(args[2][59 * steps + ((cycle - 0) & mask)]);
      assert(x178 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x179 = x9 * x177;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x180 = Fp4(x179) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x181 = x12 * x178;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x182 = Fp4(x180) + Fp4(x181);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x183 = x182 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement25/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x184(args[2][60 * steps + ((cycle - 0) & mask)]);
      assert(x184 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement25/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x185(args[2][61 * steps + ((cycle - 0) & mask)]);
      assert(x185 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x186 = x9 * x184;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x187 = Fp4(x186) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x188 = x12 * x185;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x189 = Fp4(x187) + Fp4(x188);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x190 = x183 * x189;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement26/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x191(args[2][62 * steps + ((cycle - 0) & mask)]);
      assert(x191 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement26/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x192(args[2][63 * steps + ((cycle - 0) & mask)]);
      assert(x192 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x193 = x9 * x191;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x194 = Fp4(x193) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x195 = x12 * x192;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x196 = Fp4(x194) + Fp4(x195);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x197 = x190 * x196;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement27/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x198(args[2][64 * steps + ((cycle - 0) & mask)]);
      assert(x198 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement27/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x199(args[2][65 * steps + ((cycle - 0) & mask)]);
      assert(x199 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x200 = x9 * x198;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x201 = Fp4(x200) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x202 = x12 * x199;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x203 = Fp4(x201) + Fp4(x202);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x204 = x203 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement28/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x205(args[2][66 * steps + ((cycle - 0) & mask)]);
      assert(x205 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement28/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x206(args[2][67 * steps + ((cycle - 0) & mask)]);
      assert(x206 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x207 = x9 * x205;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x208 = Fp4(x207) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x209 = x12 * x206;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x210 = Fp4(x208) + Fp4(x209);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x211 = x204 * x210;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement29/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x212(args[2][68 * steps + ((cycle - 0) & mask)]);
      assert(x212 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement29/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x213(args[2][69 * steps + ((cycle - 0) & mask)]);
      assert(x213 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x214 = x9 * x212;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x215 = Fp4(x214) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x216 = x12 * x213;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x217 = Fp4(x215) + Fp4(x216);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x218 = x211 * x217;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement30/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x219(args[2][70 * steps + ((cycle - 0) & mask)]);
      assert(x219 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement30/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x220(args[2][71 * steps + ((cycle - 0) & mask)]);
      assert(x220 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x221 = x9 * x219;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x222 = Fp4(x221) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x223 = x12 * x220;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x224 = Fp4(x222) + Fp4(x223);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x225 = x224 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement31/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x226(args[2][72 * steps + ((cycle - 0) & mask)]);
      assert(x226 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement31/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x227(args[2][73 * steps + ((cycle - 0) & mask)]);
      assert(x227 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x228 = x9 * x226;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x229 = Fp4(x228) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x230 = x12 * x227;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x231 = Fp4(x229) + Fp4(x230);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x232 = x225 * x231;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement32/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x233(args[2][74 * steps + ((cycle - 0) & mask)]);
      assert(x233 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement32/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x234(args[2][75 * steps + ((cycle - 0) & mask)]);
      assert(x234 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x235 = x9 * x233;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x236 = Fp4(x235) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x237 = x12 * x234;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x238 = Fp4(x236) + Fp4(x237);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x239 = x232 * x238;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement33/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x240(args[2][76 * steps + ((cycle - 0) & mask)]);
      assert(x240 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement33/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x241(args[2][77 * steps + ((cycle - 0) & mask)]);
      assert(x241 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x242 = x9 * x240;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x243 = Fp4(x242) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x244 = x12 * x241;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x245 = Fp4(x243) + Fp4(x244);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x246 = x245 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement34/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x247(args[2][78 * steps + ((cycle - 0) & mask)]);
      assert(x247 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement34/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x248(args[2][79 * steps + ((cycle - 0) & mask)]);
      assert(x248 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x249 = x9 * x247;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x250 = Fp4(x249) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x251 = x12 * x248;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x252 = Fp4(x250) + Fp4(x251);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x253 = x246 * x252;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement35/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x254(args[2][80 * steps + ((cycle - 0) & mask)]);
      assert(x254 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement35/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x255(args[2][81 * steps + ((cycle - 0) & mask)]);
      assert(x255 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x256 = x9 * x254;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x257 = Fp4(x256) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x258 = x12 * x255;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x259 = Fp4(x257) + Fp4(x258);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x260 = x253 * x259;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement36/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x261(args[2][82 * steps + ((cycle - 0) & mask)]);
      assert(x261 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement36/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x262(args[2][83 * steps + ((cycle - 0) & mask)]);
      assert(x262 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x263 = x9 * x261;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x264 = Fp4(x263) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x265 = x12 * x262;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x266 = Fp4(x264) + Fp4(x265);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x267 = x266 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement37/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x268(args[2][84 * steps + ((cycle - 0) & mask)]);
      assert(x268 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement37/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x269(args[2][85 * steps + ((cycle - 0) & mask)]);
      assert(x269 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x270 = x9 * x268;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x271 = Fp4(x270) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x272 = x12 * x269;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x273 = Fp4(x271) + Fp4(x272);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x274 = x267 * x273;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement38/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x275(args[2][86 * steps + ((cycle - 0) & mask)]);
      assert(x275 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement38/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x276(args[2][87 * steps + ((cycle - 0) & mask)]);
      assert(x276 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x277 = x9 * x275;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x278 = Fp4(x277) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x279 = x12 * x276;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x280 = Fp4(x278) + Fp4(x279);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x281 = x274 * x280;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement39/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x282(args[2][88 * steps + ((cycle - 0) & mask)]);
      assert(x282 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement39/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x283(args[2][89 * steps + ((cycle - 0) & mask)]);
      assert(x283 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x284 = x9 * x282;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x285 = Fp4(x284) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x286 = x12 * x283;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x287 = Fp4(x285) + Fp4(x286);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x288 = x287 * x0;
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement40/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x289(args[2][90 * steps + ((cycle - 0) & mask)]);
      assert(x289 != Fp::invalid());
      // loc("Top/Mux/1/BytesSetup/PlonkBody/BytesPlonkElement40/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x290(args[2][91 * steps + ((cycle - 0) & mask)]);
      assert(x290 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x291 = x9 * x289;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x292 = Fp4(x291) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x293 = x12 * x290;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x294 = Fp4(x292) + Fp4(x293);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x295 = x288 * x294;
      // loc("Top/PlonkHeader/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x296(args[2][0 * steps + ((cycle - 0) & mask)]);
      assert(x296 != Fp::invalid());
      // loc("Top/PlonkHeader/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x297(args[2][1 * steps + ((cycle - 0) & mask)]);
      assert(x297 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x298 = x9 * x296;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x299 = Fp4(x298) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x300 = x12 * x297;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x301 = Fp4(x299) + Fp4(x300);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x302 = x295 * x301;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x303 = x29 * x0;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x304 = inv(x176);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x305 = x303 * x304;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x306 = x305 * x50;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x307 = inv(x197);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x308 = x306 * x307;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x309 = x308 * x71;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x310 = inv(x218);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x311 = x309 * x310;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x312 = x311 * x92;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x313 = inv(x239);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x314 = x312 * x313;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x315 = x314 * x113;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x316 = inv(x260);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x317 = x315 * x316;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x318 = x317 * x134;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x319 = inv(x281);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x320 = x318 * x319;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x321 = x320 * x155;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x322 = inv(x302);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x323 = x321 * x322;
      host_args.at(0) = x323.elems[0];
      host_args.at(1) = x323.elems[1];
      host_args.at(2) = x323.elems[2];
      host_args.at(3) = x323.elems[3];
      host(ctx, "plonkWriteAccum", "bytes", host_args.data(), 4, host_outs.data(), 0);
    }
    {
      host_args.at(0) = x0.elems[0];
      host_args.at(1) = x0.elems[1];
      host_args.at(2) = x0.elems[2];
      host_args.at(3) = x0.elems[3];
      host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
    }
  }
  if (x3 != 0) {
    {
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x324(args[2][10 * steps + ((cycle - 0) & mask)]);
      assert(x324 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x325(args[2][11 * steps + ((cycle - 0) & mask)]);
      assert(x325 != Fp::invalid());
      // loc("Top/PlonkHeader/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x326(args[3][0], args[3][1], args[3][2], args[3][3]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x327 = x326 * x324;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x328 = Fp4(x327) + Fp4(x0);
      // loc("Top/PlonkHeader/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x329(args[3][4], args[3][5], args[3][6], args[3][7]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x330 = x329 * x325;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x331 = Fp4(x328) + Fp4(x330);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x332 = x331 * x0;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x333(args[2][12 * steps + ((cycle - 0) & mask)]);
      assert(x333 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x334(args[2][13 * steps + ((cycle - 0) & mask)]);
      assert(x334 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x335 = x326 * x333;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x336 = Fp4(x335) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x337 = x329 * x334;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x338 = Fp4(x336) + Fp4(x337);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x339 = x332 * x338;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x340(args[2][14 * steps + ((cycle - 0) & mask)]);
      assert(x340 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x341(args[2][15 * steps + ((cycle - 0) & mask)]);
      assert(x341 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x342 = x326 * x340;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x343 = Fp4(x342) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x344 = x329 * x341;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x345 = Fp4(x343) + Fp4(x344);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x346 = x339 * x345;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x347(args[2][16 * steps + ((cycle - 0) & mask)]);
      assert(x347 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x348(args[2][17 * steps + ((cycle - 0) & mask)]);
      assert(x348 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x349 = x326 * x347;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x350 = Fp4(x349) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x351 = x329 * x348;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x352 = Fp4(x350) + Fp4(x351);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x353 = x352 * x0;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x354(args[2][18 * steps + ((cycle - 0) & mask)]);
      assert(x354 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x355(args[2][19 * steps + ((cycle - 0) & mask)]);
      assert(x355 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x356 = x326 * x354;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x357 = Fp4(x356) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x358 = x329 * x355;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x359 = Fp4(x357) + Fp4(x358);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x360 = x353 * x359;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x361(args[2][20 * steps + ((cycle - 0) & mask)]);
      assert(x361 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x362(args[2][21 * steps + ((cycle - 0) & mask)]);
      assert(x362 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x363 = x326 * x361;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x364 = Fp4(x363) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x365 = x329 * x362;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x366 = Fp4(x364) + Fp4(x365);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x367 = x360 * x366;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x368(args[2][22 * steps + ((cycle - 0) & mask)]);
      assert(x368 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x369(args[2][23 * steps + ((cycle - 0) & mask)]);
      assert(x369 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x370 = x326 * x368;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x371 = Fp4(x370) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x372 = x329 * x369;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x373 = Fp4(x371) + Fp4(x372);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x374 = x373 * x0;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x375(args[2][24 * steps + ((cycle - 0) & mask)]);
      assert(x375 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x376(args[2][25 * steps + ((cycle - 0) & mask)]);
      assert(x376 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x377 = x326 * x375;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x378 = Fp4(x377) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x379 = x329 * x376;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x380 = Fp4(x378) + Fp4(x379);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x381 = x374 * x380;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x382(args[2][26 * steps + ((cycle - 0) & mask)]);
      assert(x382 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x383(args[2][27 * steps + ((cycle - 0) & mask)]);
      assert(x383 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x384 = x326 * x382;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x385 = Fp4(x384) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x386 = x329 * x383;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x387 = Fp4(x385) + Fp4(x386);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x388 = x381 * x387;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement9/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x389(args[2][28 * steps + ((cycle - 0) & mask)]);
      assert(x389 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement9/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x390(args[2][29 * steps + ((cycle - 0) & mask)]);
      assert(x390 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x391 = x326 * x389;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x392 = Fp4(x391) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x393 = x329 * x390;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x394 = Fp4(x392) + Fp4(x393);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x395 = x394 * x0;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement10/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x396(args[2][30 * steps + ((cycle - 0) & mask)]);
      assert(x396 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement10/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x397(args[2][31 * steps + ((cycle - 0) & mask)]);
      assert(x397 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x398 = x326 * x396;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x399 = Fp4(x398) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x400 = x329 * x397;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x401 = Fp4(x399) + Fp4(x400);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x402 = x395 * x401;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement11/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x403(args[2][32 * steps + ((cycle - 0) & mask)]);
      assert(x403 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement11/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x404(args[2][33 * steps + ((cycle - 0) & mask)]);
      assert(x404 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x405 = x326 * x403;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x406 = Fp4(x405) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x407 = x329 * x404;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x408 = Fp4(x406) + Fp4(x407);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x409 = x408 * x0;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement12/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x410(args[2][34 * steps + ((cycle - 0) & mask)]);
      assert(x410 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement12/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x411(args[2][35 * steps + ((cycle - 0) & mask)]);
      assert(x411 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x412 = x326 * x410;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x413 = Fp4(x412) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x414 = x329 * x411;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x415 = Fp4(x413) + Fp4(x414);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x416 = x409 * x415;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement13/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x417(args[2][36 * steps + ((cycle - 0) & mask)]);
      assert(x417 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement13/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x418(args[2][37 * steps + ((cycle - 0) & mask)]);
      assert(x418 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x419 = x326 * x417;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x420 = Fp4(x419) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x421 = x329 * x418;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x422 = Fp4(x420) + Fp4(x421);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x423 = x416 * x422;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement14/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x424(args[2][38 * steps + ((cycle - 0) & mask)]);
      assert(x424 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement14/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x425(args[2][39 * steps + ((cycle - 0) & mask)]);
      assert(x425 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x426 = x326 * x424;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x427 = Fp4(x426) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x428 = x329 * x425;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x429 = Fp4(x427) + Fp4(x428);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x430 = x429 * x0;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement15/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x431(args[2][40 * steps + ((cycle - 0) & mask)]);
      assert(x431 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement15/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x432(args[2][41 * steps + ((cycle - 0) & mask)]);
      assert(x432 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x433 = x326 * x431;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x434 = Fp4(x433) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x435 = x329 * x432;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x436 = Fp4(x434) + Fp4(x435);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x437 = x430 * x436;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement16/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x438(args[2][42 * steps + ((cycle - 0) & mask)]);
      assert(x438 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement16/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x439(args[2][43 * steps + ((cycle - 0) & mask)]);
      assert(x439 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x440 = x326 * x438;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x441 = Fp4(x440) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x442 = x329 * x439;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x443 = Fp4(x441) + Fp4(x442);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x444 = x437 * x443;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement17/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x445(args[2][44 * steps + ((cycle - 0) & mask)]);
      assert(x445 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement17/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x446(args[2][45 * steps + ((cycle - 0) & mask)]);
      assert(x446 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x447 = x326 * x445;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x448 = Fp4(x447) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x449 = x329 * x446;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x450 = Fp4(x448) + Fp4(x449);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x451 = x450 * x0;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement18/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x452(args[2][46 * steps + ((cycle - 0) & mask)]);
      assert(x452 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement18/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x453(args[2][47 * steps + ((cycle - 0) & mask)]);
      assert(x453 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x454 = x326 * x452;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x455 = Fp4(x454) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x456 = x329 * x453;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x457 = Fp4(x455) + Fp4(x456);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x458 = x451 * x457;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement19/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x459(args[2][48 * steps + ((cycle - 0) & mask)]);
      assert(x459 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement19/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x460(args[2][49 * steps + ((cycle - 0) & mask)]);
      assert(x460 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x461 = x326 * x459;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x462 = Fp4(x461) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x463 = x329 * x460;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x464 = Fp4(x462) + Fp4(x463);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x465 = x458 * x464;
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement20/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x466(args[2][50 * steps + ((cycle - 0) & mask)]);
      assert(x466 != Fp::invalid());
      // loc("Top/Mux/2/BytesBody/PlonkBody/BytesPlonkElement20/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x467(args[2][51 * steps + ((cycle - 0) & mask)]);
      assert(x467 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x468 = x326 * x466;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x469 = Fp4(x468) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x470 = x329 * x467;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x471 = Fp4(x469) + Fp4(x470);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x472 = x471 * x0;
      // loc("Top/PlonkHeader/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x473(args[2][0 * steps + ((cycle - 0) & mask)]);
      assert(x473 != Fp::invalid());
      // loc("Top/PlonkHeader/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x474(args[2][1 * steps + ((cycle - 0) & mask)]);
      assert(x474 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x475 = x326 * x473;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x476 = Fp4(x475) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x477 = x329 * x474;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x478 = Fp4(x476) + Fp4(x477);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x479 = x472 * x478;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x480 = x346 * x0;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x481 = inv(x423);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x482 = x480 * x481;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x483 = x482 * x367;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x484 = inv(x444);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x485 = x483 * x484;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x486 = x485 * x388;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x487 = inv(x465);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x488 = x486 * x487;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x489 = x488 * x402;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x490 = inv(x479);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x491 = x489 * x490;
      host_args.at(0) = x491.elems[0];
      host_args.at(1) = x491.elems[1];
      host_args.at(2) = x491.elems[2];
      host_args.at(3) = x491.elems[3];
      host(ctx, "plonkWriteAccum", "bytes", host_args.data(), 4, host_outs.data(), 0);
    }
    {
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x492(args[2][55 * steps + ((cycle - 0) & mask)]);
      assert(x492 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x493(args[2][56 * steps + ((cycle - 0) & mask)]);
      assert(x493 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x494(args[2][57 * steps + ((cycle - 0) & mask)]);
      assert(x494 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x495(args[2][58 * steps + ((cycle - 0) & mask)]);
      assert(x495 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x496(args[2][59 * steps + ((cycle - 0) & mask)]);
      assert(x496 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x497(args[2][60 * steps + ((cycle - 0) & mask)]);
      assert(x497 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x498(args[2][61 * steps + ((cycle - 0) & mask)]);
      assert(x498 != Fp::invalid());
      // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x499(args[3][8], args[3][9], args[3][10], args[3][11]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x500 = x499 * x492;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x501 = Fp4(x500) + Fp4(x0);
      // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x502(args[3][12], args[3][13], args[3][14], args[3][15]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x503 = x502 * x493;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x504 = Fp4(x501) + Fp4(x503);
      // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x505(args[3][16], args[3][17], args[3][18], args[3][19]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x506 = x505 * x494;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x507 = Fp4(x504) + Fp4(x506);
      // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x508(args[3][20], args[3][21], args[3][22], args[3][23]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x509 = x508 * x495;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x510 = Fp4(x507) + Fp4(x509);
      // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x511(args[3][24], args[3][25], args[3][26], args[3][27]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x512 = x511 * x496;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x513 = Fp4(x510) + Fp4(x512);
      // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x514(args[3][28], args[3][29], args[3][30], args[3][31]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x515 = x514 * x497;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x516 = Fp4(x513) + Fp4(x515);
      // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x517(args[3][32], args[3][33], args[3][34], args[3][35]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x518 = x517 * x498;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x519 = Fp4(x516) + Fp4(x518);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x520 = x519 * x0;
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x521(args[2][62 * steps + ((cycle - 0) & mask)]);
      assert(x521 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x522(args[2][63 * steps + ((cycle - 0) & mask)]);
      assert(x522 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x523(args[2][64 * steps + ((cycle - 0) & mask)]);
      assert(x523 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x524(args[2][65 * steps + ((cycle - 0) & mask)]);
      assert(x524 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x525(args[2][66 * steps + ((cycle - 0) & mask)]);
      assert(x525 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x526(args[2][67 * steps + ((cycle - 0) & mask)]);
      assert(x526 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x527(args[2][68 * steps + ((cycle - 0) & mask)]);
      assert(x527 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x528 = x499 * x521;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x529 = Fp4(x528) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x530 = x502 * x522;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x531 = Fp4(x529) + Fp4(x530);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x532 = x505 * x523;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x533 = Fp4(x531) + Fp4(x532);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x534 = x508 * x524;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x535 = Fp4(x533) + Fp4(x534);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x536 = x511 * x525;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x537 = Fp4(x535) + Fp4(x536);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x538 = x514 * x526;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x539 = Fp4(x537) + Fp4(x538);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x540 = x517 * x527;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x541 = Fp4(x539) + Fp4(x540);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x542 = x520 * x541;
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x543(args[2][69 * steps + ((cycle - 0) & mask)]);
      assert(x543 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x544(args[2][70 * steps + ((cycle - 0) & mask)]);
      assert(x544 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x545(args[2][71 * steps + ((cycle - 0) & mask)]);
      assert(x545 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x546(args[2][72 * steps + ((cycle - 0) & mask)]);
      assert(x546 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x547(args[2][73 * steps + ((cycle - 0) & mask)]);
      assert(x547 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x548(args[2][74 * steps + ((cycle - 0) & mask)]);
      assert(x548 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x549(args[2][75 * steps + ((cycle - 0) & mask)]);
      assert(x549 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x550 = x499 * x543;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x551 = Fp4(x550) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x552 = x502 * x544;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x553 = Fp4(x551) + Fp4(x552);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x554 = x505 * x545;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x555 = Fp4(x553) + Fp4(x554);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x556 = x508 * x546;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x557 = Fp4(x555) + Fp4(x556);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x558 = x511 * x547;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x559 = Fp4(x557) + Fp4(x558);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x560 = x514 * x548;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x561 = Fp4(x559) + Fp4(x560);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x562 = x517 * x549;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x563 = Fp4(x561) + Fp4(x562);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x564 = x563 * x0;
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x565(args[2][76 * steps + ((cycle - 0) & mask)]);
      assert(x565 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x566(args[2][77 * steps + ((cycle - 0) & mask)]);
      assert(x566 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x567(args[2][78 * steps + ((cycle - 0) & mask)]);
      assert(x567 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x568(args[2][79 * steps + ((cycle - 0) & mask)]);
      assert(x568 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x569(args[2][80 * steps + ((cycle - 0) & mask)]);
      assert(x569 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x570(args[2][81 * steps + ((cycle - 0) & mask)]);
      assert(x570 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x571(args[2][82 * steps + ((cycle - 0) & mask)]);
      assert(x571 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x572 = x499 * x565;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x573 = Fp4(x572) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x574 = x502 * x566;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x575 = Fp4(x573) + Fp4(x574);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x576 = x505 * x567;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x577 = Fp4(x575) + Fp4(x576);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x578 = x508 * x568;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x579 = Fp4(x577) + Fp4(x578);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x580 = x511 * x569;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x581 = Fp4(x579) + Fp4(x580);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x582 = x514 * x570;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x583 = Fp4(x581) + Fp4(x582);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x584 = x517 * x571;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x585 = Fp4(x583) + Fp4(x584);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x586 = x585 * x0;
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x587(args[2][83 * steps + ((cycle - 0) & mask)]);
      assert(x587 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x588(args[2][84 * steps + ((cycle - 0) & mask)]);
      assert(x588 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x589(args[2][85 * steps + ((cycle - 0) & mask)]);
      assert(x589 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x590(args[2][86 * steps + ((cycle - 0) & mask)]);
      assert(x590 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x591(args[2][87 * steps + ((cycle - 0) & mask)]);
      assert(x591 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x592(args[2][88 * steps + ((cycle - 0) & mask)]);
      assert(x592 != Fp::invalid());
      // loc("Top/Mux/2/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x593(args[2][89 * steps + ((cycle - 0) & mask)]);
      assert(x593 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x594 = x499 * x587;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x595 = Fp4(x594) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x596 = x502 * x588;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x597 = Fp4(x595) + Fp4(x596);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x598 = x505 * x589;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x599 = Fp4(x597) + Fp4(x598);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x600 = x508 * x590;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x601 = Fp4(x599) + Fp4(x600);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x602 = x511 * x591;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x603 = Fp4(x601) + Fp4(x602);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x604 = x514 * x592;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x605 = Fp4(x603) + Fp4(x604);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x606 = x517 * x593;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x607 = Fp4(x605) + Fp4(x606);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x608 = x586 * x607;
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x609(args[2][2 * steps + ((cycle - 0) & mask)]);
      assert(x609 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x610(args[2][3 * steps + ((cycle - 0) & mask)]);
      assert(x610 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x611(args[2][4 * steps + ((cycle - 0) & mask)]);
      assert(x611 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x612(args[2][5 * steps + ((cycle - 0) & mask)]);
      assert(x612 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x613(args[2][6 * steps + ((cycle - 0) & mask)]);
      assert(x613 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x614(args[2][7 * steps + ((cycle - 0) & mask)]);
      assert(x614 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x615(args[2][8 * steps + ((cycle - 0) & mask)]);
      assert(x615 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x616 = x499 * x609;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x617 = Fp4(x616) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x618 = x502 * x610;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x619 = Fp4(x617) + Fp4(x618);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x620 = x505 * x611;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x621 = Fp4(x619) + Fp4(x620);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x622 = x508 * x612;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x623 = Fp4(x621) + Fp4(x622);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x624 = x511 * x613;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x625 = Fp4(x623) + Fp4(x624);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x626 = x514 * x614;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x627 = Fp4(x625) + Fp4(x626);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x628 = x517 * x615;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x629 = Fp4(x627) + Fp4(x628);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x630 = x629 * x0;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x631 = x542 * x0;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x632 = inv(x608);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x633 = x631 * x632;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x634 = x633 * x564;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x635 = inv(x630);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x636 = x634 * x635;
      host_args.at(0) = x636.elems[0];
      host_args.at(1) = x636.elems[1];
      host_args.at(2) = x636.elems[2];
      host_args.at(3) = x636.elems[3];
      host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
    }
  }
  if (x4 != 0) {
    {
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x637(args[2][10 * steps + ((cycle - 0) & mask)]);
      assert(x637 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x638(args[2][11 * steps + ((cycle - 0) & mask)]);
      assert(x638 != Fp::invalid());
      // loc("Top/PlonkHeader/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x639(args[3][0], args[3][1], args[3][2], args[3][3]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x640 = x639 * x637;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x641 = Fp4(x640) + Fp4(x0);
      // loc("Top/PlonkHeader/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x642(args[3][4], args[3][5], args[3][6], args[3][7]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x643 = x642 * x638;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x644 = Fp4(x641) + Fp4(x643);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x645 = x644 * x0;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x646(args[2][12 * steps + ((cycle - 0) & mask)]);
      assert(x646 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x647(args[2][13 * steps + ((cycle - 0) & mask)]);
      assert(x647 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x648 = x639 * x646;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x649 = Fp4(x648) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x650 = x642 * x647;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x651 = Fp4(x649) + Fp4(x650);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x652 = x645 * x651;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x653(args[2][14 * steps + ((cycle - 0) & mask)]);
      assert(x653 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x654(args[2][15 * steps + ((cycle - 0) & mask)]);
      assert(x654 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x655 = x639 * x653;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x656 = Fp4(x655) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x657 = x642 * x654;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x658 = Fp4(x656) + Fp4(x657);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x659 = x652 * x658;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x660(args[2][16 * steps + ((cycle - 0) & mask)]);
      assert(x660 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x661(args[2][17 * steps + ((cycle - 0) & mask)]);
      assert(x661 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x662 = x639 * x660;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x663 = Fp4(x662) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x664 = x642 * x661;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x665 = Fp4(x663) + Fp4(x664);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x666 = x665 * x0;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x667(args[2][18 * steps + ((cycle - 0) & mask)]);
      assert(x667 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x668(args[2][19 * steps + ((cycle - 0) & mask)]);
      assert(x668 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x669 = x639 * x667;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x670 = Fp4(x669) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x671 = x642 * x668;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x672 = Fp4(x670) + Fp4(x671);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x673 = x666 * x672;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x674(args[2][20 * steps + ((cycle - 0) & mask)]);
      assert(x674 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x675(args[2][21 * steps + ((cycle - 0) & mask)]);
      assert(x675 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x676 = x639 * x674;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x677 = Fp4(x676) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x678 = x642 * x675;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x679 = Fp4(x677) + Fp4(x678);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x680 = x673 * x679;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x681(args[2][22 * steps + ((cycle - 0) & mask)]);
      assert(x681 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x682(args[2][23 * steps + ((cycle - 0) & mask)]);
      assert(x682 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x683 = x639 * x681;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x684 = Fp4(x683) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x685 = x642 * x682;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x686 = Fp4(x684) + Fp4(x685);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x687 = x686 * x0;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x688(args[2][24 * steps + ((cycle - 0) & mask)]);
      assert(x688 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x689(args[2][25 * steps + ((cycle - 0) & mask)]);
      assert(x689 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x690 = x639 * x688;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x691 = Fp4(x690) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x692 = x642 * x689;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x693 = Fp4(x691) + Fp4(x692);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x694 = x687 * x693;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x695(args[2][26 * steps + ((cycle - 0) & mask)]);
      assert(x695 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x696(args[2][27 * steps + ((cycle - 0) & mask)]);
      assert(x696 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x697 = x639 * x695;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x698 = Fp4(x697) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x699 = x642 * x696;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x700 = Fp4(x698) + Fp4(x699);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x701 = x694 * x700;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement9/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x702(args[2][28 * steps + ((cycle - 0) & mask)]);
      assert(x702 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement9/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x703(args[2][29 * steps + ((cycle - 0) & mask)]);
      assert(x703 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x704 = x639 * x702;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x705 = Fp4(x704) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x706 = x642 * x703;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x707 = Fp4(x705) + Fp4(x706);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x708 = x707 * x0;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement10/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x709(args[2][30 * steps + ((cycle - 0) & mask)]);
      assert(x709 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement10/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x710(args[2][31 * steps + ((cycle - 0) & mask)]);
      assert(x710 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x711 = x639 * x709;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x712 = Fp4(x711) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x713 = x642 * x710;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x714 = Fp4(x712) + Fp4(x713);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x715 = x708 * x714;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement11/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x716(args[2][32 * steps + ((cycle - 0) & mask)]);
      assert(x716 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement11/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x717(args[2][33 * steps + ((cycle - 0) & mask)]);
      assert(x717 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x718 = x639 * x716;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x719 = Fp4(x718) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x720 = x642 * x717;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x721 = Fp4(x719) + Fp4(x720);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x722 = x715 * x721;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement12/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x723(args[2][34 * steps + ((cycle - 0) & mask)]);
      assert(x723 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement12/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x724(args[2][35 * steps + ((cycle - 0) & mask)]);
      assert(x724 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x725 = x639 * x723;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x726 = Fp4(x725) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x727 = x642 * x724;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x728 = Fp4(x726) + Fp4(x727);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x729 = x728 * x0;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement13/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x730(args[2][36 * steps + ((cycle - 0) & mask)]);
      assert(x730 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement13/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x731(args[2][37 * steps + ((cycle - 0) & mask)]);
      assert(x731 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x732 = x639 * x730;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x733 = Fp4(x732) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x734 = x642 * x731;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x735 = Fp4(x733) + Fp4(x734);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x736 = x729 * x735;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement14/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x737(args[2][38 * steps + ((cycle - 0) & mask)]);
      assert(x737 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement14/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x738(args[2][39 * steps + ((cycle - 0) & mask)]);
      assert(x738 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x739 = x639 * x737;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x740 = Fp4(x739) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x741 = x642 * x738;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x742 = Fp4(x740) + Fp4(x741);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x743 = x736 * x742;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement15/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x744(args[2][40 * steps + ((cycle - 0) & mask)]);
      assert(x744 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement15/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x745(args[2][41 * steps + ((cycle - 0) & mask)]);
      assert(x745 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x746 = x639 * x744;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x747 = Fp4(x746) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x748 = x642 * x745;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x749 = Fp4(x747) + Fp4(x748);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x750 = x749 * x0;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement16/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x751(args[2][42 * steps + ((cycle - 0) & mask)]);
      assert(x751 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement16/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x752(args[2][43 * steps + ((cycle - 0) & mask)]);
      assert(x752 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x753 = x639 * x751;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x754 = Fp4(x753) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x755 = x642 * x752;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x756 = Fp4(x754) + Fp4(x755);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x757 = x756 * x0;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement17/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x758(args[2][44 * steps + ((cycle - 0) & mask)]);
      assert(x758 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement17/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x759(args[2][45 * steps + ((cycle - 0) & mask)]);
      assert(x759 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x760 = x639 * x758;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x761 = Fp4(x760) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x762 = x642 * x759;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x763 = Fp4(x761) + Fp4(x762);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x764 = x757 * x763;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement18/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x765(args[2][46 * steps + ((cycle - 0) & mask)]);
      assert(x765 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement18/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x766(args[2][47 * steps + ((cycle - 0) & mask)]);
      assert(x766 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x767 = x639 * x765;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x768 = Fp4(x767) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x769 = x642 * x766;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x770 = Fp4(x768) + Fp4(x769);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x771 = x764 * x770;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement19/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x772(args[2][48 * steps + ((cycle - 0) & mask)]);
      assert(x772 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement19/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x773(args[2][49 * steps + ((cycle - 0) & mask)]);
      assert(x773 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x774 = x639 * x772;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x775 = Fp4(x774) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x776 = x642 * x773;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x777 = Fp4(x775) + Fp4(x776);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x778 = x777 * x0;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement20/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x779(args[2][50 * steps + ((cycle - 0) & mask)]);
      assert(x779 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement20/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x780(args[2][51 * steps + ((cycle - 0) & mask)]);
      assert(x780 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x781 = x639 * x779;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x782 = Fp4(x781) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x783 = x642 * x780;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x784 = Fp4(x782) + Fp4(x783);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x785 = x778 * x784;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement21/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x786(args[2][52 * steps + ((cycle - 0) & mask)]);
      assert(x786 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement21/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x787(args[2][53 * steps + ((cycle - 0) & mask)]);
      assert(x787 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x788 = x639 * x786;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x789 = Fp4(x788) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x790 = x642 * x787;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x791 = Fp4(x789) + Fp4(x790);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x792 = x785 * x791;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement22/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x793(args[2][54 * steps + ((cycle - 0) & mask)]);
      assert(x793 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement22/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x794(args[2][55 * steps + ((cycle - 0) & mask)]);
      assert(x794 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x795 = x639 * x793;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x796 = Fp4(x795) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x797 = x642 * x794;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x798 = Fp4(x796) + Fp4(x797);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x799 = x798 * x0;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement23/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x800(args[2][56 * steps + ((cycle - 0) & mask)]);
      assert(x800 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement23/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x801(args[2][57 * steps + ((cycle - 0) & mask)]);
      assert(x801 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x802 = x639 * x800;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x803 = Fp4(x802) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x804 = x642 * x801;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x805 = Fp4(x803) + Fp4(x804);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x806 = x799 * x805;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement24/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x807(args[2][58 * steps + ((cycle - 0) & mask)]);
      assert(x807 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement24/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x808(args[2][59 * steps + ((cycle - 0) & mask)]);
      assert(x808 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x809 = x639 * x807;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x810 = Fp4(x809) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x811 = x642 * x808;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x812 = Fp4(x810) + Fp4(x811);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x813 = x806 * x812;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement25/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x814(args[2][60 * steps + ((cycle - 0) & mask)]);
      assert(x814 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement25/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x815(args[2][61 * steps + ((cycle - 0) & mask)]);
      assert(x815 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x816 = x639 * x814;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x817 = Fp4(x816) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x818 = x642 * x815;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x819 = Fp4(x817) + Fp4(x818);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x820 = x819 * x0;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement26/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x821(args[2][62 * steps + ((cycle - 0) & mask)]);
      assert(x821 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement26/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x822(args[2][63 * steps + ((cycle - 0) & mask)]);
      assert(x822 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x823 = x639 * x821;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x824 = Fp4(x823) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x825 = x642 * x822;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x826 = Fp4(x824) + Fp4(x825);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x827 = x820 * x826;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement27/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x828(args[2][64 * steps + ((cycle - 0) & mask)]);
      assert(x828 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement27/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x829(args[2][65 * steps + ((cycle - 0) & mask)]);
      assert(x829 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x830 = x639 * x828;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x831 = Fp4(x830) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x832 = x642 * x829;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x833 = Fp4(x831) + Fp4(x832);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x834 = x827 * x833;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement28/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x835(args[2][66 * steps + ((cycle - 0) & mask)]);
      assert(x835 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement28/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x836(args[2][67 * steps + ((cycle - 0) & mask)]);
      assert(x836 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x837 = x639 * x835;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x838 = Fp4(x837) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x839 = x642 * x836;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x840 = Fp4(x838) + Fp4(x839);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x841 = x840 * x0;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement29/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x842(args[2][68 * steps + ((cycle - 0) & mask)]);
      assert(x842 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement29/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x843(args[2][69 * steps + ((cycle - 0) & mask)]);
      assert(x843 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x844 = x639 * x842;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x845 = Fp4(x844) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x846 = x642 * x843;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x847 = Fp4(x845) + Fp4(x846);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x848 = x841 * x847;
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement30/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x849(args[2][70 * steps + ((cycle - 0) & mask)]);
      assert(x849 != Fp::invalid());
      // loc("Top/Mux/3/BytesBody/PlonkBody/BytesPlonkElement30/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x850(args[2][71 * steps + ((cycle - 0) & mask)]);
      assert(x850 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x851 = x639 * x849;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x852 = Fp4(x851) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x853 = x642 * x850;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x854 = Fp4(x852) + Fp4(x853);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x855 = x848 * x854;
      // loc("Top/PlonkHeader/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x856(args[2][0 * steps + ((cycle - 0) & mask)]);
      assert(x856 != Fp::invalid());
      // loc("Top/PlonkHeader/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x857(args[2][1 * steps + ((cycle - 0) & mask)]);
      assert(x857 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x858 = x639 * x856;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x859 = Fp4(x858) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x860 = x642 * x857;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x861 = Fp4(x859) + Fp4(x860);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x862 = x861 * x0;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x863 = x659 * x0;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x864 = inv(x771);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x865 = x863 * x864;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x866 = x865 * x680;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x867 = inv(x792);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x868 = x866 * x867;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x869 = x868 * x701;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x870 = inv(x813);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x871 = x869 * x870;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x872 = x871 * x722;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x873 = inv(x834);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x874 = x872 * x873;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x875 = x874 * x743;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x876 = inv(x855);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x877 = x875 * x876;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x878 = x877 * x750;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x879 = inv(x862);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x880 = x878 * x879;
      host_args.at(0) = x880.elems[0];
      host_args.at(1) = x880.elems[1];
      host_args.at(2) = x880.elems[2];
      host_args.at(3) = x880.elems[3];
      host(ctx, "plonkWriteAccum", "bytes", host_args.data(), 4, host_outs.data(), 0);
    }
    {
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x881(args[2][94 * steps + ((cycle - 0) & mask)]);
      assert(x881 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x882(args[2][95 * steps + ((cycle - 0) & mask)]);
      assert(x882 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x883(args[2][96 * steps + ((cycle - 0) & mask)]);
      assert(x883 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x884(args[2][97 * steps + ((cycle - 0) & mask)]);
      assert(x884 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x885(args[2][98 * steps + ((cycle - 0) & mask)]);
      assert(x885 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x886(args[2][99 * steps + ((cycle - 0) & mask)]);
      assert(x886 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x887(args[2][100 * steps + ((cycle - 0) & mask)]);
      assert(x887 != Fp::invalid());
      // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x888(args[3][8], args[3][9], args[3][10], args[3][11]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x889 = x888 * x881;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x890 = Fp4(x889) + Fp4(x0);
      // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x891(args[3][12], args[3][13], args[3][14], args[3][15]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x892 = x891 * x882;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x893 = Fp4(x890) + Fp4(x892);
      // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x894(args[3][16], args[3][17], args[3][18], args[3][19]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x895 = x894 * x883;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x896 = Fp4(x893) + Fp4(x895);
      // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x897(args[3][20], args[3][21], args[3][22], args[3][23]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x898 = x897 * x884;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x899 = Fp4(x896) + Fp4(x898);
      // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x900(args[3][24], args[3][25], args[3][26], args[3][27]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x901 = x900 * x885;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x902 = Fp4(x899) + Fp4(x901);
      // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x903(args[3][28], args[3][29], args[3][30], args[3][31]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x904 = x903 * x886;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x905 = Fp4(x902) + Fp4(x904);
      // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x906(args[3][32], args[3][33], args[3][34], args[3][35]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x907 = x906 * x887;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x908 = Fp4(x905) + Fp4(x907);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x909 = x908 * x0;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x910(args[2][101 * steps + ((cycle - 0) & mask)]);
      assert(x910 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x911(args[2][102 * steps + ((cycle - 0) & mask)]);
      assert(x911 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x912(args[2][103 * steps + ((cycle - 0) & mask)]);
      assert(x912 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x913(args[2][104 * steps + ((cycle - 0) & mask)]);
      assert(x913 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x914(args[2][105 * steps + ((cycle - 0) & mask)]);
      assert(x914 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x915(args[2][106 * steps + ((cycle - 0) & mask)]);
      assert(x915 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x916(args[2][107 * steps + ((cycle - 0) & mask)]);
      assert(x916 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x917 = x888 * x910;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x918 = Fp4(x917) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x919 = x891 * x911;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x920 = Fp4(x918) + Fp4(x919);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x921 = x894 * x912;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x922 = Fp4(x920) + Fp4(x921);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x923 = x897 * x913;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x924 = Fp4(x922) + Fp4(x923);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x925 = x900 * x914;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x926 = Fp4(x924) + Fp4(x925);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x927 = x903 * x915;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x928 = Fp4(x926) + Fp4(x927);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x929 = x906 * x916;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x930 = Fp4(x928) + Fp4(x929);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x931 = x909 * x930;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x932(args[2][108 * steps + ((cycle - 0) & mask)]);
      assert(x932 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x933(args[2][109 * steps + ((cycle - 0) & mask)]);
      assert(x933 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x934(args[2][110 * steps + ((cycle - 0) & mask)]);
      assert(x934 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x935(args[2][111 * steps + ((cycle - 0) & mask)]);
      assert(x935 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x936(args[2][112 * steps + ((cycle - 0) & mask)]);
      assert(x936 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x937(args[2][113 * steps + ((cycle - 0) & mask)]);
      assert(x937 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x938(args[2][114 * steps + ((cycle - 0) & mask)]);
      assert(x938 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x939 = x888 * x932;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x940 = Fp4(x939) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x941 = x891 * x933;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x942 = Fp4(x940) + Fp4(x941);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x943 = x894 * x934;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x944 = Fp4(x942) + Fp4(x943);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x945 = x897 * x935;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x946 = Fp4(x944) + Fp4(x945);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x947 = x900 * x936;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x948 = Fp4(x946) + Fp4(x947);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x949 = x903 * x937;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x950 = Fp4(x948) + Fp4(x949);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x951 = x906 * x938;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x952 = Fp4(x950) + Fp4(x951);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x953 = x952 * x0;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x954(args[2][115 * steps + ((cycle - 0) & mask)]);
      assert(x954 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x955(args[2][116 * steps + ((cycle - 0) & mask)]);
      assert(x955 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x956(args[2][117 * steps + ((cycle - 0) & mask)]);
      assert(x956 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x957(args[2][118 * steps + ((cycle - 0) & mask)]);
      assert(x957 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x958(args[2][119 * steps + ((cycle - 0) & mask)]);
      assert(x958 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x959(args[2][120 * steps + ((cycle - 0) & mask)]);
      assert(x959 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x960(args[2][121 * steps + ((cycle - 0) & mask)]);
      assert(x960 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x961 = x888 * x954;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x962 = Fp4(x961) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x963 = x891 * x955;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x964 = Fp4(x962) + Fp4(x963);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x965 = x894 * x956;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x966 = Fp4(x964) + Fp4(x965);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x967 = x897 * x957;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x968 = Fp4(x966) + Fp4(x967);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x969 = x900 * x958;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x970 = Fp4(x968) + Fp4(x969);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x971 = x903 * x959;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x972 = Fp4(x970) + Fp4(x971);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x973 = x906 * x960;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x974 = Fp4(x972) + Fp4(x973);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x975 = x953 * x974;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x976(args[2][122 * steps + ((cycle - 0) & mask)]);
      assert(x976 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x977(args[2][123 * steps + ((cycle - 0) & mask)]);
      assert(x977 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x978(args[2][124 * steps + ((cycle - 0) & mask)]);
      assert(x978 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x979(args[2][125 * steps + ((cycle - 0) & mask)]);
      assert(x979 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x980(args[2][126 * steps + ((cycle - 0) & mask)]);
      assert(x980 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x981(args[2][127 * steps + ((cycle - 0) & mask)]);
      assert(x981 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x982(args[2][128 * steps + ((cycle - 0) & mask)]);
      assert(x982 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x983 = x888 * x976;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x984 = Fp4(x983) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x985 = x891 * x977;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x986 = Fp4(x984) + Fp4(x985);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x987 = x894 * x978;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x988 = Fp4(x986) + Fp4(x987);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x989 = x897 * x979;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x990 = Fp4(x988) + Fp4(x989);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x991 = x900 * x980;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x992 = Fp4(x990) + Fp4(x991);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x993 = x903 * x981;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x994 = Fp4(x992) + Fp4(x993);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x995 = x906 * x982;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x996 = Fp4(x994) + Fp4(x995);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x997 = x996 * x0;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x998(args[2][129 * steps + ((cycle - 0) & mask)]);
      assert(x998 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x999(args[2][130 * steps + ((cycle - 0) & mask)]);
      assert(x999 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1000(args[2][131 * steps + ((cycle - 0) & mask)]);
      assert(x1000 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1001(args[2][132 * steps + ((cycle - 0) & mask)]);
      assert(x1001 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1002(args[2][133 * steps + ((cycle - 0) & mask)]);
      assert(x1002 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1003(args[2][134 * steps + ((cycle - 0) & mask)]);
      assert(x1003 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1004(args[2][135 * steps + ((cycle - 0) & mask)]);
      assert(x1004 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1005 = x888 * x998;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1006 = Fp4(x1005) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1007 = x891 * x999;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1008 = Fp4(x1006) + Fp4(x1007);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1009 = x894 * x1000;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1010 = Fp4(x1008) + Fp4(x1009);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1011 = x897 * x1001;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1012 = Fp4(x1010) + Fp4(x1011);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1013 = x900 * x1002;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1014 = Fp4(x1012) + Fp4(x1013);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1015 = x903 * x1003;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1016 = Fp4(x1014) + Fp4(x1015);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1017 = x906 * x1004;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1018 = Fp4(x1016) + Fp4(x1017);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1019 = x997 * x1018;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1020(args[2][136 * steps + ((cycle - 0) & mask)]);
      assert(x1020 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1021(args[2][137 * steps + ((cycle - 0) & mask)]);
      assert(x1021 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1022(args[2][138 * steps + ((cycle - 0) & mask)]);
      assert(x1022 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1023(args[2][139 * steps + ((cycle - 0) & mask)]);
      assert(x1023 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1024(args[2][140 * steps + ((cycle - 0) & mask)]);
      assert(x1024 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1025(args[2][141 * steps + ((cycle - 0) & mask)]);
      assert(x1025 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1026(args[2][142 * steps + ((cycle - 0) & mask)]);
      assert(x1026 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1027 = x888 * x1020;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1028 = Fp4(x1027) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1029 = x891 * x1021;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1030 = Fp4(x1028) + Fp4(x1029);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1031 = x894 * x1022;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1032 = Fp4(x1030) + Fp4(x1031);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1033 = x897 * x1023;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1034 = Fp4(x1032) + Fp4(x1033);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1035 = x900 * x1024;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1036 = Fp4(x1034) + Fp4(x1035);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1037 = x903 * x1025;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1038 = Fp4(x1036) + Fp4(x1037);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1039 = x906 * x1026;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1040 = Fp4(x1038) + Fp4(x1039);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1041 = x1040 * x0;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1042(args[2][143 * steps + ((cycle - 0) & mask)]);
      assert(x1042 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1043(args[2][144 * steps + ((cycle - 0) & mask)]);
      assert(x1043 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1044(args[2][145 * steps + ((cycle - 0) & mask)]);
      assert(x1044 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1045(args[2][146 * steps + ((cycle - 0) & mask)]);
      assert(x1045 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1046(args[2][147 * steps + ((cycle - 0) & mask)]);
      assert(x1046 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1047(args[2][148 * steps + ((cycle - 0) & mask)]);
      assert(x1047 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1048(args[2][149 * steps + ((cycle - 0) & mask)]);
      assert(x1048 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1049 = x888 * x1042;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1050 = Fp4(x1049) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1051 = x891 * x1043;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1052 = Fp4(x1050) + Fp4(x1051);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1053 = x894 * x1044;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1054 = Fp4(x1052) + Fp4(x1053);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1055 = x897 * x1045;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1056 = Fp4(x1054) + Fp4(x1055);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1057 = x900 * x1046;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1058 = Fp4(x1056) + Fp4(x1057);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1059 = x903 * x1047;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1060 = Fp4(x1058) + Fp4(x1059);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1061 = x906 * x1048;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1062 = Fp4(x1060) + Fp4(x1061);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1063 = x1041 * x1062;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1064(args[2][150 * steps + ((cycle - 0) & mask)]);
      assert(x1064 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1065(args[2][151 * steps + ((cycle - 0) & mask)]);
      assert(x1065 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement8/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1066(args[2][152 * steps + ((cycle - 0) & mask)]);
      assert(x1066 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1067(args[2][153 * steps + ((cycle - 0) & mask)]);
      assert(x1067 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1068(args[2][154 * steps + ((cycle - 0) & mask)]);
      assert(x1068 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1069(args[2][155 * steps + ((cycle - 0) & mask)]);
      assert(x1069 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1070(args[2][156 * steps + ((cycle - 0) & mask)]);
      assert(x1070 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1071 = x888 * x1064;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1072 = Fp4(x1071) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1073 = x891 * x1065;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1074 = Fp4(x1072) + Fp4(x1073);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1075 = x894 * x1066;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1076 = Fp4(x1074) + Fp4(x1075);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1077 = x897 * x1067;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1078 = Fp4(x1076) + Fp4(x1077);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1079 = x900 * x1068;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1080 = Fp4(x1078) + Fp4(x1079);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1081 = x903 * x1069;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1082 = Fp4(x1080) + Fp4(x1081);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1083 = x906 * x1070;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1084 = Fp4(x1082) + Fp4(x1083);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1085 = x1084 * x0;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement9/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1086(args[2][157 * steps + ((cycle - 0) & mask)]);
      assert(x1086 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement9/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1087(args[2][158 * steps + ((cycle - 0) & mask)]);
      assert(x1087 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement9/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1088(args[2][159 * steps + ((cycle - 0) & mask)]);
      assert(x1088 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement9/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1089(args[2][160 * steps + ((cycle - 0) & mask)]);
      assert(x1089 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement9/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1090(args[2][161 * steps + ((cycle - 0) & mask)]);
      assert(x1090 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement9/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1091(args[2][162 * steps + ((cycle - 0) & mask)]);
      assert(x1091 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement9/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1092(args[2][163 * steps + ((cycle - 0) & mask)]);
      assert(x1092 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1093 = x888 * x1086;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1094 = Fp4(x1093) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1095 = x891 * x1087;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1096 = Fp4(x1094) + Fp4(x1095);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1097 = x894 * x1088;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1098 = Fp4(x1096) + Fp4(x1097);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1099 = x897 * x1089;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1100 = Fp4(x1098) + Fp4(x1099);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1101 = x900 * x1090;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1102 = Fp4(x1100) + Fp4(x1101);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1103 = x903 * x1091;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1104 = Fp4(x1102) + Fp4(x1103);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1105 = x906 * x1092;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1106 = Fp4(x1104) + Fp4(x1105);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1107 = x1085 * x1106;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1108(args[2][164 * steps + ((cycle - 0) & mask)]);
      assert(x1108 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1109(args[2][165 * steps + ((cycle - 0) & mask)]);
      assert(x1109 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1110(args[2][166 * steps + ((cycle - 0) & mask)]);
      assert(x1110 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1111(args[2][167 * steps + ((cycle - 0) & mask)]);
      assert(x1111 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1112(args[2][168 * steps + ((cycle - 0) & mask)]);
      assert(x1112 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1113(args[2][169 * steps + ((cycle - 0) & mask)]);
      assert(x1113 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement10/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1114(args[2][170 * steps + ((cycle - 0) & mask)]);
      assert(x1114 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1115 = x888 * x1108;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1116 = Fp4(x1115) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1117 = x891 * x1109;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1118 = Fp4(x1116) + Fp4(x1117);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1119 = x894 * x1110;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1120 = Fp4(x1118) + Fp4(x1119);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1121 = x897 * x1111;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1122 = Fp4(x1120) + Fp4(x1121);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1123 = x900 * x1112;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1124 = Fp4(x1122) + Fp4(x1123);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1125 = x903 * x1113;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1126 = Fp4(x1124) + Fp4(x1125);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1127 = x906 * x1114;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1128 = Fp4(x1126) + Fp4(x1127);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1129 = x1128 * x0;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1130(args[2][171 * steps + ((cycle - 0) & mask)]);
      assert(x1130 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1131(args[2][172 * steps + ((cycle - 0) & mask)]);
      assert(x1131 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1132(args[2][173 * steps + ((cycle - 0) & mask)]);
      assert(x1132 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1133(args[2][174 * steps + ((cycle - 0) & mask)]);
      assert(x1133 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1134(args[2][175 * steps + ((cycle - 0) & mask)]);
      assert(x1134 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1135(args[2][176 * steps + ((cycle - 0) & mask)]);
      assert(x1135 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement11/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1136(args[2][177 * steps + ((cycle - 0) & mask)]);
      assert(x1136 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1137 = x888 * x1130;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1138 = Fp4(x1137) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1139 = x891 * x1131;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1140 = Fp4(x1138) + Fp4(x1139);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1141 = x894 * x1132;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1142 = Fp4(x1140) + Fp4(x1141);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1143 = x897 * x1133;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1144 = Fp4(x1142) + Fp4(x1143);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1145 = x900 * x1134;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1146 = Fp4(x1144) + Fp4(x1145);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1147 = x903 * x1135;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1148 = Fp4(x1146) + Fp4(x1147);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1149 = x906 * x1136;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1150 = Fp4(x1148) + Fp4(x1149);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1151 = x1129 * x1150;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1152(args[2][178 * steps + ((cycle - 0) & mask)]);
      assert(x1152 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1153(args[2][179 * steps + ((cycle - 0) & mask)]);
      assert(x1153 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1154(args[2][180 * steps + ((cycle - 0) & mask)]);
      assert(x1154 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1155(args[2][181 * steps + ((cycle - 0) & mask)]);
      assert(x1155 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1156(args[2][182 * steps + ((cycle - 0) & mask)]);
      assert(x1156 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1157(args[2][183 * steps + ((cycle - 0) & mask)]);
      assert(x1157 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement12/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1158(args[2][184 * steps + ((cycle - 0) & mask)]);
      assert(x1158 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1159 = x888 * x1152;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1160 = Fp4(x1159) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1161 = x891 * x1153;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1162 = Fp4(x1160) + Fp4(x1161);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1163 = x894 * x1154;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1164 = Fp4(x1162) + Fp4(x1163);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1165 = x897 * x1155;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1166 = Fp4(x1164) + Fp4(x1165);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1167 = x900 * x1156;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1168 = Fp4(x1166) + Fp4(x1167);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1169 = x903 * x1157;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1170 = Fp4(x1168) + Fp4(x1169);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1171 = x906 * x1158;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1172 = Fp4(x1170) + Fp4(x1171);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1173 = x1172 * x0;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1174(args[2][185 * steps + ((cycle - 0) & mask)]);
      assert(x1174 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1175(args[2][186 * steps + ((cycle - 0) & mask)]);
      assert(x1175 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1176(args[2][187 * steps + ((cycle - 0) & mask)]);
      assert(x1176 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1177(args[2][188 * steps + ((cycle - 0) & mask)]);
      assert(x1177 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1178(args[2][189 * steps + ((cycle - 0) & mask)]);
      assert(x1178 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1179(args[2][190 * steps + ((cycle - 0) & mask)]);
      assert(x1179 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement13/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1180(args[2][191 * steps + ((cycle - 0) & mask)]);
      assert(x1180 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1181 = x888 * x1174;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1182 = Fp4(x1181) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1183 = x891 * x1175;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1184 = Fp4(x1182) + Fp4(x1183);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1185 = x894 * x1176;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1186 = Fp4(x1184) + Fp4(x1185);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1187 = x897 * x1177;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1188 = Fp4(x1186) + Fp4(x1187);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1189 = x900 * x1178;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1190 = Fp4(x1188) + Fp4(x1189);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1191 = x903 * x1179;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1192 = Fp4(x1190) + Fp4(x1191);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1193 = x906 * x1180;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1194 = Fp4(x1192) + Fp4(x1193);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1195 = x1173 * x1194;
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1196(args[2][192 * steps + ((cycle - 0) & mask)]);
      assert(x1196 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1197(args[2][193 * steps + ((cycle - 0) & mask)]);
      assert(x1197 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1198(args[2][194 * steps + ((cycle - 0) & mask)]);
      assert(x1198 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1199(args[2][195 * steps + ((cycle - 0) & mask)]);
      assert(x1199 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1200(args[2][196 * steps + ((cycle - 0) & mask)]);
      assert(x1200 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1201(args[2][197 * steps + ((cycle - 0) & mask)]);
      assert(x1201 != Fp::invalid());
      // loc("Top/Mux/3/RamBody/PlonkBody/RamPlonkElement14/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1202(args[2][198 * steps + ((cycle - 0) & mask)]);
      assert(x1202 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1203 = x888 * x1196;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1204 = Fp4(x1203) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1205 = x891 * x1197;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1206 = Fp4(x1204) + Fp4(x1205);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1207 = x894 * x1198;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1208 = Fp4(x1206) + Fp4(x1207);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1209 = x897 * x1199;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1210 = Fp4(x1208) + Fp4(x1209);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1211 = x900 * x1200;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1212 = Fp4(x1210) + Fp4(x1211);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1213 = x903 * x1201;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1214 = Fp4(x1212) + Fp4(x1213);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1215 = x906 * x1202;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1216 = Fp4(x1214) + Fp4(x1215);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1217 = x1216 * x0;
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1218(args[2][2 * steps + ((cycle - 0) & mask)]);
      assert(x1218 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1219(args[2][3 * steps + ((cycle - 0) & mask)]);
      assert(x1219 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1220(args[2][4 * steps + ((cycle - 0) & mask)]);
      assert(x1220 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1221(args[2][5 * steps + ((cycle - 0) & mask)]);
      assert(x1221 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1222(args[2][6 * steps + ((cycle - 0) & mask)]);
      assert(x1222 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1223(args[2][7 * steps + ((cycle - 0) & mask)]);
      assert(x1223 != Fp::invalid());
      // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1224(args[2][8 * steps + ((cycle - 0) & mask)]);
      assert(x1224 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1225 = x888 * x1218;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1226 = Fp4(x1225) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1227 = x891 * x1219;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1228 = Fp4(x1226) + Fp4(x1227);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1229 = x894 * x1220;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1230 = Fp4(x1228) + Fp4(x1229);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1231 = x897 * x1221;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1232 = Fp4(x1230) + Fp4(x1231);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1233 = x900 * x1222;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1234 = Fp4(x1232) + Fp4(x1233);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1235 = x903 * x1223;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1236 = Fp4(x1234) + Fp4(x1235);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1237 = x906 * x1224;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1238 = Fp4(x1236) + Fp4(x1237);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1239 = x1217 * x1238;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1240 = x931 * x0;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x1241 = inv(x1107);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1242 = x1240 * x1241;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1243 = x1242 * x975;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x1244 = inv(x1151);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1245 = x1243 * x1244;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1246 = x1245 * x1019;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x1247 = inv(x1195);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1248 = x1246 * x1247;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1249 = x1248 * x1063;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x1250 = inv(x1239);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1251 = x1249 * x1250;
      host_args.at(0) = x1251.elems[0];
      host_args.at(1) = x1251.elems[1];
      host_args.at(2) = x1251.elems[2];
      host_args.at(3) = x1251.elems[3];
      host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
    }
  }
  if (x5 != 0) {
    {
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1252(args[2][10 * steps + ((cycle - 0) & mask)]);
      assert(x1252 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1253(args[2][11 * steps + ((cycle - 0) & mask)]);
      assert(x1253 != Fp::invalid());
      // loc("Top/PlonkHeader/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1254(args[3][0], args[3][1], args[3][2], args[3][3]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1255 = x1254 * x1252;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1256 = Fp4(x1255) + Fp4(x0);
      // loc("Top/PlonkHeader/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x1257(args[3][4], args[3][5], args[3][6], args[3][7]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1258 = x1257 * x1253;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1259 = Fp4(x1256) + Fp4(x1258);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1260 = x1259 * x0;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1261(args[2][12 * steps + ((cycle - 0) & mask)]);
      assert(x1261 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1262(args[2][13 * steps + ((cycle - 0) & mask)]);
      assert(x1262 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1263 = x1254 * x1261;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1264 = Fp4(x1263) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1265 = x1257 * x1262;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1266 = Fp4(x1264) + Fp4(x1265);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1267 = x1260 * x1266;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1268(args[2][14 * steps + ((cycle - 0) & mask)]);
      assert(x1268 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1269(args[2][15 * steps + ((cycle - 0) & mask)]);
      assert(x1269 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1270 = x1254 * x1268;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1271 = Fp4(x1270) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1272 = x1257 * x1269;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1273 = Fp4(x1271) + Fp4(x1272);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1274 = x1267 * x1273;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1275(args[2][16 * steps + ((cycle - 0) & mask)]);
      assert(x1275 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1276(args[2][17 * steps + ((cycle - 0) & mask)]);
      assert(x1276 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1277 = x1254 * x1275;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1278 = Fp4(x1277) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1279 = x1257 * x1276;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1280 = Fp4(x1278) + Fp4(x1279);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1281 = x1280 * x0;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1282(args[2][18 * steps + ((cycle - 0) & mask)]);
      assert(x1282 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1283(args[2][19 * steps + ((cycle - 0) & mask)]);
      assert(x1283 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1284 = x1254 * x1282;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1285 = Fp4(x1284) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1286 = x1257 * x1283;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1287 = Fp4(x1285) + Fp4(x1286);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1288 = x1281 * x1287;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1289(args[2][20 * steps + ((cycle - 0) & mask)]);
      assert(x1289 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1290(args[2][21 * steps + ((cycle - 0) & mask)]);
      assert(x1290 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1291 = x1254 * x1289;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1292 = Fp4(x1291) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1293 = x1257 * x1290;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1294 = Fp4(x1292) + Fp4(x1293);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1295 = x1288 * x1294;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1296(args[2][22 * steps + ((cycle - 0) & mask)]);
      assert(x1296 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1297(args[2][23 * steps + ((cycle - 0) & mask)]);
      assert(x1297 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1298 = x1254 * x1296;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1299 = Fp4(x1298) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1300 = x1257 * x1297;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1301 = Fp4(x1299) + Fp4(x1300);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1302 = x1301 * x0;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1303(args[2][24 * steps + ((cycle - 0) & mask)]);
      assert(x1303 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1304(args[2][25 * steps + ((cycle - 0) & mask)]);
      assert(x1304 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1305 = x1254 * x1303;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1306 = Fp4(x1305) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1307 = x1257 * x1304;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1308 = Fp4(x1306) + Fp4(x1307);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1309 = x1302 * x1308;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1310(args[2][26 * steps + ((cycle - 0) & mask)]);
      assert(x1310 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1311(args[2][27 * steps + ((cycle - 0) & mask)]);
      assert(x1311 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1312 = x1254 * x1310;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1313 = Fp4(x1312) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1314 = x1257 * x1311;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1315 = Fp4(x1313) + Fp4(x1314);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1316 = x1309 * x1315;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement9/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1317(args[2][28 * steps + ((cycle - 0) & mask)]);
      assert(x1317 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement9/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1318(args[2][29 * steps + ((cycle - 0) & mask)]);
      assert(x1318 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1319 = x1254 * x1317;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1320 = Fp4(x1319) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1321 = x1257 * x1318;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1322 = Fp4(x1320) + Fp4(x1321);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1323 = x1322 * x0;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement10/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1324(args[2][30 * steps + ((cycle - 0) & mask)]);
      assert(x1324 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement10/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1325(args[2][31 * steps + ((cycle - 0) & mask)]);
      assert(x1325 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1326 = x1254 * x1324;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1327 = Fp4(x1326) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1328 = x1257 * x1325;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1329 = Fp4(x1327) + Fp4(x1328);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1330 = x1323 * x1329;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement11/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1331(args[2][32 * steps + ((cycle - 0) & mask)]);
      assert(x1331 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement11/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1332(args[2][33 * steps + ((cycle - 0) & mask)]);
      assert(x1332 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1333 = x1254 * x1331;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1334 = Fp4(x1333) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1335 = x1257 * x1332;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1336 = Fp4(x1334) + Fp4(x1335);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1337 = x1330 * x1336;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement12/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1338(args[2][34 * steps + ((cycle - 0) & mask)]);
      assert(x1338 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement12/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1339(args[2][35 * steps + ((cycle - 0) & mask)]);
      assert(x1339 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1340 = x1254 * x1338;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1341 = Fp4(x1340) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1342 = x1257 * x1339;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1343 = Fp4(x1341) + Fp4(x1342);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1344 = x1343 * x0;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement13/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1345(args[2][36 * steps + ((cycle - 0) & mask)]);
      assert(x1345 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement13/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1346(args[2][37 * steps + ((cycle - 0) & mask)]);
      assert(x1346 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1347 = x1254 * x1345;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1348 = Fp4(x1347) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1349 = x1257 * x1346;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1350 = Fp4(x1348) + Fp4(x1349);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1351 = x1344 * x1350;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement14/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1352(args[2][38 * steps + ((cycle - 0) & mask)]);
      assert(x1352 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement14/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1353(args[2][39 * steps + ((cycle - 0) & mask)]);
      assert(x1353 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1354 = x1254 * x1352;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1355 = Fp4(x1354) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1356 = x1257 * x1353;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1357 = Fp4(x1355) + Fp4(x1356);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1358 = x1351 * x1357;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement15/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1359(args[2][40 * steps + ((cycle - 0) & mask)]);
      assert(x1359 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement15/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1360(args[2][41 * steps + ((cycle - 0) & mask)]);
      assert(x1360 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1361 = x1254 * x1359;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1362 = Fp4(x1361) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1363 = x1257 * x1360;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1364 = Fp4(x1362) + Fp4(x1363);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1365 = x1364 * x0;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement16/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1366(args[2][42 * steps + ((cycle - 0) & mask)]);
      assert(x1366 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement16/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1367(args[2][43 * steps + ((cycle - 0) & mask)]);
      assert(x1367 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1368 = x1254 * x1366;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1369 = Fp4(x1368) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1370 = x1257 * x1367;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1371 = Fp4(x1369) + Fp4(x1370);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1372 = x1371 * x0;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement17/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1373(args[2][44 * steps + ((cycle - 0) & mask)]);
      assert(x1373 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement17/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1374(args[2][45 * steps + ((cycle - 0) & mask)]);
      assert(x1374 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1375 = x1254 * x1373;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1376 = Fp4(x1375) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1377 = x1257 * x1374;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1378 = Fp4(x1376) + Fp4(x1377);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1379 = x1372 * x1378;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement18/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1380(args[2][46 * steps + ((cycle - 0) & mask)]);
      assert(x1380 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement18/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1381(args[2][47 * steps + ((cycle - 0) & mask)]);
      assert(x1381 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1382 = x1254 * x1380;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1383 = Fp4(x1382) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1384 = x1257 * x1381;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1385 = Fp4(x1383) + Fp4(x1384);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1386 = x1379 * x1385;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement19/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1387(args[2][48 * steps + ((cycle - 0) & mask)]);
      assert(x1387 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement19/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1388(args[2][49 * steps + ((cycle - 0) & mask)]);
      assert(x1388 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1389 = x1254 * x1387;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1390 = Fp4(x1389) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1391 = x1257 * x1388;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1392 = Fp4(x1390) + Fp4(x1391);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1393 = x1392 * x0;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement20/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1394(args[2][50 * steps + ((cycle - 0) & mask)]);
      assert(x1394 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement20/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1395(args[2][51 * steps + ((cycle - 0) & mask)]);
      assert(x1395 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1396 = x1254 * x1394;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1397 = Fp4(x1396) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1398 = x1257 * x1395;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1399 = Fp4(x1397) + Fp4(x1398);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1400 = x1393 * x1399;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement21/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1401(args[2][52 * steps + ((cycle - 0) & mask)]);
      assert(x1401 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement21/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1402(args[2][53 * steps + ((cycle - 0) & mask)]);
      assert(x1402 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1403 = x1254 * x1401;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1404 = Fp4(x1403) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1405 = x1257 * x1402;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1406 = Fp4(x1404) + Fp4(x1405);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1407 = x1400 * x1406;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement22/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1408(args[2][54 * steps + ((cycle - 0) & mask)]);
      assert(x1408 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement22/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1409(args[2][55 * steps + ((cycle - 0) & mask)]);
      assert(x1409 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1410 = x1254 * x1408;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1411 = Fp4(x1410) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1412 = x1257 * x1409;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1413 = Fp4(x1411) + Fp4(x1412);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1414 = x1413 * x0;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement23/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1415(args[2][56 * steps + ((cycle - 0) & mask)]);
      assert(x1415 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement23/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1416(args[2][57 * steps + ((cycle - 0) & mask)]);
      assert(x1416 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1417 = x1254 * x1415;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1418 = Fp4(x1417) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1419 = x1257 * x1416;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1420 = Fp4(x1418) + Fp4(x1419);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1421 = x1414 * x1420;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement24/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1422(args[2][58 * steps + ((cycle - 0) & mask)]);
      assert(x1422 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement24/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1423(args[2][59 * steps + ((cycle - 0) & mask)]);
      assert(x1423 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1424 = x1254 * x1422;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1425 = Fp4(x1424) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1426 = x1257 * x1423;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1427 = Fp4(x1425) + Fp4(x1426);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1428 = x1421 * x1427;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement25/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1429(args[2][60 * steps + ((cycle - 0) & mask)]);
      assert(x1429 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement25/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1430(args[2][61 * steps + ((cycle - 0) & mask)]);
      assert(x1430 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1431 = x1254 * x1429;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1432 = Fp4(x1431) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1433 = x1257 * x1430;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1434 = Fp4(x1432) + Fp4(x1433);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1435 = x1434 * x0;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement26/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1436(args[2][62 * steps + ((cycle - 0) & mask)]);
      assert(x1436 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement26/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1437(args[2][63 * steps + ((cycle - 0) & mask)]);
      assert(x1437 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1438 = x1254 * x1436;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1439 = Fp4(x1438) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1440 = x1257 * x1437;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1441 = Fp4(x1439) + Fp4(x1440);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1442 = x1435 * x1441;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement27/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1443(args[2][64 * steps + ((cycle - 0) & mask)]);
      assert(x1443 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement27/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1444(args[2][65 * steps + ((cycle - 0) & mask)]);
      assert(x1444 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1445 = x1254 * x1443;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1446 = Fp4(x1445) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1447 = x1257 * x1444;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1448 = Fp4(x1446) + Fp4(x1447);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1449 = x1442 * x1448;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement28/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1450(args[2][66 * steps + ((cycle - 0) & mask)]);
      assert(x1450 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement28/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1451(args[2][67 * steps + ((cycle - 0) & mask)]);
      assert(x1451 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1452 = x1254 * x1450;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1453 = Fp4(x1452) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1454 = x1257 * x1451;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1455 = Fp4(x1453) + Fp4(x1454);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1456 = x1455 * x0;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement29/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1457(args[2][68 * steps + ((cycle - 0) & mask)]);
      assert(x1457 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement29/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1458(args[2][69 * steps + ((cycle - 0) & mask)]);
      assert(x1458 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1459 = x1254 * x1457;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1460 = Fp4(x1459) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1461 = x1257 * x1458;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1462 = Fp4(x1460) + Fp4(x1461);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1463 = x1456 * x1462;
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement30/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1464(args[2][70 * steps + ((cycle - 0) & mask)]);
      assert(x1464 != Fp::invalid());
      // loc("Top/Mux/4/BytesBody/PlonkBody/BytesPlonkElement30/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1465(args[2][71 * steps + ((cycle - 0) & mask)]);
      assert(x1465 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1466 = x1254 * x1464;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1467 = Fp4(x1466) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1468 = x1257 * x1465;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1469 = Fp4(x1467) + Fp4(x1468);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1470 = x1463 * x1469;
      // loc("Top/PlonkHeader/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1471(args[2][0 * steps + ((cycle - 0) & mask)]);
      assert(x1471 != Fp::invalid());
      // loc("Top/PlonkHeader/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x1472(args[2][1 * steps + ((cycle - 0) & mask)]);
      assert(x1472 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1473 = x1254 * x1471;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1474 = Fp4(x1473) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x1475 = x1257 * x1472;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x1476 = Fp4(x1474) + Fp4(x1475);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x1477 = x1476 * x0;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1478 = x1274 * x0;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x1479 = inv(x1386);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1480 = x1478 * x1479;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1481 = x1480 * x1295;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x1482 = inv(x1407);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1483 = x1481 * x1482;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1484 = x1483 * x1316;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x1485 = inv(x1428);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1486 = x1484 * x1485;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1487 = x1486 * x1337;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x1488 = inv(x1449);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1489 = x1487 * x1488;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1490 = x1489 * x1358;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x1491 = inv(x1470);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1492 = x1490 * x1491;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1493 = x1492 * x1365;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x1494 = inv(x1477);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x1495 = x1493 * x1494;
      host_args.at(0) = x1495.elems[0];
      host_args.at(1) = x1495.elems[1];
      host_args.at(2) = x1495.elems[2];
      host_args.at(3) = x1495.elems[3];
      host(ctx, "plonkWriteAccum", "bytes", host_args.data(), 4, host_outs.data(), 0);
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1496(args[2][94 * steps + ((cycle - 0) & mask)]);
    assert(x1496 != Fp::invalid());
    if (x1496 != 0) {
      {
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1497(args[2][108 * steps + ((cycle - 0) & mask)]);
        assert(x1497 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1498(args[2][109 * steps + ((cycle - 0) & mask)]);
        assert(x1498 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1499(args[2][110 * steps + ((cycle - 0) & mask)]);
        assert(x1499 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1500(args[2][111 * steps + ((cycle - 0) & mask)]);
        assert(x1500 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1501(args[2][112 * steps + ((cycle - 0) & mask)]);
        assert(x1501 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1502(args[2][113 * steps + ((cycle - 0) & mask)]);
        assert(x1502 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1503(args[2][114 * steps + ((cycle - 0) & mask)]);
        assert(x1503 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1504(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1505 = x1504 * x1497;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1506 = Fp4(x1505) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1507(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1508 = x1507 * x1498;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1509 = Fp4(x1506) + Fp4(x1508);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1510(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1511 = x1510 * x1499;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1512 = Fp4(x1509) + Fp4(x1511);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1513(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1514 = x1513 * x1500;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1515 = Fp4(x1512) + Fp4(x1514);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1516(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1517 = x1516 * x1501;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1518 = Fp4(x1515) + Fp4(x1517);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1519(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1520 = x1519 * x1502;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1521 = Fp4(x1518) + Fp4(x1520);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1522(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1523 = x1522 * x1503;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1524 = Fp4(x1521) + Fp4(x1523);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1525 = x1524 * x0;
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1526(args[2][115 * steps + ((cycle - 0) & mask)]);
        assert(x1526 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1527(args[2][116 * steps + ((cycle - 0) & mask)]);
        assert(x1527 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1528(args[2][117 * steps + ((cycle - 0) & mask)]);
        assert(x1528 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1529(args[2][118 * steps + ((cycle - 0) & mask)]);
        assert(x1529 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1530(args[2][119 * steps + ((cycle - 0) & mask)]);
        assert(x1530 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1531(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x1531 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1532(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x1532 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1533 = x1504 * x1526;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1534 = Fp4(x1533) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1535 = x1507 * x1527;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1536 = Fp4(x1534) + Fp4(x1535);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1537 = x1510 * x1528;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1538 = Fp4(x1536) + Fp4(x1537);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1539 = x1513 * x1529;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1540 = Fp4(x1538) + Fp4(x1539);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1541 = x1516 * x1530;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1542 = Fp4(x1540) + Fp4(x1541);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1543 = x1519 * x1531;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1544 = Fp4(x1542) + Fp4(x1543);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1545 = x1522 * x1532;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1546 = Fp4(x1544) + Fp4(x1545);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1547 = x1525 * x1546;
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1548(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x1548 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1549(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x1549 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1550(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x1550 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1551(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x1551 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1552(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x1552 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1553(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x1553 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1554(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x1554 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1555 = x1504 * x1548;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1556 = Fp4(x1555) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1557 = x1507 * x1549;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1558 = Fp4(x1556) + Fp4(x1557);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1559 = x1510 * x1550;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1560 = Fp4(x1558) + Fp4(x1559);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1561 = x1513 * x1551;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1562 = Fp4(x1560) + Fp4(x1561);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1563 = x1516 * x1552;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1564 = Fp4(x1562) + Fp4(x1563);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1565 = x1519 * x1553;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1566 = Fp4(x1564) + Fp4(x1565);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1567 = x1522 * x1554;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1568 = Fp4(x1566) + Fp4(x1567);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1569 = x1568 * x0;
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1570(args[2][129 * steps + ((cycle - 0) & mask)]);
        assert(x1570 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1571(args[2][130 * steps + ((cycle - 0) & mask)]);
        assert(x1571 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1572(args[2][131 * steps + ((cycle - 0) & mask)]);
        assert(x1572 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1573(args[2][132 * steps + ((cycle - 0) & mask)]);
        assert(x1573 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1574(args[2][133 * steps + ((cycle - 0) & mask)]);
        assert(x1574 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1575(args[2][134 * steps + ((cycle - 0) & mask)]);
        assert(x1575 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1576(args[2][135 * steps + ((cycle - 0) & mask)]);
        assert(x1576 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1577 = x1504 * x1570;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1578 = Fp4(x1577) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1579 = x1507 * x1571;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1580 = Fp4(x1578) + Fp4(x1579);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1581 = x1510 * x1572;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1582 = Fp4(x1580) + Fp4(x1581);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1583 = x1513 * x1573;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1584 = Fp4(x1582) + Fp4(x1583);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1585 = x1516 * x1574;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1586 = Fp4(x1584) + Fp4(x1585);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1587 = x1519 * x1575;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1588 = Fp4(x1586) + Fp4(x1587);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1589 = x1522 * x1576;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1590 = Fp4(x1588) + Fp4(x1589);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1591 = x1569 * x1590;
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1592(args[2][136 * steps + ((cycle - 0) & mask)]);
        assert(x1592 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1593(args[2][137 * steps + ((cycle - 0) & mask)]);
        assert(x1593 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1594(args[2][138 * steps + ((cycle - 0) & mask)]);
        assert(x1594 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1595(args[2][139 * steps + ((cycle - 0) & mask)]);
        assert(x1595 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1596(args[2][140 * steps + ((cycle - 0) & mask)]);
        assert(x1596 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1597(args[2][141 * steps + ((cycle - 0) & mask)]);
        assert(x1597 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1598(args[2][142 * steps + ((cycle - 0) & mask)]);
        assert(x1598 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1599 = x1504 * x1592;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1600 = Fp4(x1599) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1601 = x1507 * x1593;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1602 = Fp4(x1600) + Fp4(x1601);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1603 = x1510 * x1594;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1604 = Fp4(x1602) + Fp4(x1603);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1605 = x1513 * x1595;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1606 = Fp4(x1604) + Fp4(x1605);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1607 = x1516 * x1596;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1608 = Fp4(x1606) + Fp4(x1607);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1609 = x1519 * x1597;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1610 = Fp4(x1608) + Fp4(x1609);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1611 = x1522 * x1598;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1612 = Fp4(x1610) + Fp4(x1611);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1613 = x1612 * x0;
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1614(args[2][143 * steps + ((cycle - 0) & mask)]);
        assert(x1614 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1615(args[2][144 * steps + ((cycle - 0) & mask)]);
        assert(x1615 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1616(args[2][145 * steps + ((cycle - 0) & mask)]);
        assert(x1616 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1617(args[2][146 * steps + ((cycle - 0) & mask)]);
        assert(x1617 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1618(args[2][147 * steps + ((cycle - 0) & mask)]);
        assert(x1618 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1619(args[2][148 * steps + ((cycle - 0) & mask)]);
        assert(x1619 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1620(args[2][149 * steps + ((cycle - 0) & mask)]);
        assert(x1620 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1621 = x1504 * x1614;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1622 = Fp4(x1621) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1623 = x1507 * x1615;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1624 = Fp4(x1622) + Fp4(x1623);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1625 = x1510 * x1616;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1626 = Fp4(x1624) + Fp4(x1625);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1627 = x1513 * x1617;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1628 = Fp4(x1626) + Fp4(x1627);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1629 = x1516 * x1618;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1630 = Fp4(x1628) + Fp4(x1629);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1631 = x1519 * x1619;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1632 = Fp4(x1630) + Fp4(x1631);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1633 = x1522 * x1620;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1634 = Fp4(x1632) + Fp4(x1633);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1635 = x1613 * x1634;
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1636(args[2][150 * steps + ((cycle - 0) & mask)]);
        assert(x1636 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1637(args[2][151 * steps + ((cycle - 0) & mask)]);
        assert(x1637 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1638(args[2][152 * steps + ((cycle - 0) & mask)]);
        assert(x1638 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1639(args[2][153 * steps + ((cycle - 0) & mask)]);
        assert(x1639 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1640(args[2][154 * steps + ((cycle - 0) & mask)]);
        assert(x1640 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1641(args[2][155 * steps + ((cycle - 0) & mask)]);
        assert(x1641 != Fp::invalid());
        // loc("Top/Mux/4/Mux/0/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1642(args[2][156 * steps + ((cycle - 0) & mask)]);
        assert(x1642 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1643 = x1504 * x1636;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1644 = Fp4(x1643) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1645 = x1507 * x1637;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1646 = Fp4(x1644) + Fp4(x1645);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1647 = x1510 * x1638;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1648 = Fp4(x1646) + Fp4(x1647);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1649 = x1513 * x1639;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1650 = Fp4(x1648) + Fp4(x1649);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1651 = x1516 * x1640;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1652 = Fp4(x1650) + Fp4(x1651);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1653 = x1519 * x1641;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1654 = Fp4(x1652) + Fp4(x1653);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1655 = x1522 * x1642;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1656 = Fp4(x1654) + Fp4(x1655);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1657 = x1656 * x0;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1658(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x1658 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1659(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x1659 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1660(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x1660 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1661(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x1661 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1662(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x1662 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1663(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x1663 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1664(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x1664 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1665 = x1504 * x1658;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1666 = Fp4(x1665) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1667 = x1507 * x1659;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1668 = Fp4(x1666) + Fp4(x1667);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1669 = x1510 * x1660;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1670 = Fp4(x1668) + Fp4(x1669);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1671 = x1513 * x1661;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1672 = Fp4(x1670) + Fp4(x1671);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1673 = x1516 * x1662;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1674 = Fp4(x1672) + Fp4(x1673);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1675 = x1519 * x1663;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1676 = Fp4(x1674) + Fp4(x1675);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1677 = x1522 * x1664;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1678 = Fp4(x1676) + Fp4(x1677);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1679 = x1657 * x1678;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x1680 = x1547 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x1681 = inv(x1635);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x1682 = x1680 * x1681;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x1683 = x1682 * x1591;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x1684 = inv(x1679);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x1685 = x1683 * x1684;
        host_args.at(0) = x1685.elems[0];
        host_args.at(1) = x1685.elems[1];
        host_args.at(2) = x1685.elems[2];
        host_args.at(3) = x1685.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1686(args[2][95 * steps + ((cycle - 0) & mask)]);
    assert(x1686 != Fp::invalid());
    if (x1686 != 0) {
      {
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1687(args[2][108 * steps + ((cycle - 0) & mask)]);
        assert(x1687 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1688(args[2][109 * steps + ((cycle - 0) & mask)]);
        assert(x1688 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1689(args[2][110 * steps + ((cycle - 0) & mask)]);
        assert(x1689 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1690(args[2][111 * steps + ((cycle - 0) & mask)]);
        assert(x1690 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1691(args[2][112 * steps + ((cycle - 0) & mask)]);
        assert(x1691 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1692(args[2][113 * steps + ((cycle - 0) & mask)]);
        assert(x1692 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1693(args[2][114 * steps + ((cycle - 0) & mask)]);
        assert(x1693 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1694(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1695 = x1694 * x1687;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1696 = Fp4(x1695) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1697(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1698 = x1697 * x1688;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1699 = Fp4(x1696) + Fp4(x1698);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1700(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1701 = x1700 * x1689;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1702 = Fp4(x1699) + Fp4(x1701);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1703(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1704 = x1703 * x1690;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1705 = Fp4(x1702) + Fp4(x1704);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1706(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1707 = x1706 * x1691;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1708 = Fp4(x1705) + Fp4(x1707);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1709(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1710 = x1709 * x1692;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1711 = Fp4(x1708) + Fp4(x1710);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1712(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1713 = x1712 * x1693;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1714 = Fp4(x1711) + Fp4(x1713);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1715 = x1714 * x0;
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1716(args[2][115 * steps + ((cycle - 0) & mask)]);
        assert(x1716 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1717(args[2][116 * steps + ((cycle - 0) & mask)]);
        assert(x1717 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1718(args[2][117 * steps + ((cycle - 0) & mask)]);
        assert(x1718 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1719(args[2][118 * steps + ((cycle - 0) & mask)]);
        assert(x1719 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1720(args[2][119 * steps + ((cycle - 0) & mask)]);
        assert(x1720 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1721(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x1721 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1722(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x1722 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1723 = x1694 * x1716;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1724 = Fp4(x1723) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1725 = x1697 * x1717;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1726 = Fp4(x1724) + Fp4(x1725);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1727 = x1700 * x1718;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1728 = Fp4(x1726) + Fp4(x1727);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1729 = x1703 * x1719;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1730 = Fp4(x1728) + Fp4(x1729);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1731 = x1706 * x1720;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1732 = Fp4(x1730) + Fp4(x1731);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1733 = x1709 * x1721;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1734 = Fp4(x1732) + Fp4(x1733);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1735 = x1712 * x1722;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1736 = Fp4(x1734) + Fp4(x1735);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1737 = x1715 * x1736;
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1738(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x1738 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1739(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x1739 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1740(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x1740 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1741(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x1741 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1742(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x1742 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1743(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x1743 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1744(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x1744 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1745 = x1694 * x1738;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1746 = Fp4(x1745) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1747 = x1697 * x1739;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1748 = Fp4(x1746) + Fp4(x1747);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1749 = x1700 * x1740;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1750 = Fp4(x1748) + Fp4(x1749);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1751 = x1703 * x1741;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1752 = Fp4(x1750) + Fp4(x1751);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1753 = x1706 * x1742;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1754 = Fp4(x1752) + Fp4(x1753);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1755 = x1709 * x1743;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1756 = Fp4(x1754) + Fp4(x1755);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1757 = x1712 * x1744;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1758 = Fp4(x1756) + Fp4(x1757);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1759 = x1758 * x0;
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1760(args[2][129 * steps + ((cycle - 0) & mask)]);
        assert(x1760 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1761(args[2][130 * steps + ((cycle - 0) & mask)]);
        assert(x1761 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1762(args[2][131 * steps + ((cycle - 0) & mask)]);
        assert(x1762 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1763(args[2][132 * steps + ((cycle - 0) & mask)]);
        assert(x1763 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1764(args[2][133 * steps + ((cycle - 0) & mask)]);
        assert(x1764 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1765(args[2][134 * steps + ((cycle - 0) & mask)]);
        assert(x1765 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1766(args[2][135 * steps + ((cycle - 0) & mask)]);
        assert(x1766 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1767 = x1694 * x1760;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1768 = Fp4(x1767) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1769 = x1697 * x1761;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1770 = Fp4(x1768) + Fp4(x1769);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1771 = x1700 * x1762;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1772 = Fp4(x1770) + Fp4(x1771);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1773 = x1703 * x1763;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1774 = Fp4(x1772) + Fp4(x1773);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1775 = x1706 * x1764;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1776 = Fp4(x1774) + Fp4(x1775);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1777 = x1709 * x1765;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1778 = Fp4(x1776) + Fp4(x1777);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1779 = x1712 * x1766;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1780 = Fp4(x1778) + Fp4(x1779);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1781 = x1759 * x1780;
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1782(args[2][136 * steps + ((cycle - 0) & mask)]);
        assert(x1782 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1783(args[2][137 * steps + ((cycle - 0) & mask)]);
        assert(x1783 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1784(args[2][138 * steps + ((cycle - 0) & mask)]);
        assert(x1784 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1785(args[2][139 * steps + ((cycle - 0) & mask)]);
        assert(x1785 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1786(args[2][140 * steps + ((cycle - 0) & mask)]);
        assert(x1786 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1787(args[2][141 * steps + ((cycle - 0) & mask)]);
        assert(x1787 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1788(args[2][142 * steps + ((cycle - 0) & mask)]);
        assert(x1788 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1789 = x1694 * x1782;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1790 = Fp4(x1789) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1791 = x1697 * x1783;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1792 = Fp4(x1790) + Fp4(x1791);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1793 = x1700 * x1784;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1794 = Fp4(x1792) + Fp4(x1793);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1795 = x1703 * x1785;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1796 = Fp4(x1794) + Fp4(x1795);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1797 = x1706 * x1786;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1798 = Fp4(x1796) + Fp4(x1797);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1799 = x1709 * x1787;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1800 = Fp4(x1798) + Fp4(x1799);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1801 = x1712 * x1788;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1802 = Fp4(x1800) + Fp4(x1801);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1803 = x1802 * x0;
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1804(args[2][143 * steps + ((cycle - 0) & mask)]);
        assert(x1804 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1805(args[2][144 * steps + ((cycle - 0) & mask)]);
        assert(x1805 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1806(args[2][145 * steps + ((cycle - 0) & mask)]);
        assert(x1806 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1807(args[2][146 * steps + ((cycle - 0) & mask)]);
        assert(x1807 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1808(args[2][147 * steps + ((cycle - 0) & mask)]);
        assert(x1808 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1809(args[2][148 * steps + ((cycle - 0) & mask)]);
        assert(x1809 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1810(args[2][149 * steps + ((cycle - 0) & mask)]);
        assert(x1810 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1811 = x1694 * x1804;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1812 = Fp4(x1811) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1813 = x1697 * x1805;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1814 = Fp4(x1812) + Fp4(x1813);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1815 = x1700 * x1806;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1816 = Fp4(x1814) + Fp4(x1815);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1817 = x1703 * x1807;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1818 = Fp4(x1816) + Fp4(x1817);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1819 = x1706 * x1808;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1820 = Fp4(x1818) + Fp4(x1819);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1821 = x1709 * x1809;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1822 = Fp4(x1820) + Fp4(x1821);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1823 = x1712 * x1810;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1824 = Fp4(x1822) + Fp4(x1823);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1825 = x1803 * x1824;
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1826(args[2][150 * steps + ((cycle - 0) & mask)]);
        assert(x1826 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1827(args[2][151 * steps + ((cycle - 0) & mask)]);
        assert(x1827 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1828(args[2][152 * steps + ((cycle - 0) & mask)]);
        assert(x1828 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1829(args[2][153 * steps + ((cycle - 0) & mask)]);
        assert(x1829 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1830(args[2][154 * steps + ((cycle - 0) & mask)]);
        assert(x1830 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1831(args[2][155 * steps + ((cycle - 0) & mask)]);
        assert(x1831 != Fp::invalid());
        // loc("Top/Mux/4/Mux/1/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1832(args[2][156 * steps + ((cycle - 0) & mask)]);
        assert(x1832 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1833 = x1694 * x1826;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1834 = Fp4(x1833) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1835 = x1697 * x1827;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1836 = Fp4(x1834) + Fp4(x1835);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1837 = x1700 * x1828;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1838 = Fp4(x1836) + Fp4(x1837);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1839 = x1703 * x1829;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1840 = Fp4(x1838) + Fp4(x1839);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1841 = x1706 * x1830;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1842 = Fp4(x1840) + Fp4(x1841);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1843 = x1709 * x1831;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1844 = Fp4(x1842) + Fp4(x1843);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1845 = x1712 * x1832;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1846 = Fp4(x1844) + Fp4(x1845);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1847 = x1846 * x0;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1848(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x1848 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1849(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x1849 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1850(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x1850 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1851(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x1851 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1852(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x1852 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1853(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x1853 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1854(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x1854 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1855 = x1694 * x1848;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1856 = Fp4(x1855) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1857 = x1697 * x1849;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1858 = Fp4(x1856) + Fp4(x1857);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1859 = x1700 * x1850;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1860 = Fp4(x1858) + Fp4(x1859);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1861 = x1703 * x1851;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1862 = Fp4(x1860) + Fp4(x1861);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1863 = x1706 * x1852;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1864 = Fp4(x1862) + Fp4(x1863);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1865 = x1709 * x1853;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1866 = Fp4(x1864) + Fp4(x1865);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1867 = x1712 * x1854;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1868 = Fp4(x1866) + Fp4(x1867);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1869 = x1847 * x1868;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x1870 = x1737 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x1871 = inv(x1825);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x1872 = x1870 * x1871;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x1873 = x1872 * x1781;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x1874 = inv(x1869);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x1875 = x1873 * x1874;
        host_args.at(0) = x1875.elems[0];
        host_args.at(1) = x1875.elems[1];
        host_args.at(2) = x1875.elems[2];
        host_args.at(3) = x1875.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x1876(args[2][96 * steps + ((cycle - 0) & mask)]);
    assert(x1876 != Fp::invalid());
    if (x1876 != 0) {
      {
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1877(args[2][108 * steps + ((cycle - 0) & mask)]);
        assert(x1877 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1878(args[2][109 * steps + ((cycle - 0) & mask)]);
        assert(x1878 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1879(args[2][110 * steps + ((cycle - 0) & mask)]);
        assert(x1879 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1880(args[2][111 * steps + ((cycle - 0) & mask)]);
        assert(x1880 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1881(args[2][112 * steps + ((cycle - 0) & mask)]);
        assert(x1881 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1882(args[2][113 * steps + ((cycle - 0) & mask)]);
        assert(x1882 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1883(args[2][114 * steps + ((cycle - 0) & mask)]);
        assert(x1883 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1884(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1885 = x1884 * x1877;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1886 = Fp4(x1885) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1887(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1888 = x1887 * x1878;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1889 = Fp4(x1886) + Fp4(x1888);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1890(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1891 = x1890 * x1879;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1892 = Fp4(x1889) + Fp4(x1891);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1893(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1894 = x1893 * x1880;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1895 = Fp4(x1892) + Fp4(x1894);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1896(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1897 = x1896 * x1881;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1898 = Fp4(x1895) + Fp4(x1897);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1899(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1900 = x1899 * x1882;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1901 = Fp4(x1898) + Fp4(x1900);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x1902(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1903 = x1902 * x1883;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1904 = Fp4(x1901) + Fp4(x1903);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1905 = x1904 * x0;
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1906(args[2][115 * steps + ((cycle - 0) & mask)]);
        assert(x1906 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1907(args[2][116 * steps + ((cycle - 0) & mask)]);
        assert(x1907 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1908(args[2][117 * steps + ((cycle - 0) & mask)]);
        assert(x1908 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1909(args[2][118 * steps + ((cycle - 0) & mask)]);
        assert(x1909 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1910(args[2][119 * steps + ((cycle - 0) & mask)]);
        assert(x1910 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1911(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x1911 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1912(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x1912 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1913 = x1884 * x1906;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1914 = Fp4(x1913) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1915 = x1887 * x1907;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1916 = Fp4(x1914) + Fp4(x1915);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1917 = x1890 * x1908;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1918 = Fp4(x1916) + Fp4(x1917);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1919 = x1893 * x1909;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1920 = Fp4(x1918) + Fp4(x1919);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1921 = x1896 * x1910;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1922 = Fp4(x1920) + Fp4(x1921);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1923 = x1899 * x1911;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1924 = Fp4(x1922) + Fp4(x1923);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1925 = x1902 * x1912;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1926 = Fp4(x1924) + Fp4(x1925);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1927 = x1905 * x1926;
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1928(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x1928 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1929(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x1929 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1930(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x1930 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1931(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x1931 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1932(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x1932 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1933(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x1933 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1934(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x1934 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1935 = x1884 * x1928;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1936 = Fp4(x1935) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1937 = x1887 * x1929;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1938 = Fp4(x1936) + Fp4(x1937);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1939 = x1890 * x1930;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1940 = Fp4(x1938) + Fp4(x1939);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1941 = x1893 * x1931;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1942 = Fp4(x1940) + Fp4(x1941);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1943 = x1896 * x1932;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1944 = Fp4(x1942) + Fp4(x1943);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1945 = x1899 * x1933;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1946 = Fp4(x1944) + Fp4(x1945);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1947 = x1902 * x1934;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1948 = Fp4(x1946) + Fp4(x1947);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1949 = x1948 * x0;
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1950(args[2][129 * steps + ((cycle - 0) & mask)]);
        assert(x1950 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1951(args[2][130 * steps + ((cycle - 0) & mask)]);
        assert(x1951 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1952(args[2][131 * steps + ((cycle - 0) & mask)]);
        assert(x1952 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1953(args[2][132 * steps + ((cycle - 0) & mask)]);
        assert(x1953 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1954(args[2][133 * steps + ((cycle - 0) & mask)]);
        assert(x1954 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1955(args[2][134 * steps + ((cycle - 0) & mask)]);
        assert(x1955 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1956(args[2][135 * steps + ((cycle - 0) & mask)]);
        assert(x1956 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1957 = x1884 * x1950;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1958 = Fp4(x1957) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1959 = x1887 * x1951;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1960 = Fp4(x1958) + Fp4(x1959);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1961 = x1890 * x1952;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1962 = Fp4(x1960) + Fp4(x1961);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1963 = x1893 * x1953;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1964 = Fp4(x1962) + Fp4(x1963);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1965 = x1896 * x1954;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1966 = Fp4(x1964) + Fp4(x1965);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1967 = x1899 * x1955;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1968 = Fp4(x1966) + Fp4(x1967);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1969 = x1902 * x1956;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1970 = Fp4(x1968) + Fp4(x1969);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1971 = x1949 * x1970;
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1972(args[2][136 * steps + ((cycle - 0) & mask)]);
        assert(x1972 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1973(args[2][137 * steps + ((cycle - 0) & mask)]);
        assert(x1973 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1974(args[2][138 * steps + ((cycle - 0) & mask)]);
        assert(x1974 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1975(args[2][139 * steps + ((cycle - 0) & mask)]);
        assert(x1975 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1976(args[2][140 * steps + ((cycle - 0) & mask)]);
        assert(x1976 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1977(args[2][141 * steps + ((cycle - 0) & mask)]);
        assert(x1977 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1978(args[2][142 * steps + ((cycle - 0) & mask)]);
        assert(x1978 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1979 = x1884 * x1972;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1980 = Fp4(x1979) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1981 = x1887 * x1973;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1982 = Fp4(x1980) + Fp4(x1981);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1983 = x1890 * x1974;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1984 = Fp4(x1982) + Fp4(x1983);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1985 = x1893 * x1975;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1986 = Fp4(x1984) + Fp4(x1985);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1987 = x1896 * x1976;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1988 = Fp4(x1986) + Fp4(x1987);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1989 = x1899 * x1977;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1990 = Fp4(x1988) + Fp4(x1989);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x1991 = x1902 * x1978;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x1992 = Fp4(x1990) + Fp4(x1991);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x1993 = x1992 * x0;
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1994(args[2][143 * steps + ((cycle - 0) & mask)]);
        assert(x1994 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1995(args[2][144 * steps + ((cycle - 0) & mask)]);
        assert(x1995 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1996(args[2][145 * steps + ((cycle - 0) & mask)]);
        assert(x1996 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1997(args[2][146 * steps + ((cycle - 0) & mask)]);
        assert(x1997 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1998(args[2][147 * steps + ((cycle - 0) & mask)]);
        assert(x1998 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x1999(args[2][148 * steps + ((cycle - 0) & mask)]);
        assert(x1999 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2000(args[2][149 * steps + ((cycle - 0) & mask)]);
        assert(x2000 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2001 = x1884 * x1994;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2002 = Fp4(x2001) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2003 = x1887 * x1995;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2004 = Fp4(x2002) + Fp4(x2003);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2005 = x1890 * x1996;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2006 = Fp4(x2004) + Fp4(x2005);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2007 = x1893 * x1997;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2008 = Fp4(x2006) + Fp4(x2007);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2009 = x1896 * x1998;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2010 = Fp4(x2008) + Fp4(x2009);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2011 = x1899 * x1999;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2012 = Fp4(x2010) + Fp4(x2011);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2013 = x1902 * x2000;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2014 = Fp4(x2012) + Fp4(x2013);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2015 = x1993 * x2014;
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2016(args[2][150 * steps + ((cycle - 0) & mask)]);
        assert(x2016 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2017(args[2][151 * steps + ((cycle - 0) & mask)]);
        assert(x2017 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2018(args[2][152 * steps + ((cycle - 0) & mask)]);
        assert(x2018 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2019(args[2][153 * steps + ((cycle - 0) & mask)]);
        assert(x2019 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2020(args[2][154 * steps + ((cycle - 0) & mask)]);
        assert(x2020 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2021(args[2][155 * steps + ((cycle - 0) & mask)]);
        assert(x2021 != Fp::invalid());
        // loc("Top/Mux/4/Mux/2/ComputeCycle/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2022(args[2][156 * steps + ((cycle - 0) & mask)]);
        assert(x2022 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2023 = x1884 * x2016;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2024 = Fp4(x2023) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2025 = x1887 * x2017;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2026 = Fp4(x2024) + Fp4(x2025);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2027 = x1890 * x2018;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2028 = Fp4(x2026) + Fp4(x2027);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2029 = x1893 * x2019;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2030 = Fp4(x2028) + Fp4(x2029);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2031 = x1896 * x2020;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2032 = Fp4(x2030) + Fp4(x2031);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2033 = x1899 * x2021;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2034 = Fp4(x2032) + Fp4(x2033);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2035 = x1902 * x2022;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2036 = Fp4(x2034) + Fp4(x2035);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2037 = x2036 * x0;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2038(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x2038 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2039(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x2039 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2040(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x2040 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2041(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x2041 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2042(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x2042 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2043(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x2043 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2044(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x2044 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2045 = x1884 * x2038;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2046 = Fp4(x2045) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2047 = x1887 * x2039;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2048 = Fp4(x2046) + Fp4(x2047);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2049 = x1890 * x2040;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2050 = Fp4(x2048) + Fp4(x2049);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2051 = x1893 * x2041;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2052 = Fp4(x2050) + Fp4(x2051);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2053 = x1896 * x2042;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2054 = Fp4(x2052) + Fp4(x2053);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2055 = x1899 * x2043;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2056 = Fp4(x2054) + Fp4(x2055);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2057 = x1902 * x2044;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2058 = Fp4(x2056) + Fp4(x2057);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2059 = x2037 * x2058;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2060 = x1927 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2061 = inv(x2015);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2062 = x2060 * x2061;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2063 = x2062 * x1971;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2064 = inv(x2059);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2065 = x2063 * x2064;
        host_args.at(0) = x2065.elems[0];
        host_args.at(1) = x2065.elems[1];
        host_args.at(2) = x2065.elems[2];
        host_args.at(3) = x2065.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x2066(args[2][97 * steps + ((cycle - 0) & mask)]);
    assert(x2066 != Fp::invalid());
    if (x2066 != 0) {
      {
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2067(args[2][108 * steps + ((cycle - 0) & mask)]);
        assert(x2067 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2068(args[2][109 * steps + ((cycle - 0) & mask)]);
        assert(x2068 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2069(args[2][110 * steps + ((cycle - 0) & mask)]);
        assert(x2069 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2070(args[2][111 * steps + ((cycle - 0) & mask)]);
        assert(x2070 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2071(args[2][112 * steps + ((cycle - 0) & mask)]);
        assert(x2071 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2072(args[2][113 * steps + ((cycle - 0) & mask)]);
        assert(x2072 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2073(args[2][114 * steps + ((cycle - 0) & mask)]);
        assert(x2073 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2074(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2075 = x2074 * x2067;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2076 = Fp4(x2075) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2077(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2078 = x2077 * x2068;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2079 = Fp4(x2076) + Fp4(x2078);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2080(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2081 = x2080 * x2069;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2082 = Fp4(x2079) + Fp4(x2081);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2083(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2084 = x2083 * x2070;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2085 = Fp4(x2082) + Fp4(x2084);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2086(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2087 = x2086 * x2071;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2088 = Fp4(x2085) + Fp4(x2087);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2089(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2090 = x2089 * x2072;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2091 = Fp4(x2088) + Fp4(x2090);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2092(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2093 = x2092 * x2073;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2094 = Fp4(x2091) + Fp4(x2093);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2095 = x2094 * x0;
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2096(args[2][115 * steps + ((cycle - 0) & mask)]);
        assert(x2096 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2097(args[2][116 * steps + ((cycle - 0) & mask)]);
        assert(x2097 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2098(args[2][117 * steps + ((cycle - 0) & mask)]);
        assert(x2098 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2099(args[2][118 * steps + ((cycle - 0) & mask)]);
        assert(x2099 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2100(args[2][119 * steps + ((cycle - 0) & mask)]);
        assert(x2100 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2101(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x2101 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2102(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x2102 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2103 = x2074 * x2096;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2104 = Fp4(x2103) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2105 = x2077 * x2097;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2106 = Fp4(x2104) + Fp4(x2105);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2107 = x2080 * x2098;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2108 = Fp4(x2106) + Fp4(x2107);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2109 = x2083 * x2099;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2110 = Fp4(x2108) + Fp4(x2109);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2111 = x2086 * x2100;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2112 = Fp4(x2110) + Fp4(x2111);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2113 = x2089 * x2101;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2114 = Fp4(x2112) + Fp4(x2113);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2115 = x2092 * x2102;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2116 = Fp4(x2114) + Fp4(x2115);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2117 = x2095 * x2116;
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2118(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x2118 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2119(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x2119 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2120(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x2120 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2121(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x2121 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2122(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x2122 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2123(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x2123 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2124(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x2124 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2125 = x2074 * x2118;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2126 = Fp4(x2125) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2127 = x2077 * x2119;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2128 = Fp4(x2126) + Fp4(x2127);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2129 = x2080 * x2120;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2130 = Fp4(x2128) + Fp4(x2129);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2131 = x2083 * x2121;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2132 = Fp4(x2130) + Fp4(x2131);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2133 = x2086 * x2122;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2134 = Fp4(x2132) + Fp4(x2133);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2135 = x2089 * x2123;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2136 = Fp4(x2134) + Fp4(x2135);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2137 = x2092 * x2124;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2138 = Fp4(x2136) + Fp4(x2137);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2139 = x2138 * x0;
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2140(args[2][129 * steps + ((cycle - 0) & mask)]);
        assert(x2140 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2141(args[2][130 * steps + ((cycle - 0) & mask)]);
        assert(x2141 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2142(args[2][131 * steps + ((cycle - 0) & mask)]);
        assert(x2142 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2143(args[2][132 * steps + ((cycle - 0) & mask)]);
        assert(x2143 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2144(args[2][133 * steps + ((cycle - 0) & mask)]);
        assert(x2144 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2145(args[2][134 * steps + ((cycle - 0) & mask)]);
        assert(x2145 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2146(args[2][135 * steps + ((cycle - 0) & mask)]);
        assert(x2146 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2147 = x2074 * x2140;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2148 = Fp4(x2147) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2149 = x2077 * x2141;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2150 = Fp4(x2148) + Fp4(x2149);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2151 = x2080 * x2142;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2152 = Fp4(x2150) + Fp4(x2151);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2153 = x2083 * x2143;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2154 = Fp4(x2152) + Fp4(x2153);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2155 = x2086 * x2144;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2156 = Fp4(x2154) + Fp4(x2155);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2157 = x2089 * x2145;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2158 = Fp4(x2156) + Fp4(x2157);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2159 = x2092 * x2146;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2160 = Fp4(x2158) + Fp4(x2159);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2161 = x2139 * x2160;
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2162(args[2][136 * steps + ((cycle - 0) & mask)]);
        assert(x2162 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2163(args[2][137 * steps + ((cycle - 0) & mask)]);
        assert(x2163 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2164(args[2][138 * steps + ((cycle - 0) & mask)]);
        assert(x2164 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2165(args[2][139 * steps + ((cycle - 0) & mask)]);
        assert(x2165 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2166(args[2][140 * steps + ((cycle - 0) & mask)]);
        assert(x2166 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2167(args[2][141 * steps + ((cycle - 0) & mask)]);
        assert(x2167 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2168(args[2][142 * steps + ((cycle - 0) & mask)]);
        assert(x2168 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2169 = x2074 * x2162;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2170 = Fp4(x2169) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2171 = x2077 * x2163;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2172 = Fp4(x2170) + Fp4(x2171);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2173 = x2080 * x2164;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2174 = Fp4(x2172) + Fp4(x2173);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2175 = x2083 * x2165;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2176 = Fp4(x2174) + Fp4(x2175);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2177 = x2086 * x2166;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2178 = Fp4(x2176) + Fp4(x2177);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2179 = x2089 * x2167;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2180 = Fp4(x2178) + Fp4(x2179);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2181 = x2092 * x2168;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2182 = Fp4(x2180) + Fp4(x2181);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2183 = x2182 * x0;
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2184(args[2][143 * steps + ((cycle - 0) & mask)]);
        assert(x2184 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2185(args[2][144 * steps + ((cycle - 0) & mask)]);
        assert(x2185 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement5/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2186(args[2][145 * steps + ((cycle - 0) & mask)]);
        assert(x2186 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2187(args[2][146 * steps + ((cycle - 0) & mask)]);
        assert(x2187 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2188(args[2][147 * steps + ((cycle - 0) & mask)]);
        assert(x2188 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2189(args[2][148 * steps + ((cycle - 0) & mask)]);
        assert(x2189 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2190(args[2][149 * steps + ((cycle - 0) & mask)]);
        assert(x2190 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2191 = x2074 * x2184;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2192 = Fp4(x2191) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2193 = x2077 * x2185;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2194 = Fp4(x2192) + Fp4(x2193);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2195 = x2080 * x2186;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2196 = Fp4(x2194) + Fp4(x2195);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2197 = x2083 * x2187;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2198 = Fp4(x2196) + Fp4(x2197);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2199 = x2086 * x2188;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2200 = Fp4(x2198) + Fp4(x2199);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2201 = x2089 * x2189;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2202 = Fp4(x2200) + Fp4(x2201);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2203 = x2092 * x2190;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2204 = Fp4(x2202) + Fp4(x2203);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2205 = x2204 * x0;
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2206(args[2][150 * steps + ((cycle - 0) & mask)]);
        assert(x2206 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2207(args[2][151 * steps + ((cycle - 0) & mask)]);
        assert(x2207 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2208(args[2][152 * steps + ((cycle - 0) & mask)]);
        assert(x2208 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2209(args[2][153 * steps + ((cycle - 0) & mask)]);
        assert(x2209 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2210(args[2][154 * steps + ((cycle - 0) & mask)]);
        assert(x2210 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2211(args[2][155 * steps + ((cycle - 0) & mask)]);
        assert(x2211 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2212(args[2][156 * steps + ((cycle - 0) & mask)]);
        assert(x2212 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2213 = x2074 * x2206;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2214 = Fp4(x2213) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2215 = x2077 * x2207;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2216 = Fp4(x2214) + Fp4(x2215);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2217 = x2080 * x2208;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2218 = Fp4(x2216) + Fp4(x2217);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2219 = x2083 * x2209;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2220 = Fp4(x2218) + Fp4(x2219);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2221 = x2086 * x2210;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2222 = Fp4(x2220) + Fp4(x2221);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2223 = x2089 * x2211;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2224 = Fp4(x2222) + Fp4(x2223);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2225 = x2092 * x2212;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2226 = Fp4(x2224) + Fp4(x2225);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2227 = x2205 * x2226;
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2228(args[2][157 * steps + ((cycle - 0) & mask)]);
        assert(x2228 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2229(args[2][158 * steps + ((cycle - 0) & mask)]);
        assert(x2229 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2230(args[2][159 * steps + ((cycle - 0) & mask)]);
        assert(x2230 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2231(args[2][160 * steps + ((cycle - 0) & mask)]);
        assert(x2231 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2232(args[2][161 * steps + ((cycle - 0) & mask)]);
        assert(x2232 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2233(args[2][162 * steps + ((cycle - 0) & mask)]);
        assert(x2233 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2234(args[2][163 * steps + ((cycle - 0) & mask)]);
        assert(x2234 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2235 = x2074 * x2228;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2236 = Fp4(x2235) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2237 = x2077 * x2229;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2238 = Fp4(x2236) + Fp4(x2237);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2239 = x2080 * x2230;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2240 = Fp4(x2238) + Fp4(x2239);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2241 = x2083 * x2231;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2242 = Fp4(x2240) + Fp4(x2241);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2243 = x2086 * x2232;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2244 = Fp4(x2242) + Fp4(x2243);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2245 = x2089 * x2233;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2246 = Fp4(x2244) + Fp4(x2245);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2247 = x2092 * x2234;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2248 = Fp4(x2246) + Fp4(x2247);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2249 = x2248 * x0;
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2250(args[2][164 * steps + ((cycle - 0) & mask)]);
        assert(x2250 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2251(args[2][165 * steps + ((cycle - 0) & mask)]);
        assert(x2251 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2252(args[2][166 * steps + ((cycle - 0) & mask)]);
        assert(x2252 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2253(args[2][167 * steps + ((cycle - 0) & mask)]);
        assert(x2253 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2254(args[2][168 * steps + ((cycle - 0) & mask)]);
        assert(x2254 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2255(args[2][169 * steps + ((cycle - 0) & mask)]);
        assert(x2255 != Fp::invalid());
        // loc("Top/Mux/4/Mux/3/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2256(args[2][170 * steps + ((cycle - 0) & mask)]);
        assert(x2256 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2257 = x2074 * x2250;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2258 = Fp4(x2257) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2259 = x2077 * x2251;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2260 = Fp4(x2258) + Fp4(x2259);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2261 = x2080 * x2252;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2262 = Fp4(x2260) + Fp4(x2261);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2263 = x2083 * x2253;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2264 = Fp4(x2262) + Fp4(x2263);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2265 = x2086 * x2254;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2266 = Fp4(x2264) + Fp4(x2265);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2267 = x2089 * x2255;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2268 = Fp4(x2266) + Fp4(x2267);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2269 = x2092 * x2256;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2270 = Fp4(x2268) + Fp4(x2269);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2271 = x2249 * x2270;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2272(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x2272 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2273(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x2273 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2274(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x2274 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2275(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x2275 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2276(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x2276 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2277(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x2277 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2278(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x2278 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2279 = x2074 * x2272;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2280 = Fp4(x2279) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2281 = x2077 * x2273;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2282 = Fp4(x2280) + Fp4(x2281);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2283 = x2080 * x2274;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2284 = Fp4(x2282) + Fp4(x2283);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2285 = x2083 * x2275;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2286 = Fp4(x2284) + Fp4(x2285);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2287 = x2086 * x2276;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2288 = Fp4(x2286) + Fp4(x2287);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2289 = x2089 * x2277;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2290 = Fp4(x2288) + Fp4(x2289);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2291 = x2092 * x2278;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2292 = Fp4(x2290) + Fp4(x2291);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2293 = x2292 * x0;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2294 = x2117 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2295 = inv(x2227);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2296 = x2294 * x2295;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2297 = x2296 * x2161;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2298 = inv(x2271);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2299 = x2297 * x2298;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2300 = x2299 * x2183;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2301 = inv(x2293);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2302 = x2300 * x2301;
        host_args.at(0) = x2302.elems[0];
        host_args.at(1) = x2302.elems[1];
        host_args.at(2) = x2302.elems[2];
        host_args.at(3) = x2302.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x2303(args[2][98 * steps + ((cycle - 0) & mask)]);
    assert(x2303 != Fp::invalid());
    if (x2303 != 0) {
      {
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2304(args[2][108 * steps + ((cycle - 0) & mask)]);
        assert(x2304 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2305(args[2][109 * steps + ((cycle - 0) & mask)]);
        assert(x2305 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2306(args[2][110 * steps + ((cycle - 0) & mask)]);
        assert(x2306 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2307(args[2][111 * steps + ((cycle - 0) & mask)]);
        assert(x2307 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2308(args[2][112 * steps + ((cycle - 0) & mask)]);
        assert(x2308 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2309(args[2][113 * steps + ((cycle - 0) & mask)]);
        assert(x2309 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2310(args[2][114 * steps + ((cycle - 0) & mask)]);
        assert(x2310 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2311(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2312 = x2311 * x2304;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2313 = Fp4(x2312) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2314(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2315 = x2314 * x2305;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2316 = Fp4(x2313) + Fp4(x2315);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2317(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2318 = x2317 * x2306;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2319 = Fp4(x2316) + Fp4(x2318);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2320(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2321 = x2320 * x2307;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2322 = Fp4(x2319) + Fp4(x2321);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2323(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2324 = x2323 * x2308;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2325 = Fp4(x2322) + Fp4(x2324);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2326(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2327 = x2326 * x2309;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2328 = Fp4(x2325) + Fp4(x2327);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2329(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2330 = x2329 * x2310;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2331 = Fp4(x2328) + Fp4(x2330);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2332 = x2331 * x0;
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2333(args[2][115 * steps + ((cycle - 0) & mask)]);
        assert(x2333 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2334(args[2][116 * steps + ((cycle - 0) & mask)]);
        assert(x2334 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2335(args[2][117 * steps + ((cycle - 0) & mask)]);
        assert(x2335 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2336(args[2][118 * steps + ((cycle - 0) & mask)]);
        assert(x2336 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2337(args[2][119 * steps + ((cycle - 0) & mask)]);
        assert(x2337 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2338(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x2338 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2339(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x2339 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2340 = x2311 * x2333;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2341 = Fp4(x2340) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2342 = x2314 * x2334;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2343 = Fp4(x2341) + Fp4(x2342);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2344 = x2317 * x2335;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2345 = Fp4(x2343) + Fp4(x2344);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2346 = x2320 * x2336;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2347 = Fp4(x2345) + Fp4(x2346);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2348 = x2323 * x2337;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2349 = Fp4(x2347) + Fp4(x2348);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2350 = x2326 * x2338;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2351 = Fp4(x2349) + Fp4(x2350);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2352 = x2329 * x2339;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2353 = Fp4(x2351) + Fp4(x2352);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2354 = x2332 * x2353;
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2355(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x2355 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2356(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x2356 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2357(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x2357 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2358(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x2358 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2359(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x2359 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2360(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x2360 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2361(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x2361 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2362 = x2311 * x2355;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2363 = Fp4(x2362) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2364 = x2314 * x2356;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2365 = Fp4(x2363) + Fp4(x2364);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2366 = x2317 * x2357;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2367 = Fp4(x2365) + Fp4(x2366);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2368 = x2320 * x2358;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2369 = Fp4(x2367) + Fp4(x2368);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2370 = x2323 * x2359;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2371 = Fp4(x2369) + Fp4(x2370);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2372 = x2326 * x2360;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2373 = Fp4(x2371) + Fp4(x2372);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2374 = x2329 * x2361;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2375 = Fp4(x2373) + Fp4(x2374);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2376 = x2375 * x0;
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2377(args[2][129 * steps + ((cycle - 0) & mask)]);
        assert(x2377 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2378(args[2][130 * steps + ((cycle - 0) & mask)]);
        assert(x2378 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2379(args[2][131 * steps + ((cycle - 0) & mask)]);
        assert(x2379 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2380(args[2][132 * steps + ((cycle - 0) & mask)]);
        assert(x2380 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2381(args[2][133 * steps + ((cycle - 0) & mask)]);
        assert(x2381 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2382(args[2][134 * steps + ((cycle - 0) & mask)]);
        assert(x2382 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2383(args[2][135 * steps + ((cycle - 0) & mask)]);
        assert(x2383 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2384 = x2311 * x2377;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2385 = Fp4(x2384) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2386 = x2314 * x2378;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2387 = Fp4(x2385) + Fp4(x2386);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2388 = x2317 * x2379;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2389 = Fp4(x2387) + Fp4(x2388);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2390 = x2320 * x2380;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2391 = Fp4(x2389) + Fp4(x2390);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2392 = x2323 * x2381;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2393 = Fp4(x2391) + Fp4(x2392);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2394 = x2326 * x2382;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2395 = Fp4(x2393) + Fp4(x2394);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2396 = x2329 * x2383;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2397 = Fp4(x2395) + Fp4(x2396);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2398 = x2376 * x2397;
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2399(args[2][136 * steps + ((cycle - 0) & mask)]);
        assert(x2399 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2400(args[2][137 * steps + ((cycle - 0) & mask)]);
        assert(x2400 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2401(args[2][138 * steps + ((cycle - 0) & mask)]);
        assert(x2401 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2402(args[2][139 * steps + ((cycle - 0) & mask)]);
        assert(x2402 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2403(args[2][140 * steps + ((cycle - 0) & mask)]);
        assert(x2403 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2404(args[2][141 * steps + ((cycle - 0) & mask)]);
        assert(x2404 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2405(args[2][142 * steps + ((cycle - 0) & mask)]);
        assert(x2405 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2406 = x2311 * x2399;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2407 = Fp4(x2406) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2408 = x2314 * x2400;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2409 = Fp4(x2407) + Fp4(x2408);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2410 = x2317 * x2401;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2411 = Fp4(x2409) + Fp4(x2410);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2412 = x2320 * x2402;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2413 = Fp4(x2411) + Fp4(x2412);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2414 = x2323 * x2403;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2415 = Fp4(x2413) + Fp4(x2414);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2416 = x2326 * x2404;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2417 = Fp4(x2415) + Fp4(x2416);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2418 = x2329 * x2405;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2419 = Fp4(x2417) + Fp4(x2418);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2420 = x2419 * x0;
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2421(args[2][143 * steps + ((cycle - 0) & mask)]);
        assert(x2421 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2422(args[2][144 * steps + ((cycle - 0) & mask)]);
        assert(x2422 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement5/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2423(args[2][145 * steps + ((cycle - 0) & mask)]);
        assert(x2423 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2424(args[2][146 * steps + ((cycle - 0) & mask)]);
        assert(x2424 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2425(args[2][147 * steps + ((cycle - 0) & mask)]);
        assert(x2425 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2426(args[2][148 * steps + ((cycle - 0) & mask)]);
        assert(x2426 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2427(args[2][149 * steps + ((cycle - 0) & mask)]);
        assert(x2427 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2428 = x2311 * x2421;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2429 = Fp4(x2428) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2430 = x2314 * x2422;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2431 = Fp4(x2429) + Fp4(x2430);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2432 = x2317 * x2423;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2433 = Fp4(x2431) + Fp4(x2432);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2434 = x2320 * x2424;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2435 = Fp4(x2433) + Fp4(x2434);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2436 = x2323 * x2425;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2437 = Fp4(x2435) + Fp4(x2436);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2438 = x2326 * x2426;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2439 = Fp4(x2437) + Fp4(x2438);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2440 = x2329 * x2427;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2441 = Fp4(x2439) + Fp4(x2440);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2442 = x2441 * x0;
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2443(args[2][150 * steps + ((cycle - 0) & mask)]);
        assert(x2443 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2444(args[2][151 * steps + ((cycle - 0) & mask)]);
        assert(x2444 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2445(args[2][152 * steps + ((cycle - 0) & mask)]);
        assert(x2445 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2446(args[2][153 * steps + ((cycle - 0) & mask)]);
        assert(x2446 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2447(args[2][154 * steps + ((cycle - 0) & mask)]);
        assert(x2447 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2448(args[2][155 * steps + ((cycle - 0) & mask)]);
        assert(x2448 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2449(args[2][156 * steps + ((cycle - 0) & mask)]);
        assert(x2449 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2450 = x2311 * x2443;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2451 = Fp4(x2450) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2452 = x2314 * x2444;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2453 = Fp4(x2451) + Fp4(x2452);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2454 = x2317 * x2445;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2455 = Fp4(x2453) + Fp4(x2454);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2456 = x2320 * x2446;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2457 = Fp4(x2455) + Fp4(x2456);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2458 = x2323 * x2447;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2459 = Fp4(x2457) + Fp4(x2458);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2460 = x2326 * x2448;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2461 = Fp4(x2459) + Fp4(x2460);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2462 = x2329 * x2449;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2463 = Fp4(x2461) + Fp4(x2462);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2464 = x2442 * x2463;
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2465(args[2][157 * steps + ((cycle - 0) & mask)]);
        assert(x2465 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2466(args[2][158 * steps + ((cycle - 0) & mask)]);
        assert(x2466 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2467(args[2][159 * steps + ((cycle - 0) & mask)]);
        assert(x2467 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2468(args[2][160 * steps + ((cycle - 0) & mask)]);
        assert(x2468 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2469(args[2][161 * steps + ((cycle - 0) & mask)]);
        assert(x2469 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2470(args[2][162 * steps + ((cycle - 0) & mask)]);
        assert(x2470 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2471(args[2][163 * steps + ((cycle - 0) & mask)]);
        assert(x2471 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2472 = x2311 * x2465;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2473 = Fp4(x2472) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2474 = x2314 * x2466;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2475 = Fp4(x2473) + Fp4(x2474);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2476 = x2317 * x2467;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2477 = Fp4(x2475) + Fp4(x2476);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2478 = x2320 * x2468;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2479 = Fp4(x2477) + Fp4(x2478);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2480 = x2323 * x2469;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2481 = Fp4(x2479) + Fp4(x2480);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2482 = x2326 * x2470;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2483 = Fp4(x2481) + Fp4(x2482);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2484 = x2329 * x2471;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2485 = Fp4(x2483) + Fp4(x2484);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2486 = x2485 * x0;
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2487(args[2][164 * steps + ((cycle - 0) & mask)]);
        assert(x2487 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2488(args[2][165 * steps + ((cycle - 0) & mask)]);
        assert(x2488 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2489(args[2][166 * steps + ((cycle - 0) & mask)]);
        assert(x2489 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2490(args[2][167 * steps + ((cycle - 0) & mask)]);
        assert(x2490 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2491(args[2][168 * steps + ((cycle - 0) & mask)]);
        assert(x2491 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2492(args[2][169 * steps + ((cycle - 0) & mask)]);
        assert(x2492 != Fp::invalid());
        // loc("Top/Mux/4/Mux/4/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2493(args[2][170 * steps + ((cycle - 0) & mask)]);
        assert(x2493 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2494 = x2311 * x2487;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2495 = Fp4(x2494) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2496 = x2314 * x2488;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2497 = Fp4(x2495) + Fp4(x2496);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2498 = x2317 * x2489;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2499 = Fp4(x2497) + Fp4(x2498);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2500 = x2320 * x2490;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2501 = Fp4(x2499) + Fp4(x2500);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2502 = x2323 * x2491;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2503 = Fp4(x2501) + Fp4(x2502);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2504 = x2326 * x2492;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2505 = Fp4(x2503) + Fp4(x2504);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2506 = x2329 * x2493;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2507 = Fp4(x2505) + Fp4(x2506);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2508 = x2486 * x2507;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2509(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x2509 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2510(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x2510 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2511(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x2511 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2512(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x2512 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2513(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x2513 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2514(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x2514 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2515(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x2515 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2516 = x2311 * x2509;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2517 = Fp4(x2516) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2518 = x2314 * x2510;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2519 = Fp4(x2517) + Fp4(x2518);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2520 = x2317 * x2511;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2521 = Fp4(x2519) + Fp4(x2520);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2522 = x2320 * x2512;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2523 = Fp4(x2521) + Fp4(x2522);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2524 = x2323 * x2513;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2525 = Fp4(x2523) + Fp4(x2524);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2526 = x2326 * x2514;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2527 = Fp4(x2525) + Fp4(x2526);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2528 = x2329 * x2515;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2529 = Fp4(x2527) + Fp4(x2528);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2530 = x2529 * x0;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2531 = x2354 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2532 = inv(x2464);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2533 = x2531 * x2532;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2534 = x2533 * x2398;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2535 = inv(x2508);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2536 = x2534 * x2535;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2537 = x2536 * x2420;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2538 = inv(x2530);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2539 = x2537 * x2538;
        host_args.at(0) = x2539.elems[0];
        host_args.at(1) = x2539.elems[1];
        host_args.at(2) = x2539.elems[2];
        host_args.at(3) = x2539.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x2540(args[2][99 * steps + ((cycle - 0) & mask)]);
    assert(x2540 != Fp::invalid());
    if (x2540 != 0) {
      {
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2541(args[2][108 * steps + ((cycle - 0) & mask)]);
        assert(x2541 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2542(args[2][109 * steps + ((cycle - 0) & mask)]);
        assert(x2542 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2543(args[2][110 * steps + ((cycle - 0) & mask)]);
        assert(x2543 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2544(args[2][111 * steps + ((cycle - 0) & mask)]);
        assert(x2544 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2545(args[2][112 * steps + ((cycle - 0) & mask)]);
        assert(x2545 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2546(args[2][113 * steps + ((cycle - 0) & mask)]);
        assert(x2546 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2547(args[2][114 * steps + ((cycle - 0) & mask)]);
        assert(x2547 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2548(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2549 = x2548 * x2541;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2550 = Fp4(x2549) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2551(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2552 = x2551 * x2542;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2553 = Fp4(x2550) + Fp4(x2552);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2554(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2555 = x2554 * x2543;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2556 = Fp4(x2553) + Fp4(x2555);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2557(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2558 = x2557 * x2544;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2559 = Fp4(x2556) + Fp4(x2558);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2560(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2561 = x2560 * x2545;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2562 = Fp4(x2559) + Fp4(x2561);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2563(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2564 = x2563 * x2546;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2565 = Fp4(x2562) + Fp4(x2564);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2566(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2567 = x2566 * x2547;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2568 = Fp4(x2565) + Fp4(x2567);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2569 = x2568 * x0;
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2570(args[2][115 * steps + ((cycle - 0) & mask)]);
        assert(x2570 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2571(args[2][116 * steps + ((cycle - 0) & mask)]);
        assert(x2571 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2572(args[2][117 * steps + ((cycle - 0) & mask)]);
        assert(x2572 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2573(args[2][118 * steps + ((cycle - 0) & mask)]);
        assert(x2573 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2574(args[2][119 * steps + ((cycle - 0) & mask)]);
        assert(x2574 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2575(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x2575 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2576(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x2576 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2577 = x2548 * x2570;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2578 = Fp4(x2577) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2579 = x2551 * x2571;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2580 = Fp4(x2578) + Fp4(x2579);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2581 = x2554 * x2572;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2582 = Fp4(x2580) + Fp4(x2581);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2583 = x2557 * x2573;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2584 = Fp4(x2582) + Fp4(x2583);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2585 = x2560 * x2574;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2586 = Fp4(x2584) + Fp4(x2585);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2587 = x2563 * x2575;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2588 = Fp4(x2586) + Fp4(x2587);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2589 = x2566 * x2576;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2590 = Fp4(x2588) + Fp4(x2589);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2591 = x2569 * x2590;
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2592(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x2592 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2593(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x2593 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2594(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x2594 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2595(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x2595 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2596(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x2596 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2597(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x2597 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2598(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x2598 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2599 = x2548 * x2592;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2600 = Fp4(x2599) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2601 = x2551 * x2593;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2602 = Fp4(x2600) + Fp4(x2601);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2603 = x2554 * x2594;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2604 = Fp4(x2602) + Fp4(x2603);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2605 = x2557 * x2595;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2606 = Fp4(x2604) + Fp4(x2605);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2607 = x2560 * x2596;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2608 = Fp4(x2606) + Fp4(x2607);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2609 = x2563 * x2597;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2610 = Fp4(x2608) + Fp4(x2609);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2611 = x2566 * x2598;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2612 = Fp4(x2610) + Fp4(x2611);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2613 = x2612 * x0;
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2614(args[2][129 * steps + ((cycle - 0) & mask)]);
        assert(x2614 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2615(args[2][130 * steps + ((cycle - 0) & mask)]);
        assert(x2615 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2616(args[2][131 * steps + ((cycle - 0) & mask)]);
        assert(x2616 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2617(args[2][132 * steps + ((cycle - 0) & mask)]);
        assert(x2617 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2618(args[2][133 * steps + ((cycle - 0) & mask)]);
        assert(x2618 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2619(args[2][134 * steps + ((cycle - 0) & mask)]);
        assert(x2619 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2620(args[2][135 * steps + ((cycle - 0) & mask)]);
        assert(x2620 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2621 = x2548 * x2614;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2622 = Fp4(x2621) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2623 = x2551 * x2615;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2624 = Fp4(x2622) + Fp4(x2623);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2625 = x2554 * x2616;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2626 = Fp4(x2624) + Fp4(x2625);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2627 = x2557 * x2617;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2628 = Fp4(x2626) + Fp4(x2627);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2629 = x2560 * x2618;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2630 = Fp4(x2628) + Fp4(x2629);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2631 = x2563 * x2619;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2632 = Fp4(x2630) + Fp4(x2631);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2633 = x2566 * x2620;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2634 = Fp4(x2632) + Fp4(x2633);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2635 = x2613 * x2634;
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2636(args[2][136 * steps + ((cycle - 0) & mask)]);
        assert(x2636 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2637(args[2][137 * steps + ((cycle - 0) & mask)]);
        assert(x2637 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2638(args[2][138 * steps + ((cycle - 0) & mask)]);
        assert(x2638 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2639(args[2][139 * steps + ((cycle - 0) & mask)]);
        assert(x2639 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2640(args[2][140 * steps + ((cycle - 0) & mask)]);
        assert(x2640 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2641(args[2][141 * steps + ((cycle - 0) & mask)]);
        assert(x2641 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2642(args[2][142 * steps + ((cycle - 0) & mask)]);
        assert(x2642 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2643 = x2548 * x2636;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2644 = Fp4(x2643) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2645 = x2551 * x2637;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2646 = Fp4(x2644) + Fp4(x2645);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2647 = x2554 * x2638;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2648 = Fp4(x2646) + Fp4(x2647);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2649 = x2557 * x2639;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2650 = Fp4(x2648) + Fp4(x2649);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2651 = x2560 * x2640;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2652 = Fp4(x2650) + Fp4(x2651);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2653 = x2563 * x2641;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2654 = Fp4(x2652) + Fp4(x2653);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2655 = x2566 * x2642;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2656 = Fp4(x2654) + Fp4(x2655);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2657 = x2656 * x0;
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2658(args[2][143 * steps + ((cycle - 0) & mask)]);
        assert(x2658 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2659(args[2][144 * steps + ((cycle - 0) & mask)]);
        assert(x2659 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement5/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2660(args[2][145 * steps + ((cycle - 0) & mask)]);
        assert(x2660 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2661(args[2][146 * steps + ((cycle - 0) & mask)]);
        assert(x2661 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2662(args[2][147 * steps + ((cycle - 0) & mask)]);
        assert(x2662 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2663(args[2][148 * steps + ((cycle - 0) & mask)]);
        assert(x2663 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2664(args[2][149 * steps + ((cycle - 0) & mask)]);
        assert(x2664 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2665 = x2548 * x2658;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2666 = Fp4(x2665) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2667 = x2551 * x2659;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2668 = Fp4(x2666) + Fp4(x2667);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2669 = x2554 * x2660;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2670 = Fp4(x2668) + Fp4(x2669);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2671 = x2557 * x2661;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2672 = Fp4(x2670) + Fp4(x2671);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2673 = x2560 * x2662;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2674 = Fp4(x2672) + Fp4(x2673);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2675 = x2563 * x2663;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2676 = Fp4(x2674) + Fp4(x2675);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2677 = x2566 * x2664;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2678 = Fp4(x2676) + Fp4(x2677);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2679 = x2657 * x2678;
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2680(args[2][150 * steps + ((cycle - 0) & mask)]);
        assert(x2680 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2681(args[2][151 * steps + ((cycle - 0) & mask)]);
        assert(x2681 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2682(args[2][152 * steps + ((cycle - 0) & mask)]);
        assert(x2682 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2683(args[2][153 * steps + ((cycle - 0) & mask)]);
        assert(x2683 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2684(args[2][154 * steps + ((cycle - 0) & mask)]);
        assert(x2684 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2685(args[2][155 * steps + ((cycle - 0) & mask)]);
        assert(x2685 != Fp::invalid());
        // loc("Top/Mux/4/Mux/5/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2686(args[2][156 * steps + ((cycle - 0) & mask)]);
        assert(x2686 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2687 = x2548 * x2680;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2688 = Fp4(x2687) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2689 = x2551 * x2681;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2690 = Fp4(x2688) + Fp4(x2689);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2691 = x2554 * x2682;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2692 = Fp4(x2690) + Fp4(x2691);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2693 = x2557 * x2683;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2694 = Fp4(x2692) + Fp4(x2693);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2695 = x2560 * x2684;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2696 = Fp4(x2694) + Fp4(x2695);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2697 = x2563 * x2685;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2698 = Fp4(x2696) + Fp4(x2697);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2699 = x2566 * x2686;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2700 = Fp4(x2698) + Fp4(x2699);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2701 = x2700 * x0;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2702(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x2702 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2703(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x2703 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2704(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x2704 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2705(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x2705 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2706(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x2706 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2707(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x2707 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2708(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x2708 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2709 = x2548 * x2702;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2710 = Fp4(x2709) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2711 = x2551 * x2703;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2712 = Fp4(x2710) + Fp4(x2711);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2713 = x2554 * x2704;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2714 = Fp4(x2712) + Fp4(x2713);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2715 = x2557 * x2705;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2716 = Fp4(x2714) + Fp4(x2715);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2717 = x2560 * x2706;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2718 = Fp4(x2716) + Fp4(x2717);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2719 = x2563 * x2707;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2720 = Fp4(x2718) + Fp4(x2719);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2721 = x2566 * x2708;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2722 = Fp4(x2720) + Fp4(x2721);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2723 = x2701 * x2722;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2724 = x2591 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2725 = inv(x2679);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2726 = x2724 * x2725;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2727 = x2726 * x2635;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2728 = inv(x2723);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2729 = x2727 * x2728;
        host_args.at(0) = x2729.elems[0];
        host_args.at(1) = x2729.elems[1];
        host_args.at(2) = x2729.elems[2];
        host_args.at(3) = x2729.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x2730(args[2][100 * steps + ((cycle - 0) & mask)]);
    assert(x2730 != Fp::invalid());
    if (x2730 != 0) {
      {
        host_args.at(0) = x0.elems[0];
        host_args.at(1) = x0.elems[1];
        host_args.at(2) = x0.elems[2];
        host_args.at(3) = x0.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x2731(args[2][101 * steps + ((cycle - 0) & mask)]);
    assert(x2731 != Fp::invalid());
    if (x2731 != 0) {
      {
        host_args.at(0) = x0.elems[0];
        host_args.at(1) = x0.elems[1];
        host_args.at(2) = x0.elems[2];
        host_args.at(3) = x0.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x2732(args[2][102 * steps + ((cycle - 0) & mask)]);
    assert(x2732 != Fp::invalid());
    if (x2732 != 0) {
      {
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2733(args[2][108 * steps + ((cycle - 0) & mask)]);
        assert(x2733 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2734(args[2][109 * steps + ((cycle - 0) & mask)]);
        assert(x2734 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2735(args[2][110 * steps + ((cycle - 0) & mask)]);
        assert(x2735 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2736(args[2][111 * steps + ((cycle - 0) & mask)]);
        assert(x2736 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2737(args[2][112 * steps + ((cycle - 0) & mask)]);
        assert(x2737 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2738(args[2][113 * steps + ((cycle - 0) & mask)]);
        assert(x2738 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2739(args[2][114 * steps + ((cycle - 0) & mask)]);
        assert(x2739 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2740(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2741 = x2740 * x2733;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2742 = Fp4(x2741) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2743(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2744 = x2743 * x2734;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2745 = Fp4(x2742) + Fp4(x2744);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2746(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2747 = x2746 * x2735;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2748 = Fp4(x2745) + Fp4(x2747);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2749(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2750 = x2749 * x2736;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2751 = Fp4(x2748) + Fp4(x2750);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2752(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2753 = x2752 * x2737;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2754 = Fp4(x2751) + Fp4(x2753);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2755(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2756 = x2755 * x2738;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2757 = Fp4(x2754) + Fp4(x2756);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2758(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2759 = x2758 * x2739;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2760 = Fp4(x2757) + Fp4(x2759);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2761 = x2760 * x0;
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2762(args[2][115 * steps + ((cycle - 0) & mask)]);
        assert(x2762 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2763(args[2][116 * steps + ((cycle - 0) & mask)]);
        assert(x2763 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2764(args[2][117 * steps + ((cycle - 0) & mask)]);
        assert(x2764 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2765(args[2][118 * steps + ((cycle - 0) & mask)]);
        assert(x2765 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2766(args[2][119 * steps + ((cycle - 0) & mask)]);
        assert(x2766 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2767(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x2767 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2768(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x2768 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2769 = x2740 * x2762;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2770 = Fp4(x2769) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2771 = x2743 * x2763;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2772 = Fp4(x2770) + Fp4(x2771);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2773 = x2746 * x2764;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2774 = Fp4(x2772) + Fp4(x2773);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2775 = x2749 * x2765;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2776 = Fp4(x2774) + Fp4(x2775);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2777 = x2752 * x2766;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2778 = Fp4(x2776) + Fp4(x2777);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2779 = x2755 * x2767;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2780 = Fp4(x2778) + Fp4(x2779);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2781 = x2758 * x2768;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2782 = Fp4(x2780) + Fp4(x2781);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2783 = x2761 * x2782;
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2784(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x2784 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2785(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x2785 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2786(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x2786 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2787(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x2787 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2788(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x2788 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2789(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x2789 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2790(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x2790 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2791 = x2740 * x2784;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2792 = Fp4(x2791) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2793 = x2743 * x2785;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2794 = Fp4(x2792) + Fp4(x2793);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2795 = x2746 * x2786;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2796 = Fp4(x2794) + Fp4(x2795);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2797 = x2749 * x2787;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2798 = Fp4(x2796) + Fp4(x2797);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2799 = x2752 * x2788;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2800 = Fp4(x2798) + Fp4(x2799);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2801 = x2755 * x2789;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2802 = Fp4(x2800) + Fp4(x2801);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2803 = x2758 * x2790;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2804 = Fp4(x2802) + Fp4(x2803);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2805 = x2804 * x0;
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2806(args[2][129 * steps + ((cycle - 0) & mask)]);
        assert(x2806 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2807(args[2][130 * steps + ((cycle - 0) & mask)]);
        assert(x2807 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2808(args[2][131 * steps + ((cycle - 0) & mask)]);
        assert(x2808 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2809(args[2][132 * steps + ((cycle - 0) & mask)]);
        assert(x2809 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2810(args[2][133 * steps + ((cycle - 0) & mask)]);
        assert(x2810 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2811(args[2][134 * steps + ((cycle - 0) & mask)]);
        assert(x2811 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2812(args[2][135 * steps + ((cycle - 0) & mask)]);
        assert(x2812 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2813 = x2740 * x2806;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2814 = Fp4(x2813) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2815 = x2743 * x2807;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2816 = Fp4(x2814) + Fp4(x2815);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2817 = x2746 * x2808;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2818 = Fp4(x2816) + Fp4(x2817);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2819 = x2749 * x2809;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2820 = Fp4(x2818) + Fp4(x2819);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2821 = x2752 * x2810;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2822 = Fp4(x2820) + Fp4(x2821);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2823 = x2755 * x2811;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2824 = Fp4(x2822) + Fp4(x2823);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2825 = x2758 * x2812;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2826 = Fp4(x2824) + Fp4(x2825);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2827 = x2805 * x2826;
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2828(args[2][136 * steps + ((cycle - 0) & mask)]);
        assert(x2828 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2829(args[2][137 * steps + ((cycle - 0) & mask)]);
        assert(x2829 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2830(args[2][138 * steps + ((cycle - 0) & mask)]);
        assert(x2830 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2831(args[2][139 * steps + ((cycle - 0) & mask)]);
        assert(x2831 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2832(args[2][140 * steps + ((cycle - 0) & mask)]);
        assert(x2832 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2833(args[2][141 * steps + ((cycle - 0) & mask)]);
        assert(x2833 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2834(args[2][142 * steps + ((cycle - 0) & mask)]);
        assert(x2834 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2835 = x2740 * x2828;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2836 = Fp4(x2835) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2837 = x2743 * x2829;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2838 = Fp4(x2836) + Fp4(x2837);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2839 = x2746 * x2830;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2840 = Fp4(x2838) + Fp4(x2839);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2841 = x2749 * x2831;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2842 = Fp4(x2840) + Fp4(x2841);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2843 = x2752 * x2832;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2844 = Fp4(x2842) + Fp4(x2843);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2845 = x2755 * x2833;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2846 = Fp4(x2844) + Fp4(x2845);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2847 = x2758 * x2834;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2848 = Fp4(x2846) + Fp4(x2847);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2849 = x2848 * x0;
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2850(args[2][143 * steps + ((cycle - 0) & mask)]);
        assert(x2850 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2851(args[2][144 * steps + ((cycle - 0) & mask)]);
        assert(x2851 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement5/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2852(args[2][145 * steps + ((cycle - 0) & mask)]);
        assert(x2852 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2853(args[2][146 * steps + ((cycle - 0) & mask)]);
        assert(x2853 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2854(args[2][147 * steps + ((cycle - 0) & mask)]);
        assert(x2854 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2855(args[2][148 * steps + ((cycle - 0) & mask)]);
        assert(x2855 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2856(args[2][149 * steps + ((cycle - 0) & mask)]);
        assert(x2856 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2857 = x2740 * x2850;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2858 = Fp4(x2857) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2859 = x2743 * x2851;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2860 = Fp4(x2858) + Fp4(x2859);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2861 = x2746 * x2852;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2862 = Fp4(x2860) + Fp4(x2861);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2863 = x2749 * x2853;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2864 = Fp4(x2862) + Fp4(x2863);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2865 = x2752 * x2854;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2866 = Fp4(x2864) + Fp4(x2865);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2867 = x2755 * x2855;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2868 = Fp4(x2866) + Fp4(x2867);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2869 = x2758 * x2856;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2870 = Fp4(x2868) + Fp4(x2869);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2871 = x2870 * x0;
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2872(args[2][150 * steps + ((cycle - 0) & mask)]);
        assert(x2872 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2873(args[2][151 * steps + ((cycle - 0) & mask)]);
        assert(x2873 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2874(args[2][152 * steps + ((cycle - 0) & mask)]);
        assert(x2874 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2875(args[2][153 * steps + ((cycle - 0) & mask)]);
        assert(x2875 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2876(args[2][154 * steps + ((cycle - 0) & mask)]);
        assert(x2876 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2877(args[2][155 * steps + ((cycle - 0) & mask)]);
        assert(x2877 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2878(args[2][156 * steps + ((cycle - 0) & mask)]);
        assert(x2878 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2879 = x2740 * x2872;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2880 = Fp4(x2879) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2881 = x2743 * x2873;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2882 = Fp4(x2880) + Fp4(x2881);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2883 = x2746 * x2874;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2884 = Fp4(x2882) + Fp4(x2883);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2885 = x2749 * x2875;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2886 = Fp4(x2884) + Fp4(x2885);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2887 = x2752 * x2876;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2888 = Fp4(x2886) + Fp4(x2887);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2889 = x2755 * x2877;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2890 = Fp4(x2888) + Fp4(x2889);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2891 = x2758 * x2878;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2892 = Fp4(x2890) + Fp4(x2891);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2893 = x2871 * x2892;
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2894(args[2][157 * steps + ((cycle - 0) & mask)]);
        assert(x2894 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2895(args[2][158 * steps + ((cycle - 0) & mask)]);
        assert(x2895 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2896(args[2][159 * steps + ((cycle - 0) & mask)]);
        assert(x2896 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2897(args[2][160 * steps + ((cycle - 0) & mask)]);
        assert(x2897 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2898(args[2][161 * steps + ((cycle - 0) & mask)]);
        assert(x2898 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2899(args[2][162 * steps + ((cycle - 0) & mask)]);
        assert(x2899 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement7/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2900(args[2][163 * steps + ((cycle - 0) & mask)]);
        assert(x2900 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2901 = x2740 * x2894;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2902 = Fp4(x2901) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2903 = x2743 * x2895;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2904 = Fp4(x2902) + Fp4(x2903);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2905 = x2746 * x2896;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2906 = Fp4(x2904) + Fp4(x2905);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2907 = x2749 * x2897;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2908 = Fp4(x2906) + Fp4(x2907);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2909 = x2752 * x2898;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2910 = Fp4(x2908) + Fp4(x2909);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2911 = x2755 * x2899;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2912 = Fp4(x2910) + Fp4(x2911);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2913 = x2758 * x2900;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2914 = Fp4(x2912) + Fp4(x2913);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2915 = x2914 * x0;
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2916(args[2][164 * steps + ((cycle - 0) & mask)]);
        assert(x2916 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2917(args[2][165 * steps + ((cycle - 0) & mask)]);
        assert(x2917 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2918(args[2][166 * steps + ((cycle - 0) & mask)]);
        assert(x2918 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2919(args[2][167 * steps + ((cycle - 0) & mask)]);
        assert(x2919 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2920(args[2][168 * steps + ((cycle - 0) & mask)]);
        assert(x2920 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2921(args[2][169 * steps + ((cycle - 0) & mask)]);
        assert(x2921 != Fp::invalid());
        // loc("Top/Mux/4/Mux/8/RamBody/PlonkBody/RamPlonkElement8/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2922(args[2][170 * steps + ((cycle - 0) & mask)]);
        assert(x2922 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2923 = x2740 * x2916;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2924 = Fp4(x2923) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2925 = x2743 * x2917;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2926 = Fp4(x2924) + Fp4(x2925);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2927 = x2746 * x2918;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2928 = Fp4(x2926) + Fp4(x2927);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2929 = x2749 * x2919;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2930 = Fp4(x2928) + Fp4(x2929);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2931 = x2752 * x2920;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2932 = Fp4(x2930) + Fp4(x2931);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2933 = x2755 * x2921;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2934 = Fp4(x2932) + Fp4(x2933);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2935 = x2758 * x2922;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2936 = Fp4(x2934) + Fp4(x2935);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2937 = x2915 * x2936;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2938(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x2938 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2939(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x2939 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2940(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x2940 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2941(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x2941 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2942(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x2942 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2943(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x2943 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2944(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x2944 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2945 = x2740 * x2938;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2946 = Fp4(x2945) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2947 = x2743 * x2939;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2948 = Fp4(x2946) + Fp4(x2947);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2949 = x2746 * x2940;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2950 = Fp4(x2948) + Fp4(x2949);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2951 = x2749 * x2941;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2952 = Fp4(x2950) + Fp4(x2951);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2953 = x2752 * x2942;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2954 = Fp4(x2952) + Fp4(x2953);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2955 = x2755 * x2943;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2956 = Fp4(x2954) + Fp4(x2955);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2957 = x2758 * x2944;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2958 = Fp4(x2956) + Fp4(x2957);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2959 = x2958 * x0;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2960 = x2783 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2961 = inv(x2893);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2962 = x2960 * x2961;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2963 = x2962 * x2827;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2964 = inv(x2937);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2965 = x2963 * x2964;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2966 = x2965 * x2849;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x2967 = inv(x2959);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x2968 = x2966 * x2967;
        host_args.at(0) = x2968.elems[0];
        host_args.at(1) = x2968.elems[1];
        host_args.at(2) = x2968.elems[2];
        host_args.at(3) = x2968.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x2969(args[2][103 * steps + ((cycle - 0) & mask)]);
    assert(x2969 != Fp::invalid());
    if (x2969 != 0) {
      {
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2970(args[2][108 * steps + ((cycle - 0) & mask)]);
        assert(x2970 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2971(args[2][109 * steps + ((cycle - 0) & mask)]);
        assert(x2971 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2972(args[2][110 * steps + ((cycle - 0) & mask)]);
        assert(x2972 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2973(args[2][111 * steps + ((cycle - 0) & mask)]);
        assert(x2973 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2974(args[2][112 * steps + ((cycle - 0) & mask)]);
        assert(x2974 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2975(args[2][113 * steps + ((cycle - 0) & mask)]);
        assert(x2975 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2976(args[2][114 * steps + ((cycle - 0) & mask)]);
        assert(x2976 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2977(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2978 = x2977 * x2970;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2979 = Fp4(x2978) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2980(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2981 = x2980 * x2971;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2982 = Fp4(x2979) + Fp4(x2981);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2983(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2984 = x2983 * x2972;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2985 = Fp4(x2982) + Fp4(x2984);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2986(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2987 = x2986 * x2973;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2988 = Fp4(x2985) + Fp4(x2987);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2989(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2990 = x2989 * x2974;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2991 = Fp4(x2988) + Fp4(x2990);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2992(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2993 = x2992 * x2975;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2994 = Fp4(x2991) + Fp4(x2993);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x2995(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x2996 = x2995 * x2976;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x2997 = Fp4(x2994) + Fp4(x2996);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x2998 = x2997 * x0;
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x2999(args[2][115 * steps + ((cycle - 0) & mask)]);
        assert(x2999 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3000(args[2][116 * steps + ((cycle - 0) & mask)]);
        assert(x3000 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3001(args[2][117 * steps + ((cycle - 0) & mask)]);
        assert(x3001 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3002(args[2][118 * steps + ((cycle - 0) & mask)]);
        assert(x3002 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3003(args[2][119 * steps + ((cycle - 0) & mask)]);
        assert(x3003 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3004(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x3004 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3005(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x3005 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3006 = x2977 * x2999;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3007 = Fp4(x3006) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3008 = x2980 * x3000;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3009 = Fp4(x3007) + Fp4(x3008);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3010 = x2983 * x3001;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3011 = Fp4(x3009) + Fp4(x3010);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3012 = x2986 * x3002;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3013 = Fp4(x3011) + Fp4(x3012);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3014 = x2989 * x3003;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3015 = Fp4(x3013) + Fp4(x3014);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3016 = x2992 * x3004;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3017 = Fp4(x3015) + Fp4(x3016);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3018 = x2995 * x3005;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3019 = Fp4(x3017) + Fp4(x3018);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3020 = x2998 * x3019;
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3021(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x3021 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3022(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x3022 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3023(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x3023 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3024(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x3024 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3025(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x3025 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3026(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x3026 != Fp::invalid());
        // loc("Top/Mux/4/Mux/9/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3027(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x3027 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3028 = x2977 * x3021;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3029 = Fp4(x3028) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3030 = x2980 * x3022;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3031 = Fp4(x3029) + Fp4(x3030);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3032 = x2983 * x3023;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3033 = Fp4(x3031) + Fp4(x3032);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3034 = x2986 * x3024;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3035 = Fp4(x3033) + Fp4(x3034);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3036 = x2989 * x3025;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3037 = Fp4(x3035) + Fp4(x3036);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3038 = x2992 * x3026;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3039 = Fp4(x3037) + Fp4(x3038);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3040 = x2995 * x3027;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3041 = Fp4(x3039) + Fp4(x3040);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3042 = x3041 * x0;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3043(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x3043 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3044(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x3044 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3045(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x3045 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3046(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x3046 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3047(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x3047 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3048(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x3048 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3049(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x3049 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3050 = x2977 * x3043;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3051 = Fp4(x3050) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3052 = x2980 * x3044;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3053 = Fp4(x3051) + Fp4(x3052);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3054 = x2983 * x3045;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3055 = Fp4(x3053) + Fp4(x3054);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3056 = x2986 * x3046;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3057 = Fp4(x3055) + Fp4(x3056);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3058 = x2989 * x3047;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3059 = Fp4(x3057) + Fp4(x3058);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3060 = x2992 * x3048;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3061 = Fp4(x3059) + Fp4(x3060);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3062 = x2995 * x3049;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3063 = Fp4(x3061) + Fp4(x3062);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3064 = x3042 * x3063;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3065 = x3020 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x3066 = inv(x3064);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3067 = x3065 * x3066;
        host_args.at(0) = x3067.elems[0];
        host_args.at(1) = x3067.elems[1];
        host_args.at(2) = x3067.elems[2];
        host_args.at(3) = x3067.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x3068(args[2][104 * steps + ((cycle - 0) & mask)]);
    assert(x3068 != Fp::invalid());
    if (x3068 != 0) {
      {
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3069(args[2][108 * steps + ((cycle - 0) & mask)]);
        assert(x3069 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3070(args[2][109 * steps + ((cycle - 0) & mask)]);
        assert(x3070 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3071(args[2][110 * steps + ((cycle - 0) & mask)]);
        assert(x3071 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3072(args[2][111 * steps + ((cycle - 0) & mask)]);
        assert(x3072 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3073(args[2][112 * steps + ((cycle - 0) & mask)]);
        assert(x3073 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3074(args[2][113 * steps + ((cycle - 0) & mask)]);
        assert(x3074 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3075(args[2][114 * steps + ((cycle - 0) & mask)]);
        assert(x3075 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3076(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3077 = x3076 * x3069;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3078 = Fp4(x3077) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3079(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3080 = x3079 * x3070;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3081 = Fp4(x3078) + Fp4(x3080);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3082(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3083 = x3082 * x3071;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3084 = Fp4(x3081) + Fp4(x3083);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3085(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3086 = x3085 * x3072;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3087 = Fp4(x3084) + Fp4(x3086);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3088(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3089 = x3088 * x3073;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3090 = Fp4(x3087) + Fp4(x3089);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3091(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3092 = x3091 * x3074;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3093 = Fp4(x3090) + Fp4(x3092);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3094(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3095 = x3094 * x3075;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3096 = Fp4(x3093) + Fp4(x3095);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3097 = x3096 * x0;
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3098(args[2][115 * steps + ((cycle - 0) & mask)]);
        assert(x3098 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3099(args[2][116 * steps + ((cycle - 0) & mask)]);
        assert(x3099 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3100(args[2][117 * steps + ((cycle - 0) & mask)]);
        assert(x3100 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3101(args[2][118 * steps + ((cycle - 0) & mask)]);
        assert(x3101 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3102(args[2][119 * steps + ((cycle - 0) & mask)]);
        assert(x3102 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3103(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x3103 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3104(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x3104 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3105 = x3076 * x3098;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3106 = Fp4(x3105) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3107 = x3079 * x3099;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3108 = Fp4(x3106) + Fp4(x3107);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3109 = x3082 * x3100;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3110 = Fp4(x3108) + Fp4(x3109);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3111 = x3085 * x3101;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3112 = Fp4(x3110) + Fp4(x3111);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3113 = x3088 * x3102;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3114 = Fp4(x3112) + Fp4(x3113);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3115 = x3091 * x3103;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3116 = Fp4(x3114) + Fp4(x3115);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3117 = x3094 * x3104;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3118 = Fp4(x3116) + Fp4(x3117);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3119 = x3097 * x3118;
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3120(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x3120 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3121(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x3121 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3122(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x3122 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3123(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x3123 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3124(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x3124 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3125(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x3125 != Fp::invalid());
        // loc("Top/Mux/4/Mux/10/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3126(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x3126 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3127 = x3076 * x3120;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3128 = Fp4(x3127) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3129 = x3079 * x3121;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3130 = Fp4(x3128) + Fp4(x3129);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3131 = x3082 * x3122;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3132 = Fp4(x3130) + Fp4(x3131);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3133 = x3085 * x3123;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3134 = Fp4(x3132) + Fp4(x3133);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3135 = x3088 * x3124;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3136 = Fp4(x3134) + Fp4(x3135);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3137 = x3091 * x3125;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3138 = Fp4(x3136) + Fp4(x3137);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3139 = x3094 * x3126;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3140 = Fp4(x3138) + Fp4(x3139);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3141 = x3140 * x0;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3142(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x3142 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3143(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x3143 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3144(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x3144 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3145(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x3145 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3146(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x3146 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3147(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x3147 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3148(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x3148 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3149 = x3076 * x3142;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3150 = Fp4(x3149) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3151 = x3079 * x3143;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3152 = Fp4(x3150) + Fp4(x3151);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3153 = x3082 * x3144;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3154 = Fp4(x3152) + Fp4(x3153);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3155 = x3085 * x3145;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3156 = Fp4(x3154) + Fp4(x3155);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3157 = x3088 * x3146;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3158 = Fp4(x3156) + Fp4(x3157);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3159 = x3091 * x3147;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3160 = Fp4(x3158) + Fp4(x3159);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3161 = x3094 * x3148;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3162 = Fp4(x3160) + Fp4(x3161);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3163 = x3141 * x3162;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3164 = x3119 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x3165 = inv(x3163);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3166 = x3164 * x3165;
        host_args.at(0) = x3166.elems[0];
        host_args.at(1) = x3166.elems[1];
        host_args.at(2) = x3166.elems[2];
        host_args.at(3) = x3166.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x3167(args[2][105 * steps + ((cycle - 0) & mask)]);
    assert(x3167 != Fp::invalid());
    if (x3167 != 0) {
      {
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3168(args[2][108 * steps + ((cycle - 0) & mask)]);
        assert(x3168 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3169(args[2][109 * steps + ((cycle - 0) & mask)]);
        assert(x3169 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3170(args[2][110 * steps + ((cycle - 0) & mask)]);
        assert(x3170 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3171(args[2][111 * steps + ((cycle - 0) & mask)]);
        assert(x3171 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3172(args[2][112 * steps + ((cycle - 0) & mask)]);
        assert(x3172 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3173(args[2][113 * steps + ((cycle - 0) & mask)]);
        assert(x3173 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3174(args[2][114 * steps + ((cycle - 0) & mask)]);
        assert(x3174 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3175(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3176 = x3175 * x3168;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3177 = Fp4(x3176) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3178(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3179 = x3178 * x3169;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3180 = Fp4(x3177) + Fp4(x3179);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3181(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3182 = x3181 * x3170;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3183 = Fp4(x3180) + Fp4(x3182);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3184(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3185 = x3184 * x3171;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3186 = Fp4(x3183) + Fp4(x3185);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3187(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3188 = x3187 * x3172;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3189 = Fp4(x3186) + Fp4(x3188);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3190(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3191 = x3190 * x3173;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3192 = Fp4(x3189) + Fp4(x3191);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3193(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3194 = x3193 * x3174;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3195 = Fp4(x3192) + Fp4(x3194);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3196 = x3195 * x0;
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3197(args[2][115 * steps + ((cycle - 0) & mask)]);
        assert(x3197 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3198(args[2][116 * steps + ((cycle - 0) & mask)]);
        assert(x3198 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3199(args[2][117 * steps + ((cycle - 0) & mask)]);
        assert(x3199 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3200(args[2][118 * steps + ((cycle - 0) & mask)]);
        assert(x3200 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3201(args[2][119 * steps + ((cycle - 0) & mask)]);
        assert(x3201 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3202(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x3202 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3203(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x3203 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3204 = x3175 * x3197;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3205 = Fp4(x3204) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3206 = x3178 * x3198;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3207 = Fp4(x3205) + Fp4(x3206);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3208 = x3181 * x3199;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3209 = Fp4(x3207) + Fp4(x3208);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3210 = x3184 * x3200;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3211 = Fp4(x3209) + Fp4(x3210);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3212 = x3187 * x3201;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3213 = Fp4(x3211) + Fp4(x3212);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3214 = x3190 * x3202;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3215 = Fp4(x3213) + Fp4(x3214);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3216 = x3193 * x3203;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3217 = Fp4(x3215) + Fp4(x3216);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3218 = x3196 * x3217;
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3219(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x3219 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3220(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x3220 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3221(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x3221 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3222(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x3222 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3223(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x3223 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3224(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x3224 != Fp::invalid());
        // loc("Top/Mux/4/Mux/11/ShaCycle/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3225(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x3225 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3226 = x3175 * x3219;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3227 = Fp4(x3226) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3228 = x3178 * x3220;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3229 = Fp4(x3227) + Fp4(x3228);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3230 = x3181 * x3221;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3231 = Fp4(x3229) + Fp4(x3230);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3232 = x3184 * x3222;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3233 = Fp4(x3231) + Fp4(x3232);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3234 = x3187 * x3223;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3235 = Fp4(x3233) + Fp4(x3234);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3236 = x3190 * x3224;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3237 = Fp4(x3235) + Fp4(x3236);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3238 = x3193 * x3225;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3239 = Fp4(x3237) + Fp4(x3238);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3240 = x3239 * x0;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3241(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x3241 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3242(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x3242 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3243(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x3243 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3244(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x3244 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3245(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x3245 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3246(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x3246 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3247(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x3247 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3248 = x3175 * x3241;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3249 = Fp4(x3248) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3250 = x3178 * x3242;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3251 = Fp4(x3249) + Fp4(x3250);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3252 = x3181 * x3243;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3253 = Fp4(x3251) + Fp4(x3252);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3254 = x3184 * x3244;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3255 = Fp4(x3253) + Fp4(x3254);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3256 = x3187 * x3245;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3257 = Fp4(x3255) + Fp4(x3256);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3258 = x3190 * x3246;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3259 = Fp4(x3257) + Fp4(x3258);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3260 = x3193 * x3247;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3261 = Fp4(x3259) + Fp4(x3260);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3262 = x3240 * x3261;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3263 = x3218 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x3264 = inv(x3262);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3265 = x3263 * x3264;
        host_args.at(0) = x3265.elems[0];
        host_args.at(1) = x3265.elems[1];
        host_args.at(2) = x3265.elems[2];
        host_args.at(3) = x3265.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x3266(args[2][106 * steps + ((cycle - 0) & mask)]);
    assert(x3266 != Fp::invalid());
    if (x3266 != 0) {
      {
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3267(args[2][108 * steps + ((cycle - 0) & mask)]);
        assert(x3267 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3268(args[2][109 * steps + ((cycle - 0) & mask)]);
        assert(x3268 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3269(args[2][110 * steps + ((cycle - 0) & mask)]);
        assert(x3269 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3270(args[2][111 * steps + ((cycle - 0) & mask)]);
        assert(x3270 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3271(args[2][112 * steps + ((cycle - 0) & mask)]);
        assert(x3271 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3272(args[2][113 * steps + ((cycle - 0) & mask)]);
        assert(x3272 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3273(args[2][114 * steps + ((cycle - 0) & mask)]);
        assert(x3273 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3274(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3275 = x3274 * x3267;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3276 = Fp4(x3275) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3277(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3278 = x3277 * x3268;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3279 = Fp4(x3276) + Fp4(x3278);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3280(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3281 = x3280 * x3269;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3282 = Fp4(x3279) + Fp4(x3281);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3283(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3284 = x3283 * x3270;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3285 = Fp4(x3282) + Fp4(x3284);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3286(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3287 = x3286 * x3271;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3288 = Fp4(x3285) + Fp4(x3287);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3289(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3290 = x3289 * x3272;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3291 = Fp4(x3288) + Fp4(x3290);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3292(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3293 = x3292 * x3273;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3294 = Fp4(x3291) + Fp4(x3293);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3295 = x3294 * x0;
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3296(args[2][115 * steps + ((cycle - 0) & mask)]);
        assert(x3296 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3297(args[2][116 * steps + ((cycle - 0) & mask)]);
        assert(x3297 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3298(args[2][117 * steps + ((cycle - 0) & mask)]);
        assert(x3298 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3299(args[2][118 * steps + ((cycle - 0) & mask)]);
        assert(x3299 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3300(args[2][119 * steps + ((cycle - 0) & mask)]);
        assert(x3300 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3301(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x3301 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3302(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x3302 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3303 = x3274 * x3296;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3304 = Fp4(x3303) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3305 = x3277 * x3297;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3306 = Fp4(x3304) + Fp4(x3305);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3307 = x3280 * x3298;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3308 = Fp4(x3306) + Fp4(x3307);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3309 = x3283 * x3299;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3310 = Fp4(x3308) + Fp4(x3309);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3311 = x3286 * x3300;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3312 = Fp4(x3310) + Fp4(x3311);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3313 = x3289 * x3301;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3314 = Fp4(x3312) + Fp4(x3313);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3315 = x3292 * x3302;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3316 = Fp4(x3314) + Fp4(x3315);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3317 = x3295 * x3316;
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3318(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x3318 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3319(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x3319 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3320(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x3320 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3321(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x3321 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3322(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x3322 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3323(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x3323 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3324(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x3324 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3325 = x3274 * x3318;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3326 = Fp4(x3325) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3327 = x3277 * x3319;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3328 = Fp4(x3326) + Fp4(x3327);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3329 = x3280 * x3320;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3330 = Fp4(x3328) + Fp4(x3329);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3331 = x3283 * x3321;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3332 = Fp4(x3330) + Fp4(x3331);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3333 = x3286 * x3322;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3334 = Fp4(x3332) + Fp4(x3333);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3335 = x3289 * x3323;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3336 = Fp4(x3334) + Fp4(x3335);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3337 = x3292 * x3324;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3338 = Fp4(x3336) + Fp4(x3337);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3339 = x3338 * x0;
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3340(args[2][129 * steps + ((cycle - 0) & mask)]);
        assert(x3340 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3341(args[2][130 * steps + ((cycle - 0) & mask)]);
        assert(x3341 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3342(args[2][131 * steps + ((cycle - 0) & mask)]);
        assert(x3342 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3343(args[2][132 * steps + ((cycle - 0) & mask)]);
        assert(x3343 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3344(args[2][133 * steps + ((cycle - 0) & mask)]);
        assert(x3344 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3345(args[2][134 * steps + ((cycle - 0) & mask)]);
        assert(x3345 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3346(args[2][135 * steps + ((cycle - 0) & mask)]);
        assert(x3346 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3347 = x3274 * x3340;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3348 = Fp4(x3347) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3349 = x3277 * x3341;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3350 = Fp4(x3348) + Fp4(x3349);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3351 = x3280 * x3342;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3352 = Fp4(x3350) + Fp4(x3351);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3353 = x3283 * x3343;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3354 = Fp4(x3352) + Fp4(x3353);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3355 = x3286 * x3344;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3356 = Fp4(x3354) + Fp4(x3355);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3357 = x3289 * x3345;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3358 = Fp4(x3356) + Fp4(x3357);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3359 = x3292 * x3346;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3360 = Fp4(x3358) + Fp4(x3359);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3361 = x3339 * x3360;
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3362(args[2][136 * steps + ((cycle - 0) & mask)]);
        assert(x3362 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3363(args[2][137 * steps + ((cycle - 0) & mask)]);
        assert(x3363 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3364(args[2][138 * steps + ((cycle - 0) & mask)]);
        assert(x3364 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3365(args[2][139 * steps + ((cycle - 0) & mask)]);
        assert(x3365 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3366(args[2][140 * steps + ((cycle - 0) & mask)]);
        assert(x3366 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3367(args[2][141 * steps + ((cycle - 0) & mask)]);
        assert(x3367 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3368(args[2][142 * steps + ((cycle - 0) & mask)]);
        assert(x3368 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3369 = x3274 * x3362;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3370 = Fp4(x3369) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3371 = x3277 * x3363;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3372 = Fp4(x3370) + Fp4(x3371);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3373 = x3280 * x3364;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3374 = Fp4(x3372) + Fp4(x3373);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3375 = x3283 * x3365;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3376 = Fp4(x3374) + Fp4(x3375);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3377 = x3286 * x3366;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3378 = Fp4(x3376) + Fp4(x3377);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3379 = x3289 * x3367;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3380 = Fp4(x3378) + Fp4(x3379);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3381 = x3292 * x3368;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3382 = Fp4(x3380) + Fp4(x3381);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3383 = x3382 * x0;
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3384(args[2][143 * steps + ((cycle - 0) & mask)]);
        assert(x3384 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3385(args[2][144 * steps + ((cycle - 0) & mask)]);
        assert(x3385 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement5/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3386(args[2][145 * steps + ((cycle - 0) & mask)]);
        assert(x3386 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3387(args[2][146 * steps + ((cycle - 0) & mask)]);
        assert(x3387 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3388(args[2][147 * steps + ((cycle - 0) & mask)]);
        assert(x3388 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3389(args[2][148 * steps + ((cycle - 0) & mask)]);
        assert(x3389 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3390(args[2][149 * steps + ((cycle - 0) & mask)]);
        assert(x3390 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3391 = x3274 * x3384;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3392 = Fp4(x3391) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3393 = x3277 * x3385;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3394 = Fp4(x3392) + Fp4(x3393);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3395 = x3280 * x3386;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3396 = Fp4(x3394) + Fp4(x3395);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3397 = x3283 * x3387;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3398 = Fp4(x3396) + Fp4(x3397);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3399 = x3286 * x3388;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3400 = Fp4(x3398) + Fp4(x3399);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3401 = x3289 * x3389;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3402 = Fp4(x3400) + Fp4(x3401);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3403 = x3292 * x3390;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3404 = Fp4(x3402) + Fp4(x3403);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3405 = x3383 * x3404;
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3406(args[2][150 * steps + ((cycle - 0) & mask)]);
        assert(x3406 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3407(args[2][151 * steps + ((cycle - 0) & mask)]);
        assert(x3407 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3408(args[2][152 * steps + ((cycle - 0) & mask)]);
        assert(x3408 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3409(args[2][153 * steps + ((cycle - 0) & mask)]);
        assert(x3409 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3410(args[2][154 * steps + ((cycle - 0) & mask)]);
        assert(x3410 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3411(args[2][155 * steps + ((cycle - 0) & mask)]);
        assert(x3411 != Fp::invalid());
        // loc("Top/Mux/4/Mux/12/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3412(args[2][156 * steps + ((cycle - 0) & mask)]);
        assert(x3412 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3413 = x3274 * x3406;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3414 = Fp4(x3413) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3415 = x3277 * x3407;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3416 = Fp4(x3414) + Fp4(x3415);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3417 = x3280 * x3408;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3418 = Fp4(x3416) + Fp4(x3417);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3419 = x3283 * x3409;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3420 = Fp4(x3418) + Fp4(x3419);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3421 = x3286 * x3410;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3422 = Fp4(x3420) + Fp4(x3421);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3423 = x3289 * x3411;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3424 = Fp4(x3422) + Fp4(x3423);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3425 = x3292 * x3412;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3426 = Fp4(x3424) + Fp4(x3425);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3427 = x3426 * x0;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3428(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x3428 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3429(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x3429 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3430(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x3430 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3431(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x3431 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3432(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x3432 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3433(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x3433 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3434(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x3434 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3435 = x3274 * x3428;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3436 = Fp4(x3435) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3437 = x3277 * x3429;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3438 = Fp4(x3436) + Fp4(x3437);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3439 = x3280 * x3430;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3440 = Fp4(x3438) + Fp4(x3439);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3441 = x3283 * x3431;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3442 = Fp4(x3440) + Fp4(x3441);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3443 = x3286 * x3432;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3444 = Fp4(x3442) + Fp4(x3443);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3445 = x3289 * x3433;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3446 = Fp4(x3444) + Fp4(x3445);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3447 = x3292 * x3434;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3448 = Fp4(x3446) + Fp4(x3447);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3449 = x3427 * x3448;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3450 = x3317 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x3451 = inv(x3405);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3452 = x3450 * x3451;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3453 = x3452 * x3361;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x3454 = inv(x3449);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3455 = x3453 * x3454;
        host_args.at(0) = x3455.elems[0];
        host_args.at(1) = x3455.elems[1];
        host_args.at(2) = x3455.elems[2];
        host_args.at(3) = x3455.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
    // loc("cirgen/compiler/edsl/component.cpp":39:15)
    Fp x3456(args[2][107 * steps + ((cycle - 0) & mask)]);
    assert(x3456 != Fp::invalid());
    if (x3456 != 0) {
      {
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3457(args[2][120 * steps + ((cycle - 0) & mask)]);
        assert(x3457 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3458(args[2][121 * steps + ((cycle - 0) & mask)]);
        assert(x3458 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3459(args[2][122 * steps + ((cycle - 0) & mask)]);
        assert(x3459 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3460(args[2][123 * steps + ((cycle - 0) & mask)]);
        assert(x3460 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3461(args[2][124 * steps + ((cycle - 0) & mask)]);
        assert(x3461 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3462(args[2][125 * steps + ((cycle - 0) & mask)]);
        assert(x3462 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3463(args[2][126 * steps + ((cycle - 0) & mask)]);
        assert(x3463 != Fp::invalid());
        // loc("Top/PlonkHeader1/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3464(args[3][8], args[3][9], args[3][10], args[3][11]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3465 = x3464 * x3457;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3466 = Fp4(x3465) + Fp4(x0);
        // loc("Top/PlonkHeader1/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3467(args[3][12], args[3][13], args[3][14], args[3][15]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3468 = x3467 * x3458;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3469 = Fp4(x3466) + Fp4(x3468);
        // loc("Top/PlonkHeader1/Reg3"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3470(args[3][16], args[3][17], args[3][18], args[3][19]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3471 = x3470 * x3459;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3472 = Fp4(x3469) + Fp4(x3471);
        // loc("Top/PlonkHeader1/Reg4"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3473(args[3][20], args[3][21], args[3][22], args[3][23]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3474 = x3473 * x3460;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3475 = Fp4(x3472) + Fp4(x3474);
        // loc("Top/PlonkHeader1/Reg5"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3476(args[3][24], args[3][25], args[3][26], args[3][27]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3477 = x3476 * x3461;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3478 = Fp4(x3475) + Fp4(x3477);
        // loc("Top/PlonkHeader1/Reg6"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3479(args[3][28], args[3][29], args[3][30], args[3][31]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3480 = x3479 * x3462;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3481 = Fp4(x3478) + Fp4(x3480);
        // loc("Top/PlonkHeader1/Reg7"("./cirgen/compiler/edsl/edsl.h":113:61))
        Fp4 x3482(args[3][32], args[3][33], args[3][34], args[3][35]);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3483 = x3482 * x3463;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3484 = Fp4(x3481) + Fp4(x3483);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3485 = x3484 * x0;
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3486(args[2][127 * steps + ((cycle - 0) & mask)]);
        assert(x3486 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3487(args[2][128 * steps + ((cycle - 0) & mask)]);
        assert(x3487 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement1/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3488(args[2][129 * steps + ((cycle - 0) & mask)]);
        assert(x3488 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3489(args[2][130 * steps + ((cycle - 0) & mask)]);
        assert(x3489 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3490(args[2][131 * steps + ((cycle - 0) & mask)]);
        assert(x3490 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3491(args[2][132 * steps + ((cycle - 0) & mask)]);
        assert(x3491 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement1/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3492(args[2][133 * steps + ((cycle - 0) & mask)]);
        assert(x3492 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3493 = x3464 * x3486;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3494 = Fp4(x3493) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3495 = x3467 * x3487;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3496 = Fp4(x3494) + Fp4(x3495);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3497 = x3470 * x3488;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3498 = Fp4(x3496) + Fp4(x3497);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3499 = x3473 * x3489;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3500 = Fp4(x3498) + Fp4(x3499);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3501 = x3476 * x3490;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3502 = Fp4(x3500) + Fp4(x3501);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3503 = x3479 * x3491;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3504 = Fp4(x3502) + Fp4(x3503);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3505 = x3482 * x3492;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3506 = Fp4(x3504) + Fp4(x3505);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3507 = x3485 * x3506;
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3508(args[2][134 * steps + ((cycle - 0) & mask)]);
        assert(x3508 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3509(args[2][135 * steps + ((cycle - 0) & mask)]);
        assert(x3509 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3510(args[2][136 * steps + ((cycle - 0) & mask)]);
        assert(x3510 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3511(args[2][137 * steps + ((cycle - 0) & mask)]);
        assert(x3511 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3512(args[2][138 * steps + ((cycle - 0) & mask)]);
        assert(x3512 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3513(args[2][139 * steps + ((cycle - 0) & mask)]);
        assert(x3513 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement2/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3514(args[2][140 * steps + ((cycle - 0) & mask)]);
        assert(x3514 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3515 = x3464 * x3508;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3516 = Fp4(x3515) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3517 = x3467 * x3509;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3518 = Fp4(x3516) + Fp4(x3517);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3519 = x3470 * x3510;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3520 = Fp4(x3518) + Fp4(x3519);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3521 = x3473 * x3511;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3522 = Fp4(x3520) + Fp4(x3521);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3523 = x3476 * x3512;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3524 = Fp4(x3522) + Fp4(x3523);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3525 = x3479 * x3513;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3526 = Fp4(x3524) + Fp4(x3525);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3527 = x3482 * x3514;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3528 = Fp4(x3526) + Fp4(x3527);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3529 = x3528 * x0;
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3530(args[2][141 * steps + ((cycle - 0) & mask)]);
        assert(x3530 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3531(args[2][142 * steps + ((cycle - 0) & mask)]);
        assert(x3531 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3532(args[2][143 * steps + ((cycle - 0) & mask)]);
        assert(x3532 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3533(args[2][144 * steps + ((cycle - 0) & mask)]);
        assert(x3533 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3534(args[2][145 * steps + ((cycle - 0) & mask)]);
        assert(x3534 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3535(args[2][146 * steps + ((cycle - 0) & mask)]);
        assert(x3535 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement3/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3536(args[2][147 * steps + ((cycle - 0) & mask)]);
        assert(x3536 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3537 = x3464 * x3530;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3538 = Fp4(x3537) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3539 = x3467 * x3531;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3540 = Fp4(x3538) + Fp4(x3539);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3541 = x3470 * x3532;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3542 = Fp4(x3540) + Fp4(x3541);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3543 = x3473 * x3533;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3544 = Fp4(x3542) + Fp4(x3543);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3545 = x3476 * x3534;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3546 = Fp4(x3544) + Fp4(x3545);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3547 = x3479 * x3535;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3548 = Fp4(x3546) + Fp4(x3547);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3549 = x3482 * x3536;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3550 = Fp4(x3548) + Fp4(x3549);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3551 = x3529 * x3550;
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement4/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3552(args[2][148 * steps + ((cycle - 0) & mask)]);
        assert(x3552 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement4/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3553(args[2][149 * steps + ((cycle - 0) & mask)]);
        assert(x3553 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement4/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3554(args[2][150 * steps + ((cycle - 0) & mask)]);
        assert(x3554 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3555(args[2][151 * steps + ((cycle - 0) & mask)]);
        assert(x3555 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3556(args[2][152 * steps + ((cycle - 0) & mask)]);
        assert(x3556 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3557(args[2][153 * steps + ((cycle - 0) & mask)]);
        assert(x3557 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement4/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3558(args[2][154 * steps + ((cycle - 0) & mask)]);
        assert(x3558 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3559 = x3464 * x3552;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3560 = Fp4(x3559) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3561 = x3467 * x3553;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3562 = Fp4(x3560) + Fp4(x3561);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3563 = x3470 * x3554;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3564 = Fp4(x3562) + Fp4(x3563);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3565 = x3473 * x3555;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3566 = Fp4(x3564) + Fp4(x3565);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3567 = x3476 * x3556;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3568 = Fp4(x3566) + Fp4(x3567);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3569 = x3479 * x3557;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3570 = Fp4(x3568) + Fp4(x3569);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3571 = x3482 * x3558;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3572 = Fp4(x3570) + Fp4(x3571);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3573 = x3572 * x0;
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement5/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3574(args[2][155 * steps + ((cycle - 0) & mask)]);
        assert(x3574 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement5/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3575(args[2][156 * steps + ((cycle - 0) & mask)]);
        assert(x3575 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement5/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3576(args[2][157 * steps + ((cycle - 0) & mask)]);
        assert(x3576 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3577(args[2][158 * steps + ((cycle - 0) & mask)]);
        assert(x3577 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3578(args[2][159 * steps + ((cycle - 0) & mask)]);
        assert(x3578 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3579(args[2][160 * steps + ((cycle - 0) & mask)]);
        assert(x3579 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement5/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3580(args[2][161 * steps + ((cycle - 0) & mask)]);
        assert(x3580 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3581 = x3464 * x3574;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3582 = Fp4(x3581) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3583 = x3467 * x3575;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3584 = Fp4(x3582) + Fp4(x3583);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3585 = x3470 * x3576;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3586 = Fp4(x3584) + Fp4(x3585);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3587 = x3473 * x3577;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3588 = Fp4(x3586) + Fp4(x3587);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3589 = x3476 * x3578;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3590 = Fp4(x3588) + Fp4(x3589);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3591 = x3479 * x3579;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3592 = Fp4(x3590) + Fp4(x3591);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3593 = x3482 * x3580;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3594 = Fp4(x3592) + Fp4(x3593);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3595 = x3573 * x3594;
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3596(args[2][162 * steps + ((cycle - 0) & mask)]);
        assert(x3596 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3597(args[2][163 * steps + ((cycle - 0) & mask)]);
        assert(x3597 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3598(args[2][164 * steps + ((cycle - 0) & mask)]);
        assert(x3598 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3599(args[2][165 * steps + ((cycle - 0) & mask)]);
        assert(x3599 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3600(args[2][166 * steps + ((cycle - 0) & mask)]);
        assert(x3600 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3601(args[2][167 * steps + ((cycle - 0) & mask)]);
        assert(x3601 != Fp::invalid());
        // loc("Top/Mux/4/Mux/13/RamBody/PlonkBody/RamPlonkElement6/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3602(args[2][168 * steps + ((cycle - 0) & mask)]);
        assert(x3602 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3603 = x3464 * x3596;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3604 = Fp4(x3603) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3605 = x3467 * x3597;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3606 = Fp4(x3604) + Fp4(x3605);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3607 = x3470 * x3598;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3608 = Fp4(x3606) + Fp4(x3607);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3609 = x3473 * x3599;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3610 = Fp4(x3608) + Fp4(x3609);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3611 = x3476 * x3600;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3612 = Fp4(x3610) + Fp4(x3611);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3613 = x3479 * x3601;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3614 = Fp4(x3612) + Fp4(x3613);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3615 = x3482 * x3602;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3616 = Fp4(x3614) + Fp4(x3615);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3617 = x3616 * x0;
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3618(args[2][2 * steps + ((cycle - 0) & mask)]);
        assert(x3618 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3619(args[2][3 * steps + ((cycle - 0) & mask)]);
        assert(x3619 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3620(args[2][4 * steps + ((cycle - 0) & mask)]);
        assert(x3620 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3621(args[2][5 * steps + ((cycle - 0) & mask)]);
        assert(x3621 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3622(args[2][6 * steps + ((cycle - 0) & mask)]);
        assert(x3622 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg2"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3623(args[2][7 * steps + ((cycle - 0) & mask)]);
        assert(x3623 != Fp::invalid());
        // loc("Top/PlonkHeader1/RamPlonkElement/U32Reg/Reg3"("./cirgen/compiler/edsl/component.h":85:27))
        Fp x3624(args[2][8 * steps + ((cycle - 0) & mask)]);
        assert(x3624 != Fp::invalid());
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3625 = x3464 * x3618;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3626 = Fp4(x3625) + Fp4(x0);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3627 = x3467 * x3619;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3628 = Fp4(x3626) + Fp4(x3627);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3629 = x3470 * x3620;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3630 = Fp4(x3628) + Fp4(x3629);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3631 = x3473 * x3621;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3632 = Fp4(x3630) + Fp4(x3631);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3633 = x3476 * x3622;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3634 = Fp4(x3632) + Fp4(x3633);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3635 = x3479 * x3623;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3636 = Fp4(x3634) + Fp4(x3635);
        // loc("./cirgen/components/plonk.h":214:23)
        Fp4 x3637 = x3482 * x3624;
        // loc("./cirgen/components/plonk.h":214:17)
        Fp4 x3638 = Fp4(x3636) + Fp4(x3637);
        // loc("./cirgen/components/plonk.h":216:16)
        Fp4 x3639 = x3617 * x3638;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3640 = x3507 * x0;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x3641 = inv(x3595);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3642 = x3640 * x3641;
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3643 = x3642 * x3551;
        // loc("./cirgen/components/plonk.h":257:42)
        auto x3644 = inv(x3639);
        // loc("./cirgen/components/plonk.h":257:16)
        Fp4 x3645 = x3643 * x3644;
        host_args.at(0) = x3645.elems[0];
        host_args.at(1) = x3645.elems[1];
        host_args.at(2) = x3645.elems[2];
        host_args.at(3) = x3645.elems[3];
        host(ctx, "plonkWriteAccum", "ram", host_args.data(), 4, host_outs.data(), 0);
      }
    }
  }
  if (x6 != 0) {
    {
      // loc("Top/Mux/5/BytesBody/PlonkBody/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x3646(args[2][10 * steps + ((cycle - 0) & mask)]);
      assert(x3646 != Fp::invalid());
      // loc("Top/Mux/5/BytesBody/PlonkBody/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x3647(args[2][11 * steps + ((cycle - 0) & mask)]);
      assert(x3647 != Fp::invalid());
      // loc("Top/PlonkHeader/Reg1"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x3648(args[3][0], args[3][1], args[3][2], args[3][3]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x3649 = x3648 * x3646;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x3650 = Fp4(x3649) + Fp4(x0);
      // loc("Top/PlonkHeader/Reg2"("./cirgen/compiler/edsl/edsl.h":113:61))
      Fp4 x3651(args[3][4], args[3][5], args[3][6], args[3][7]);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x3652 = x3651 * x3647;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x3653 = Fp4(x3650) + Fp4(x3652);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x3654 = x3653 * x0;
      // loc("Top/Mux/5/BytesBody/PlonkBody/BytesPlonkElement1/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x3655(args[2][12 * steps + ((cycle - 0) & mask)]);
      assert(x3655 != Fp::invalid());
      // loc("Top/Mux/5/BytesBody/PlonkBody/BytesPlonkElement1/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x3656(args[2][13 * steps + ((cycle - 0) & mask)]);
      assert(x3656 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x3657 = x3648 * x3655;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x3658 = Fp4(x3657) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x3659 = x3651 * x3656;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x3660 = Fp4(x3658) + Fp4(x3659);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x3661 = x3654 * x3660;
      // loc("Top/Mux/5/BytesBody/PlonkBody/BytesPlonkElement2/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x3662(args[2][14 * steps + ((cycle - 0) & mask)]);
      assert(x3662 != Fp::invalid());
      // loc("Top/Mux/5/BytesBody/PlonkBody/BytesPlonkElement2/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x3663(args[2][15 * steps + ((cycle - 0) & mask)]);
      assert(x3663 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x3664 = x3648 * x3662;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x3665 = Fp4(x3664) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x3666 = x3651 * x3663;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x3667 = Fp4(x3665) + Fp4(x3666);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x3668 = x3667 * x0;
      // loc("Top/PlonkHeader/BytesPlonkElement/Reg"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x3669(args[2][0 * steps + ((cycle - 0) & mask)]);
      assert(x3669 != Fp::invalid());
      // loc("Top/PlonkHeader/BytesPlonkElement/Reg1"("./cirgen/compiler/edsl/component.h":85:27))
      Fp x3670(args[2][1 * steps + ((cycle - 0) & mask)]);
      assert(x3670 != Fp::invalid());
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x3671 = x3648 * x3669;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x3672 = Fp4(x3671) + Fp4(x0);
      // loc("./cirgen/components/plonk.h":214:23)
      Fp4 x3673 = x3651 * x3670;
      // loc("./cirgen/components/plonk.h":214:17)
      Fp4 x3674 = Fp4(x3672) + Fp4(x3673);
      // loc("./cirgen/components/plonk.h":216:16)
      Fp4 x3675 = x3668 * x3674;
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x3676 = x3661 * x0;
      // loc("./cirgen/components/plonk.h":257:42)
      auto x3677 = inv(x3675);
      // loc("./cirgen/components/plonk.h":257:16)
      Fp4 x3678 = x3676 * x3677;
      host_args.at(0) = x3678.elems[0];
      host_args.at(1) = x3678.elems[1];
      host_args.at(2) = x3678.elems[2];
      host_args.at(3) = x3678.elems[3];
      host(ctx, "plonkWriteAccum", "bytes", host_args.data(), 4, host_outs.data(), 0);
    }
  }
  return x1;
}

} // namespace risc0::circuit::rv32im
// clang-format on
