/*------------------------------------------------------------------------------
// CLING - the C++ LLVM-based InterpreterG :)
//
// This file is dual-licensed: you can choose to license it under the University
// of Illinois Open Source License or the GNU Lesser General Public License. See
// LICENSE.TXT for details.
//----------------------------------------------------------------------------*/

// RUN: true
// Used as library source by callable_lib_BB.C, etc.
CLING_EXPORT int cling_testlibrary_function_B() {
  return 0xBBBB;
}
