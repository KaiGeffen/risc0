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
    0x00000300, // %25 = get($0x0000, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00010300, // %26 = get($0x0001, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00020300, // %27 = get($0x0002, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00030300, // %28 = get($0x0003, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00040300, // %29 = get($0x0004, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00050300, // %30 = get($0x0005, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00060300, // %31 = get($0x0006, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00070300, // %32 = get($0x0007, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00080300, // %33 = get($0x0008, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00090300, // %34 = get($0x0009, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000a0300, // %35 = get($0x000a, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000b0300, // %36 = get($0x000b, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000c0300, // %37 = get($0x000c, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000d0300, // %38 = get($0x000d, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000e0300, // %39 = get($0x000e, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x000f0300, // %40 = get($0x000f, 0x03): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":125:0)
    0x00000400, // %41 = get($0x0000, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00010400, // %42 = get($0x0001, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00020400, // %43 = get($0x0002, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00030400, // %44 = get($0x0003, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00040400, // %45 = get($0x0004, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00050400, // %46 = get($0x0005, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00060400, // %47 = get($0x0006, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00070400, // %48 = get($0x0007, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00080400, // %49 = get($0x0008, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00090400, // %50 = get($0x0009, 0x04): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":128:0)
    0x00000500, // %51 = get($0x0000, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00010500, // %52 = get($0x0001, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00020500, // %53 = get($0x0002, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00030500, // %54 = get($0x0003, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00040500, // %55 = get($0x0004, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00050500, // %56 = get($0x0005, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00060500, // %57 = get($0x0006, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00070500, // %58 = get($0x0007, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00080500, // %59 = get($0x0008, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00090500, // %60 = get($0x0009, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x000a0500, // %61 = get($0x000a, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x000b0500, // %62 = get($0x000b, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x000c0500, // %63 = get($0x000c, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x000d0500, // %64 = get($0x000d, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x000e0500, // %65 = get($0x000e, 0x05): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":129:0)
    0x00000600, // %66 = get($0x0000, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00010600, // %67 = get($0x0001, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00020600, // %68 = get($0x0002, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00030600, // %69 = get($0x0003, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00040600, // %70 = get($0x0004, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00050600, // %71 = get($0x0005, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00060600, // %72 = get($0x0006, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00070600, // %73 = get($0x0007, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00080600, // %74 = get($0x0008, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00090600, // %75 = get($0x0009, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000a0600, // %76 = get($0x000a, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000b0600, // %77 = get($0x000b, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000c0600, // %78 = get($0x000c, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000d0600, // %79 = get($0x000d, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000e0600, // %80 = get($0x000e, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x000f0600, // %81 = get($0x000f, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00100600, // %82 = get($0x0010, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00110600, // %83 = get($0x0011, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00120600, // %84 = get($0x0012, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00130600, // %85 = get($0x0013, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00140600, // %86 = get($0x0014, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00150600, // %87 = get($0x0015, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00160600, // %88 = get($0x0016, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00170600, // %89 = get($0x0017, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00180600, // %90 = get($0x0018, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00190600, // %91 = get($0x0019, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001a0600, // %92 = get($0x001a, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001b0600, // %93 = get($0x001b, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001c0600, // %94 = get($0x001c, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001d0600, // %95 = get($0x001d, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001e0600, // %96 = get($0x001e, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x001f0600, // %97 = get($0x001f, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00200600, // %98 = get($0x0020, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00210600, // %99 = get($0x0021, 0x06): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0)
    0x00220600, /* %100 = get($0x0022, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00230600, /* %101 = get($0x0023, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00240600, /* %102 = get($0x0024, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00250600, /* %103 = get($0x0025, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00260600, /* %104 = get($0x0026, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00270600, /* %105 = get($0x0027, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00280600, /* %106 = get($0x0028, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00290600, /* %107 = get($0x0029, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002a0600, /* %108 = get($0x002a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002b0600, /* %109 = get($0x002b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002c0600, /* %110 = get($0x002c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002d0600, /* %111 = get($0x002d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002e0600, /* %112 = get($0x002e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x002f0600, /* %113 = get($0x002f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00300600, /* %114 = get($0x0030, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00310600, /* %115 = get($0x0031, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00320600, /* %116 = get($0x0032, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00330600, /* %117 = get($0x0033, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00340600, /* %118 = get($0x0034, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00350600, /* %119 = get($0x0035, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00360600, /* %120 = get($0x0036, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00370600, /* %121 = get($0x0037, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00380600, /* %122 = get($0x0038, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00390600, /* %123 = get($0x0039, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003a0600, /* %124 = get($0x003a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003b0600, /* %125 = get($0x003b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003c0600, /* %126 = get($0x003c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003d0600, /* %127 = get($0x003d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003e0600, /* %128 = get($0x003e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x003f0600, /* %129 = get($0x003f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00400600, /* %130 = get($0x0040, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00410600, /* %131 = get($0x0041, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00420600, /* %132 = get($0x0042, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00430600, /* %133 = get($0x0043, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00440600, /* %134 = get($0x0044, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00450600, /* %135 = get($0x0045, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00460600, /* %136 = get($0x0046, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00470600, /* %137 = get($0x0047, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00480600, /* %138 = get($0x0048, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00490600, /* %139 = get($0x0049, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004a0600, /* %140 = get($0x004a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004b0600, /* %141 = get($0x004b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004c0600, /* %142 = get($0x004c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004d0600, /* %143 = get($0x004d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004e0600, /* %144 = get($0x004e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x004f0600, /* %145 = get($0x004f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00500600, /* %146 = get($0x0050, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00510600, /* %147 = get($0x0051, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00520600, /* %148 = get($0x0052, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00530600, /* %149 = get($0x0053, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00540600, /* %150 = get($0x0054, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00550600, /* %151 = get($0x0055, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00560600, /* %152 = get($0x0056, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00570600, /* %153 = get($0x0057, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00580600, /* %154 = get($0x0058, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00590600, /* %155 = get($0x0059, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005a0600, /* %156 = get($0x005a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005b0600, /* %157 = get($0x005b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005c0600, /* %158 = get($0x005c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005d0600, /* %159 = get($0x005d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005e0600, /* %160 = get($0x005e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x005f0600, /* %161 = get($0x005f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00600600, /* %162 = get($0x0060, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00610600, /* %163 = get($0x0061, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00620600, /* %164 = get($0x0062, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00630600, /* %165 = get($0x0063, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00640600, /* %166 = get($0x0064, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00650600, /* %167 = get($0x0065, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00660600, /* %168 = get($0x0066, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00670600, /* %169 = get($0x0067, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00680600, /* %170 = get($0x0068, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00690600, /* %171 = get($0x0069, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006a0600, /* %172 = get($0x006a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006b0600, /* %173 = get($0x006b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006c0600, /* %174 = get($0x006c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006d0600, /* %175 = get($0x006d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006e0600, /* %176 = get($0x006e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x006f0600, /* %177 = get($0x006f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00700600, /* %178 = get($0x0070, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00710600, /* %179 = get($0x0071, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00720600, /* %180 = get($0x0072, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00730600, /* %181 = get($0x0073, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00740600, /* %182 = get($0x0074, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00750600, /* %183 = get($0x0075, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00760600, /* %184 = get($0x0076, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00770600, /* %185 = get($0x0077, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00780600, /* %186 = get($0x0078, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00790600, /* %187 = get($0x0079, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007a0600, /* %188 = get($0x007a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007b0600, /* %189 = get($0x007b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007c0600, /* %190 = get($0x007c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007d0600, /* %191 = get($0x007d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007e0600, /* %192 = get($0x007e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x007f0600, /* %193 = get($0x007f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00800600, /* %194 = get($0x0080, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00810600, /* %195 = get($0x0081, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00820600, /* %196 = get($0x0082, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00830600, /* %197 = get($0x0083, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00840600, /* %198 = get($0x0084, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00850600, /* %199 = get($0x0085, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00860600, /* %200 = get($0x0086, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00870600, /* %201 = get($0x0087, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00880600, /* %202 = get($0x0088, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00890600, /* %203 = get($0x0089, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008a0600, /* %204 = get($0x008a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008b0600, /* %205 = get($0x008b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008c0600, /* %206 = get($0x008c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008d0600, /* %207 = get($0x008d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008e0600, /* %208 = get($0x008e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x008f0600, /* %209 = get($0x008f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00900600, /* %210 = get($0x0090, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00910600, /* %211 = get($0x0091, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00920600, /* %212 = get($0x0092, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00930600, /* %213 = get($0x0093, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00940600, /* %214 = get($0x0094, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00950600, /* %215 = get($0x0095, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00960600, /* %216 = get($0x0096, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00970600, /* %217 = get($0x0097, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00980600, /* %218 = get($0x0098, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00990600, /* %219 = get($0x0099, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009a0600, /* %220 = get($0x009a, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009b0600, /* %221 = get($0x009b, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009c0600, /* %222 = get($0x009c, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009d0600, /* %223 = get($0x009d, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009e0600, /* %224 = get($0x009e, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x009f0600, /* %225 = get($0x009f, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a00600, /* %226 = get($0x00a0, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a10600, /* %227 = get($0x00a1, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a20600, /* %228 = get($0x00a2, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a30600, /* %229 = get($0x00a3, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a40600, /* %230 = get($0x00a4, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a50600, /* %231 = get($0x00a5, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a60600, /* %232 = get($0x00a6, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a70600, /* %233 = get($0x00a7, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a80600, /* %234 = get($0x00a8, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00a90600, /* %235 = get($0x00a9, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00aa0600, /* %236 = get($0x00aa, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ab0600, /* %237 = get($0x00ab, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ac0600, /* %238 = get($0x00ac, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ad0600, /* %239 = get($0x00ad, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ae0600, /* %240 = get($0x00ae, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00af0600, /* %241 = get($0x00af, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b00600, /* %242 = get($0x00b0, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b10600, /* %243 = get($0x00b1, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b20600, /* %244 = get($0x00b2, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b30600, /* %245 = get($0x00b3, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b40600, /* %246 = get($0x00b4, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b50600, /* %247 = get($0x00b5, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b60600, /* %248 = get($0x00b6, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b70600, /* %249 = get($0x00b7, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b80600, /* %250 = get($0x00b8, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00b90600, /* %251 = get($0x00b9, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ba0600, /* %252 = get($0x00ba, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00bb0600, /* %253 = get($0x00bb, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00bc0600, /* %254 = get($0x00bc, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00bd0600, /* %255 = get($0x00bd, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00be0600, /* %256 = get($0x00be, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00bf0600, /* %257 = get($0x00bf, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c00600, /* %258 = get($0x00c0, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c10600, /* %259 = get($0x00c1, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c20600, /* %260 = get($0x00c2, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c30600, /* %261 = get($0x00c3, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c40600, /* %262 = get($0x00c4, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c50600, /* %263 = get($0x00c5, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c60600, /* %264 = get($0x00c6, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c70600, /* %265 = get($0x00c7, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c80600, /* %266 = get($0x00c8, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00c90600, /* %267 = get($0x00c9, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ca0600, /* %268 = get($0x00ca, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00cb0600, /* %269 = get($0x00cb, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00cc0600, /* %270 = get($0x00cc, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00cd0600, /* %271 = get($0x00cd, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00ce0600, /* %272 = get($0x00ce, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00cf0600, /* %273 = get($0x00cf, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d00600, /* %274 = get($0x00d0, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d10600, /* %275 = get($0x00d1, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d20600, /* %276 = get($0x00d2, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d30600, /* %277 = get($0x00d3, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d40600, /* %278 = get($0x00d4, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x00d50600, /* %279 = get($0x00d5, 0x06):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":130:0) */
    0x000000ab, // %280 = mul(%0, %42): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x00290461, // %281 = add(%41, %280): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x00000003, // %282 = mul(%0, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x011a00af, // %283 = mul(%282, %43): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x011a0003, // %284 = mul(%282, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x011c00b3, // %285 = mul(%284, %44): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x011b0475, // %286 = add(%283, %285): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x011c0003, // %287 = mul(%284, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x011f00b7, // %288 = mul(%287, %45): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x011e0481, // %289 = add(%286, %288): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x011f0003, // %290 = mul(%287, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x012200bb, // %291 = mul(%290, %46): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0121048d, // %292 = add(%289, %291): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01220003, // %293 = mul(%290, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x012500bf, // %294 = mul(%293, %47): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01240499, // %295 = add(%292, %294): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01250003, // %296 = mul(%293, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x012800c3, // %297 = mul(%296, %48): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x012704a5, // %298 = add(%295, %297): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01280003, // %299 = mul(%296, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x012b00c7, // %300 = mul(%299, %49): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x012a04b1, // %301 = add(%298, %300): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x012b0003, // %302 = mul(%299, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x012e00cb, // %303 = mul(%302, %50): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x012d04bd, // %304 = add(%301, %303): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x012e0003, // %305 = mul(%302, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x013100cf, // %306 = mul(%305, %51): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x013004c9, // %307 = add(%304, %306): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01310003, // %308 = mul(%305, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x013400d3, // %309 = mul(%308, %52): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x013304d5, // %310 = add(%307, %309): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01340003, // %311 = mul(%308, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x013700d7, // %312 = mul(%311, %53): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x011904e1, // %313 = add(%281, %312): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01370003, // %314 = mul(%311, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x013a00db, // %315 = mul(%314, %54): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x013604ed, // %316 = add(%310, %315): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x013a0003, // %317 = mul(%314, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x013d00df, // %318 = mul(%317, %55): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x013c04f9, // %319 = add(%316, %318): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x013d0003, // %320 = mul(%317, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014000e3, // %321 = mul(%320, %56): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01390505, // %322 = add(%313, %321): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01400003, // %323 = mul(%320, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014300e7, // %324 = mul(%323, %57): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x013f0511, // %325 = add(%319, %324): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01430003, // %326 = mul(%323, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014600eb, // %327 = mul(%326, %58): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0145051d, // %328 = add(%325, %327): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01460003, // %329 = mul(%326, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014900ef, // %330 = mul(%329, %59): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01480529, // %331 = add(%328, %330): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01490003, // %332 = mul(%329, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014c00f3, // %333 = mul(%332, %60): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x014b0535, // %334 = add(%331, %333): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x014c0003, // %335 = mul(%332, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x014f00f7, // %336 = mul(%335, %61): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x014e0541, // %337 = add(%334, %336): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x014f0003, // %338 = mul(%335, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x015200fb, // %339 = mul(%338, %62): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0151054d, // %340 = add(%337, %339): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01520003, // %341 = mul(%338, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x015500ff, // %342 = mul(%341, %63): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01540559, // %343 = add(%340, %342): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01550003, // %344 = mul(%341, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01580103, // %345 = mul(%344, %64): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01570565, // %346 = add(%343, %345): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01580003, // %347 = mul(%344, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x015b0107, // %348 = mul(%347, %65): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x015a0571, // %349 = add(%346, %348): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x015b0003, // %350 = mul(%347, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x015e010b, // %351 = mul(%350, %66): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0142057d, // %352 = add(%322, %351): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x015e0003, // %353 = mul(%350, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0161010f, // %354 = mul(%353, %67): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01600589, // %355 = add(%352, %354): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01610003, // %356 = mul(%353, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01640113, // %357 = mul(%356, %68): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01630595, // %358 = add(%355, %357): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01640003, // %359 = mul(%356, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01670117, // %360 = mul(%359, %69): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x016605a1, // %361 = add(%358, %360): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01670003, // %362 = mul(%359, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x016a011b, // %363 = mul(%362, %70): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x016905ad, // %364 = add(%361, %363): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x016a0003, // %365 = mul(%362, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x016d011f, // %366 = mul(%365, %71): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x016c05b9, // %367 = add(%364, %366): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x016d0003, // %368 = mul(%365, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01700123, // %369 = mul(%368, %72): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x016f05c5, // %370 = add(%367, %369): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01700003, // %371 = mul(%368, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01730127, // %372 = mul(%371, %73): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x017205d1, // %373 = add(%370, %372): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01730003, // %374 = mul(%371, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0176012b, // %375 = mul(%374, %74): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x017505dd, // %376 = add(%373, %375): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01760003, // %377 = mul(%374, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0179012f, // %378 = mul(%377, %75): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x015d05e9, // %379 = add(%349, %378): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01790003, // %380 = mul(%377, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x017c0133, // %381 = mul(%380, %76): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x017805f5, // %382 = add(%376, %381): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x017c0003, // %383 = mul(%380, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x017f0137, // %384 = mul(%383, %77): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x017e0601, // %385 = add(%382, %384): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x017f0003, // %386 = mul(%383, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0182013b, // %387 = mul(%386, %78): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0181060d, // %388 = add(%385, %387): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01820003, // %389 = mul(%386, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0185013f, // %390 = mul(%389, %79): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x017b0619, // %391 = add(%379, %390): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01850003, // %392 = mul(%389, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01880143, // %393 = mul(%392, %80): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01870625, // %394 = add(%391, %393): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01880003, // %395 = mul(%392, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x018b0147, // %396 = mul(%395, %81): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x018a0631, // %397 = add(%394, %396): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x018b0003, // %398 = mul(%395, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x018e014b, // %399 = mul(%398, %82): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x018d063d, // %400 = add(%397, %399): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x018e0003, // %401 = mul(%398, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0191014f, // %402 = mul(%401, %83): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01900649, // %403 = add(%400, %402): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01910003, // %404 = mul(%401, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01940153, // %405 = mul(%404, %84): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01930655, // %406 = add(%403, %405): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01940003, // %407 = mul(%404, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01970157, // %408 = mul(%407, %85): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01970003, // %409 = mul(%407, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0199015b, // %410 = mul(%409, %86): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01980669, // %411 = add(%408, %410): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01990003, // %412 = mul(%409, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x019c015f, // %413 = mul(%412, %87): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x019b0675, // %414 = add(%411, %413): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x019c0003, // %415 = mul(%412, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x019f0163, // %416 = mul(%415, %88): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x019e0681, // %417 = add(%414, %416): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x019f0003, // %418 = mul(%415, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01a20167, // %419 = mul(%418, %89): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01a1068d, // %420 = add(%417, %419): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01a20003, // %421 = mul(%418, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01a5016b, // %422 = mul(%421, %90): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01a40699, // %423 = add(%420, %422): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01a50003, // %424 = mul(%421, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01a8016f, // %425 = mul(%424, %91): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01a80003, // %426 = mul(%424, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01aa0173, // %427 = mul(%426, %92): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01a906ad, // %428 = add(%425, %427): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01aa0003, // %429 = mul(%426, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01ad0177, // %430 = mul(%429, %93): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01ac06b9, // %431 = add(%428, %430): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01ad0003, // %432 = mul(%429, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01b0017b, // %433 = mul(%432, %94): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01af06c5, // %434 = add(%431, %433): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01b00003, // %435 = mul(%432, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01b3017f, // %436 = mul(%435, %95): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01b206d1, // %437 = add(%434, %436): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01b30003, // %438 = mul(%435, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01b60183, // %439 = mul(%438, %96): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01b506dd, // %440 = add(%437, %439): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01b60003, // %441 = mul(%438, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01b90187, // %442 = mul(%441, %97): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01b806e9, // %443 = add(%440, %442): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01b90003, // %444 = mul(%441, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01bc018b, // %445 = mul(%444, %98): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01bb06f5, // %446 = add(%443, %445): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01bc0003, // %447 = mul(%444, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01bf018f, // %448 = mul(%447, %99): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01be0701, // %449 = add(%446, %448): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01bf0003, // %450 = mul(%447, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01c20193, // %451 = mul(%450, %100): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01c1070d, // %452 = add(%449, %451): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01c20003, // %453 = mul(%450, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01c50197, // %454 = mul(%453, %101): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01c40719, // %455 = add(%452, %454): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01c50003, // %456 = mul(%453, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01c8019b, // %457 = mul(%456, %102): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01c70725, // %458 = add(%455, %457): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01c80003, // %459 = mul(%456, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01cb019f, // %460 = mul(%459, %103): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01a70731, // %461 = add(%423, %460): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01cb0003, // %462 = mul(%459, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01ce01a3, // %463 = mul(%462, %104): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01cd073d, // %464 = add(%461, %463): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01ce0003, // %465 = mul(%462, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01d101a7, // %466 = mul(%465, %105): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01d00749, // %467 = add(%464, %466): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01d10003, // %468 = mul(%465, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01d401ab, // %469 = mul(%468, %106): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01d30755, // %470 = add(%467, %469): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01d40003, // %471 = mul(%468, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01d701af, // %472 = mul(%471, %107): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01960761, // %473 = add(%406, %472): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01d70003, // %474 = mul(%471, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01da01b3, // %475 = mul(%474, %108): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01d9076d, // %476 = add(%473, %475): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01da0003, // %477 = mul(%474, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01dd01b7, // %478 = mul(%477, %109): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01dc0779, // %479 = add(%476, %478): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01dd0003, // %480 = mul(%477, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01e001bb, // %481 = mul(%480, %110): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01df0785, // %482 = add(%479, %481): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01e00003, // %483 = mul(%480, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01e301bf, // %484 = mul(%483, %111): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01e20791, // %485 = add(%482, %484): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01e30003, // %486 = mul(%483, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01e601c3, // %487 = mul(%486, %112): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01e5079d, // %488 = add(%485, %487): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01e60003, // %489 = mul(%486, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01e901c7, // %490 = mul(%489, %113): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01e807a9, // %491 = add(%488, %490): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01e90003, // %492 = mul(%489, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01ec01cb, // %493 = mul(%492, %114): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01eb07b5, // %494 = add(%491, %493): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01ec0003, // %495 = mul(%492, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01ef01cf, // %496 = mul(%495, %115): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01ee07c1, // %497 = add(%494, %496): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01ef0003, // %498 = mul(%495, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01f201d3, // %499 = mul(%498, %116): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x018407cd, // %500 = add(%388, %499): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01f20003, // %501 = mul(%498, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01f501d7, // %502 = mul(%501, %117): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01f407d9, // %503 = add(%500, %502): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01f50003, // %504 = mul(%501, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01f801db, // %505 = mul(%504, %118): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01f107e5, // %506 = add(%497, %505): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01f80003, // %507 = mul(%504, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01fb01df, // %508 = mul(%507, %119): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01fa07f1, // %509 = add(%506, %508): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01fb0003, // %510 = mul(%507, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x01fe01e3, // %511 = mul(%510, %120): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01fd07fd, // %512 = add(%509, %511): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x01fe0003, // %513 = mul(%510, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x020101e7, // %514 = mul(%513, %121): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02000809, // %515 = add(%512, %514): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02010003, // %516 = mul(%513, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x020401eb, // %517 = mul(%516, %122): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02030815, // %518 = add(%515, %517): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02040003, // %519 = mul(%516, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x020701ef, // %520 = mul(%519, %123): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02060821, // %521 = add(%518, %520): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02070003, // %522 = mul(%519, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x020a01f3, // %523 = mul(%522, %124): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0209082d, // %524 = add(%521, %523): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x020a0003, // %525 = mul(%522, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x020d01f7, // %526 = mul(%525, %125): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x020c0839, // %527 = add(%524, %526): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x020d0003, // %528 = mul(%525, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x021001fb, // %529 = mul(%528, %126): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x020f0845, // %530 = add(%527, %529): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02100003, // %531 = mul(%528, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x021301ff, // %532 = mul(%531, %127): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02120851, // %533 = add(%530, %532): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02130003, // %534 = mul(%531, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02160203, // %535 = mul(%534, %128): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0215085d, // %536 = add(%533, %535): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02160003, // %537 = mul(%534, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02190207, // %538 = mul(%537, %129): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02180869, // %539 = add(%536, %538): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02190003, // %540 = mul(%537, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x021c020b, // %541 = mul(%540, %130): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x021b0875, // %542 = add(%539, %541): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x021c0003, // %543 = mul(%540, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x021f020f, // %544 = mul(%543, %131): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x021e0881, // %545 = add(%542, %544): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x021f0003, // %546 = mul(%543, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02220213, // %547 = mul(%546, %132): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0221088d, // %548 = add(%545, %547): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02220003, // %549 = mul(%546, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02250217, // %550 = mul(%549, %133): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02240899, // %551 = add(%548, %550): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02250003, // %552 = mul(%549, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0228021b, // %553 = mul(%552, %134): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x022708a5, // %554 = add(%551, %553): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02280003, // %555 = mul(%552, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x022b021f, // %556 = mul(%555, %135): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x022a08b1, // %557 = add(%554, %556): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x022b0003, // %558 = mul(%555, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x022e0223, // %559 = mul(%558, %136): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x022d08bd, // %560 = add(%557, %559): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x022e0003, // %561 = mul(%558, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02310227, // %562 = mul(%561, %137): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023008c9, // %563 = add(%560, %562): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02310003, // %564 = mul(%561, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0234022b, // %565 = mul(%564, %138): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01f708d5, // %566 = add(%503, %565): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02340003, // %567 = mul(%564, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0237022f, // %568 = mul(%567, %139): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023608e1, // %569 = add(%566, %568): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02370003, // %570 = mul(%567, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x023a0233, // %571 = mul(%570, %140): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023308ed, // %572 = add(%563, %571): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x023a0003, // %573 = mul(%570, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x023d0237, // %574 = mul(%573, %141): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023c08f9, // %575 = add(%572, %574): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x023d0003, // %576 = mul(%573, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0240023b, // %577 = mul(%576, %142): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023f0905, // %578 = add(%575, %577): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02400003, // %579 = mul(%576, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0243023f, // %580 = mul(%579, %143): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02420911, // %581 = add(%578, %580): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02430003, // %582 = mul(%579, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02460243, // %583 = mul(%582, %144): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x0245091d, // %584 = add(%581, %583): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02460003, // %585 = mul(%582, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02490247, // %586 = mul(%585, %145): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02480929, // %587 = add(%584, %586): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02490003, // %588 = mul(%585, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x024c024b, // %589 = mul(%588, %146): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x024b0935, // %590 = add(%587, %589): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x024c0003, // %591 = mul(%588, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x024f024f, // %592 = mul(%591, %147): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x024e0941, // %593 = add(%590, %592): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x024f0003, // %594 = mul(%591, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02520253, // %595 = mul(%594, %148): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x01d6094d, // %596 = add(%470, %595): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02520003, // %597 = mul(%594, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02550257, // %598 = mul(%597, %149): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02540959, // %599 = add(%596, %598): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02550003, // %600 = mul(%597, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0258025b, // %601 = mul(%600, %150): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02570965, // %602 = add(%599, %601): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02580003, // %603 = mul(%600, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x025b025f, // %604 = mul(%603, %151): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x025a0971, // %605 = add(%602, %604): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x025b0003, // %606 = mul(%603, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x025e0263, // %607 = mul(%606, %152): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x025d097d, // %608 = add(%605, %607): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x025e0003, // %609 = mul(%606, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02610267, // %610 = mul(%609, %153): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02600989, // %611 = add(%608, %610): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02610003, // %612 = mul(%609, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0264026b, // %613 = mul(%612, %154): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02630995, // %614 = add(%611, %613): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02640003, // %615 = mul(%612, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0267026f, // %616 = mul(%615, %155): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x026609a1, // %617 = add(%614, %616): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02670003, // %618 = mul(%615, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x026a0273, // %619 = mul(%618, %156): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x026909ad, // %620 = add(%617, %619): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x026a0003, // %621 = mul(%618, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x026d0277, // %622 = mul(%621, %157): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x026c09b9, // %623 = add(%620, %622): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x026d0003, // %624 = mul(%621, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0270027b, // %625 = mul(%624, %158): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x025109c5, // %626 = add(%593, %625): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02700003, // %627 = mul(%624, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0273027f, // %628 = mul(%627, %159): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x027209d1, // %629 = add(%626, %628): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02730003, // %630 = mul(%627, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02760283, // %631 = mul(%630, %160): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x027509dd, // %632 = add(%629, %631): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02760003, // %633 = mul(%630, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02790287, // %634 = mul(%633, %161): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x023909e9, // %635 = add(%569, %634): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02790003, // %636 = mul(%633, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x027c028b, // %637 = mul(%636, %162): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x027b09f5, // %638 = add(%635, %637): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x027c0003, // %639 = mul(%636, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x027f028f, // %640 = mul(%639, %163): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x027e0a01, // %641 = add(%638, %640): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x027f0003, // %642 = mul(%639, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02820293, // %643 = mul(%642, %164): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02810a0d, // %644 = add(%641, %643): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02820003, // %645 = mul(%642, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02850297, // %646 = mul(%645, %165): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02840a19, // %647 = add(%644, %646): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02850003, // %648 = mul(%645, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0288029b, // %649 = mul(%648, %166): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02870a25, // %650 = add(%647, %649): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02880003, // %651 = mul(%648, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x028b029f, // %652 = mul(%651, %167): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x028a0a31, // %653 = add(%650, %652): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x028b0003, // %654 = mul(%651, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x028e02a3, // %655 = mul(%654, %168): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x028d0a3d, // %656 = add(%653, %655): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x028e0003, // %657 = mul(%654, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x029102a7, // %658 = mul(%657, %169): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02900a49, // %659 = add(%656, %658): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02910003, // %660 = mul(%657, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x029402ab, // %661 = mul(%660, %170): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02930a55, // %662 = add(%659, %661): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02940003, // %663 = mul(%660, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x029702af, // %664 = mul(%663, %171): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02960a61, // %665 = add(%662, %664): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02970003, // %666 = mul(%663, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x029a02b3, // %667 = mul(%666, %172): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02990a6d, // %668 = add(%665, %667): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x029a0003, // %669 = mul(%666, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x029d02b7, // %670 = mul(%669, %173): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x029c0a79, // %671 = add(%668, %670): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x029d0003, // %672 = mul(%669, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02a002bb, // %673 = mul(%672, %174): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02780a85, // %674 = add(%632, %673): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02a00003, // %675 = mul(%672, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02a302bf, // %676 = mul(%675, %175): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x029f0a91, // %677 = add(%671, %676): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02a30003, // %678 = mul(%675, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02a602c3, // %679 = mul(%678, %176): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02a50a9d, // %680 = add(%677, %679): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02a60003, // %681 = mul(%678, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02a902c7, // %682 = mul(%681, %177): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02a80aa9, // %683 = add(%680, %682): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02a90003, // %684 = mul(%681, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02ac02cb, // %685 = mul(%684, %178): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02a20ab5, // %686 = add(%674, %685): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02ac0003, // %687 = mul(%684, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02af02cf, // %688 = mul(%687, %179): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02ab0ac1, // %689 = add(%683, %688): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02af0003, // %690 = mul(%687, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02b202d3, // %691 = mul(%690, %180): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02ae0acd, // %692 = add(%686, %691): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02b20003, // %693 = mul(%690, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02b502d7, // %694 = mul(%693, %181): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02b40ad9, // %695 = add(%692, %694): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02b50003, // %696 = mul(%693, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02b802db, // %697 = mul(%696, %182): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02b70ae5, // %698 = add(%695, %697): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02b80003, // %699 = mul(%696, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02bb02df, // %700 = mul(%699, %183): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02b10af1, // %701 = add(%689, %700): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02bb0003, // %702 = mul(%699, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02be02e3, // %703 = mul(%702, %184): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02bd0afd, // %704 = add(%701, %703): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02be0003, // %705 = mul(%702, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02c102e7, // %706 = mul(%705, %185): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02c00b09, // %707 = add(%704, %706): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02c10003, // %708 = mul(%705, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02c402eb, // %709 = mul(%708, %186): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02c30b15, // %710 = add(%707, %709): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02c40003, // %711 = mul(%708, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02c702ef, // %712 = mul(%711, %187): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02c60b21, // %713 = add(%710, %712): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02c70003, // %714 = mul(%711, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02ca02f3, // %715 = mul(%714, %188): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02ba0b2d, // %716 = add(%698, %715): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02ca0003, // %717 = mul(%714, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02cd02f7, // %718 = mul(%717, %189): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02cc0b39, // %719 = add(%716, %718): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02cd0003, // %720 = mul(%717, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02d002fb, // %721 = mul(%720, %190): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02cf0b45, // %722 = add(%719, %721): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02d00003, // %723 = mul(%720, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02d302ff, // %724 = mul(%723, %191): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02c90b51, // %725 = add(%713, %724): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02d30003, // %726 = mul(%723, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02d60303, // %727 = mul(%726, %192): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02d50b5d, // %728 = add(%725, %727): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02d60003, // %729 = mul(%726, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02d90307, // %730 = mul(%729, %193): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02d80b69, // %731 = add(%728, %730): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02d90003, // %732 = mul(%729, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02dc030b, // %733 = mul(%732, %194): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02db0b75, // %734 = add(%731, %733): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02dc0003, // %735 = mul(%732, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02df030f, // %736 = mul(%735, %195): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02d20b81, // %737 = add(%722, %736): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02df0003, // %738 = mul(%735, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02e20313, // %739 = mul(%738, %196): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02e10b8d, // %740 = add(%737, %739): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02e20003, // %741 = mul(%738, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02e50317, // %742 = mul(%741, %197): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02de0b99, // %743 = add(%734, %742): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02e50003, // %744 = mul(%741, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02e8031b, // %745 = mul(%744, %198): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02e70ba5, // %746 = add(%743, %745): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02e80003, // %747 = mul(%744, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02eb031f, // %748 = mul(%747, %199): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02ea0bb1, // %749 = add(%746, %748): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02eb0003, // %750 = mul(%747, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02ee0323, // %751 = mul(%750, %200): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02ed0bbd, // %752 = add(%749, %751): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02ee0003, // %753 = mul(%750, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02f10327, // %754 = mul(%753, %201): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02f00bc9, // %755 = add(%752, %754): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02f10003, // %756 = mul(%753, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02f4032b, // %757 = mul(%756, %202): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02f30bd5, // %758 = add(%755, %757): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02f40003, // %759 = mul(%756, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02f7032f, // %760 = mul(%759, %203): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02e40be1, // %761 = add(%740, %760): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02f70003, // %762 = mul(%759, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02fa0333, // %763 = mul(%762, %204): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02f60bed, // %764 = add(%758, %763): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02fa0003, // %765 = mul(%762, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x02fd0337, // %766 = mul(%765, %205): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02fc0bf9, // %767 = add(%764, %766): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x02fd0003, // %768 = mul(%765, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0300033b, // %769 = mul(%768, %206): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02ff0c05, // %770 = add(%767, %769): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03000003, // %771 = mul(%768, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0303033f, // %772 = mul(%771, %207): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03020c11, // %773 = add(%770, %772): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03030003, // %774 = mul(%771, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03060343, // %775 = mul(%774, %208): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03050c1d, // %776 = add(%773, %775): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03060003, // %777 = mul(%774, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03090347, // %778 = mul(%777, %209): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03080c29, // %779 = add(%776, %778): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03090003, // %780 = mul(%777, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x030c034b, // %781 = mul(%780, %210): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x02f90c35, // %782 = add(%761, %781): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x030c0003, // %783 = mul(%780, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x030f034f, // %784 = mul(%783, %211): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x030e0c41, // %785 = add(%782, %784): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x030f0003, // %786 = mul(%783, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03120353, // %787 = mul(%786, %212): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03110c4d, // %788 = add(%785, %787): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03120003, // %789 = mul(%786, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03150357, // %790 = mul(%789, %213): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03140c59, // %791 = add(%788, %790): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03150003, // %792 = mul(%789, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0318035b, // %793 = mul(%792, %214): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03170c65, // %794 = add(%791, %793): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03180003, // %795 = mul(%792, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x031b035f, // %796 = mul(%795, %215): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x031a0c71, // %797 = add(%794, %796): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x031b0003, // %798 = mul(%795, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x031e0363, // %799 = mul(%798, %216): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x031e0003, // %800 = mul(%798, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03200367, // %801 = mul(%800, %217): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x031f0c85, // %802 = add(%799, %801): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03200003, // %803 = mul(%800, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0323036b, // %804 = mul(%803, %218): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03220c91, // %805 = add(%802, %804): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03230003, // %806 = mul(%803, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0326036f, // %807 = mul(%806, %219): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03250c9d, // %808 = add(%805, %807): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03260003, // %809 = mul(%806, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03290373, // %810 = mul(%809, %220): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03280ca9, // %811 = add(%808, %810): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03290003, // %812 = mul(%809, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x032c0377, // %813 = mul(%812, %221): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x032b0cb5, // %814 = add(%811, %813): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x032c0003, // %815 = mul(%812, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x032f037b, // %816 = mul(%815, %222): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x032e0cc1, // %817 = add(%814, %816): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x032f0003, // %818 = mul(%815, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0332037f, // %819 = mul(%818, %223): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03310ccd, // %820 = add(%817, %819): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03320003, // %821 = mul(%818, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03350383, // %822 = mul(%821, %224): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03340cd9, // %823 = add(%820, %822): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03350003, // %824 = mul(%821, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03380387, // %825 = mul(%824, %225): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03370ce5, // %826 = add(%823, %825): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03380003, // %827 = mul(%824, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x033b038b, // %828 = mul(%827, %226): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x033a0cf1, // %829 = add(%826, %828): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x033b0003, // %830 = mul(%827, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x033e038f, // %831 = mul(%830, %227): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x033d0cfd, // %832 = add(%829, %831): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x033e0003, // %833 = mul(%830, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03410393, // %834 = mul(%833, %228): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03400d09, // %835 = add(%832, %834): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03410003, // %836 = mul(%833, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03440397, // %837 = mul(%836, %229): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03430d15, // %838 = add(%835, %837): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03440003, // %839 = mul(%836, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x0347039b, // %840 = mul(%839, %230): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03460d21, // %841 = add(%838, %840): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03470003, // %842 = mul(%839, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x034a039f, // %843 = mul(%842, %231): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03490d2d, // %844 = add(%841, %843): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x034a0003, // %845 = mul(%842, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x034d03a3, // %846 = mul(%845, %232): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x034c0d39, // %847 = add(%844, %846): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x034d0003, // %848 = mul(%845, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x035003a7, // %849 = mul(%848, %233): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x034f0d45, // %850 = add(%847, %849): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03500003, // %851 = mul(%848, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x035303ab, // %852 = mul(%851, %234): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03520d51, // %853 = add(%850, %852): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03530003, // %854 = mul(%851, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x035603af, // %855 = mul(%854, %235): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03550d5d, // %856 = add(%853, %855): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03560003, // %857 = mul(%854, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x035903b3, // %858 = mul(%857, %236): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03580d69, // %859 = add(%856, %858): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03590003, // %860 = mul(%857, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x035c03b7, // %861 = mul(%860, %237): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x035b0d75, // %862 = add(%859, %861): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x035c0003, // %863 = mul(%860, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x035f03bb, // %864 = mul(%863, %238): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x035e0d81, // %865 = add(%862, %864): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x035f0003, // %866 = mul(%863, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x036203bf, // %867 = mul(%866, %239): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03610d8d, // %868 = add(%865, %867): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03620003, // %869 = mul(%866, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x036503c3, // %870 = mul(%869, %240): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03640d99, // %871 = add(%868, %870): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03650003, // %872 = mul(%869, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x036803c7, // %873 = mul(%872, %241): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03670da5, // %874 = add(%871, %873): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03680003, // %875 = mul(%872, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x036b03cb, // %876 = mul(%875, %242): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x036a0db1, // %877 = add(%874, %876): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x036b0003, // %878 = mul(%875, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x036e03cf, // %879 = mul(%878, %243): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x036d0dbd, // %880 = add(%877, %879): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x036e0003, // %881 = mul(%878, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x037103d3, // %882 = mul(%881, %244): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03700dc9, // %883 = add(%880, %882): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03710003, // %884 = mul(%881, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x037403d7, // %885 = mul(%884, %245): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03730dd5, // %886 = add(%883, %885): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03740003, // %887 = mul(%884, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x037703db, // %888 = mul(%887, %246): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03760de1, // %889 = add(%886, %888): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03770003, // %890 = mul(%887, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x037a03df, // %891 = mul(%890, %247): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03790ded, // %892 = add(%889, %891): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x037a0003, // %893 = mul(%890, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x037d03e3, // %894 = mul(%893, %248): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x037c0df9, // %895 = add(%892, %894): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x037d0003, // %896 = mul(%893, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x038003e7, // %897 = mul(%896, %249): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x037f0e05, // %898 = add(%895, %897): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03800003, // %899 = mul(%896, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x038303eb, // %900 = mul(%899, %250): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03820e11, // %901 = add(%898, %900): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03830003, // %902 = mul(%899, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x038603ef, // %903 = mul(%902, %251): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03850e1d, // %904 = add(%901, %903): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03860003, // %905 = mul(%902, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x038903f3, // %906 = mul(%905, %252): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03880e29, // %907 = add(%904, %906): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03890003, // %908 = mul(%905, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x038c03f7, // %909 = mul(%908, %253): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x038b0e35, // %910 = add(%907, %909): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x038c0003, // %911 = mul(%908, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x038f03fb, // %912 = mul(%911, %254): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x038e0e41, // %913 = add(%910, %912): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x038f0003, // %914 = mul(%911, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x039203ff, // %915 = mul(%914, %255): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03910e4d, // %916 = add(%913, %915): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03920003, // %917 = mul(%914, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03950403, // %918 = mul(%917, %256): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03940e59, // %919 = add(%916, %918): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03950003, // %920 = mul(%917, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03980407, // %921 = mul(%920, %257): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03970e65, // %922 = add(%919, %921): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03980003, // %923 = mul(%920, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x039b040b, // %924 = mul(%923, %258): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x039a0e71, // %925 = add(%922, %924): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x039b0003, // %926 = mul(%923, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x039e040f, // %927 = mul(%926, %259): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x039d0e7d, // %928 = add(%925, %927): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x039e0003, // %929 = mul(%926, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03a10413, // %930 = mul(%929, %260): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03a00e89, // %931 = add(%928, %930): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03a10003, // %932 = mul(%929, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03a40417, // %933 = mul(%932, %261): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03a30e95, // %934 = add(%931, %933): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03a40003, // %935 = mul(%932, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03a7041b, // %936 = mul(%935, %262): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03a60ea1, // %937 = add(%934, %936): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03a70003, // %938 = mul(%935, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03aa041f, // %939 = mul(%938, %263): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03a90ead, // %940 = add(%937, %939): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03aa0003, // %941 = mul(%938, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03ad0423, // %942 = mul(%941, %264): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03ac0eb9, // %943 = add(%940, %942): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03ad0003, // %944 = mul(%941, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03b00427, // %945 = mul(%944, %265): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03af0ec5, // %946 = add(%943, %945): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03b00003, // %947 = mul(%944, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03b3042b, // %948 = mul(%947, %266): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03b20ed1, // %949 = add(%946, %948): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03b30003, // %950 = mul(%947, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03b6042f, // %951 = mul(%950, %267): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03b50edd, // %952 = add(%949, %951): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03b60003, // %953 = mul(%950, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03b90433, // %954 = mul(%953, %268): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03b80ee9, // %955 = add(%952, %954): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03b90003, // %956 = mul(%953, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03bc0437, // %957 = mul(%956, %269): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03bb0ef5, // %958 = add(%955, %957): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03bc0003, // %959 = mul(%956, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03bf043b, // %960 = mul(%959, %270): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03be0f01, // %961 = add(%958, %960): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03bf0003, // %962 = mul(%959, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03c2043f, // %963 = mul(%962, %271): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03c10f0d, // %964 = add(%961, %963): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03c20003, // %965 = mul(%962, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03c50443, // %966 = mul(%965, %272): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03c40f19, // %967 = add(%964, %966): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03c50003, // %968 = mul(%965, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03c80447, // %969 = mul(%968, %273): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03c70f25, // %970 = add(%967, %969): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03c80003, // %971 = mul(%968, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03cb044b, // %972 = mul(%971, %274): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03ca0f31, // %973 = add(%970, %972): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03cb0003, // %974 = mul(%971, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03ce044f, // %975 = mul(%974, %275): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03cd0f3d, // %976 = add(%973, %975): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03ce0003, // %977 = mul(%974, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03d10453, // %978 = mul(%977, %276): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03d00f49, // %979 = add(%976, %978): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03d10003, // %980 = mul(%977, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03d40457, // %981 = mul(%980, %277): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03d30f55, // %982 = add(%979, %981): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03d40003, // %983 = mul(%980, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03d7045b, // %984 = mul(%983, %278): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03d60f61, // %985 = add(%982, %984): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03d70003, // %986 = mul(%983, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03da045f, // %987 = mul(%986, %279): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":148:0)
    0x03d90f6d, // %988 = add(%985, %987): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":146:0)
    0x03da0003, // %989 = mul(%986, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":149:0)
    0x03dd0067, // %990 = mul(%989, %25): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03dd0003, // %991 = mul(%989, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03df006b, // %992 = mul(%991, %26): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03de0f81, // %993 = add(%990, %992): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03df0003, // %994 = mul(%991, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03e2006f, // %995 = mul(%994, %27): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e10f8d, // %996 = add(%993, %995): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e20003, // %997 = mul(%994, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03e50073, // %998 = mul(%997, %28): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e40f99, // %999 = add(%996, %998): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e50003, // %1000 = mul(%997, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03e80077, // %1001 = mul(%1000, %29): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e70fa5, // %1002 = add(%999, %1001): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03e80003, // %1003 = mul(%1000, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03eb007b, // %1004 = mul(%1003, %30): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03ea0fb1, /* %1005 = add(%1002, %1004):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03eb0003, // %1006 = mul(%1003, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03ee007f, // %1007 = mul(%1006, %31): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03ed0fbd, /* %1008 = add(%1005, %1007):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03ee0003, // %1009 = mul(%1006, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03f10083, // %1010 = mul(%1009, %32): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03f00fc9, /* %1011 = add(%1008, %1010):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03f10003, // %1012 = mul(%1009, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03f40087, // %1013 = mul(%1012, %33): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03f30fd5, /* %1014 = add(%1011, %1013):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03f40003, // %1015 = mul(%1012, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03f7008b, // %1016 = mul(%1015, %34): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03f60fe1, /* %1017 = add(%1014, %1016):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03f70003, // %1018 = mul(%1015, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03fa008f, // %1019 = mul(%1018, %35): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03f90fed, /* %1020 = add(%1017, %1019):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03fa0003, // %1021 = mul(%1018, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x03fd0093, // %1022 = mul(%1021, %36): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03fc0ff9, /* %1023 = add(%1020, %1022):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x03fd0003, // %1024 = mul(%1021, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x04000097, // %1025 = mul(%1024, %37): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x03ff1005, /* %1026 = add(%1023, %1025):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x04000003, // %1027 = mul(%1024, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x0403009b, // %1028 = mul(%1027, %38): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x04021011, /* %1029 = add(%1026, %1028):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x04030003, // %1030 = mul(%1027, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x0406009f, // %1031 = mul(%1030, %39): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x0405101d, /* %1032 = add(%1029, %1031):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x04060003, // %1033 = mul(%1030, %0): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":154:0)
    0x040900a3, // %1034 = mul(%1033, %40): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0)
    0x04081029, /* %1035 = add(%1032, %1034):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":153:0) */
    0x031d0012, // %1036 = sub(%797, %4): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0)
    0x0002000e, // %1037 = sub(%2, %3): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x040d0108, // %1038 = inv(%1037): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0)
    0x040c103b, /* %1039 = mul(%1036, %1038):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x030b0016, // %1040 = sub(%779, %5): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0)
    0x0006000b, // %1041 = mul(%6, %2): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x04101046, /* %1042 = sub(%1040, %1041):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x00030007, // %1043 = mul(%3, %1): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x0002104e, // %1044 = sub(%2, %1043): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x040d1053, /* %1045 = mul(%1037, %1044):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04150108, // %1046 = inv(%1045): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0)
    0x0412105b, /* %1047 = mul(%1042, %1046):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x040f105d, /* %1048 = add(%1039, %1047):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x03dc001e, // %1049 = sub(%988, %7): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0)
    0x0008000b, // %1050 = mul(%8, %2): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x0419106a, /* %1051 = sub(%1049, %1050):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x0002000b, // %1052 = mul(%2, %2): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x00091073, // %1053 = mul(%9, %1052): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x041b1076, /* %1054 = sub(%1051, %1053):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x00021073, // %1055 = mul(%2, %1052): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x000a107f, // %1056 = mul(%10, %1055): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x041e1082, /* %1057 = sub(%1054, %1056):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x041c1073, /* %1058 = mul(%1052, %1052):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0) */
    0x000b108b, // %1059 = mul(%11, %1058): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x0421108e, /* %1060 = sub(%1057, %1059):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x0002108b, // %1061 = mul(%2, %1058): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x000c1097, // %1062 = mul(%12, %1061): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x0424109a, /* %1063 = sub(%1060, %1062):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x00010007, // %1064 = mul(%1, %1): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x000310a3, // %1065 = mul(%3, %1064): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x000210a6, // %1066 = sub(%2, %1065): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x041510ab, /* %1067 = mul(%1045, %1066):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x000110a3, // %1068 = mul(%1, %1064): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x000310b3, // %1069 = mul(%3, %1068): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x000210b6, // %1070 = sub(%2, %1069): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x042b10bb, /* %1071 = mul(%1067, %1070):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x042810a3, /* %1072 = mul(%1064, %1064):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x000310c3, // %1073 = mul(%3, %1072): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x000210c6, // %1074 = sub(%2, %1073): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x042f10cb, /* %1075 = mul(%1071, %1074):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x043010c3, /* %1076 = mul(%1072, %1072):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x043410d3, /* %1077 = mul(%1076, %1076):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x000110d7, // %1078 = mul(%1, %1077): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x043610db, /* %1079 = mul(%1078, %1078):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x043710df, /* %1080 = mul(%1079, %1079):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x000310e3, // %1081 = mul(%3, %1080): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x000210e6, // %1082 = sub(%2, %1081): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x043310eb, /* %1083 = mul(%1075, %1082):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x043b0108, // %1084 = inv(%1083): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0)
    0x042710f3, /* %1085 = mul(%1063, %1084):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x041810f5, /* %1086 = add(%1048, %1085):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x01ca0036, // %1087 = sub(%458, %13): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0)
    0x000e000b, // %1088 = mul(%14, %2): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x043f1102, /* %1089 = sub(%1087, %1088):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x000f1073, // %1090 = mul(%15, %1052): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x0441110a, /* %1091 = sub(%1089, %1090):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x0010107f, // %1092 = mul(%16, %1055): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x04431112, /* %1093 = sub(%1091, %1092):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x0011108b, // %1094 = mul(%17, %1058): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x0445111a, /* %1095 = sub(%1093, %1094):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x00121097, // %1096 = mul(%18, %1061): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x04471122, /* %1097 = sub(%1095, %1096):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x042c10b3, /* %1098 = mul(%1068, %1068):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x0001112b, // %1099 = mul(%1, %1098): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x0003112f, // %1100 = mul(%3, %1099): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x00021132, // %1101 = sub(%2, %1100): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x042b1137, /* %1102 = mul(%1067, %1101):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x044b112f, /* %1103 = mul(%1099, %1099):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0) */
    0x0001113f, // %1104 = mul(%1, %1103): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x00031143, // %1105 = mul(%3, %1104): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x00021146, // %1106 = sub(%2, %1105): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x044e114b, /* %1107 = mul(%1102, %1106):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x000310d7, // %1108 = mul(%3, %1077): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x00021152, // %1109 = sub(%2, %1108): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":175:0)
    0x04531157, /* %1110 = mul(%1107, %1109):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04560108, // %1111 = inv(%1110): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0)
    0x0449115f, /* %1112 = mul(%1097, %1111):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x043e1161, /* %1113 = add(%1086, %1112):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x026f004e, // %1114 = sub(%623, %19): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0)
    0x0014000b, // %1115 = mul(%20, %2): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x045a116e, /* %1116 = sub(%1114, %1115):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x00151073, // %1117 = mul(%21, %1052): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x045c1176, /* %1118 = sub(%1116, %1117):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x0016107f, // %1119 = mul(%22, %1055): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x045e117e, /* %1120 = sub(%1118, %1119):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x0017108b, // %1121 = mul(%23, %1058): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":165:0)
    0x04601186, /* %1122 = sub(%1120, %1121):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":163:0) */
    0x040d10ab, /* %1123 = mul(%1037, %1066):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04631137, /* %1124 = mul(%1123, %1101):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x0464114b, /* %1125 = mul(%1124, %1106):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04651157, /* %1126 = mul(%1125, %1109):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":172:0) */
    0x04660108, // %1127 = inv(%1126): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0)
    0x0462119f, /* %1128 = mul(%1122, %1127):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x045911a1, /* %1129 = add(%1113, %1128):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":178:0) */
    0x040b0062, // %1130 = sub(%1035, %24): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":181:0)
    0x0003000f, // %1131 = mul(%3, %3): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":182:0)
    0x046b11af, /* %1132 = mul(%1131, %1131):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":182:0) */
    0x000211b2, // %1133 = sub(%2, %1132): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":182:0)
    0x046d0108, // %1134 = inv(%1133): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":184:0)
    0x046a11bb, /* %1135 = mul(%1130, %1134):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":184:0) */
    0x046911bd, /* %1136 = add(%1129, %1135):
                 * loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":184:0) */
    0x00000704, // set($0x0000, 0x07): loc("cirgen/compiler/passes/MakeVerifyTaps.cpp":186:0)
];

#[inline(always)]
pub fn verify_taps_rv32im(
    arg0: &[u32; 4 * EXT_ELEM_SIZE],
    arg1: &[u32; 21 * EXT_ELEM_SIZE],
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
