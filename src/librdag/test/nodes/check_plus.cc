/**
 * Copyright (C) 2014 - present by OpenGamma Inc. and the OpenGamma group of companies
 *
 * Please see distribution for license.
 */
// NOTE: This code is autogenerated, see src/generator/scripts/testgen.m
 
#include "gtest/gtest.h"
#include "terminal.hh"
#include "execution.hh"
#include "dispatch.hh"
#include "testnodes.hh"

using namespace std;
using namespace librdag;
using namespace testnodes;
using ::testing::TestWithParam;
using ::testing::Values;

/**
 * Check PLUS node behaves
 */

BINARY_NODE_TEST_SETUP(PLUS)

INSTANTIATE_NODE_TEST_CASE_P(PLUSTests,PLUS,
Values
(
// real scalar plus real scalar
new CheckBinary<PLUS>(OGRealScalar::create(      7.0), OGRealScalar::create(      7.0), OGRealScalar::create(     14.0), MATHSEQUAL),
// real scalar plus complex scalar
new CheckBinary<PLUS>(OGRealScalar::create(      7.0), OGComplexScalar::create({      5.0,     11.0}), OGComplexScalar::create({     12.0,     11.0}), MATHSEQUAL),
// complex scalar plus real scalar
new CheckBinary<PLUS>(OGComplexScalar::create({      5.0,     11.0}), OGRealScalar::create(      7.0), OGComplexScalar::create({     12.0,     11.0}), MATHSEQUAL),
// complex scalar plus complex scalar
new CheckBinary<PLUS>(OGComplexScalar::create({      5.0,     11.0}), OGComplexScalar::create({      5.0,     11.0}), OGComplexScalar::create({     10.0,     22.0}), MATHSEQUAL),
// real scalar plus real length 4 column vector
new CheckBinary<PLUS>(OGRealScalar::create(      7.0), OGRealDenseMatrix::create({{1.0},{2.0},{3.0},{4.0}}), OGRealDenseMatrix::create({{8.0},{9.0},{10.0},{11.0}}), MATHSEQUAL),
// real scalar plus real length 4 row vector
new CheckBinary<PLUS>(OGRealScalar::create(      7.0), OGRealDenseMatrix::create({{4.0,3.0,2.0,1.0}}), OGRealDenseMatrix::create({{11.0,10.0,9.0,8.0}}), MATHSEQUAL),
// complex scalar plus real length 4 column vector
new CheckBinary<PLUS>(OGComplexScalar::create({      5.0,     11.0}), OGRealDenseMatrix::create({{1.0},{2.0},{3.0},{4.0}}), OGComplexDenseMatrix::create({{{6.0,11.0}},{{7.0,11.0}},{{8.0,11.0}},{{9.0,11.0}}}), MATHSEQUAL),
// complex scalar plus real length 4 row vector
new CheckBinary<PLUS>(OGComplexScalar::create({      5.0,     11.0}), OGRealDenseMatrix::create({{4.0,3.0,2.0,1.0}}), OGComplexDenseMatrix::create({{{9.0,11.0},{8.0,11.0},{7.0,11.0},{6.0,11.0}}}), MATHSEQUAL),
// real length 4 column vector plus real scalar
new CheckBinary<PLUS>(OGRealDenseMatrix::create({{1.0},{2.0},{3.0},{4.0}}), OGRealScalar::create(      7.0), OGRealDenseMatrix::create({{8.0},{9.0},{10.0},{11.0}}), MATHSEQUAL),
// real length 4 row vector plus real scalar
new CheckBinary<PLUS>(OGRealDenseMatrix::create({{4.0,3.0,2.0,1.0}}), OGRealScalar::create(      7.0), OGRealDenseMatrix::create({{11.0,10.0,9.0,8.0}}), MATHSEQUAL),
// real length 4 column vector plus complex scalar
new CheckBinary<PLUS>(OGRealDenseMatrix::create({{1.0},{2.0},{3.0},{4.0}}), OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{6.0,11.0}},{{7.0,11.0}},{{8.0,11.0}},{{9.0,11.0}}}), MATHSEQUAL),
// real length 4 row vector plus complex scalar
new CheckBinary<PLUS>(OGRealDenseMatrix::create({{4.0,3.0,2.0,1.0}}), OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{9.0,11.0},{8.0,11.0},{7.0,11.0},{6.0,11.0}}}), MATHSEQUAL),
// real scalar plus complex length 4 column vector
new CheckBinary<PLUS>(OGRealScalar::create(      7.0), OGComplexDenseMatrix::create({{{1.0,4.0}},{{2.0,3.0}},{{3.0,2.0}},{{4.0,1.0}}}), OGComplexDenseMatrix::create({{{8.0,4.0}},{{9.0,3.0}},{{10.0,2.0}},{{11.0,1.0}}}), MATHSEQUAL),
// real scalar plus complex length 4 row vector
new CheckBinary<PLUS>(OGRealScalar::create(      7.0), OGComplexDenseMatrix::create({{{4.0,1.0},{3.0,2.0},{2.0,3.0},{1.0,4.0}}}), OGComplexDenseMatrix::create({{{11.0,1.0},{10.0,2.0},{9.0,3.0},{8.0,4.0}}}), MATHSEQUAL),
// complex scalar plus complex length 4 column vector
new CheckBinary<PLUS>(OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{1.0,4.0}},{{2.0,3.0}},{{3.0,2.0}},{{4.0,1.0}}}), OGComplexDenseMatrix::create({{{6.0,15.0}},{{7.0,14.0}},{{8.0,13.0}},{{9.0,12.0}}}), MATHSEQUAL),
// complex scalar plus complex length 4 row vector
new CheckBinary<PLUS>(OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{4.0,1.0},{3.0,2.0},{2.0,3.0},{1.0,4.0}}}), OGComplexDenseMatrix::create({{{9.0,12.0},{8.0,13.0},{7.0,14.0},{6.0,15.0}}}), MATHSEQUAL),
// complex length 4 column vector plus real scalar
new CheckBinary<PLUS>(OGComplexDenseMatrix::create({{{1.0,4.0}},{{2.0,3.0}},{{3.0,2.0}},{{4.0,1.0}}}), OGRealScalar::create(      7.0), OGComplexDenseMatrix::create({{{8.0,4.0}},{{9.0,3.0}},{{10.0,2.0}},{{11.0,1.0}}}), MATHSEQUAL),
// complex length 4 row vector plus real scalar
new CheckBinary<PLUS>(OGComplexDenseMatrix::create({{{4.0,1.0},{3.0,2.0},{2.0,3.0},{1.0,4.0}}}), OGRealScalar::create(      7.0), OGComplexDenseMatrix::create({{{11.0,1.0},{10.0,2.0},{9.0,3.0},{8.0,4.0}}}), MATHSEQUAL),
// complex length 4 column vector plus complex scalar
new CheckBinary<PLUS>(OGComplexDenseMatrix::create({{{1.0,4.0}},{{2.0,3.0}},{{3.0,2.0}},{{4.0,1.0}}}), OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{6.0,15.0}},{{7.0,14.0}},{{8.0,13.0}},{{9.0,12.0}}}), MATHSEQUAL),
// complex length 4 row vector plus complex scalar
new CheckBinary<PLUS>(OGComplexDenseMatrix::create({{{4.0,1.0},{3.0,2.0},{2.0,3.0},{1.0,4.0}}}), OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{9.0,12.0},{8.0,13.0},{7.0,14.0},{6.0,15.0}}}), MATHSEQUAL),
// real scalar plus real 5x4 matrix
new CheckBinary<PLUS>(OGRealScalar::create(      7.0), OGRealDenseMatrix::create({{1.0,3.0,2.0,1.0},{2.0,1.0,3.0,2.0},{3.0,2.0,1.0,3.0},{4.0,3.0,2.0,1.0},{5.0,4.0,3.0,2.0}}), OGRealDenseMatrix::create({{8.0,10.0,9.0,8.0},{9.0,8.0,10.0,9.0},{10.0,9.0,8.0,10.0},{11.0,10.0,9.0,8.0},{12.0,11.0,10.0,9.0}}), MATHSEQUAL),
// real scalar plus real 4x5 matrix
new CheckBinary<PLUS>(OGRealScalar::create(      7.0), OGRealDenseMatrix::create({{1.0,4.0,3.0,2.0,1.0},{2.0,1.0,4.0,3.0,2.0},{3.0,2.0,1.0,4.0,3.0},{4.0,3.0,2.0,1.0,4.0}}), OGRealDenseMatrix::create({{8.0,11.0,10.0,9.0,8.0},{9.0,8.0,11.0,10.0,9.0},{10.0,9.0,8.0,11.0,10.0},{11.0,10.0,9.0,8.0,11.0}}), MATHSEQUAL),
// complex scalar plus real 5x4 matrix
new CheckBinary<PLUS>(OGComplexScalar::create({      5.0,     11.0}), OGRealDenseMatrix::create({{1.0,3.0,2.0,1.0},{2.0,1.0,3.0,2.0},{3.0,2.0,1.0,3.0},{4.0,3.0,2.0,1.0},{5.0,4.0,3.0,2.0}}), OGComplexDenseMatrix::create({{{6.0,11.0},{8.0,11.0},{7.0,11.0},{6.0,11.0}},{{7.0,11.0},{6.0,11.0},{8.0,11.0},{7.0,11.0}},{{8.0,11.0},{7.0,11.0},{6.0,11.0},{8.0,11.0}},{{9.0,11.0},{8.0,11.0},{7.0,11.0},{6.0,11.0}},{{10.0,11.0},{9.0,11.0},{8.0,11.0},{7.0,11.0}}}), MATHSEQUAL),
// complex scalar plus real 4x5 matrix
new CheckBinary<PLUS>(OGComplexScalar::create({      5.0,     11.0}), OGRealDenseMatrix::create({{1.0,4.0,3.0,2.0,1.0},{2.0,1.0,4.0,3.0,2.0},{3.0,2.0,1.0,4.0,3.0},{4.0,3.0,2.0,1.0,4.0}}), OGComplexDenseMatrix::create({{{6.0,11.0},{9.0,11.0},{8.0,11.0},{7.0,11.0},{6.0,11.0}},{{7.0,11.0},{6.0,11.0},{9.0,11.0},{8.0,11.0},{7.0,11.0}},{{8.0,11.0},{7.0,11.0},{6.0,11.0},{9.0,11.0},{8.0,11.0}},{{9.0,11.0},{8.0,11.0},{7.0,11.0},{6.0,11.0},{9.0,11.0}}}), MATHSEQUAL),
// real 5x4 matrix plus real scalar
new CheckBinary<PLUS>(OGRealDenseMatrix::create({{1.0,3.0,2.0,1.0},{2.0,1.0,3.0,2.0},{3.0,2.0,1.0,3.0},{4.0,3.0,2.0,1.0},{5.0,4.0,3.0,2.0}}), OGRealScalar::create(      7.0), OGRealDenseMatrix::create({{8.0,10.0,9.0,8.0},{9.0,8.0,10.0,9.0},{10.0,9.0,8.0,10.0},{11.0,10.0,9.0,8.0},{12.0,11.0,10.0,9.0}}), MATHSEQUAL),
// real 4x5 matrix plus real scalar
new CheckBinary<PLUS>(OGRealDenseMatrix::create({{1.0,4.0,3.0,2.0,1.0},{2.0,1.0,4.0,3.0,2.0},{3.0,2.0,1.0,4.0,3.0},{4.0,3.0,2.0,1.0,4.0}}), OGRealScalar::create(      7.0), OGRealDenseMatrix::create({{8.0,11.0,10.0,9.0,8.0},{9.0,8.0,11.0,10.0,9.0},{10.0,9.0,8.0,11.0,10.0},{11.0,10.0,9.0,8.0,11.0}}), MATHSEQUAL),
// real 5x4 matrix plus complex scalar
new CheckBinary<PLUS>(OGRealDenseMatrix::create({{1.0,3.0,2.0,1.0},{2.0,1.0,3.0,2.0},{3.0,2.0,1.0,3.0},{4.0,3.0,2.0,1.0},{5.0,4.0,3.0,2.0}}), OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{6.0,11.0},{8.0,11.0},{7.0,11.0},{6.0,11.0}},{{7.0,11.0},{6.0,11.0},{8.0,11.0},{7.0,11.0}},{{8.0,11.0},{7.0,11.0},{6.0,11.0},{8.0,11.0}},{{9.0,11.0},{8.0,11.0},{7.0,11.0},{6.0,11.0}},{{10.0,11.0},{9.0,11.0},{8.0,11.0},{7.0,11.0}}}), MATHSEQUAL),
// real 4x5 matrix plus complex scalar
new CheckBinary<PLUS>(OGRealDenseMatrix::create({{1.0,4.0,3.0,2.0,1.0},{2.0,1.0,4.0,3.0,2.0},{3.0,2.0,1.0,4.0,3.0},{4.0,3.0,2.0,1.0,4.0}}), OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{6.0,11.0},{9.0,11.0},{8.0,11.0},{7.0,11.0},{6.0,11.0}},{{7.0,11.0},{6.0,11.0},{9.0,11.0},{8.0,11.0},{7.0,11.0}},{{8.0,11.0},{7.0,11.0},{6.0,11.0},{9.0,11.0},{8.0,11.0}},{{9.0,11.0},{8.0,11.0},{7.0,11.0},{6.0,11.0},{9.0,11.0}}}), MATHSEQUAL),
// real scalar plus complex 5x4 matrix
new CheckBinary<PLUS>(OGRealScalar::create(      7.0), OGComplexDenseMatrix::create({{{1.0,5.0},{3.0,2.0},{2.0,3.0},{1.0,4.0}},{{2.0,4.0},{1.0,5.0},{3.0,2.0},{2.0,3.0}},{{3.0,3.0},{2.0,4.0},{1.0,5.0},{3.0,2.0}},{{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{5.0,1.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}}}), OGComplexDenseMatrix::create({{{8.0,5.0},{10.0,2.0},{9.0,3.0},{8.0,4.0}},{{9.0,4.0},{8.0,5.0},{10.0,2.0},{9.0,3.0}},{{10.0,3.0},{9.0,4.0},{8.0,5.0},{10.0,2.0}},{{11.0,2.0},{10.0,3.0},{9.0,4.0},{8.0,5.0}},{{12.0,1.0},{11.0,2.0},{10.0,3.0},{9.0,4.0}}}), MATHSEQUAL),
// real scalar plus complex 4x5 matrix
new CheckBinary<PLUS>(OGRealScalar::create(      7.0), OGComplexDenseMatrix::create({{{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}},{{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0}},{{4.0,1.0},{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0}}}), OGComplexDenseMatrix::create({{{8.0,4.0},{11.0,2.0},{10.0,3.0},{9.0,4.0},{8.0,5.0}},{{9.0,3.0},{8.0,4.0},{11.0,2.0},{10.0,3.0},{9.0,4.0}},{{10.0,2.0},{9.0,3.0},{8.0,4.0},{11.0,2.0},{10.0,3.0}},{{11.0,1.0},{10.0,2.0},{9.0,3.0},{8.0,4.0},{11.0,2.0}}}), MATHSEQUAL),
// complex scalar plus complex 5x4 matrix
new CheckBinary<PLUS>(OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{1.0,5.0},{3.0,2.0},{2.0,3.0},{1.0,4.0}},{{2.0,4.0},{1.0,5.0},{3.0,2.0},{2.0,3.0}},{{3.0,3.0},{2.0,4.0},{1.0,5.0},{3.0,2.0}},{{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{5.0,1.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}}}), OGComplexDenseMatrix::create({{{6.0,16.0},{8.0,13.0},{7.0,14.0},{6.0,15.0}},{{7.0,15.0},{6.0,16.0},{8.0,13.0},{7.0,14.0}},{{8.0,14.0},{7.0,15.0},{6.0,16.0},{8.0,13.0}},{{9.0,13.0},{8.0,14.0},{7.0,15.0},{6.0,16.0}},{{10.0,12.0},{9.0,13.0},{8.0,14.0},{7.0,15.0}}}), MATHSEQUAL),
// complex scalar plus complex 4x5 matrix
new CheckBinary<PLUS>(OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}},{{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0}},{{4.0,1.0},{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0}}}), OGComplexDenseMatrix::create({{{6.0,15.0},{9.0,13.0},{8.0,14.0},{7.0,15.0},{6.0,16.0}},{{7.0,14.0},{6.0,15.0},{9.0,13.0},{8.0,14.0},{7.0,15.0}},{{8.0,13.0},{7.0,14.0},{6.0,15.0},{9.0,13.0},{8.0,14.0}},{{9.0,12.0},{8.0,13.0},{7.0,14.0},{6.0,15.0},{9.0,13.0}}}), MATHSEQUAL),
// complex 5x4 matrix plus real scalar
new CheckBinary<PLUS>(OGComplexDenseMatrix::create({{{1.0,5.0},{3.0,2.0},{2.0,3.0},{1.0,4.0}},{{2.0,4.0},{1.0,5.0},{3.0,2.0},{2.0,3.0}},{{3.0,3.0},{2.0,4.0},{1.0,5.0},{3.0,2.0}},{{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{5.0,1.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}}}), OGRealScalar::create(      7.0), OGComplexDenseMatrix::create({{{8.0,5.0},{10.0,2.0},{9.0,3.0},{8.0,4.0}},{{9.0,4.0},{8.0,5.0},{10.0,2.0},{9.0,3.0}},{{10.0,3.0},{9.0,4.0},{8.0,5.0},{10.0,2.0}},{{11.0,2.0},{10.0,3.0},{9.0,4.0},{8.0,5.0}},{{12.0,1.0},{11.0,2.0},{10.0,3.0},{9.0,4.0}}}), MATHSEQUAL),
// complex 4x5 matrix plus real scalar
new CheckBinary<PLUS>(OGComplexDenseMatrix::create({{{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}},{{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0}},{{4.0,1.0},{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0}}}), OGRealScalar::create(      7.0), OGComplexDenseMatrix::create({{{8.0,4.0},{11.0,2.0},{10.0,3.0},{9.0,4.0},{8.0,5.0}},{{9.0,3.0},{8.0,4.0},{11.0,2.0},{10.0,3.0},{9.0,4.0}},{{10.0,2.0},{9.0,3.0},{8.0,4.0},{11.0,2.0},{10.0,3.0}},{{11.0,1.0},{10.0,2.0},{9.0,3.0},{8.0,4.0},{11.0,2.0}}}), MATHSEQUAL),
// complex 5x4 matrix plus complex scalar
new CheckBinary<PLUS>(OGComplexDenseMatrix::create({{{1.0,5.0},{3.0,2.0},{2.0,3.0},{1.0,4.0}},{{2.0,4.0},{1.0,5.0},{3.0,2.0},{2.0,3.0}},{{3.0,3.0},{2.0,4.0},{1.0,5.0},{3.0,2.0}},{{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{5.0,1.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}}}), OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{6.0,16.0},{8.0,13.0},{7.0,14.0},{6.0,15.0}},{{7.0,15.0},{6.0,16.0},{8.0,13.0},{7.0,14.0}},{{8.0,14.0},{7.0,15.0},{6.0,16.0},{8.0,13.0}},{{9.0,13.0},{8.0,14.0},{7.0,15.0},{6.0,16.0}},{{10.0,12.0},{9.0,13.0},{8.0,14.0},{7.0,15.0}}}), MATHSEQUAL),
// complex 4x5 matrix plus complex scalar
new CheckBinary<PLUS>(OGComplexDenseMatrix::create({{{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}},{{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0}},{{4.0,1.0},{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0}}}), OGComplexScalar::create({      5.0,     11.0}), OGComplexDenseMatrix::create({{{6.0,15.0},{9.0,13.0},{8.0,14.0},{7.0,15.0},{6.0,16.0}},{{7.0,14.0},{6.0,15.0},{9.0,13.0},{8.0,14.0},{7.0,15.0}},{{8.0,13.0},{7.0,14.0},{6.0,15.0},{9.0,13.0},{8.0,14.0}},{{9.0,12.0},{8.0,13.0},{7.0,14.0},{6.0,15.0},{9.0,13.0}}}), MATHSEQUAL),
// real 5x4 matrix plus real 5x4 matrix
new CheckBinary<PLUS>(OGRealDenseMatrix::create({{1.0,3.0,2.0,1.0},{2.0,1.0,3.0,2.0},{3.0,2.0,1.0,3.0},{4.0,3.0,2.0,1.0},{5.0,4.0,3.0,2.0}}), OGRealDenseMatrix::create({{1.0,3.0,2.0,1.0},{2.0,1.0,3.0,2.0},{3.0,2.0,1.0,3.0},{4.0,3.0,2.0,1.0},{5.0,4.0,3.0,2.0}}), OGRealDenseMatrix::create({{2.0,6.0,4.0,2.0},{4.0,2.0,6.0,4.0},{6.0,4.0,2.0,6.0},{8.0,6.0,4.0,2.0},{10.0,8.0,6.0,4.0}}), MATHSEQUAL),
// real 4x5 matrix plus real 4x5 matrix
new CheckBinary<PLUS>(OGRealDenseMatrix::create({{1.0,4.0,3.0,2.0,1.0},{2.0,1.0,4.0,3.0,2.0},{3.0,2.0,1.0,4.0,3.0},{4.0,3.0,2.0,1.0,4.0}}), OGRealDenseMatrix::create({{1.0,4.0,3.0,2.0,1.0},{2.0,1.0,4.0,3.0,2.0},{3.0,2.0,1.0,4.0,3.0},{4.0,3.0,2.0,1.0,4.0}}), OGRealDenseMatrix::create({{2.0,8.0,6.0,4.0,2.0},{4.0,2.0,8.0,6.0,4.0},{6.0,4.0,2.0,8.0,6.0},{8.0,6.0,4.0,2.0,8.0}}), MATHSEQUAL),
// complex 5x4 matrix plus complex 5x4 matrix
new CheckBinary<PLUS>(OGComplexDenseMatrix::create({{{1.0,5.0},{3.0,2.0},{2.0,3.0},{1.0,4.0}},{{2.0,4.0},{1.0,5.0},{3.0,2.0},{2.0,3.0}},{{3.0,3.0},{2.0,4.0},{1.0,5.0},{3.0,2.0}},{{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{5.0,1.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}}}), OGComplexDenseMatrix::create({{{1.0,5.0},{3.0,2.0},{2.0,3.0},{1.0,4.0}},{{2.0,4.0},{1.0,5.0},{3.0,2.0},{2.0,3.0}},{{3.0,3.0},{2.0,4.0},{1.0,5.0},{3.0,2.0}},{{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{5.0,1.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}}}), OGComplexDenseMatrix::create({{{2.0,10.0},{6.0,4.0},{4.0,6.0},{2.0,8.0}},{{4.0,8.0},{2.0,10.0},{6.0,4.0},{4.0,6.0}},{{6.0,6.0},{4.0,8.0},{2.0,10.0},{6.0,4.0}},{{8.0,4.0},{6.0,6.0},{4.0,8.0},{2.0,10.0}},{{10.0,2.0},{8.0,4.0},{6.0,6.0},{4.0,8.0}}}), MATHSEQUAL),
// complex 4x5 matrix plus complex 4x5 matrix
new CheckBinary<PLUS>(OGComplexDenseMatrix::create({{{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}},{{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0}},{{4.0,1.0},{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0}}}), OGComplexDenseMatrix::create({{{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0},{1.0,5.0}},{{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0},{2.0,4.0}},{{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0},{3.0,3.0}},{{4.0,1.0},{3.0,2.0},{2.0,3.0},{1.0,4.0},{4.0,2.0}}}), OGComplexDenseMatrix::create({{{2.0,8.0},{8.0,4.0},{6.0,6.0},{4.0,8.0},{2.0,10.0}},{{4.0,6.0},{2.0,8.0},{8.0,4.0},{6.0,6.0},{4.0,8.0}},{{6.0,4.0},{4.0,6.0},{2.0,8.0},{8.0,4.0},{6.0,6.0}},{{8.0,2.0},{6.0,4.0},{4.0,6.0},{2.0,8.0},{8.0,4.0}}}), MATHSEQUAL)

)
);

