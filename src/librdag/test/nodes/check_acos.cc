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
 * Check ACOS node behaves
 */

UNARY_NODE_TEST_SETUP(ACOS)

INSTANTIATE_NODE_TEST_CASE_P(ACOSTests,ACOS,
Values
(
// acos(scalar)
new CheckUnary<ACOS>(OGRealScalar::create(     -0.9900000000000000), OGRealScalar::create(      3.0000531802653660), MATHSEQUAL,
// NOTE: The tolerances used here are unduly slack, this is due to inconsistent libm's and will be fixed shortly.
1e-13, 1e-13),
// acos(row vector)
new CheckUnary<ACOS>(OGRealDenseMatrix::create({{-0.9900000000000000,-0.7700000000000000,-0.5500000000000000,-0.3300000000000000,-0.1100000000000000,
0.1100000000000001,0.3300000000000001,0.5500000000000000,0.7700000000000000,0.9900000000000000}}), OGRealDenseMatrix::create({{3.0000531802653660,2.4496374784634765,2.1531605646636400,1.9070999019488770,1.6810193767826433,
1.4605732768071500,1.2344927516409161,0.9884320889261531,0.6919551751263169,0.1415394733244273}}), MATHSEQUAL,
// NOTE: The tolerances used here are unduly slack, this is due to inconsistent libm's and will be fixed shortly.
1e-13, 1e-13),
// acos(column vector)
new CheckUnary<ACOS>(OGRealDenseMatrix::create({{-0.9900000000000000},{-0.7700000000000000},{-0.5500000000000000},{-0.3300000000000000},{-0.1100000000000000},
{0.1100000000000001},{0.3300000000000001},{0.5500000000000000},{0.7700000000000000},{0.9900000000000000}}), OGRealDenseMatrix::create({{3.0000531802653660},{2.4496374784634765},{2.1531605646636400},{1.9070999019488770},{1.6810193767826433},
{1.4605732768071500},{1.2344927516409161},{0.9884320889261531},{0.6919551751263169},{0.1415394733244273}}), MATHSEQUAL,
// NOTE: The tolerances used here are unduly slack, this is due to inconsistent libm's and will be fixed shortly.
1e-13, 1e-13),
// acos(matrix)
new CheckUnary<ACOS>(OGRealDenseMatrix::create({{-0.9900000000000000,-0.5500000000000000,-0.1100000000000000,0.3300000000000001,0.7700000000000000},{-0.7700000000000000,-0.3300000000000000,0.1100000000000001,0.5500000000000000,0.9900000000000000}}), OGRealDenseMatrix::create({{3.0000531802653660,2.1531605646636400,1.6810193767826433,1.2344927516409161,0.6919551751263169},{2.4496374784634765,1.9070999019488770,1.4605732768071500,0.9884320889261531,0.1415394733244273}}), MATHSEQUAL,
// NOTE: The tolerances used here are unduly slack, this is due to inconsistent libm's and will be fixed shortly.
1e-13, 1e-13),
// acos()
new CheckUnary<ACOS>(OGComplexDenseMatrix::create({{{-7.0,-7.0},{-7.0,-6.0},{-7.0,-5.0},{-7.0,-4.0},{-7.0,-3.0},
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
{7.0,3.0},{7.0,4.0},{7.0,5.0},{7.0,6.0},{7.0,7.0}}}), OGComplexDenseMatrix::create({{{2.3536435251190921,2.9856406810823684},{2.4300559610436760,2.9140353877209009},{2.5181369711079502,2.8440976626506607},{2.6191135153665308,2.7783990940505485},{2.7335515735176847,2.7203975979400585},
{2.8607707118296726,2.6742734458074615},{2.9982751205352267,2.6443267863946116},{3.1415926535897931,-2.6339157938496336},{2.9982751205352254,-2.6443267863946120},{2.8607707118296721,-2.6742734458074566},
{2.7335515735176816,-2.7203975979400625},{2.6191135153665366,-2.7783990940505472},{2.5181369711079453,-2.8440976626506527},{2.4300559610436756,-2.9140353877209035},{2.3536435251190881,-2.9856406810823723},
{2.2765200224831785,2.9149349663103052},{2.3527224074982325,2.8314983232869948},{2.4428144632371347,2.7478687371476873},{2.5491277061594642,2.6669446837131088},{2.6734559591267444,2.5931585970908020},
{2.8160350803180099,2.5325707993262871},{2.9742096986341542,2.4921599681338313},{3.1415926535897931,-2.4778887302884751},{2.9742096986341546,-2.4921599681338353},{2.8160350803180085,-2.5325707993262854},
{2.6734559591267417,-2.5931585970908038},{2.5491277061594602,-2.6669446837131043},{2.4428144632371356,-2.7478687371476949},{2.3527224074982294,-2.8314983232869921},{2.2765200224831852,-2.9149349663103048},
{2.1878606234708848,2.8462888282083889},{2.2615125609651305,2.7493465969741013},{2.3511949067802789,2.6491961778064841},{2.4608795884460077,2.5486455784678332},{2.5946180733066799,2.4529137425028074},
{2.7550280110699195,2.3705485373179203},{2.9403975738888821,2.3132209417695284},{3.1415926535897931,-2.2924316695611777},{2.9403975738888830,-2.3132209417695293},{2.7550280110699186,-2.3705485373179198},
{2.5946180733066795,-2.4529137425028118},{2.4608795884460077,-2.5486455784678337},{2.3511949067802806,-2.6491961778064712},{2.2615125609651279,-2.7493465969740996},{2.1878606234708902,-2.8462888282083867},
{2.0866482359885845,2.7823040403441435},{2.1543858138333349,2.6706422224804864},{2.2396129021208253,2.5513216254757003},{2.3483835789165561,2.4261066521153887},{2.4884131801463738,2.2999140408792687},
{2.6677178756250406,2.1835852165645657},{2.8894132448734391,2.0965964572888893},{3.1415926535897931,-2.0634370688955608},{2.8894132448734400,-2.0965964572888911},{2.6677178756250393,-2.1835852165645639},
{2.4884131801463751,-2.2999140408792695},{2.3483835789165575,-2.4261066521153900},{2.2396129021208240,-2.5513216254756990},{2.1543858138333358,-2.6706422224804807},{2.0866482359885832,-2.7823040403441333},
{1.9725944896463576,2.7263424970102821},{2.0300437302573164,2.5998241937784745},{2.1047953963890667,2.4598315216234306},{2.2047801924340740,2.3055090312434685},{2.3423145189167456,2.1386220863162220},
{2.5354548312024989,1.9686379257930975},{2.8038915443242405,1.8241987021938819},{3.1415926535897931,-1.7627471740390861},{2.8038915443242409,-1.8241987021938828},{2.5354548312024994,-1.9686379257930964},
{2.3423145189167451,-2.1386220863162211},{2.2047801924340731,-2.3055090312434769},{2.1047953963890653,-2.4598315216234345},{2.0300437302573155,-2.5998241937784723},{1.9725944896463570,-2.7263424970102745},
{1.8466335921930221,2.6822833445007337},{1.8888523766658123,2.5425702259303060},{1.9454671316204246,2.3830308809003191},{2.0246665367580197,2.1985730279209403},{2.1414491111159957,1.9833870299165357},
{2.3250454714929427,1.7343245214879679},{2.6342363503726487,1.4693517443681854},{3.1415926535897931,-1.3169578969248166},{2.6342363503726487,-1.4693517443681852},{2.3250454714929427,-1.7343245214879663},
{2.1414491111159961,-1.9833870299165355},{2.0246665367580192,-2.1985730279209355},{1.9454671316204235,-2.3830308809003258},{1.8888523766658130,-2.5425702259303136},{1.8466335921930224,-2.6822833445007306},
{1.7113132328670753,2.6539273355384227},{1.7337947996302652,2.5049441482332533},{1.7645894633498282,2.3309746530493118},{1.8091137886047626,2.1225501238100692},{1.8783999763256078,1.8641615441578803},
{1.9978749131873725,1.5285709194809975},{2.2370357592874117,1.0612750619050355},{3.1415926535897931,0.0},{2.2370357592874117,-1.0612750619050357},{1.9978749131873728,-1.5285709194809980},
{1.8783999763256078,-1.8641615441578825},{1.8091137886047628,-2.1225501238100715},{1.7645894633498289,-2.3309746530493123},{1.7337947996302654,-2.5049441482332586},{1.7113132328670744,-2.6539273355384174},
{1.5707963267948966,2.6441207610586255},{1.5707963267948966,2.4917798526449162},{1.5707963267948966,2.3124383412727560},{1.5707963267948966,2.0947125472611008},{1.5707963267948966,1.8184464592320657},
{1.5707963267948966,1.4436354751788099},{1.5707963267948966,0.8813735870195428},{1.5707963267948966,0.0},{1.5707963267948966,-0.8813735870195429},{1.5707963267948966,-1.4436354751788103},
{1.5707963267948966,-1.8184464592320668},{1.5707963267948966,-2.0947125472611012},{1.5707963267948966,-2.3124383412727525},{1.5707963267948966,-2.4917798526449118},{1.5707963267948966,-2.6441207610586290},
{1.4302794207227181,2.6539273355384227},{1.4077978539595279,2.5049441482332533},{1.3770031902399649,2.3309746530493118},{1.3324788649850305,2.1225501238100692},{1.2631926772641855,1.8641615441578803},
{1.1437177404024206,1.5285709194809975},{0.9045568943023814,1.0612750619050355},{0.0,0.0},{0.9045568943023813,-1.0612750619050357},{1.1437177404024206,-1.5285709194809980},
{1.2631926772641855,-1.8641615441578825},{1.3324788649850305,-2.1225501238100715},{1.3770031902399644,-2.3309746530493123},{1.4077978539595279,-2.5049441482332586},{1.4302794207227187,-2.6539273355384174},
{1.2949590613967710,2.6822833445007337},{1.2527402769239810,2.5425702259303060},{1.1961255219693685,2.3830308809003191},{1.1169261168317737,2.1985730279209403},{1.0001435424737977,1.9833870299165357},
{0.8165471820968503,1.7343245214879679},{0.5073563032171444,1.4693517443681854},{0.0,-1.3169578969248166},{0.5073563032171445,-1.4693517443681852},{0.8165471820968504,-1.7343245214879663},
{1.0001435424737972,-1.9833870299165355},{1.1169261168317741,-2.1985730279209355},{1.1961255219693696,-2.3830308809003258},{1.2527402769239804,-2.5425702259303136},{1.2949590613967710,-2.6822833445007306},
{1.1689981639434355,2.7263424970102821},{1.1115489233324769,2.5998241937784745},{1.0367972572007265,2.4598315216234306},{0.9368124611557194,2.3055090312434685},{0.7992781346730475,2.1386220863162220},
{0.6061378223872942,1.9686379257930975},{0.3377011092655529,1.8241987021938819},{0.0,-1.7627471740390861},{0.3377011092655525,-1.8241987021938828},{0.6061378223872939,-1.9686379257930964},
{0.7992781346730483,-2.1386220863162211},{0.9368124611557200,-2.3055090312434769},{1.0367972572007280,-2.4598315216234345},{1.1115489233324776,-2.5998241937784723},{1.1689981639434361,-2.7263424970102745},
{1.0549444176012088,2.7823040403441435},{0.9872068397564584,2.6706422224804864},{0.9019797514689677,2.5513216254757003},{0.7932090746732369,2.4261066521153887},{0.6531794734434193,2.2999140408792687},
{0.4738747779647529,2.1835852165645657},{0.2521794087163541,2.0965964572888893},{0.0,-2.0634370688955608},{0.2521794087163534,-2.0965964572888911},{0.4738747779647538,-2.1835852165645639},
{0.6531794734434180,-2.2999140408792695},{0.7932090746732356,-2.4261066521153900},{0.9019797514689694,-2.5513216254756990},{0.9872068397564572,-2.6706422224804807},{1.0549444176012102,-2.7823040403441333},
{0.9537320301189085,2.8462888282083889},{0.8800800926246627,2.7493465969741013},{0.7903977468095144,2.6491961778064841},{0.6807130651437853,2.5486455784678332},{0.5469745802831132,2.4529137425028074},
{0.3865646425198738,2.3705485373179203},{0.2011950797009113,2.3132209417695284},{0.0,-2.2924316695611777},{0.2011950797009102,-2.3132209417695293},{0.3865646425198747,-2.3705485373179198},
{0.5469745802831137,-2.4529137425028118},{0.6807130651437854,-2.5486455784678337},{0.7903977468095125,-2.6491961778064712},{0.8800800926246655,-2.7493465969740996},{0.9537320301189031,-2.8462888282083867},
{0.8650726311066145,2.9149349663103052},{0.7888702460915605,2.8314983232869948},{0.6987781903526586,2.7478687371476873},{0.5924649474303291,2.6669446837131088},{0.4681366944630490,2.5931585970908020},
{0.3255575732717832,2.5325707993262871},{0.1673829549556389,2.4921599681338313},{0.0,-2.4778887302884751},{0.1673829549556388,-2.4921599681338353},{0.3255575732717849,-2.5325707993262854},
{0.4681366944630513,-2.5931585970908038},{0.5924649474303333,-2.6669446837131043},{0.6987781903526575,-2.7478687371476949},{0.7888702460915641,-2.8314983232869921},{0.8650726311066083,-2.9149349663103048},
{0.7879491284707011,2.9856406810823684},{0.7115366925461173,2.9140353877209009},{0.6234556824818431,2.8440976626506607},{0.5224791382232623,2.7783990940505485},{0.4080410800721087,2.7203975979400585},
{0.2808219417601205,2.6742734458074615},{0.1433175330545666,2.6443267863946116},{0.0,-2.6339157938496336},{0.1433175330545678,-2.6443267863946120},{0.2808219417601212,-2.6742734458074566},
{0.4080410800721115,-2.7203975979400625},{0.5224791382232568,-2.7783990940505472},{0.6234556824818477,-2.8440976626506527},{0.7115366925461174,-2.9140353877209035},{0.7879491284707053,-2.9856406810823723}}}), MATHSEQUAL,
// NOTE: The tolerances used here are unduly slack, this is due to inconsistent libm's and will be fixed shortly.
1e-13, 1e-13)
)
);

