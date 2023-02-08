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

#![cfg_attr(not(target_os = "zkvm"), allow(dead_code, unused_variables))]

const EXT_ELEM_SIZE: usize = 4;

// TODO: Don't extend these field elements; instead, ffpu should be
// aware of whether field elements are extension elements or not, but
// cirgen needs to be aware of it first.
const DATA: &[u32] = &[];

const CODE: &[u32] = &[
    0x00000100, // %0 = get($0x0000, 0x01): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":115:0)
    0x00010100, // %1 = get($0x0001, 0x01): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":115:0)
    0x00020100, // %2 = get($0x0002, 0x01): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":115:0)
    0x00030100, // %3 = get($0x0003, 0x01): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":115:0)
    0x00000200, // %4 = get($0x0000, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00010200, // %5 = get($0x0001, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00020200, // %6 = get($0x0002, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00030200, // %7 = get($0x0003, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00040200, // %8 = get($0x0004, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00050200, // %9 = get($0x0005, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00060200, // %10 = get($0x0006, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00070200, // %11 = get($0x0007, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00080200, // %12 = get($0x0008, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00090200, // %13 = get($0x0009, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x000a0200, // %14 = get($0x000a, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x000b0200, // %15 = get($0x000b, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x000c0200, // %16 = get($0x000c, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x000d0200, // %17 = get($0x000d, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x000e0200, // %18 = get($0x000e, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x000f0200, // %19 = get($0x000f, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00100200, // %20 = get($0x0010, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00110200, // %21 = get($0x0011, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00120200, // %22 = get($0x0012, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00130200, // %23 = get($0x0013, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00140200, // %24 = get($0x0014, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00150200, // %25 = get($0x0015, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00160200, // %26 = get($0x0016, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00170200, // %27 = get($0x0017, 0x02): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":123:0)
    0x00000300, // %28 = get($0x0000, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00010300, // %29 = get($0x0001, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00020300, // %30 = get($0x0002, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00030300, // %31 = get($0x0003, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00040300, // %32 = get($0x0004, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00050300, // %33 = get($0x0005, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00060300, // %34 = get($0x0006, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00070300, // %35 = get($0x0007, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00080300, // %36 = get($0x0008, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00090300, // %37 = get($0x0009, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000a0300, // %38 = get($0x000a, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000b0300, // %39 = get($0x000b, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000c0300, // %40 = get($0x000c, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000d0300, // %41 = get($0x000d, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000e0300, // %42 = get($0x000e, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000f0300, // %43 = get($0x000f, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00000400, // %44 = get($0x0000, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00010400, // %45 = get($0x0001, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00020400, // %46 = get($0x0002, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00030400, // %47 = get($0x0003, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00040400, // %48 = get($0x0004, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00050400, // %49 = get($0x0005, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00060400, // %50 = get($0x0006, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00070400, // %51 = get($0x0007, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00080400, // %52 = get($0x0008, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00090400, // %53 = get($0x0009, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00000500, // %54 = get($0x0000, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00010500, // %55 = get($0x0001, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00020500, // %56 = get($0x0002, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00030500, // %57 = get($0x0003, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00040500, // %58 = get($0x0004, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00050500, // %59 = get($0x0005, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00060500, // %60 = get($0x0006, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00070500, // %61 = get($0x0007, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00080500, // %62 = get($0x0008, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00090500, // %63 = get($0x0009, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x000a0500, // %64 = get($0x000a, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x000b0500, // %65 = get($0x000b, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x000c0500, // %66 = get($0x000c, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x000d0500, // %67 = get($0x000d, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x000e0500, // %68 = get($0x000e, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00000600, // %69 = get($0x0000, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00010600, // %70 = get($0x0001, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00020600, // %71 = get($0x0002, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00030600, // %72 = get($0x0003, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00040600, // %73 = get($0x0004, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00050600, // %74 = get($0x0005, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00060600, // %75 = get($0x0006, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00070600, // %76 = get($0x0007, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00080600, // %77 = get($0x0008, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00090600, // %78 = get($0x0009, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000a0600, // %79 = get($0x000a, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000b0600, // %80 = get($0x000b, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000c0600, // %81 = get($0x000c, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000d0600, // %82 = get($0x000d, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000e0600, // %83 = get($0x000e, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000f0600, // %84 = get($0x000f, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00100600, // %85 = get($0x0010, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00110600, // %86 = get($0x0011, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00120600, // %87 = get($0x0012, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00130600, // %88 = get($0x0013, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00140600, // %89 = get($0x0014, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00150600, // %90 = get($0x0015, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00160600, // %91 = get($0x0016, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00170600, // %92 = get($0x0017, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00180600, // %93 = get($0x0018, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00190600, // %94 = get($0x0019, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001a0600, // %95 = get($0x001a, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001b0600, // %96 = get($0x001b, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001c0600, // %97 = get($0x001c, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001d0600, // %98 = get($0x001d, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001e0600, // %99 = get($0x001e, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001f0600, /* %100 = get($0x001f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00200600, /* %101 = get($0x0020, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00210600, /* %102 = get($0x0021, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00220600, /* %103 = get($0x0022, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00230600, /* %104 = get($0x0023, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00240600, /* %105 = get($0x0024, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00250600, /* %106 = get($0x0025, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00260600, /* %107 = get($0x0026, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00270600, /* %108 = get($0x0027, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00280600, /* %109 = get($0x0028, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00290600, /* %110 = get($0x0029, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002a0600, /* %111 = get($0x002a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002b0600, /* %112 = get($0x002b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002c0600, /* %113 = get($0x002c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002d0600, /* %114 = get($0x002d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002e0600, /* %115 = get($0x002e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002f0600, /* %116 = get($0x002f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00300600, /* %117 = get($0x0030, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00310600, /* %118 = get($0x0031, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00320600, /* %119 = get($0x0032, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00330600, /* %120 = get($0x0033, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00340600, /* %121 = get($0x0034, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00350600, /* %122 = get($0x0035, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00360600, /* %123 = get($0x0036, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00370600, /* %124 = get($0x0037, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00380600, /* %125 = get($0x0038, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00390600, /* %126 = get($0x0039, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003a0600, /* %127 = get($0x003a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003b0600, /* %128 = get($0x003b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003c0600, /* %129 = get($0x003c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003d0600, /* %130 = get($0x003d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003e0600, /* %131 = get($0x003e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003f0600, /* %132 = get($0x003f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00400600, /* %133 = get($0x0040, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00410600, /* %134 = get($0x0041, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00420600, /* %135 = get($0x0042, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00430600, /* %136 = get($0x0043, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00440600, /* %137 = get($0x0044, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00450600, /* %138 = get($0x0045, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00460600, /* %139 = get($0x0046, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00470600, /* %140 = get($0x0047, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00480600, /* %141 = get($0x0048, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00490600, /* %142 = get($0x0049, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004a0600, /* %143 = get($0x004a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004b0600, /* %144 = get($0x004b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004c0600, /* %145 = get($0x004c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004d0600, /* %146 = get($0x004d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004e0600, /* %147 = get($0x004e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004f0600, /* %148 = get($0x004f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00500600, /* %149 = get($0x0050, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00510600, /* %150 = get($0x0051, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00520600, /* %151 = get($0x0052, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00530600, /* %152 = get($0x0053, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00540600, /* %153 = get($0x0054, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00550600, /* %154 = get($0x0055, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00560600, /* %155 = get($0x0056, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00570600, /* %156 = get($0x0057, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00580600, /* %157 = get($0x0058, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00590600, /* %158 = get($0x0059, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005a0600, /* %159 = get($0x005a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005b0600, /* %160 = get($0x005b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005c0600, /* %161 = get($0x005c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005d0600, /* %162 = get($0x005d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005e0600, /* %163 = get($0x005e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005f0600, /* %164 = get($0x005f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00600600, /* %165 = get($0x0060, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00610600, /* %166 = get($0x0061, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00620600, /* %167 = get($0x0062, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00630600, /* %168 = get($0x0063, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00640600, /* %169 = get($0x0064, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00650600, /* %170 = get($0x0065, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00660600, /* %171 = get($0x0066, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00670600, /* %172 = get($0x0067, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00680600, /* %173 = get($0x0068, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00690600, /* %174 = get($0x0069, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006a0600, /* %175 = get($0x006a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006b0600, /* %176 = get($0x006b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006c0600, /* %177 = get($0x006c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006d0600, /* %178 = get($0x006d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006e0600, /* %179 = get($0x006e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006f0600, /* %180 = get($0x006f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00700600, /* %181 = get($0x0070, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00710600, /* %182 = get($0x0071, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00720600, /* %183 = get($0x0072, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00730600, /* %184 = get($0x0073, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00740600, /* %185 = get($0x0074, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00750600, /* %186 = get($0x0075, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00760600, /* %187 = get($0x0076, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00770600, /* %188 = get($0x0077, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00780600, /* %189 = get($0x0078, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00790600, /* %190 = get($0x0079, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007a0600, /* %191 = get($0x007a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007b0600, /* %192 = get($0x007b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007c0600, /* %193 = get($0x007c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007d0600, /* %194 = get($0x007d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007e0600, /* %195 = get($0x007e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007f0600, /* %196 = get($0x007f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00800600, /* %197 = get($0x0080, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00810600, /* %198 = get($0x0081, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00820600, /* %199 = get($0x0082, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00830600, /* %200 = get($0x0083, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00840600, /* %201 = get($0x0084, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00850600, /* %202 = get($0x0085, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00860600, /* %203 = get($0x0086, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00870600, /* %204 = get($0x0087, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00880600, /* %205 = get($0x0088, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00890600, /* %206 = get($0x0089, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008a0600, /* %207 = get($0x008a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008b0600, /* %208 = get($0x008b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008c0600, /* %209 = get($0x008c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008d0600, /* %210 = get($0x008d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008e0600, /* %211 = get($0x008e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008f0600, /* %212 = get($0x008f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00900600, /* %213 = get($0x0090, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00910600, /* %214 = get($0x0091, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00920600, /* %215 = get($0x0092, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00930600, /* %216 = get($0x0093, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00940600, /* %217 = get($0x0094, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00950600, /* %218 = get($0x0095, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00960600, /* %219 = get($0x0096, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00970600, /* %220 = get($0x0097, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00980600, /* %221 = get($0x0098, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00990600, /* %222 = get($0x0099, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009a0600, /* %223 = get($0x009a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009b0600, /* %224 = get($0x009b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009c0600, /* %225 = get($0x009c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009d0600, /* %226 = get($0x009d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009e0600, /* %227 = get($0x009e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009f0600, /* %228 = get($0x009f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a00600, /* %229 = get($0x00a0, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a10600, /* %230 = get($0x00a1, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a20600, /* %231 = get($0x00a2, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a30600, /* %232 = get($0x00a3, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a40600, /* %233 = get($0x00a4, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a50600, /* %234 = get($0x00a5, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a60600, /* %235 = get($0x00a6, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a70600, /* %236 = get($0x00a7, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a80600, /* %237 = get($0x00a8, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a90600, /* %238 = get($0x00a9, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00aa0600, /* %239 = get($0x00aa, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ab0600, /* %240 = get($0x00ab, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ac0600, /* %241 = get($0x00ac, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ad0600, /* %242 = get($0x00ad, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ae0600, /* %243 = get($0x00ae, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00af0600, /* %244 = get($0x00af, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b00600, /* %245 = get($0x00b0, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b10600, /* %246 = get($0x00b1, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b20600, /* %247 = get($0x00b2, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b30600, /* %248 = get($0x00b3, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b40600, /* %249 = get($0x00b4, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b50600, /* %250 = get($0x00b5, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b60600, /* %251 = get($0x00b6, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b70600, /* %252 = get($0x00b7, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b80600, /* %253 = get($0x00b8, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b90600, /* %254 = get($0x00b9, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ba0600, /* %255 = get($0x00ba, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00bb0600, /* %256 = get($0x00bb, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00bc0600, /* %257 = get($0x00bc, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00bd0600, /* %258 = get($0x00bd, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00be0600, /* %259 = get($0x00be, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00bf0600, /* %260 = get($0x00bf, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c00600, /* %261 = get($0x00c0, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c10600, /* %262 = get($0x00c1, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c20600, /* %263 = get($0x00c2, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c30600, /* %264 = get($0x00c3, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c40600, /* %265 = get($0x00c4, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c50600, /* %266 = get($0x00c5, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c60600, /* %267 = get($0x00c6, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c70600, /* %268 = get($0x00c7, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c80600, /* %269 = get($0x00c8, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c90600, /* %270 = get($0x00c9, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ca0600, /* %271 = get($0x00ca, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00cb0600, /* %272 = get($0x00cb, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00cc0600, /* %273 = get($0x00cc, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00cd0600, /* %274 = get($0x00cd, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ce0600, /* %275 = get($0x00ce, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00cf0600, /* %276 = get($0x00cf, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d00600, /* %277 = get($0x00d0, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d10600, /* %278 = get($0x00d1, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d20600, /* %279 = get($0x00d2, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d30600, /* %280 = get($0x00d3, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d40600, /* %281 = get($0x00d4, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d50600, /* %282 = get($0x00d5, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x000000b7, // %283 = mul(%0, %45): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x002c046d, // %284 = add(%44, %283): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x00000003, // %285 = mul(%0, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x011d00bb, // %286 = mul(%285, %46): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x011d0003, // %287 = mul(%285, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x011f00bf, // %288 = mul(%287, %47): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x011e0481, // %289 = add(%286, %288): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x011f0003, // %290 = mul(%287, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x012200c3, // %291 = mul(%290, %48): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0121048d, // %292 = add(%289, %291): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01220003, // %293 = mul(%290, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x012500c7, // %294 = mul(%293, %49): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01240499, // %295 = add(%292, %294): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01250003, // %296 = mul(%293, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x012800cb, // %297 = mul(%296, %50): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x012704a5, // %298 = add(%295, %297): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01280003, // %299 = mul(%296, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x012b00cf, // %300 = mul(%299, %51): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x012a04b1, // %301 = add(%298, %300): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x012b0003, // %302 = mul(%299, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x012e00d3, // %303 = mul(%302, %52): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x012d04bd, // %304 = add(%301, %303): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x012e0003, // %305 = mul(%302, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x013100d7, // %306 = mul(%305, %53): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x013004c9, // %307 = add(%304, %306): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01310003, // %308 = mul(%305, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x013400db, // %309 = mul(%308, %54): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x013304d5, // %310 = add(%307, %309): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01340003, // %311 = mul(%308, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x013700df, // %312 = mul(%311, %55): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x013604e1, // %313 = add(%310, %312): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01370003, // %314 = mul(%311, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x013a00e3, // %315 = mul(%314, %56): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x011c04ed, // %316 = add(%284, %315): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x013a0003, // %317 = mul(%314, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x013d00e7, // %318 = mul(%317, %57): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x013904f9, // %319 = add(%313, %318): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x013d0003, // %320 = mul(%317, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014000eb, // %321 = mul(%320, %58): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x013f0505, // %322 = add(%319, %321): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01400003, // %323 = mul(%320, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014300ef, // %324 = mul(%323, %59): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x013c0511, // %325 = add(%316, %324): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01430003, // %326 = mul(%323, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014600f3, // %327 = mul(%326, %60): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0142051d, // %328 = add(%322, %327): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01460003, // %329 = mul(%326, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014900f7, // %330 = mul(%329, %61): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01480529, // %331 = add(%328, %330): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01490003, // %332 = mul(%329, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014c00fb, // %333 = mul(%332, %62): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x014b0535, // %334 = add(%331, %333): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x014c0003, // %335 = mul(%332, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014f00ff, // %336 = mul(%335, %63): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x014e0541, // %337 = add(%334, %336): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x014f0003, // %338 = mul(%335, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01520103, // %339 = mul(%338, %64): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0151054d, // %340 = add(%337, %339): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01520003, // %341 = mul(%338, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01550107, // %342 = mul(%341, %65): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01540559, // %343 = add(%340, %342): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01550003, // %344 = mul(%341, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0158010b, // %345 = mul(%344, %66): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01570565, // %346 = add(%343, %345): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01580003, // %347 = mul(%344, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x015b010f, // %348 = mul(%347, %67): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x015a0571, // %349 = add(%346, %348): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x015b0003, // %350 = mul(%347, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x015e0113, // %351 = mul(%350, %68): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x015d057d, // %352 = add(%349, %351): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x015e0003, // %353 = mul(%350, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01610117, // %354 = mul(%353, %69): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01450589, // %355 = add(%325, %354): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01610003, // %356 = mul(%353, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0164011b, // %357 = mul(%356, %70): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01630595, // %358 = add(%355, %357): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01640003, // %359 = mul(%356, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0167011f, // %360 = mul(%359, %71): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x016605a1, // %361 = add(%358, %360): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01670003, // %362 = mul(%359, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x016a0123, // %363 = mul(%362, %72): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x016905ad, // %364 = add(%361, %363): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x016a0003, // %365 = mul(%362, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x016d0127, // %366 = mul(%365, %73): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x016c05b9, // %367 = add(%364, %366): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x016d0003, // %368 = mul(%365, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0170012b, // %369 = mul(%368, %74): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x016f05c5, // %370 = add(%367, %369): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01700003, // %371 = mul(%368, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0173012f, // %372 = mul(%371, %75): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x017205d1, // %373 = add(%370, %372): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01730003, // %374 = mul(%371, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01760133, // %375 = mul(%374, %76): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x017505dd, // %376 = add(%373, %375): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01760003, // %377 = mul(%374, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01790137, // %378 = mul(%377, %77): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x017805e9, // %379 = add(%376, %378): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01790003, // %380 = mul(%377, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x017c013b, // %381 = mul(%380, %78): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x016005f5, // %382 = add(%352, %381): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x017c0003, // %383 = mul(%380, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x017f013f, // %384 = mul(%383, %79): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x017b0601, // %385 = add(%379, %384): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x017f0003, // %386 = mul(%383, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01820143, // %387 = mul(%386, %80): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0181060d, // %388 = add(%385, %387): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01820003, // %389 = mul(%386, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01850147, // %390 = mul(%389, %81): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01840619, // %391 = add(%388, %390): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01850003, // %392 = mul(%389, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0188014b, // %393 = mul(%392, %82): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x017e0625, // %394 = add(%382, %393): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01880003, // %395 = mul(%392, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x018b014f, // %396 = mul(%395, %83): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x018a0631, // %397 = add(%394, %396): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x018b0003, // %398 = mul(%395, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x018e0153, // %399 = mul(%398, %84): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x018d063d, // %400 = add(%397, %399): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x018e0003, // %401 = mul(%398, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01910157, // %402 = mul(%401, %85): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01900649, // %403 = add(%400, %402): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01910003, // %404 = mul(%401, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0194015b, // %405 = mul(%404, %86): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01930655, // %406 = add(%403, %405): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01940003, // %407 = mul(%404, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0197015f, // %408 = mul(%407, %87): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01960661, // %409 = add(%406, %408): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01970003, // %410 = mul(%407, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x019a0163, // %411 = mul(%410, %88): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x019a0003, // %412 = mul(%410, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x019c0167, // %413 = mul(%412, %89): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x019b0675, // %414 = add(%411, %413): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x019c0003, // %415 = mul(%412, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x019f016b, // %416 = mul(%415, %90): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x019e0681, // %417 = add(%414, %416): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x019f0003, // %418 = mul(%415, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01a2016f, // %419 = mul(%418, %91): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01a1068d, // %420 = add(%417, %419): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01a20003, // %421 = mul(%418, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01a50173, // %422 = mul(%421, %92): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01a40699, // %423 = add(%420, %422): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01a50003, // %424 = mul(%421, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01a80177, // %425 = mul(%424, %93): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01a706a5, // %426 = add(%423, %425): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01a80003, // %427 = mul(%424, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01ab017b, // %428 = mul(%427, %94): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01ab0003, // %429 = mul(%427, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01ad017f, // %430 = mul(%429, %95): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01ac06b9, // %431 = add(%428, %430): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01ad0003, // %432 = mul(%429, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01b00183, // %433 = mul(%432, %96): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01af06c5, // %434 = add(%431, %433): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01b00003, // %435 = mul(%432, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01b30187, // %436 = mul(%435, %97): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01b206d1, // %437 = add(%434, %436): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01b30003, // %438 = mul(%435, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01b6018b, // %439 = mul(%438, %98): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01b506dd, // %440 = add(%437, %439): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01b60003, // %441 = mul(%438, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01b9018f, // %442 = mul(%441, %99): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01b806e9, // %443 = add(%440, %442): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01b90003, // %444 = mul(%441, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01bc0193, // %445 = mul(%444, %100): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01bb06f5, // %446 = add(%443, %445): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01bc0003, // %447 = mul(%444, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01bf0197, // %448 = mul(%447, %101): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01be0701, // %449 = add(%446, %448): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01bf0003, // %450 = mul(%447, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01c2019b, // %451 = mul(%450, %102): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01c1070d, // %452 = add(%449, %451): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01c20003, // %453 = mul(%450, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01c5019f, // %454 = mul(%453, %103): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01c40719, // %455 = add(%452, %454): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01c50003, // %456 = mul(%453, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01c801a3, // %457 = mul(%456, %104): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01c70725, // %458 = add(%455, %457): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01c80003, // %459 = mul(%456, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01cb01a7, // %460 = mul(%459, %105): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01ca0731, // %461 = add(%458, %460): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01cb0003, // %462 = mul(%459, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01ce01ab, // %463 = mul(%462, %106): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01aa073d, // %464 = add(%426, %463): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01ce0003, // %465 = mul(%462, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01d101af, // %466 = mul(%465, %107): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01d00749, // %467 = add(%464, %466): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01d10003, // %468 = mul(%465, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01d401b3, // %469 = mul(%468, %108): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01d30755, // %470 = add(%467, %469): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01d40003, // %471 = mul(%468, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01d701b7, // %472 = mul(%471, %109): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01d60761, // %473 = add(%470, %472): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01d70003, // %474 = mul(%471, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01da01bb, // %475 = mul(%474, %110): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0199076d, // %476 = add(%409, %475): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01da0003, // %477 = mul(%474, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01dd01bf, // %478 = mul(%477, %111): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01dc0779, // %479 = add(%476, %478): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01dd0003, // %480 = mul(%477, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01e001c3, // %481 = mul(%480, %112): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01df0785, // %482 = add(%479, %481): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01e00003, // %483 = mul(%480, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01e301c7, // %484 = mul(%483, %113): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01e20791, // %485 = add(%482, %484): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01e30003, // %486 = mul(%483, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01e601cb, // %487 = mul(%486, %114): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01e5079d, // %488 = add(%485, %487): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01e60003, // %489 = mul(%486, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01e901cf, // %490 = mul(%489, %115): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01e807a9, // %491 = add(%488, %490): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01e90003, // %492 = mul(%489, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01ec01d3, // %493 = mul(%492, %116): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01eb07b5, // %494 = add(%491, %493): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01ec0003, // %495 = mul(%492, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01ef01d7, // %496 = mul(%495, %117): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01ee07c1, // %497 = add(%494, %496): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01ef0003, // %498 = mul(%495, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01f201db, // %499 = mul(%498, %118): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01f107cd, // %500 = add(%497, %499): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01f20003, // %501 = mul(%498, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01f501df, // %502 = mul(%501, %119): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x018707d9, // %503 = add(%391, %502): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01f50003, // %504 = mul(%501, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01f801e3, // %505 = mul(%504, %120): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01f707e5, // %506 = add(%503, %505): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01f80003, // %507 = mul(%504, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01fb01e7, // %508 = mul(%507, %121): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01f407f1, // %509 = add(%500, %508): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01fb0003, // %510 = mul(%507, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01fe01eb, // %511 = mul(%510, %122): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01fd07fd, // %512 = add(%509, %511): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01fe0003, // %513 = mul(%510, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x020101ef, // %514 = mul(%513, %123): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02000809, // %515 = add(%512, %514): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02010003, // %516 = mul(%513, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x020401f3, // %517 = mul(%516, %124): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02030815, // %518 = add(%515, %517): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02040003, // %519 = mul(%516, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x020701f7, // %520 = mul(%519, %125): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02060821, // %521 = add(%518, %520): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02070003, // %522 = mul(%519, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x020a01fb, // %523 = mul(%522, %126): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0209082d, // %524 = add(%521, %523): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x020a0003, // %525 = mul(%522, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x020d01ff, // %526 = mul(%525, %127): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x020c0839, // %527 = add(%524, %526): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x020d0003, // %528 = mul(%525, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02100203, // %529 = mul(%528, %128): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x020f0845, // %530 = add(%527, %529): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02100003, // %531 = mul(%528, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02130207, // %532 = mul(%531, %129): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02120851, // %533 = add(%530, %532): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02130003, // %534 = mul(%531, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0216020b, // %535 = mul(%534, %130): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0215085d, // %536 = add(%533, %535): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02160003, // %537 = mul(%534, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0219020f, // %538 = mul(%537, %131): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02180869, // %539 = add(%536, %538): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02190003, // %540 = mul(%537, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x021c0213, // %541 = mul(%540, %132): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x021b0875, // %542 = add(%539, %541): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x021c0003, // %543 = mul(%540, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x021f0217, // %544 = mul(%543, %133): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x021e0881, // %545 = add(%542, %544): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x021f0003, // %546 = mul(%543, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0222021b, // %547 = mul(%546, %134): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0221088d, // %548 = add(%545, %547): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02220003, // %549 = mul(%546, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0225021f, // %550 = mul(%549, %135): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02240899, // %551 = add(%548, %550): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02250003, // %552 = mul(%549, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02280223, // %553 = mul(%552, %136): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x022708a5, // %554 = add(%551, %553): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02280003, // %555 = mul(%552, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x022b0227, // %556 = mul(%555, %137): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x022a08b1, // %557 = add(%554, %556): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x022b0003, // %558 = mul(%555, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x022e022b, // %559 = mul(%558, %138): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x022d08bd, // %560 = add(%557, %559): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x022e0003, // %561 = mul(%558, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0231022f, // %562 = mul(%561, %139): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023008c9, // %563 = add(%560, %562): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02310003, // %564 = mul(%561, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02340233, // %565 = mul(%564, %140): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023308d5, // %566 = add(%563, %565): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02340003, // %567 = mul(%564, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02370237, // %568 = mul(%567, %141): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01fa08e1, // %569 = add(%506, %568): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02370003, // %570 = mul(%567, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x023a023b, // %571 = mul(%570, %142): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023908ed, // %572 = add(%569, %571): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x023a0003, // %573 = mul(%570, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x023d023f, // %574 = mul(%573, %143): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023608f9, // %575 = add(%566, %574): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x023d0003, // %576 = mul(%573, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02400243, // %577 = mul(%576, %144): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023f0905, // %578 = add(%575, %577): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02400003, // %579 = mul(%576, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02430247, // %580 = mul(%579, %145): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02420911, // %581 = add(%578, %580): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02430003, // %582 = mul(%579, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0246024b, // %583 = mul(%582, %146): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0245091d, // %584 = add(%581, %583): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02460003, // %585 = mul(%582, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0249024f, // %586 = mul(%585, %147): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02480929, // %587 = add(%584, %586): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02490003, // %588 = mul(%585, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x024c0253, // %589 = mul(%588, %148): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x024b0935, // %590 = add(%587, %589): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x024c0003, // %591 = mul(%588, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x024f0257, // %592 = mul(%591, %149): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x024e0941, // %593 = add(%590, %592): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x024f0003, // %594 = mul(%591, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0252025b, // %595 = mul(%594, %150): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0251094d, // %596 = add(%593, %595): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02520003, // %597 = mul(%594, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0255025f, // %598 = mul(%597, %151): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01d90959, // %599 = add(%473, %598): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02550003, // %600 = mul(%597, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02580263, // %601 = mul(%600, %152): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02570965, // %602 = add(%599, %601): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02580003, // %603 = mul(%600, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x025b0267, // %604 = mul(%603, %153): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x025a0971, // %605 = add(%602, %604): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x025b0003, // %606 = mul(%603, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x025e026b, // %607 = mul(%606, %154): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x025d097d, // %608 = add(%605, %607): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x025e0003, // %609 = mul(%606, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0261026f, // %610 = mul(%609, %155): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02600989, // %611 = add(%608, %610): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02610003, // %612 = mul(%609, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02640273, // %613 = mul(%612, %156): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02630995, // %614 = add(%611, %613): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02640003, // %615 = mul(%612, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02670277, // %616 = mul(%615, %157): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x026609a1, // %617 = add(%614, %616): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02670003, // %618 = mul(%615, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x026a027b, // %619 = mul(%618, %158): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x026909ad, // %620 = add(%617, %619): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x026a0003, // %621 = mul(%618, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x026d027f, // %622 = mul(%621, %159): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x026c09b9, // %623 = add(%620, %622): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x026d0003, // %624 = mul(%621, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02700283, // %625 = mul(%624, %160): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x026f09c5, // %626 = add(%623, %625): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02700003, // %627 = mul(%624, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02730287, // %628 = mul(%627, %161): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x025409d1, // %629 = add(%596, %628): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02730003, // %630 = mul(%627, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0276028b, // %631 = mul(%630, %162): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x027509dd, // %632 = add(%629, %631): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02760003, // %633 = mul(%630, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0279028f, // %634 = mul(%633, %163): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x027809e9, // %635 = add(%632, %634): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02790003, // %636 = mul(%633, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x027c0293, // %637 = mul(%636, %164): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023c09f5, // %638 = add(%572, %637): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x027c0003, // %639 = mul(%636, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x027f0297, // %640 = mul(%639, %165): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x027e0a01, // %641 = add(%638, %640): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x027f0003, // %642 = mul(%639, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0282029b, // %643 = mul(%642, %166): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02810a0d, // %644 = add(%641, %643): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02820003, // %645 = mul(%642, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0285029f, // %646 = mul(%645, %167): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02840a19, // %647 = add(%644, %646): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02850003, // %648 = mul(%645, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x028802a3, // %649 = mul(%648, %168): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02870a25, // %650 = add(%647, %649): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02880003, // %651 = mul(%648, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x028b02a7, // %652 = mul(%651, %169): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x028a0a31, // %653 = add(%650, %652): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x028b0003, // %654 = mul(%651, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x028e02ab, // %655 = mul(%654, %170): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x028d0a3d, // %656 = add(%653, %655): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x028e0003, // %657 = mul(%654, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x029102af, // %658 = mul(%657, %171): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02900a49, // %659 = add(%656, %658): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02910003, // %660 = mul(%657, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x029402b3, // %661 = mul(%660, %172): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02930a55, // %662 = add(%659, %661): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02940003, // %663 = mul(%660, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x029702b7, // %664 = mul(%663, %173): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02960a61, // %665 = add(%662, %664): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02970003, // %666 = mul(%663, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x029a02bb, // %667 = mul(%666, %174): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02990a6d, // %668 = add(%665, %667): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x029a0003, // %669 = mul(%666, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x029d02bf, // %670 = mul(%669, %175): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x029c0a79, // %671 = add(%668, %670): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x029d0003, // %672 = mul(%669, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02a002c3, // %673 = mul(%672, %176): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x029f0a85, // %674 = add(%671, %673): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02a00003, // %675 = mul(%672, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02a302c7, // %676 = mul(%675, %177): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x027b0a91, // %677 = add(%635, %676): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02a30003, // %678 = mul(%675, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02a602cb, // %679 = mul(%678, %178): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02a20a9d, // %680 = add(%674, %679): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02a60003, // %681 = mul(%678, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02a902cf, // %682 = mul(%681, %179): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02a80aa9, // %683 = add(%680, %682): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02a90003, // %684 = mul(%681, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02ac02d3, // %685 = mul(%684, %180): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02ab0ab5, // %686 = add(%683, %685): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02ac0003, // %687 = mul(%684, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02af02d7, // %688 = mul(%687, %181): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02a50ac1, // %689 = add(%677, %688): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02af0003, // %690 = mul(%687, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02b202db, // %691 = mul(%690, %182): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02ae0acd, // %692 = add(%686, %691): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02b20003, // %693 = mul(%690, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02b502df, // %694 = mul(%693, %183): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02b10ad9, // %695 = add(%689, %694): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02b50003, // %696 = mul(%693, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02b802e3, // %697 = mul(%696, %184): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02b70ae5, // %698 = add(%695, %697): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02b80003, // %699 = mul(%696, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02bb02e7, // %700 = mul(%699, %185): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02ba0af1, // %701 = add(%698, %700): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02bb0003, // %702 = mul(%699, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02be02eb, // %703 = mul(%702, %186): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02b40afd, // %704 = add(%692, %703): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02be0003, // %705 = mul(%702, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02c102ef, // %706 = mul(%705, %187): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02c00b09, // %707 = add(%704, %706): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02c10003, // %708 = mul(%705, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02c402f3, // %709 = mul(%708, %188): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02c30b15, // %710 = add(%707, %709): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02c40003, // %711 = mul(%708, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02c702f7, // %712 = mul(%711, %189): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02c60b21, // %713 = add(%710, %712): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02c70003, // %714 = mul(%711, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02ca02fb, // %715 = mul(%714, %190): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02c90b2d, // %716 = add(%713, %715): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02ca0003, // %717 = mul(%714, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02cd02ff, // %718 = mul(%717, %191): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02bd0b39, // %719 = add(%701, %718): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02cd0003, // %720 = mul(%717, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02d00303, // %721 = mul(%720, %192): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02cf0b45, // %722 = add(%719, %721): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02d00003, // %723 = mul(%720, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02d30307, // %724 = mul(%723, %193): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02d20b51, // %725 = add(%722, %724): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02d30003, // %726 = mul(%723, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02d6030b, // %727 = mul(%726, %194): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02cc0b5d, // %728 = add(%716, %727): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02d60003, // %729 = mul(%726, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02d9030f, // %730 = mul(%729, %195): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02d80b69, // %731 = add(%728, %730): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02d90003, // %732 = mul(%729, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02dc0313, // %733 = mul(%732, %196): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02db0b75, // %734 = add(%731, %733): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02dc0003, // %735 = mul(%732, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02df0317, // %736 = mul(%735, %197): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02de0b81, // %737 = add(%734, %736): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02df0003, // %738 = mul(%735, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02e2031b, // %739 = mul(%738, %198): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02d50b8d, // %740 = add(%725, %739): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02e20003, // %741 = mul(%738, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02e5031f, // %742 = mul(%741, %199): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02e40b99, // %743 = add(%740, %742): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02e50003, // %744 = mul(%741, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02e80323, // %745 = mul(%744, %200): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02e10ba5, // %746 = add(%737, %745): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02e80003, // %747 = mul(%744, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02eb0327, // %748 = mul(%747, %201): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02ea0bb1, // %749 = add(%746, %748): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02eb0003, // %750 = mul(%747, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02ee032b, // %751 = mul(%750, %202): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02ed0bbd, // %752 = add(%749, %751): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02ee0003, // %753 = mul(%750, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02f1032f, // %754 = mul(%753, %203): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02f10003, // %755 = mul(%753, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02f30333, // %756 = mul(%755, %204): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02f20bd1, // %757 = add(%754, %756): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02f30003, // %758 = mul(%755, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02f60337, // %759 = mul(%758, %205): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02f00bdd, // %760 = add(%752, %759): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02f60003, // %761 = mul(%758, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02f9033b, // %762 = mul(%761, %206): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02e70be9, // %763 = add(%743, %762): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02f90003, // %764 = mul(%761, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02fc033f, // %765 = mul(%764, %207): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02f80bf5, // %766 = add(%760, %765): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02fc0003, // %767 = mul(%764, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02ff0343, // %768 = mul(%767, %208): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02fe0c01, // %769 = add(%766, %768): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02ff0003, // %770 = mul(%767, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03020347, // %771 = mul(%770, %209): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03010c0d, // %772 = add(%769, %771): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03020003, // %773 = mul(%770, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0305034b, // %774 = mul(%773, %210): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03040c19, // %775 = add(%772, %774): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03050003, // %776 = mul(%773, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0308034f, // %777 = mul(%776, %211): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03070c25, // %778 = add(%775, %777): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03080003, // %779 = mul(%776, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x030b0353, // %780 = mul(%779, %212): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x030a0c31, // %781 = add(%778, %780): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x030b0003, // %782 = mul(%779, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x030e0357, // %783 = mul(%782, %213): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02fb0c3d, // %784 = add(%763, %783): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x030e0003, // %785 = mul(%782, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0311035b, // %786 = mul(%785, %214): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03100c49, // %787 = add(%784, %786): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03110003, // %788 = mul(%785, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0314035f, // %789 = mul(%788, %215): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03130c55, // %790 = add(%787, %789): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03140003, // %791 = mul(%788, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03170363, // %792 = mul(%791, %216): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03160c61, // %793 = add(%790, %792): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03170003, // %794 = mul(%791, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x031a0367, // %795 = mul(%794, %217): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03190c6d, // %796 = add(%793, %795): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x031a0003, // %797 = mul(%794, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x031d036b, // %798 = mul(%797, %218): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x031c0c79, // %799 = add(%796, %798): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x031d0003, // %800 = mul(%797, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0320036f, // %801 = mul(%800, %219): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03200003, // %802 = mul(%800, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03220373, // %803 = mul(%802, %220): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03210c8d, // %804 = add(%801, %803): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03220003, // %805 = mul(%802, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03250377, // %806 = mul(%805, %221): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03240c99, // %807 = add(%804, %806): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03250003, // %808 = mul(%805, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0328037b, // %809 = mul(%808, %222): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03270ca5, // %810 = add(%807, %809): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03280003, // %811 = mul(%808, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x032b037f, // %812 = mul(%811, %223): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x032a0cb1, // %813 = add(%810, %812): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x032b0003, // %814 = mul(%811, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x032e0383, // %815 = mul(%814, %224): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x032d0cbd, // %816 = add(%813, %815): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x032e0003, // %817 = mul(%814, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03310387, // %818 = mul(%817, %225): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03300cc9, // %819 = add(%816, %818): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03310003, // %820 = mul(%817, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0334038b, // %821 = mul(%820, %226): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03330cd5, // %822 = add(%819, %821): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03340003, // %823 = mul(%820, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0337038f, // %824 = mul(%823, %227): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03360ce1, // %825 = add(%822, %824): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03370003, // %826 = mul(%823, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x033a0393, // %827 = mul(%826, %228): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03390ced, // %828 = add(%825, %827): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x033a0003, // %829 = mul(%826, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x033d0397, // %830 = mul(%829, %229): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x033c0cf9, // %831 = add(%828, %830): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x033d0003, // %832 = mul(%829, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0340039b, // %833 = mul(%832, %230): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x033f0d05, // %834 = add(%831, %833): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03400003, // %835 = mul(%832, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0343039f, // %836 = mul(%835, %231): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03420d11, // %837 = add(%834, %836): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03430003, // %838 = mul(%835, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x034603a3, // %839 = mul(%838, %232): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03450d1d, // %840 = add(%837, %839): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03460003, // %841 = mul(%838, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x034903a7, // %842 = mul(%841, %233): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03480d29, // %843 = add(%840, %842): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03490003, // %844 = mul(%841, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x034c03ab, // %845 = mul(%844, %234): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x034b0d35, // %846 = add(%843, %845): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x034c0003, // %847 = mul(%844, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x034f03af, // %848 = mul(%847, %235): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x034e0d41, // %849 = add(%846, %848): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x034f0003, // %850 = mul(%847, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x035203b3, // %851 = mul(%850, %236): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03510d4d, // %852 = add(%849, %851): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03520003, // %853 = mul(%850, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x035503b7, // %854 = mul(%853, %237): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03540d59, // %855 = add(%852, %854): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03550003, // %856 = mul(%853, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x035803bb, // %857 = mul(%856, %238): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03570d65, // %858 = add(%855, %857): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03580003, // %859 = mul(%856, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x035b03bf, // %860 = mul(%859, %239): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x035a0d71, // %861 = add(%858, %860): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x035b0003, // %862 = mul(%859, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x035e03c3, // %863 = mul(%862, %240): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x035d0d7d, // %864 = add(%861, %863): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x035e0003, // %865 = mul(%862, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x036103c7, // %866 = mul(%865, %241): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03600d89, // %867 = add(%864, %866): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03610003, // %868 = mul(%865, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x036403cb, // %869 = mul(%868, %242): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03630d95, // %870 = add(%867, %869): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03640003, // %871 = mul(%868, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x036703cf, // %872 = mul(%871, %243): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03660da1, // %873 = add(%870, %872): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03670003, // %874 = mul(%871, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x036a03d3, // %875 = mul(%874, %244): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03690dad, // %876 = add(%873, %875): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x036a0003, // %877 = mul(%874, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x036d03d7, // %878 = mul(%877, %245): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x036c0db9, // %879 = add(%876, %878): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x036d0003, // %880 = mul(%877, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x037003db, // %881 = mul(%880, %246): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x036f0dc5, // %882 = add(%879, %881): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03700003, // %883 = mul(%880, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x037303df, // %884 = mul(%883, %247): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03720dd1, // %885 = add(%882, %884): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03730003, // %886 = mul(%883, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x037603e3, // %887 = mul(%886, %248): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03750ddd, // %888 = add(%885, %887): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03760003, // %889 = mul(%886, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x037903e7, // %890 = mul(%889, %249): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03780de9, // %891 = add(%888, %890): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03790003, // %892 = mul(%889, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x037c03eb, // %893 = mul(%892, %250): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x037b0df5, // %894 = add(%891, %893): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x037c0003, // %895 = mul(%892, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x037f03ef, // %896 = mul(%895, %251): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x037e0e01, // %897 = add(%894, %896): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x037f0003, // %898 = mul(%895, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x038203f3, // %899 = mul(%898, %252): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03810e0d, // %900 = add(%897, %899): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03820003, // %901 = mul(%898, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x038503f7, // %902 = mul(%901, %253): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03840e19, // %903 = add(%900, %902): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03850003, // %904 = mul(%901, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x038803fb, // %905 = mul(%904, %254): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03870e25, // %906 = add(%903, %905): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03880003, // %907 = mul(%904, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x038b03ff, // %908 = mul(%907, %255): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x038a0e31, // %909 = add(%906, %908): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x038b0003, // %910 = mul(%907, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x038e0403, // %911 = mul(%910, %256): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x038d0e3d, // %912 = add(%909, %911): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x038e0003, // %913 = mul(%910, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03910407, // %914 = mul(%913, %257): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03900e49, // %915 = add(%912, %914): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03910003, // %916 = mul(%913, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0394040b, // %917 = mul(%916, %258): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03930e55, // %918 = add(%915, %917): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03940003, // %919 = mul(%916, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0397040f, // %920 = mul(%919, %259): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03960e61, // %921 = add(%918, %920): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03970003, // %922 = mul(%919, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x039a0413, // %923 = mul(%922, %260): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03990e6d, // %924 = add(%921, %923): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x039a0003, // %925 = mul(%922, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x039d0417, // %926 = mul(%925, %261): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x039c0e79, // %927 = add(%924, %926): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x039d0003, // %928 = mul(%925, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03a0041b, // %929 = mul(%928, %262): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x039f0e85, // %930 = add(%927, %929): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03a00003, // %931 = mul(%928, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03a3041f, // %932 = mul(%931, %263): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03a20e91, // %933 = add(%930, %932): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03a30003, // %934 = mul(%931, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03a60423, // %935 = mul(%934, %264): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03a50e9d, // %936 = add(%933, %935): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03a60003, // %937 = mul(%934, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03a90427, // %938 = mul(%937, %265): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03a80ea9, // %939 = add(%936, %938): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03a90003, // %940 = mul(%937, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03ac042b, // %941 = mul(%940, %266): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03ab0eb5, // %942 = add(%939, %941): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03ac0003, // %943 = mul(%940, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03af042f, // %944 = mul(%943, %267): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03ae0ec1, // %945 = add(%942, %944): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03af0003, // %946 = mul(%943, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03b20433, // %947 = mul(%946, %268): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03b10ecd, // %948 = add(%945, %947): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03b20003, // %949 = mul(%946, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03b50437, // %950 = mul(%949, %269): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03b40ed9, // %951 = add(%948, %950): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03b50003, // %952 = mul(%949, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03b8043b, // %953 = mul(%952, %270): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03b70ee5, // %954 = add(%951, %953): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03b80003, // %955 = mul(%952, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03bb043f, // %956 = mul(%955, %271): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03ba0ef1, // %957 = add(%954, %956): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03bb0003, // %958 = mul(%955, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03be0443, // %959 = mul(%958, %272): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03bd0efd, // %960 = add(%957, %959): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03be0003, // %961 = mul(%958, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03c10447, // %962 = mul(%961, %273): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03c00f09, // %963 = add(%960, %962): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03c10003, // %964 = mul(%961, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03c4044b, // %965 = mul(%964, %274): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03c30f15, // %966 = add(%963, %965): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03c40003, // %967 = mul(%964, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03c7044f, // %968 = mul(%967, %275): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03c60f21, // %969 = add(%966, %968): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03c70003, // %970 = mul(%967, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03ca0453, // %971 = mul(%970, %276): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03c90f2d, // %972 = add(%969, %971): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03ca0003, // %973 = mul(%970, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03cd0457, // %974 = mul(%973, %277): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03cc0f39, // %975 = add(%972, %974): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03cd0003, // %976 = mul(%973, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03d0045b, // %977 = mul(%976, %278): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03cf0f45, // %978 = add(%975, %977): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03d00003, // %979 = mul(%976, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03d3045f, // %980 = mul(%979, %279): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03d20f51, // %981 = add(%978, %980): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03d30003, // %982 = mul(%979, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03d60463, // %983 = mul(%982, %280): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03d50f5d, // %984 = add(%981, %983): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03d60003, // %985 = mul(%982, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03d90467, // %986 = mul(%985, %281): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03d80f69, // %987 = add(%984, %986): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03d90003, // %988 = mul(%985, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03dc046b, // %989 = mul(%988, %282): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03db0f75, // %990 = add(%987, %989): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03dc0003, // %991 = mul(%988, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03df0073, // %992 = mul(%991, %28): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03df0003, // %993 = mul(%991, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03e10077, // %994 = mul(%993, %29): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e00f89, // %995 = add(%992, %994): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e10003, // %996 = mul(%993, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03e4007b, // %997 = mul(%996, %30): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e30f95, // %998 = add(%995, %997): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e40003, // %999 = mul(%996, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03e7007f, // %1000 = mul(%999, %31): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e60fa1, // %1001 = add(%998, %1000): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e70003, // %1002 = mul(%999, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03ea0083, // %1003 = mul(%1002, %32): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e90fad, /* %1004 = add(%1001, %1003):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03ea0003, // %1005 = mul(%1002, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03ed0087, // %1006 = mul(%1005, %33): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03ec0fb9, /* %1007 = add(%1004, %1006):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03ed0003, // %1008 = mul(%1005, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03f0008b, // %1009 = mul(%1008, %34): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03ef0fc5, /* %1010 = add(%1007, %1009):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03f00003, // %1011 = mul(%1008, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03f3008f, // %1012 = mul(%1011, %35): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03f20fd1, /* %1013 = add(%1010, %1012):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03f30003, // %1014 = mul(%1011, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03f60093, // %1015 = mul(%1014, %36): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03f50fdd, /* %1016 = add(%1013, %1015):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03f60003, // %1017 = mul(%1014, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03f90097, // %1018 = mul(%1017, %37): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03f80fe9, /* %1019 = add(%1016, %1018):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03f90003, // %1020 = mul(%1017, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03fc009b, // %1021 = mul(%1020, %38): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03fb0ff5, /* %1022 = add(%1019, %1021):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03fc0003, // %1023 = mul(%1020, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03ff009f, // %1024 = mul(%1023, %39): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03fe1001, /* %1025 = add(%1022, %1024):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03ff0003, // %1026 = mul(%1023, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x040200a3, // %1027 = mul(%1026, %40): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x0401100d, /* %1028 = add(%1025, %1027):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x04020003, // %1029 = mul(%1026, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x040500a7, // %1030 = mul(%1029, %41): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x04041019, /* %1031 = add(%1028, %1030):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x04050003, // %1032 = mul(%1029, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x040800ab, // %1033 = mul(%1032, %42): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x04071025, /* %1034 = add(%1031, %1033):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x04080003, // %1035 = mul(%1032, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x040b00af, // %1036 = mul(%1035, %43): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x040a1031, /* %1037 = add(%1034, %1036):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x031f0012, // %1038 = sub(%799, %4): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0)
    0x0002000e, // %1039 = sub(%2, %3): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x040f0108, // %1040 = inv(%1039): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0)
    0x040e1043, /* %1041 = mul(%1038, %1040):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x030d0016, // %1042 = sub(%781, %5): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0)
    0x0006000b, // %1043 = mul(%6, %2): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x0412104e, /* %1044 = sub(%1042, %1043):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x00030007, // %1045 = mul(%3, %1): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x00021056, // %1046 = sub(%2, %1045): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x040f105b, /* %1047 = mul(%1039, %1046):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04170108, // %1048 = inv(%1047): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0)
    0x04141063, /* %1049 = mul(%1044, %1048):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x04111065, /* %1050 = add(%1041, %1049):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x02f5001e, // %1051 = sub(%757, %7): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0)
    0x0008000b, // %1052 = mul(%8, %2): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x041b1072, /* %1053 = sub(%1051, %1052):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x0002000b, // %1054 = mul(%2, %2): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x0009107b, // %1055 = mul(%9, %1054): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x041d107e, /* %1056 = sub(%1053, %1055):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x00010007, // %1057 = mul(%1, %1): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x00031087, // %1058 = mul(%3, %1057): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x0002108a, // %1059 = sub(%2, %1058): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x0417108f, /* %1060 = mul(%1047, %1059):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04240108, // %1061 = inv(%1060): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0)
    0x04201097, /* %1062 = mul(%1056, %1061):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x041a1099, /* %1063 = add(%1050, %1062):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x03de002a, // %1064 = sub(%990, %10): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0)
    0x000b000b, // %1065 = mul(%11, %2): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x042810a6, /* %1066 = sub(%1064, %1065):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x000c107b, // %1067 = mul(%12, %1054): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x042a10ae, /* %1068 = sub(%1066, %1067):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x0002107b, // %1069 = mul(%2, %1054): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x000d10b7, // %1070 = mul(%13, %1069): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x042c10ba, /* %1071 = sub(%1068, %1070):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x041e107b, /* %1072 = mul(%1054, %1054):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0) */
    0x000e10c3, // %1073 = mul(%14, %1072): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x042f10c6, /* %1074 = sub(%1071, %1073):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x000210c3, // %1075 = mul(%2, %1072): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x000f10cf, // %1076 = mul(%15, %1075): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x043210d2, /* %1077 = sub(%1074, %1076):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x00011087, // %1078 = mul(%1, %1057): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x000310db, // %1079 = mul(%3, %1078): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x000210de, // %1080 = sub(%2, %1079): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x042410e3, /* %1081 = mul(%1060, %1080):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04211087, /* %1082 = mul(%1057, %1057):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x000310eb, // %1083 = mul(%3, %1082): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x000210ee, // %1084 = sub(%2, %1083): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x043910f3, /* %1085 = mul(%1081, %1084):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x043a10eb, /* %1086 = mul(%1082, %1082):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x043e10fb, /* %1087 = mul(%1086, %1086):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x000110ff, // %1088 = mul(%1, %1087): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x04401103, /* %1089 = mul(%1088, %1088):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x04411107, /* %1090 = mul(%1089, %1089):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x0003110b, // %1091 = mul(%3, %1090): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x0002110e, // %1092 = sub(%2, %1091): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x043d1113, /* %1093 = mul(%1085, %1092):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04450108, // %1094 = inv(%1093): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0)
    0x0435111b, /* %1095 = mul(%1077, %1094):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x0427111d, /* %1096 = add(%1063, %1095):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x01cd0042, // %1097 = sub(%461, %16): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0)
    0x0011000b, // %1098 = mul(%17, %2): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x0449112a, /* %1099 = sub(%1097, %1098):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x0012107b, // %1100 = mul(%18, %1054): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x044b1132, /* %1101 = sub(%1099, %1100):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x001310b7, // %1102 = mul(%19, %1069): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x044d113a, /* %1103 = sub(%1101, %1102):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x001410c3, // %1104 = mul(%20, %1072): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x044f1142, /* %1105 = sub(%1103, %1104):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x001510cf, // %1106 = mul(%21, %1075): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x0451114a, /* %1107 = sub(%1105, %1106):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x043610db, /* %1108 = mul(%1078, %1078):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x00011153, // %1109 = mul(%1, %1108): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x00031157, // %1110 = mul(%3, %1109): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x0002115a, // %1111 = sub(%2, %1110): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x0424115f, /* %1112 = mul(%1060, %1111):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04551157, /* %1113 = mul(%1109, %1109):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x00011167, // %1114 = mul(%1, %1113): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x0003116b, // %1115 = mul(%3, %1114): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x0002116e, // %1116 = sub(%2, %1115): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x04581173, /* %1117 = mul(%1112, %1116):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x000310ff, // %1118 = mul(%3, %1087): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x0002117a, // %1119 = sub(%2, %1118): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x045d117f, /* %1120 = mul(%1117, %1119):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04600108, // %1121 = inv(%1120): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0)
    0x04531187, /* %1122 = mul(%1107, %1121):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x04481189, /* %1123 = add(%1096, %1122):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x0272005a, // %1124 = sub(%626, %22): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0)
    0x0017000b, // %1125 = mul(%23, %2): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x04641196, /* %1126 = sub(%1124, %1125):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x0018107b, // %1127 = mul(%24, %1054): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x0466119e, /* %1128 = sub(%1126, %1127):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x001910b7, // %1129 = mul(%25, %1069): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x046811a6, /* %1130 = sub(%1128, %1129):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x001a10c3, // %1131 = mul(%26, %1072): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x046a11ae, /* %1132 = sub(%1130, %1131):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x040f108f, /* %1133 = mul(%1039, %1059):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x046d115f, /* %1134 = mul(%1133, %1111):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x046e1173, /* %1135 = mul(%1134, %1116):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x046f117f, /* %1136 = mul(%1135, %1119):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04700108, // %1137 = inv(%1136): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0)
    0x046c11c7, /* %1138 = mul(%1132, %1137):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x046311c9, /* %1139 = add(%1123, %1138):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x040d006e, // %1140 = sub(%1037, %27): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":181:0)
    0x0003000f, // %1141 = mul(%3, %3): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":182:0)
    0x047511d7, /* %1142 = mul(%1141, %1141):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":182:0) */
    0x000211da, // %1143 = sub(%2, %1142): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":182:0)
    0x04770108, // %1144 = inv(%1143): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":184:0)
    0x047411e3, /* %1145 = mul(%1140, %1144):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":184:0) */
    0x047311e5, /* %1146 = add(%1139, %1145):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":184:0) */
    0x00000704, // set($0x0000, 0x07): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":186:0)
];

#[inline(always)]
pub fn verify_taps_rv32im(
    arg0: &[u32; 4 * EXT_ELEM_SIZE],
    arg1: &[u32; 24 * EXT_ELEM_SIZE],
    arg2: &[u32; 16 * EXT_ELEM_SIZE],
    arg3: &[u32; 10 * EXT_ELEM_SIZE],
    arg4: &[u32; 15 * EXT_ELEM_SIZE],
    arg5: &[u32; 214 * EXT_ELEM_SIZE],
    arg6: &mut [u32; 1 * EXT_ELEM_SIZE],
) {
    #[cfg(target_os = "zkvm")]
    unsafe {
        risc0_zkvm_platform::syscall::sys_ffpu(
            CODE,
            &[
                DATA.as_ptr() as *mut u32,
                arg0.as_ptr() as *mut u32,
                arg1.as_ptr() as *mut u32,
                arg2.as_ptr() as *mut u32,
                arg3.as_ptr() as *mut u32,
                arg4.as_ptr() as *mut u32,
                arg5.as_ptr() as *mut u32,
                arg6.as_ptr() as *mut u32,
            ],
        )
    }
    #[cfg(not(target_os = "zkvm"))]
    unimplemented!()
}
