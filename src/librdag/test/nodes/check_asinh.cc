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
 * Check ASINH node behaves
 */

UNARY_NODE_TEST_SETUP(ASINH)

INSTANTIATE_NODE_TEST_CASE_P(ASINHTests,ASINH,
Values
(
// asinh(scalar)
new CheckUnary<ASINH>(OGRealScalar::create(    -10.0), OGRealScalar::create(     -2.9982229502979698), MATHSEQUAL,
// NOTE: The tolerances used here are unduly slack, this is due to inconsistent libm's and will be fixed shortly.
1e-13, 1e-13),
// asinh(row vector)
new CheckUnary<ASINH>(OGRealDenseMatrix::create({{-10.0,-7.7777777777777777,-5.5555555555555554,-3.3333333333333330,-1.1111111111111107,
1.1111111111111107,3.3333333333333339,5.5555555555555571,7.7777777777777786,10.0}}), OGRealDenseMatrix::create({{-2.9982229502979698,-2.7485251128495447,-2.4159489283134601,-1.9188964720985309,-0.9578004492006720,
0.9578004492006720,1.9188964720985311,2.4159489283134601,2.7485251128495451,2.9982229502979698}}), MATHSEQUAL,
// NOTE: The tolerances used here are unduly slack, this is due to inconsistent libm's and will be fixed shortly.
1e-13, 1e-13),
// asinh(column vector)
new CheckUnary<ASINH>(OGRealDenseMatrix::create({{-10.0},{-7.7777777777777777},{-5.5555555555555554},{-3.3333333333333330},{-1.1111111111111107},
{1.1111111111111107},{3.3333333333333339},{5.5555555555555571},{7.7777777777777786},{10.0}}), OGRealDenseMatrix::create({{-2.9982229502979698},{-2.7485251128495447},{-2.4159489283134601},{-1.9188964720985309},{-0.9578004492006720},
{0.9578004492006720},{1.9188964720985311},{2.4159489283134601},{2.7485251128495451},{2.9982229502979698}}), MATHSEQUAL,
// NOTE: The tolerances used here are unduly slack, this is due to inconsistent libm's and will be fixed shortly.
1e-13, 1e-13),
// asinh(matrix)
new CheckUnary<ASINH>(OGRealDenseMatrix::create({{-10.0,-5.5555555555555554,-1.1111111111111107,3.3333333333333339,7.7777777777777786},{-7.7777777777777777,-3.3333333333333330,1.1111111111111107,5.5555555555555571,10.0}}), OGRealDenseMatrix::create({{-2.9982229502979698,-2.4159489283134601,-0.9578004492006720,1.9188964720985311,2.7485251128495451},{-2.7485251128495447,-1.9188964720985309,0.9578004492006720,2.4159489283134601,2.9982229502979698}}), MATHSEQUAL,
// NOTE: The tolerances used here are unduly slack, this is due to inconsistent libm's and will be fixed shortly.
1e-13, 1e-13),
// asinh()
new CheckUnary<ASINH>(OGComplexDenseMatrix::create({{{-7.0,-7.0},{-7.0,-6.0},{-7.0,-5.0},{-7.0,-4.0},{-7.0,-3.0},
{-7.0,-2.0},{-7.0,-1.0},{-7.0,0.0},{-7.0,1.0},{-7.0,2.0},
{-7.0,3.0},{-7.0,4.0},{-7.0,5.0},{-7.0,6.0},{-7.0,7.0},
{-6.0,-7.0},{-6.0,-6.0},{-6.0,-5.0},{-6.0,-4.0},{-6.0,-3.0},
{-6.0,-2.0},{-6.0,-1.0},{-6.0,0.0},{-6.0,1.0},{-6.0,2.0},
{-6.0,3.0},{-6.0,4.0},{-6.0,5.0},{-6.0,6.0},{-6.0,7.0},
{-5.0,-7.0},{-5.0,-6.0},{-5.0,-5.0},{-5.0,-4.0},{-5.0,-3.0},
{-5.0,-2.0},{-5.0,-1.0},{-5.0,0.0},{-5.0,1.0},{-5.0,2.0},
{-5.0,3.0},{-5.0,4.0},{-5.0,5.0},{-5.0,6.0},{-5.0,7.0},
{-4.0,-7.0},{-4.0,-6.0},{-4.0,-5.0},{-4.0,-4.0},{-4.0,-3.0},
{-4.0,-2.0},{-4.0,-1.0},{-4.0,0.0},{-4.0,1.0},{-4.0,2.0},
{-4.0,3.0},{-4.0,4.0},{-4.0,5.0},{-4.0,6.0},{-4.0,7.0},
{-3.0,-7.0},{-3.0,-6.0},{-3.0,-5.0},{-3.0,-4.0},{-3.0,-3.0},
{-3.0,-2.0},{-3.0,-1.0},{-3.0,0.0},{-3.0,1.0},{-3.0,2.0},
{-3.0,3.0},{-3.0,4.0},{-3.0,5.0},{-3.0,6.0},{-3.0,7.0},
{-2.0,-7.0},{-2.0,-6.0},{-2.0,-5.0},{-2.0,-4.0},{-2.0,-3.0},
{-2.0,-2.0},{-2.0,-1.0},{-2.0,0.0},{-2.0,1.0},{-2.0,2.0},
{-2.0,3.0},{-2.0,4.0},{-2.0,5.0},{-2.0,6.0},{-2.0,7.0},
{-1.0,-7.0},{-1.0,-6.0},{-1.0,-5.0},{-1.0,-4.0},{-1.0,-3.0},
{-1.0,-2.0},{-1.0,-1.0},{-1.0,0.0},{-1.0,1.0},{-1.0,2.0},
{-1.0,3.0},{-1.0,4.0},{-1.0,5.0},{-1.0,6.0},{-1.0,7.0},
{0.0,-7.0},{0.0,-6.0},{0.0,-5.0},{0.0,-4.0},{0.0,-3.0},
{0.0,-2.0},{0.0,-1.0},{0.0,0.0},{0.0,1.0},{0.0,2.0},
{0.0,3.0},{0.0,4.0},{0.0,5.0},{0.0,6.0},{0.0,7.0},
{1.0,-7.0},{1.0,-6.0},{1.0,-5.0},{1.0,-4.0},{1.0,-3.0},
{1.0,-2.0},{1.0,-1.0},{1.0,0.0},{1.0,1.0},{1.0,2.0},
{1.0,3.0},{1.0,4.0},{1.0,5.0},{1.0,6.0},{1.0,7.0},
{2.0,-7.0},{2.0,-6.0},{2.0,-5.0},{2.0,-4.0},{2.0,-3.0},
{2.0,-2.0},{2.0,-1.0},{2.0,0.0},{2.0,1.0},{2.0,2.0},
{2.0,3.0},{2.0,4.0},{2.0,5.0},{2.0,6.0},{2.0,7.0},
{3.0,-7.0},{3.0,-6.0},{3.0,-5.0},{3.0,-4.0},{3.0,-3.0},
{3.0,-2.0},{3.0,-1.0},{3.0,0.0},{3.0,1.0},{3.0,2.0},
{3.0,3.0},{3.0,4.0},{3.0,5.0},{3.0,6.0},{3.0,7.0},
{4.0,-7.0},{4.0,-6.0},{4.0,-5.0},{4.0,-4.0},{4.0,-3.0},
{4.0,-2.0},{4.0,-1.0},{4.0,0.0},{4.0,1.0},{4.0,2.0},
{4.0,3.0},{4.0,4.0},{4.0,5.0},{4.0,6.0},{4.0,7.0},
{5.0,-7.0},{5.0,-6.0},{5.0,-5.0},{5.0,-4.0},{5.0,-3.0},
{5.0,-2.0},{5.0,-1.0},{5.0,0.0},{5.0,1.0},{5.0,2.0},
{5.0,3.0},{5.0,4.0},{5.0,5.0},{5.0,6.0},{5.0,7.0},
{6.0,-7.0},{6.0,-6.0},{6.0,-5.0},{6.0,-4.0},{6.0,-3.0},
{6.0,-2.0},{6.0,-1.0},{6.0,0.0},{6.0,1.0},{6.0,2.0},
{6.0,3.0},{6.0,4.0},{6.0,5.0},{6.0,6.0},{6.0,7.0},
{7.0,-7.0},{7.0,-6.0},{7.0,-5.0},{7.0,-4.0},{7.0,-3.0},
{7.0,-2.0},{7.0,-1.0},{7.0,0.0},{7.0,1.0},{7.0,2.0},
{7.0,3.0},{7.0,4.0},{7.0,5.0},{7.0,6.0},{7.0,7.0}}}), OGComplexDenseMatrix::create({{{-2.9856406810823684,-0.7828471983241956},{-2.9149349663103052,-0.7057236956882821},{-2.8462888282083889,-0.6170642966759882},{-2.7823040403441435,-0.5158519091936878},{-2.7263424970102821,-0.4017981628514611},
{-2.6822833445007337,-0.2758372653981255},{-2.6539273355384227,-0.1405169060721786},{-2.6441207610586255,0.0},{-2.6539273355384227,0.1405169060721786},{-2.6822833445007337,0.2758372653981255},
{-2.7263424970102821,0.4017981628514611},{-2.7823040403441435,0.5158519091936878},{-2.8462888282083889,0.6170642966759882},{-2.9149349663103052,0.7057236956882821},{-2.9856406810823684,0.7828471983241956},
{-2.9140353877209009,-0.8592596342487793},{-2.8314983232869948,-0.7819260807033360},{-2.7493465969741013,-0.6907162341702339},{-2.6706422224804864,-0.5835894870384383},{-2.5998241937784745,-0.4592474034624198},
{-2.5425702259303060,-0.3180560498709156},{-2.5049441482332533,-0.1629984728353686},{-2.4917798526449162,0.0},{-2.5049441482332533,0.1629984728353686},{-2.5425702259303060,0.3180560498709156},
{-2.5998241937784745,0.4592474034624198},{-2.6706422224804864,0.5835894870384383},{-2.7493465969741013,0.6907162341702339},{-2.8314983232869948,0.7819260807033360},{-2.9140353877209009,0.8592596342487793},
{-2.8440976626506607,-0.9473406443130535},{-2.7478687371476873,-0.8720181364422379},{-2.6491961778064841,-0.7803985799853823},{-2.5513216254757003,-0.6688165753259289},{-2.4598315216234306,-0.5339990695941702},
{-2.3830308809003191,-0.3746708048255280},{-2.3309746530493118,-0.1937931365549317},{-2.3124383412727560,0.0},{-2.3309746530493118,0.1937931365549317},{-2.3830308809003191,0.3746708048255280},
{-2.4598315216234306,0.5339990695941702},{-2.5513216254757003,0.6688165753259289},{-2.6491961778064841,0.7803985799853823},{-2.7478687371476873,0.8720181364422379},{-2.8440976626506607,0.9473406443130535},
{-2.7783990940505485,-1.0483171885716343},{-2.6669446837131088,-0.9783313793645676},{-2.5486455784678332,-0.8900832616511113},{-2.4261066521153887,-0.7775872521216597},{-2.3055090312434685,-0.6339838656391773},
{-2.1985730279209403,-0.4538702099631229},{-2.1225501238100692,-0.2383174618098660},{-2.0947125472611008,0.0},{-2.1225501238100692,0.2383174618098660},{-2.1985730279209403,0.4538702099631229},
{-2.3055090312434685,0.6339838656391773},{-2.4261066521153887,0.7775872521216597},{-2.5486455784678332,0.8900832616511113},{-2.6669446837131088,0.9783313793645676},{-2.7783990940505485,1.0483171885716343},
{-2.7203975979400585,-1.1627552467227880},{-2.5931585970908020,-1.1026596323318476},{-2.4529137425028074,-1.0238217465117834},{-2.2999140408792687,-0.9176168533514772},{-2.1386220863162220,-0.7715181921218491},
{-1.9833870299165357,-0.5706527843210990},{-1.8641615441578803,-0.3076036495307112},{-1.8184464592320657,0.0},{-1.8641615441578803,0.3076036495307112},{-1.9833870299165357,0.5706527843210990},
{-2.1386220863162220,0.7715181921218491},{-2.2999140408792687,0.9176168533514772},{-2.4529137425028074,1.0238217465117834},{-2.5931585970908020,1.1026596323318476},{-2.7203975979400585,1.1627552467227880},
{-2.6742734458074615,-1.2899743850347762},{-2.5325707993262871,-1.2452387535231133},{-2.3705485373179203,-1.1842316842750229},{-2.1835852165645657,-1.0969215488301438},{-1.9686379257930975,-0.9646585044076025},
{-1.7343245214879679,-0.7542491446980463},{-1.5285709194809975,-0.4270785863924759},{-1.4436354751788099,0.0},{-1.5285709194809975,0.4270785863924759},{-1.7343245214879679,0.7542491446980463},
{-1.9686379257930975,0.9646585044076025},{-2.1835852165645657,1.0969215488301438},{-2.3705485373179203,1.1842316842750229},{-2.5325707993262871,1.2452387535231133},{-2.6742734458074615,1.2899743850347762},
{-2.6443267863946116,-1.4274787937403299},{-2.4921599681338313,-1.4034133718392576},{-2.3132209417695284,-1.3696012470939853},{-2.0965964572888893,-1.3186169180785425},{-1.8241987021938819,-1.2330952175293437},
{-1.4693517443681854,-1.0634400235777521},{-1.0612750619050355,-0.6662394324925153},{-0.8813735870195428,0.0},{-1.0612750619050355,0.6662394324925153},{-1.4693517443681854,1.0634400235777521},
{-1.8241987021938819,1.2330952175293437},{-2.0965964572888893,1.3186169180785425},{-2.3132209417695284,1.3696012470939853},{-2.4921599681338313,1.4034133718392576},{-2.6443267863946116,1.4274787937403299},
{2.6339157938496336,-1.5707963267948966},{2.4778887302884751,-1.5707963267948966},{2.2924316695611777,-1.5707963267948966},{2.0634370688955608,-1.5707963267948966},{1.7627471740390861,-1.5707963267948966},
{1.3169578969248166,-1.5707963267948966},{0.0,-1.5707963267948966},{0.0,0.0},{0.0,1.5707963267948966},{1.3169578969248166,1.5707963267948966},
{1.7627471740390861,1.5707963267948966},{2.0634370688955608,1.5707963267948966},{2.2924316695611777,1.5707963267948966},{2.4778887302884751,1.5707963267948966},{2.6339157938496336,1.5707963267948966},
{2.6443267863946120,-1.4274787937403288},{2.4921599681338353,-1.4034133718392579},{2.3132209417695293,-1.3696012470939865},{2.0965964572888911,-1.3186169180785432},{1.8241987021938828,-1.2330952175293441},
{1.4693517443681852,-1.0634400235777521},{1.0612750619050357,-0.6662394324925153},{0.8813735870195429,0.0},{1.0612750619050357,0.6662394324925153},{1.4693517443681852,1.0634400235777521},
{1.8241987021938828,1.2330952175293441},{2.0965964572888911,1.3186169180785432},{2.3132209417695293,1.3696012470939865},{2.4921599681338353,1.4034133718392579},{2.6443267863946120,1.4274787937403288},
{2.6742734458074566,-1.2899743850347756},{2.5325707993262854,-1.2452387535231118},{2.3705485373179198,-1.1842316842750220},{2.1835852165645639,-1.0969215488301427},{1.9686379257930964,-0.9646585044076028},
{1.7343245214879663,-0.7542491446980462},{1.5285709194809980,-0.4270785863924761},{1.4436354751788103,0.0},{1.5285709194809980,0.4270785863924761},{1.7343245214879663,0.7542491446980462},
{1.9686379257930964,0.9646585044076028},{2.1835852165645639,1.0969215488301427},{2.3705485373179198,1.1842316842750220},{2.5325707993262854,1.2452387535231118},{2.6742734458074566,1.2899743850347756},
{2.7203975979400625,-1.1627552467227851},{2.5931585970908038,-1.1026596323318452},{2.4529137425028118,-1.0238217465117829},{2.2999140408792695,-0.9176168533514787},{2.1386220863162211,-0.7715181921218484},
{1.9833870299165355,-0.5706527843210994},{1.8641615441578825,-0.3076036495307112},{1.8184464592320668,0.0},{1.8641615441578825,0.3076036495307112},{1.9833870299165355,0.5706527843210994},
{2.1386220863162211,0.7715181921218484},{2.2999140408792695,0.9176168533514787},{2.4529137425028118,1.0238217465117829},{2.5931585970908038,1.1026596323318452},{2.7203975979400625,1.1627552467227851},
{2.7783990940505472,-1.0483171885716398},{2.6669446837131043,-0.9783313793645634},{2.5486455784678337,-0.8900832616511112},{2.4261066521153900,-0.7775872521216609},{2.3055090312434769,-0.6339838656391766},
{2.1985730279209355,-0.4538702099631226},{2.1225501238100715,-0.2383174618098661},{2.0947125472611012,0.0},{2.1225501238100715,0.2383174618098661},{2.1985730279209355,0.4538702099631226},
{2.3055090312434769,0.6339838656391766},{2.4261066521153900,0.7775872521216609},{2.5486455784678337,0.8900832616511112},{2.6669446837131043,0.9783313793645634},{2.7783990940505472,1.0483171885716398},
{2.8440976626506527,-0.9473406443130489},{2.7478687371476949,-0.8720181364422390},{2.6491961778064712,-0.7803985799853841},{2.5513216254756990,-0.6688165753259273},{2.4598315216234345,-0.5339990695941685},
{2.3830308809003258,-0.3746708048255269},{2.3309746530493123,-0.1937931365549322},{2.3124383412727525,0.0},{2.3309746530493123,0.1937931365549322},{2.3830308809003258,0.3746708048255269},
{2.4598315216234345,0.5339990695941685},{2.5513216254756990,0.6688165753259273},{2.6491961778064712,0.7803985799853841},{2.7478687371476949,0.8720181364422390},{2.8440976626506527,0.9473406443130489},
{2.9140353877209035,-0.8592596342487792},{2.8314983232869921,-0.7819260807033326},{2.7493465969740996,-0.6907162341702312},{2.6706422224804807,-0.5835894870384394},{2.5998241937784723,-0.4592474034624190},
{2.5425702259303136,-0.3180560498709163},{2.5049441482332586,-0.1629984728353687},{2.4917798526449118,0.0},{2.5049441482332586,0.1629984728353687},{2.5425702259303136,0.3180560498709163},
{2.5998241937784723,0.4592474034624190},{2.6706422224804807,0.5835894870384394},{2.7493465969740996,0.6907162341702312},{2.8314983232869921,0.7819260807033326},{2.9140353877209035,0.8592596342487792},
{2.9856406810823723,-0.7828471983241914},{2.9149349663103048,-0.7057236956882883},{2.8462888282083867,-0.6170642966759935},{2.7823040403441333,-0.5158519091936864},{2.7263424970102745,-0.4017981628514604},
{2.6822833445007306,-0.2758372653981257},{2.6539273355384174,-0.1405169060721779},{2.6441207610586290,0.0},{2.6539273355384174,0.1405169060721779},{2.6822833445007306,0.2758372653981257},
{2.7263424970102745,0.4017981628514604},{2.7823040403441333,0.5158519091936864},{2.8462888282083867,0.6170642966759935},{2.9149349663103048,0.7057236956882883},{2.9856406810823723,0.7828471983241914}}}), MATHSEQUAL,
// NOTE: The tolerances used here are unduly slack, this is due to inconsistent libm's and will be fixed shortly.
1e-13, 1e-13)
)
);

