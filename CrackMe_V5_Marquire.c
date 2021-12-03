#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/** Prototypes */
void create_Charset_Table(char *data, int shift_val, int mod_val);
void printVal(unsigned int print_val);
void printIntroText(unsigned int *char_ctr);
void printRightText(unsigned int *char_ctr);
void printWrongText(unsigned int *char_ctr);
unsigned int getKeyVal(unsigned int ctr2);
void printChar(unsigned int *char_ctr, unsigned char val);

/** Main */
int main(int argc, char** argv)
{
    unsigned int ctr  = (unsigned int) 0;
    unsigned int ctr2 = (unsigned int) 0;
    char user_input[254];

    unsigned int stack_table[1024];
    unsigned int tmp_val = (unsigned int) 0xFFFFFFFF;
    unsigned int key1 = (unsigned int) 0xFFFFFFFF;
    unsigned int key2 = (unsigned int) 0xFFFFFFFF;
    unsigned int key_len = (unsigned int) 0x00000000;

    unsigned int char_ctr = (unsigned int) 3;

    for (ctr = 0; ctr < 254; ctr++)
    {
       user_input[ctr] = ctr;
    }

    for (ctr = 0; ctr < 1023; ctr++)
    {
        tmp_val *= 33;

        switch (ctr2)
        {
            case (   0) : ctr2 += 16802;  break;
            case (   1) : ctr2 +=  9849;  break;
            case (   2) : ctr2 += 23538;  break;
            case (   3) : ctr2 += 28671;  break;
            case (   4) : ctr2 += 13600;  break;
            case (   5) : ctr2 += 17875;  break;
            case (   6) : ctr2 +=  1958;  break;
            case (   7) : ctr2 += 27102;  break;
            case (   8) : ctr2 +=   463;  break;
            case (   9) : ctr2 +=  7451;  break;
            case (  10) : ctr2 +=  1292;  break;
            case (  11) : ctr2 += 13872;  break;
            case (  12) : ctr2 += 25741;  break;
            case (  13) : ctr2 += 24072;  break;
            case (  14) : ctr2 += 17937;  break;
            case (  15) : ctr2 += 10750;  break;
            case (  16) : ctr2 +=  7626;  break;
            case (  17) : ctr2 += 18585;  break;
            case (  18) : ctr2 += 18117;  break;
            case (  19) : ctr2 += 23783;  break;
            case (  20) : ctr2 +=   828;  break;
            case (  21) : ctr2 += 17916;  break;
            case (  22) : ctr2 += 19634;  break;
            case (  23) : ctr2 += 15136;  break;
            case (  24) : ctr2 += 22996;  break;
            case (  25) : ctr2 += 10927;  break;
            case (  26) : ctr2 += 12397;  break;
            case (  27) : ctr2 += 30905;  break;
            case (  28) : ctr2 +=  3056;  break;
            case (  29) : ctr2 += 25573;  break;
            case (  30) : ctr2 += 25962;  break;
            case (  31) : ctr2 += 18978;  break;
            case (  32) : ctr2 +=  4050;  break;
            case (  33) : ctr2 +=  5163;  break;
            case (  34) : ctr2 += 13332;  break;
            case (  35) : ctr2 +=  1517;  break;
            case (  36) : ctr2 +=  4689;  break;
            case (  37) : ctr2 += 25419;  break;
            case (  38) : ctr2 += 23069;  break;
            case (  39) : ctr2 +=  5077;  break;
            case (  40) : ctr2 += 14798;  break;
            case (  41) : ctr2 +=  1392;  break;
            case (  42) : ctr2 +=  1299;  break;
            case (  43) : ctr2 += 19712;  break;
            case (  44) : ctr2 +=  5482;  break;
            case (  45) : ctr2 += 15756;  break;
            case (  46) : ctr2 += 23349;  break;
            case (  47) : ctr2 += 12673;  break;
            case (  48) : ctr2 +=  3190;  break;
            case (  49) : ctr2 += 24311;  break;
            case (  50) : ctr2 +=  1668;  break;
            case (  51) : ctr2 +=  5921;  break;
            case (  52) : ctr2 += 25132;  break;
            case (  53) : ctr2 +=  4697;  break;
            case (  54) : ctr2 += 30237;  break;
            case (  55) : ctr2 += 13663;  break;
            case (  56) : ctr2 +=  8604;  break;
            case (  57) : ctr2 += 25033;  break;
            case (  58) : ctr2 += 18885;  break;
            case (  59) : ctr2 += 12981;  break;
            case (  60) : ctr2 +=  1512;  break;
            case (  61) : ctr2 += 20534;  break;
            case (  62) : ctr2 +=  7110;  break;
            case (  63) : ctr2 +=  5917;  break;
            case (  64) : ctr2 += 12980;  break;
            case (  65) : ctr2 +=     6;  break;
            case (  66) : ctr2 +=  7418;  break;
            case (  67) : ctr2 += 18388;  break;
            case (  68) : ctr2 += 20697;  break;
            case (  69) : ctr2 += 11518;  break;
            case (  70) : ctr2 += 14117;  break;
            case (  71) : ctr2 += 28766;  break;
            case (  72) : ctr2 += 25433;  break;
            case (  73) : ctr2 += 32098;  break;
            case (  74) : ctr2 += 10631;  break;
            case (  75) : ctr2 += 31946;  break;
            case (  76) : ctr2 += 26776;  break;
            case (  77) : ctr2 += 28253;  break;
            case (  78) : ctr2 += 21426;  break;
            case (  79) : ctr2 +=  2359;  break;
            case (  80) : ctr2 +=  7113;  break;
            case (  81) : ctr2 += 24482;  break;
            case (  82) : ctr2 +=  8858;  break;
            case (  83) : ctr2 += 27287;  break;
            case (  84) : ctr2 += 27302;  break;
            case (  85) : ctr2 +=   596;  break;
            case (  86) : ctr2 += 21483;  break;
            case (  87) : ctr2 += 13491;  break;
            case (  88) : ctr2 += 29540;  break;
            case (  89) : ctr2 += 12068;  break;
            case (  90) : ctr2 +=   927;  break;
            case (  91) : ctr2 += 24944;  break;
            case (  92) : ctr2 +=  7910;  break;
            case (  93) : ctr2 += 26553;  break;
            case (  94) : ctr2 += 14287;  break;
            case (  95) : ctr2 += 32080;  break;
            case (  96) : ctr2 += 11057;  break;
            case (  97) : ctr2 +=  1876;  break;
            case (  98) : ctr2 += 24265;  break;
            case (  99) : ctr2 += 32059;  break;
            case ( 100) : ctr2 += 14880;  break;
            case ( 101) : ctr2 += 26292;  break;
            case ( 102) : ctr2 += 29540;  break;
            case ( 103) : ctr2 +=  8576;  break;
            case ( 104) : ctr2 += 14424;  break;
            case ( 105) : ctr2 += 30519;  break;
            case ( 106) : ctr2 += 15248;  break;
            case ( 107) : ctr2 +=  2583;  break;
            case ( 108) : ctr2 += 12415;  break;
            case ( 109) : ctr2 +=  6467;  break;
            case ( 110) : ctr2 += 21809;  break;
            case ( 111) : ctr2 += 24617;  break;
            case ( 112) : ctr2 += 24233;  break;
            case ( 113) : ctr2 += 12772;  break;
            case ( 114) : ctr2 +=  1326;  break;
            case ( 115) : ctr2 += 14545;  break;
            case ( 116) : ctr2 +=  6163;  break;
            case ( 117) : ctr2 += 17334;  break;
            case ( 118) : ctr2 += 31940;  break;
            case ( 119) : ctr2 +=  5413;  break;
            case ( 120) : ctr2 += 23316;  break;
            case ( 121) : ctr2 +=  3846;  break;
            case ( 122) : ctr2 +=  2337;  break;
            case ( 123) : ctr2 +=  9072;  break;
            case ( 124) : ctr2 +=  6992;  break;
            case ( 125) : ctr2 += 32052;  break;
            case ( 126) : ctr2 += 24878;  break;
            case ( 127) : ctr2 +=  9666;  break;
            case ( 128) : ctr2 +=  7727;  break;
            case ( 129) : ctr2 += 23387;  break;
            case ( 130) : ctr2 +=  1452;  break;
            case ( 131) : ctr2 +=  8619;  break;
            case ( 132) : ctr2 += 31630;  break;
            case ( 133) : ctr2 += 10292;  break;
            case ( 134) : ctr2 += 26498;  break;
            case ( 135) : ctr2 += 15683;  break;
            case ( 136) : ctr2 +=  5812;  break;
            case ( 137) : ctr2 += 31032;  break;
            case ( 138) : ctr2 += 18517;  break;
            case ( 139) : ctr2 += 28013;  break;
            case ( 140) : ctr2 +=  9095;  break;
            case ( 141) : ctr2 += 15109;  break;
            case ( 142) : ctr2 +=  2394;  break;
            case ( 143) : ctr2 += 22877;  break;
            case ( 144) : ctr2 +=  3071;  break;
            case ( 145) : ctr2 += 20739;  break;
            case ( 146) : ctr2 += 23656;  break;
            case ( 147) : ctr2 +=  5976;  break;
            case ( 148) : ctr2 += 18908;  break;
            case ( 149) : ctr2 += 22599;  break;
            case ( 150) : ctr2 +=  2898;  break;
            case ( 151) : ctr2 +=  9915;  break;
            case ( 152) : ctr2 +=  2196;  break;
            case ( 153) : ctr2 +=  4536;  break;
            case ( 154) : ctr2 += 18803;  break;
            case ( 155) : ctr2 += 19263;  break;
            case ( 156) : ctr2 +=  9104;  break;
            case ( 157) : ctr2 += 14192;  break;
            case ( 158) : ctr2 += 17290;  break;
            case ( 159) : ctr2 += 11643;  break;
            case ( 160) : ctr2 += 21655;  break;
            case ( 161) : ctr2 += 16741;  break;
            case ( 162) : ctr2 += 25033;  break;
            case ( 163) : ctr2 += 25771;  break;
            case ( 164) : ctr2 +=  9867;  break;
            case ( 165) : ctr2 += 23880;  break;
            case ( 166) : ctr2 += 28712;  break;
            case ( 167) : ctr2 += 19887;  break;
            case ( 168) : ctr2 +=    83;  break;
            case ( 169) : ctr2 +=  7597;  break;
            case ( 170) : ctr2 +=  8447;  break;
            case ( 171) : ctr2 += 21335;  break;
            case ( 172) : ctr2 += 23576;  break;
            case ( 173) : ctr2 +=  9325;  break;
            case ( 174) : ctr2 +=  7636;  break;
            case ( 175) : ctr2 +=  3037;  break;
            case ( 176) : ctr2 += 32436;  break;
            case ( 177) : ctr2 += 19528;  break;
            case ( 178) : ctr2 +=  6769;  break;
            case ( 179) : ctr2 += 20403;  break;
            case ( 180) : ctr2 += 17255;  break;
            case ( 181) : ctr2 +=  5583;  break;
            case ( 182) : ctr2 +=  7738;  break;
            case ( 183) : ctr2 += 11647;  break;
            case ( 184) : ctr2 += 20428;  break;
            case ( 185) : ctr2 += 23426;  break;
            case ( 186) : ctr2 += 30654;  break;
            case ( 187) : ctr2 += 24421;  break;
            case ( 188) : ctr2 += 17420;  break;
            case ( 189) : ctr2 +=  4405;  break;
            case ( 190) : ctr2 +=  3724;  break;
            case ( 191) : ctr2 +=  9604;  break;
            case ( 192) : ctr2 += 15186;  break;
            case ( 193) : ctr2 +=  4792;  break;
            case ( 194) : ctr2 +=  1864;  break;
            case ( 195) : ctr2 += 10691;  break;
            case ( 196) : ctr2 += 12415;  break;
            case ( 197) : ctr2 += 17846;  break;
            case ( 198) : ctr2 += 28158;  break;
            case ( 199) : ctr2 += 20685;  break;
            case ( 200) : ctr2 +=  6942;  break;
            case ( 201) : ctr2 +=  4830;  break;
            case ( 202) : ctr2 += 23221;  break;
            case ( 203) : ctr2 +=  7258;  break;
            case ( 204) : ctr2 += 22682;  break;
            case ( 205) : ctr2 += 31297;  break;
            case ( 206) : ctr2 += 17480;  break;
            case ( 207) : ctr2 +=   689;  break;
            case ( 208) : ctr2 += 13742;  break;
            case ( 209) : ctr2 += 18171;  break;
            case ( 210) : ctr2 += 30065;  break;
            case ( 211) : ctr2 += 24426;  break;
            case ( 212) : ctr2 += 11294;  break;
            case ( 213) : ctr2 +=  9750;  break;
            case ( 214) : ctr2 += 22567;  break;
            case ( 215) : ctr2 += 24953;  break;
            case ( 216) : ctr2 += 10405;  break;
            case ( 217) : ctr2 +=  9387;  break;
            case ( 218) : ctr2 +=  2858;  break;
            case ( 219) : ctr2 +=  6760;  break;
            case ( 220) : ctr2 += 27950;  break;
            case ( 221) : ctr2 += 22858;  break;
            case ( 222) : ctr2 += 30172;  break;
            case ( 223) : ctr2 +=  4836;  break;
            case ( 224) : ctr2 += 25415;  break;
            case ( 225) : ctr2 += 15516;  break;
            case ( 226) : ctr2 += 20050;  break;
            case ( 227) : ctr2 +=  2171;  break;
            case ( 228) : ctr2 += 29394;  break;
            case ( 229) : ctr2 += 30023;  break;
            case ( 230) : ctr2 += 17835;  break;
            case ( 231) : ctr2 += 14500;  break;
            case ( 232) : ctr2 += 12541;  break;
            case ( 233) : ctr2 +=  6930;  break;
            case ( 234) : ctr2 += 20128;  break;
            case ( 235) : ctr2 += 23808;  break;
            case ( 236) : ctr2 += 31605;  break;
            case ( 237) : ctr2 += 13642;  break;
            case ( 238) : ctr2 += 12893;  break;
            case ( 239) : ctr2 += 15583;  break;
            case ( 240) : ctr2 += 21463;  break;
            case ( 241) : ctr2 += 30820;  break;
            case ( 242) : ctr2 += 26511;  break;
            case ( 243) : ctr2 += 30726;  break;
            case ( 244) : ctr2 +=  3944;  break;
            case ( 245) : ctr2 +=  1763;  break;
            case ( 246) : ctr2 += 24511;  break;
            case ( 247) : ctr2 += 28336;  break;
            case ( 248) : ctr2 += 12037;  break;
            case ( 249) : ctr2 += 14717;  break;
            case ( 250) : ctr2 += 16094;  break;
            case ( 251) : ctr2 += 27346;  break;
            case ( 252) : ctr2 += 29533;  break;
            case ( 253) : ctr2 += 12921;  break;
            case ( 254) : ctr2 += 12577;  break;
            case ( 255) : ctr2 += 28323;  break;
            case ( 256) : ctr2 +=   349;  break;
            case ( 257) : ctr2 += 16475;  break;
            case ( 258) : ctr2 += 21263;  break;
            case ( 259) : ctr2 += 19548;  break;
            case ( 260) : ctr2 += 10988;  break;
            case ( 261) : ctr2 += 21443;  break;
            case ( 262) : ctr2 += 24536;  break;
            case ( 263) : ctr2 += 27452;  break;
            case ( 264) : ctr2 += 12249;  break;
            case ( 265) : ctr2 +=  3219;  break;
            case ( 266) : ctr2 +=  6632;  break;
            case ( 267) : ctr2 += 24016;  break;
            case ( 268) : ctr2 +=  2833;  break;
            case ( 269) : ctr2 +=  8784;  break;
            case ( 270) : ctr2 +=  8636;  break;
            case ( 271) : ctr2 += 11633;  break;
            case ( 272) : ctr2 +=  8214;  break;
            case ( 273) : ctr2 += 11211;  break;
            case ( 274) : ctr2 += 12020;  break;
            case ( 275) : ctr2 += 32526;  break;
            case ( 276) : ctr2 += 23724;  break;
            case ( 277) : ctr2 +=  2560;  break;
            case ( 278) : ctr2 += 24490;  break;
            case ( 279) : ctr2 += 29996;  break;
            case ( 280) : ctr2 +=  8918;  break;
            case ( 281) : ctr2 += 31294;  break;
            case ( 282) : ctr2 +=  4611;  break;
            case ( 283) : ctr2 += 29482;  break;
            case ( 284) : ctr2 +=  3840;  break;
            case ( 285) : ctr2 +=  5000;  break;
            case ( 286) : ctr2 += 31747;  break;
            case ( 287) : ctr2 +=  9674;  break;
            case ( 288) : ctr2 += 28286;  break;
            case ( 289) : ctr2 += 13116;  break;
            case ( 290) : ctr2 += 30118;  break;
            case ( 291) : ctr2 += 29933;  break;
            case ( 292) : ctr2 += 31285;  break;
            case ( 293) : ctr2 +=  7410;  break;
            case ( 294) : ctr2 += 10540;  break;
            case ( 295) : ctr2 += 17054;  break;
            case ( 296) : ctr2 += 10648;  break;
            case ( 297) : ctr2 += 20903;  break;
            case ( 298) : ctr2 +=  7604;  break;
            case ( 299) : ctr2 +=  6994;  break;
            case ( 300) : ctr2 += 12759;  break;
            case ( 301) : ctr2 += 25115;  break;
            case ( 302) : ctr2 += 20492;  break;
            case ( 303) : ctr2 += 15214;  break;
            case ( 304) : ctr2 +=  1362;  break;
            case ( 305) : ctr2 += 16503;  break;
            case ( 306) : ctr2 += 19912;  break;
            case ( 307) : ctr2 +=  3594;  break;
            case ( 308) : ctr2 += 26452;  break;
            case ( 309) : ctr2 += 21811;  break;
            case ( 310) : ctr2 +=  1681;  break;
            case ( 311) : ctr2 +=  2293;  break;
            case ( 312) : ctr2 += 26622;  break;
            case ( 313) : ctr2 += 23351;  break;
            case ( 314) : ctr2 += 18368;  break;
            case ( 315) : ctr2 +=  2553;  break;
            case ( 316) : ctr2 += 23681;  break;
            case ( 317) : ctr2 += 18240;  break;
            case ( 318) : ctr2 +=  5676;  break;
            case ( 319) : ctr2 +=  6496;  break;
            case ( 320) : ctr2 += 10129;  break;
            case ( 321) : ctr2 += 16006;  break;
            case ( 322) : ctr2 += 23103;  break;
            case ( 323) : ctr2 += 13750;  break;
            case ( 324) : ctr2 += 26134;  break;
            case ( 325) : ctr2 += 24732;  break;
            case ( 326) : ctr2 +=  4688;  break;
            case ( 327) : ctr2 +=  3281;  break;
            case ( 328) : ctr2 += 21540;  break;
            case ( 329) : ctr2 += 26775;  break;
            case ( 330) : ctr2 += 32556;  break;
            case ( 331) : ctr2 += 17935;  break;
            case ( 332) : ctr2 += 32301;  break;
            case ( 333) : ctr2 += 26994;  break;
            case ( 334) : ctr2 += 32502;  break;
            case ( 335) : ctr2 += 16863;  break;
            case ( 336) : ctr2 +=  4725;  break;
            case ( 337) : ctr2 += 10673;  break;
            case ( 338) : ctr2 +=  2610;  break;
            case ( 339) : ctr2 += 29315;  break;
            case ( 340) : ctr2 += 26311;  break;
            case ( 341) : ctr2 += 25157;  break;
            case ( 342) : ctr2 +=  1820;  break;
            case ( 343) : ctr2 += 12820;  break;
            case ( 344) : ctr2 +=  1639;  break;
            case ( 345) : ctr2 += 25776;  break;
            case ( 346) : ctr2 += 26430;  break;
            case ( 347) : ctr2 += 14790;  break;
            case ( 348) : ctr2 += 23623;  break;
            case ( 349) : ctr2 += 27753;  break;
            case ( 350) : ctr2 += 17217;  break;
            case ( 351) : ctr2 +=  7789;  break;
            case ( 352) : ctr2 += 19837;  break;
            case ( 353) : ctr2 +=  8066;  break;
            case ( 354) : ctr2 += 26884;  break;
            case ( 355) : ctr2 += 30272;  break;
            case ( 356) : ctr2 += 22517;  break;
            case ( 357) : ctr2 +=   648;  break;
            case ( 358) : ctr2 +=  4075;  break;
            case ( 359) : ctr2 +=  3037;  break;
            case ( 360) : ctr2 +=  2403;  break;
            case ( 361) : ctr2 += 25515;  break;
            case ( 362) : ctr2 += 10106;  break;
            case ( 363) : ctr2 += 17038;  break;
            case ( 364) : ctr2 += 25212;  break;
            case ( 365) : ctr2 +=   286;  break;
            case ( 366) : ctr2 += 29730;  break;
            case ( 367) : ctr2 +=  4043;  break;
            case ( 368) : ctr2 += 31334;  break;
            case ( 369) : ctr2 += 28353;  break;
            case ( 370) : ctr2 += 28250;  break;
            case ( 371) : ctr2 += 11776;  break;
            case ( 372) : ctr2 += 30317;  break;
            case ( 373) : ctr2 += 32510;  break;
            case ( 374) : ctr2 +=  6130;  break;
            case ( 375) : ctr2 += 27792;  break;
            case ( 376) : ctr2 += 10743;  break;
            case ( 377) : ctr2 += 13040;  break;
            case ( 378) : ctr2 += 15268;  break;
            case ( 379) : ctr2 += 16665;  break;
            case ( 380) : ctr2 += 29370;  break;
            case ( 381) : ctr2 += 30155;  break;
            case ( 382) : ctr2 += 19181;  break;
            case ( 383) : ctr2 += 32250;  break;
            case ( 384) : ctr2 +=  9516;  break;
            case ( 385) : ctr2 += 10104;  break;
            case ( 386) : ctr2 += 19995;  break;
            case ( 387) : ctr2 += 21010;  break;
            case ( 388) : ctr2 +=  7483;  break;
            case ( 389) : ctr2 += 14975;  break;
            case ( 390) : ctr2 +=  6822;  break;
            case ( 391) : ctr2 += 30155;  break;
            case ( 392) : ctr2 += 18239;  break;
            case ( 393) : ctr2 += 26922;  break;
            case ( 394) : ctr2 += 17347;  break;
            case ( 395) : ctr2 += 10583;  break;
            case ( 396) : ctr2 += 13613;  break;
            case ( 397) : ctr2 += 17896;  break;
            case ( 398) : ctr2 += 31031;  break;
            case ( 399) : ctr2 += 26682;  break;
            case ( 400) : ctr2 +=  5133;  break;
            case ( 401) : ctr2 += 10991;  break;
            case ( 402) : ctr2 += 18537;  break;
            case ( 403) : ctr2 += 30217;  break;
            case ( 404) : ctr2 +=  5550;  break;
            case ( 405) : ctr2 += 19749;  break;
            case ( 406) : ctr2 += 29628;  break;
            case ( 407) : ctr2 += 10353;  break;
            case ( 408) : ctr2 +=  8856;  break;
            case ( 409) : ctr2 += 30273;  break;
            case ( 410) : ctr2 += 21531;  break;
            case ( 411) : ctr2 +=  4730;  break;
            case ( 412) : ctr2 += 26690;  break;
            case ( 413) : ctr2 += 10797;  break;
            case ( 414) : ctr2 += 30934;  break;
            case ( 415) : ctr2 += 29965;  break;
            case ( 416) : ctr2 +=  6021;  break;
            case ( 417) : ctr2 += 15279;  break;
            case ( 418) : ctr2 += 31148;  break;
            case ( 419) : ctr2 +=  6325;  break;
            case ( 420) : ctr2 += 26449;  break;
            case ( 421) : ctr2 +=  5193;  break;
            case ( 422) : ctr2 += 12073;  break;
            case ( 423) : ctr2 += 29858;  break;
            case ( 424) : ctr2 += 12191;  break;
            case ( 425) : ctr2 += 13150;  break;
            case ( 426) : ctr2 += 17714;  break;
            case ( 427) : ctr2 += 18163;  break;
            case ( 428) : ctr2 += 12454;  break;
            case ( 429) : ctr2 += 10389;  break;
            case ( 430) : ctr2 += 23518;  break;
            case ( 431) : ctr2 +=   565;  break;
            case ( 432) : ctr2 += 23122;  break;
            case ( 433) : ctr2 +=  3459;  break;
            case ( 434) : ctr2 += 10887;  break;
            case ( 435) : ctr2 += 13350;  break;
            case ( 436) : ctr2 += 10226;  break;
            case ( 437) : ctr2 += 17028;  break;
            case ( 438) : ctr2 += 22817;  break;
            case ( 439) : ctr2 += 18879;  break;
            case ( 440) : ctr2 += 25649;  break;
            case ( 441) : ctr2 += 29417;  break;
            case ( 442) : ctr2 +=   971;  break;
            case ( 443) : ctr2 += 21618;  break;
            case ( 444) : ctr2 += 26951;  break;
            case ( 445) : ctr2 +=  9305;  break;
            case ( 446) : ctr2 +=  7332;  break;
            case ( 447) : ctr2 += 13489;  break;
            case ( 448) : ctr2 += 12656;  break;
            case ( 449) : ctr2 += 21873;  break;
            case ( 450) : ctr2 +=  8160;  break;
            case ( 451) : ctr2 += 19887;  break;
            case ( 452) : ctr2 += 19357;  break;
            case ( 453) : ctr2 += 28590;  break;
            case ( 454) : ctr2 += 19995;  break;
            case ( 455) : ctr2 +=  9834;  break;
            case ( 456) : ctr2 +=  2154;  break;
            case ( 457) : ctr2 +=  4237;  break;
            case ( 458) : ctr2 += 24812;  break;
            case ( 459) : ctr2 +=  7145;  break;
            case ( 460) : ctr2 += 29521;  break;
            case ( 461) : ctr2 += 28144;  break;
            case ( 462) : ctr2 += 28094;  break;
            case ( 463) : ctr2 +=  2242;  break;
            case ( 464) : ctr2 += 27677;  break;
            case ( 465) : ctr2 += 22980;  break;
            case ( 466) : ctr2 += 27355;  break;
            case ( 467) : ctr2 +=  1504;  break;
            case ( 468) : ctr2 += 29857;  break;
            case ( 469) : ctr2 += 10465;  break;
            case ( 470) : ctr2 +=  2762;  break;
            case ( 471) : ctr2 += 10371;  break;
            case ( 472) : ctr2 +=  1705;  break;
            case ( 473) : ctr2 +=   305;  break;
            case ( 474) : ctr2 += 25051;  break;
            case ( 475) : ctr2 += 24968;  break;
            case ( 476) : ctr2 +=  1585;  break;
            case ( 477) : ctr2 += 21269;  break;
            case ( 478) : ctr2 +=  2560;  break;
            case ( 479) : ctr2 += 25067;  break;
            case ( 480) : ctr2 +=  9173;  break;
            case ( 481) : ctr2 +=   516;  break;
            case ( 482) : ctr2 += 14558;  break;
            case ( 483) : ctr2 += 10378;  break;
            case ( 484) : ctr2 += 17289;  break;
            case ( 485) : ctr2 +=   118;  break;
            case ( 486) : ctr2 += 31780;  break;
            case ( 487) : ctr2 +=  7468;  break;
            case ( 488) : ctr2 += 15242;  break;
            case ( 489) : ctr2 += 25344;  break;
            case ( 490) : ctr2 +=  4124;  break;
            case ( 491) : ctr2 += 23745;  break;
            case ( 492) : ctr2 += 32661;  break;
            case ( 493) : ctr2 += 11968;  break;
            case ( 494) : ctr2 +=  1152;  break;
            case ( 495) : ctr2 +=  6892;  break;
            case ( 496) : ctr2 +=  3158;  break;
            case ( 497) : ctr2 += 26363;  break;
            case ( 498) : ctr2 +=  9102;  break;
            case ( 499) : ctr2 += 15550;  break;
            case ( 500) : ctr2 += 10019;  break;
            case ( 501) : ctr2 +=  7685;  break;
            case ( 502) : ctr2 += 20318;  break;
            case ( 503) : ctr2 +=  4293;  break;
            case ( 504) : ctr2 += 17898;  break;
            case ( 505) : ctr2 +=  3425;  break;
            case ( 506) : ctr2 += 18804;  break;
            case ( 507) : ctr2 += 18501;  break;
            case ( 508) : ctr2 += 13160;  break;
            case ( 509) : ctr2 += 31018;  break;
            case ( 510) : ctr2 +=  6290;  break;
            case ( 511) : ctr2 +=  5573;  break;
            case ( 512) : ctr2 += 17308;  break;
            case ( 513) : ctr2 += 25265;  break;
            case ( 514) : ctr2 +=   207;  break;
            case ( 515) : ctr2 +=  5325;  break;
            case ( 516) : ctr2 += 11388;  break;
            case ( 517) : ctr2 += 20072;  break;
            case ( 518) : ctr2 += 16877;  break;
            case ( 519) : ctr2 += 24303;  break;
            case ( 520) : ctr2 += 22246;  break;
            case ( 521) : ctr2 +=  8447;  break;
            case ( 522) : ctr2 +=  4072;  break;
            case ( 523) : ctr2 += 29188;  break;
            case ( 524) : ctr2 += 15321;  break;
            case ( 525) : ctr2 += 22476;  break;
            case ( 526) : ctr2 += 31179;  break;
            case ( 527) : ctr2 += 19384;  break;
            case ( 528) : ctr2 +=  8677;  break;
            case ( 529) : ctr2 +=  8304;  break;
            case ( 530) : ctr2 += 12999;  break;
            case ( 531) : ctr2 += 24137;  break;
            case ( 532) : ctr2 += 20192;  break;
            case ( 533) : ctr2 +=  5048;  break;
            case ( 534) : ctr2 += 29062;  break;
            case ( 535) : ctr2 += 17035;  break;
            case ( 536) : ctr2 +=   475;  break;
            case ( 537) : ctr2 +=  6081;  break;
            case ( 538) : ctr2 += 22973;  break;
            case ( 539) : ctr2 += 19248;  break;
            case ( 540) : ctr2 += 18772;  break;
            case ( 541) : ctr2 += 11616;  break;
            case ( 542) : ctr2 +=  9217;  break;
            case ( 543) : ctr2 += 23878;  break;
            case ( 544) : ctr2 +=  2478;  break;
            case ( 545) : ctr2 += 11456;  break;
            case ( 546) : ctr2 += 30683;  break;
            case ( 547) : ctr2 += 12801;  break;
            case ( 548) : ctr2 += 18398;  break;
            case ( 549) : ctr2 += 13645;  break;
            case ( 550) : ctr2 += 11294;  break;
            case ( 551) : ctr2 += 26043;  break;
            case ( 552) : ctr2 +=  3174;  break;
            case ( 553) : ctr2 += 21713;  break;
            case ( 554) : ctr2 += 24952;  break;
            case ( 555) : ctr2 += 30777;  break;
            case ( 556) : ctr2 += 29319;  break;
            case ( 557) : ctr2 += 10717;  break;
            case ( 558) : ctr2 += 11080;  break;
            case ( 559) : ctr2 +=  8752;  break;
            case ( 560) : ctr2 += 14258;  break;
            case ( 561) : ctr2 +=  1387;  break;
            case ( 562) : ctr2 += 15023;  break;
            case ( 563) : ctr2 +=  9223;  break;
            case ( 564) : ctr2 += 24385;  break;
            case ( 565) : ctr2 += 20417;  break;
            case ( 566) : ctr2 += 16362;  break;
            case ( 567) : ctr2 += 29151;  break;
            case ( 568) : ctr2 += 15972;  break;
            case ( 569) : ctr2 += 13465;  break;
            case ( 570) : ctr2 += 30175;  break;
            case ( 571) : ctr2 += 24785;  break;
            case ( 572) : ctr2 +=  1118;  break;
            case ( 573) : ctr2 += 23166;  break;
            case ( 574) : ctr2 +=  3061;  break;
            case ( 575) : ctr2 += 14710;  break;
            case ( 576) : ctr2 +=  4849;  break;
            case ( 577) : ctr2 += 10617;  break;
            case ( 578) : ctr2 += 25129;  break;
            case ( 579) : ctr2 += 21421;  break;
            case ( 580) : ctr2 += 15126;  break;
            case ( 581) : ctr2 += 25837;  break;
            case ( 582) : ctr2 += 19295;  break;
            case ( 583) : ctr2 +=  8088;  break;
            case ( 584) : ctr2 += 12786;  break;
            case ( 585) : ctr2 +=  7360;  break;
            case ( 586) : ctr2 += 18933;  break;
            case ( 587) : ctr2 += 16360;  break;
            case ( 588) : ctr2 += 20998;  break;
            case ( 589) : ctr2 += 14779;  break;
            case ( 590) : ctr2 += 31390;  break;
            case ( 591) : ctr2 +=  6491;  break;
            case ( 592) : ctr2 += 31910;  break;
            case ( 593) : ctr2 += 10548;  break;
            case ( 594) : ctr2 +=  8558;  break;
            case ( 595) : ctr2 += 31618;  break;
            case ( 596) : ctr2 += 12204;  break;
            case ( 597) : ctr2 += 27626;  break;
            case ( 598) : ctr2 +=  3377;  break;
            case ( 599) : ctr2 += 18120;  break;
            case ( 600) : ctr2 +=  9069;  break;
            case ( 601) : ctr2 +=  3120;  break;
            case ( 602) : ctr2 += 17665;  break;
            case ( 603) : ctr2 += 13232;  break;
            case ( 604) : ctr2 +=  1260;  break;
            case ( 605) : ctr2 += 16206;  break;
            case ( 606) : ctr2 += 13336;  break;
            case ( 607) : ctr2 +=  8030;  break;
            case ( 608) : ctr2 +=  8270;  break;
            case ( 609) : ctr2 += 13860;  break;
            case ( 610) : ctr2 += 18402;  break;
            case ( 611) : ctr2 +=   345;  break;
            case ( 612) : ctr2 +=  3982;  break;
            case ( 613) : ctr2 += 24848;  break;
            case ( 614) : ctr2 += 13398;  break;
            case ( 615) : ctr2 += 28303;  break;
            case ( 616) : ctr2 += 16754;  break;
            case ( 617) : ctr2 += 11026;  break;
            case ( 618) : ctr2 += 21127;  break;
            case ( 619) : ctr2 += 19866;  break;
            case ( 620) : ctr2 += 27838;  break;
            case ( 621) : ctr2 += 28718;  break;
            case ( 622) : ctr2 += 19830;  break;
            case ( 623) : ctr2 +=  8257;  break;
            case ( 624) : ctr2 += 17319;  break;
            case ( 625) : ctr2 += 13074;  break;
            case ( 626) : ctr2 +=  4395;  break;
            case ( 627) : ctr2 +=  1602;  break;
            case ( 628) : ctr2 += 31626;  break;
            case ( 629) : ctr2 += 22009;  break;
            case ( 630) : ctr2 += 12292;  break;
            case ( 631) : ctr2 += 23887;  break;
            case ( 632) : ctr2 += 31966;  break;
            case ( 633) : ctr2 += 23247;  break;
            case ( 634) : ctr2 += 12876;  break;
            case ( 635) : ctr2 +=  8790;  break;
            case ( 636) : ctr2 += 20328;  break;
            case ( 637) : ctr2 += 28310;  break;
            case ( 638) : ctr2 +=  1039;  break;
            case ( 639) : ctr2 += 30725;  break;
            case ( 640) : ctr2 +=  5805;  break;
            case ( 641) : ctr2 += 17416;  break;
            case ( 642) : ctr2 += 29997;  break;
            case ( 643) : ctr2 += 30350;  break;
            case ( 644) : ctr2 += 12973;  break;
            case ( 645) : ctr2 +=   382;  break;
            case ( 646) : ctr2 += 32686;  break;
            case ( 647) : ctr2 += 10407;  break;
            case ( 648) : ctr2 += 22734;  break;
            case ( 649) : ctr2 += 17936;  break;
            case ( 650) : ctr2 += 18517;  break;
            case ( 651) : ctr2 += 22997;  break;
            case ( 652) : ctr2 += 14615;  break;
            case ( 653) : ctr2 +=  2558;  break;
            case ( 654) : ctr2 +=  3448;  break;
            case ( 655) : ctr2 +=  6635;  break;
            case ( 656) : ctr2 +=   926;  break;
            case ( 657) : ctr2 += 24143;  break;
            case ( 658) : ctr2 += 30735;  break;
            case ( 659) : ctr2 +=  6605;  break;
            case ( 660) : ctr2 += 25156;  break;
            case ( 661) : ctr2 += 20407;  break;
            case ( 662) : ctr2 +=   778;  break;
            case ( 663) : ctr2 += 17786;  break;
            case ( 664) : ctr2 += 15007;  break;
            case ( 665) : ctr2 += 28862;  break;
            case ( 666) : ctr2 += 27880;  break;
            case ( 667) : ctr2 += 16202;  break;
            case ( 668) : ctr2 += 19512;  break;
            case ( 669) : ctr2 += 20255;  break;
            case ( 670) : ctr2 += 26501;  break;
            case ( 671) : ctr2 +=  8308;  break;
            case ( 672) : ctr2 += 32503;  break;
            case ( 673) : ctr2 += 22638;  break;
            case ( 674) : ctr2 += 31283;  break;
            case ( 675) : ctr2 +=  8914;  break;
            case ( 676) : ctr2 += 30171;  break;
            case ( 677) : ctr2 += 29182;  break;
            case ( 678) : ctr2 += 18957;  break;
            case ( 679) : ctr2 +=  6121;  break;
            case ( 680) : ctr2 += 14830;  break;
            case ( 681) : ctr2 += 18434;  break;
            case ( 682) : ctr2 += 15496;  break;
            case ( 683) : ctr2 += 20772;  break;
            case ( 684) : ctr2 +=  4473;  break;
            case ( 685) : ctr2 +=  6130;  break;
            case ( 686) : ctr2 += 10315;  break;
            case ( 687) : ctr2 += 23904;  break;
            case ( 688) : ctr2 += 22388;  break;
            case ( 689) : ctr2 += 31281;  break;
            case ( 690) : ctr2 +=  2113;  break;
            case ( 691) : ctr2 += 16301;  break;
            case ( 692) : ctr2 += 26432;  break;
            case ( 693) : ctr2 += 28396;  break;
            case ( 694) : ctr2 += 25836;  break;
            case ( 695) : ctr2 +=   851;  break;
            case ( 696) : ctr2 += 28825;  break;
            case ( 697) : ctr2 += 12869;  break;
            case ( 698) : ctr2 += 26620;  break;
            case ( 699) : ctr2 += 20756;  break;
            case ( 700) : ctr2 += 18374;  break;
            case ( 701) : ctr2 +=  7089;  break;
            case ( 702) : ctr2 += 20000;  break;
            case ( 703) : ctr2 += 27057;  break;
            case ( 704) : ctr2 +=  1554;  break;
            case ( 705) : ctr2 +=  3230;  break;
            case ( 706) : ctr2 += 11036;  break;
            case ( 707) : ctr2 += 10672;  break;
            case ( 708) : ctr2 +=  3712;  break;
            case ( 709) : ctr2 += 12890;  break;
            case ( 710) : ctr2 += 13340;  break;
            case ( 711) : ctr2 += 31323;  break;
            case ( 712) : ctr2 += 19131;  break;
            case ( 713) : ctr2 +=  7984;  break;
            case ( 714) : ctr2 +=  1095;  break;
            case ( 715) : ctr2 += 21516;  break;
            case ( 716) : ctr2 += 13388;  break;
            case ( 717) : ctr2 += 32468;  break;
            case ( 718) : ctr2 +=  3992;  break;
            case ( 719) : ctr2 += 13736;  break;
            case ( 720) : ctr2 += 32271;  break;
            case ( 721) : ctr2 += 27137;  break;
            case ( 722) : ctr2 += 14313;  break;
            case ( 723) : ctr2 += 13674;  break;
            case ( 724) : ctr2 += 29160;  break;
            case ( 725) : ctr2 +=  7520;  break;
            case ( 726) : ctr2 += 14417;  break;
            case ( 727) : ctr2 +=  3810;  break;
            case ( 728) : ctr2 += 22194;  break;
            case ( 729) : ctr2 +=  6060;  break;
            case ( 730) : ctr2 += 23216;  break;
            case ( 731) : ctr2 += 21053;  break;
            case ( 732) : ctr2 += 29304;  break;
            case ( 733) : ctr2 += 25364;  break;
            case ( 734) : ctr2 += 11144;  break;
            case ( 735) : ctr2 +=  6342;  break;
            case ( 736) : ctr2 += 31976;  break;
            case ( 737) : ctr2 +=  3552;  break;
            case ( 738) : ctr2 +=  8207;  break;
            case ( 739) : ctr2 += 25261;  break;
            case ( 740) : ctr2 +=  5636;  break;
            case ( 741) : ctr2 +=  5720;  break;
            case ( 742) : ctr2 += 25218;  break;
            case ( 743) : ctr2 +=   519;  break;
            case ( 744) : ctr2 +=  5403;  break;
            case ( 745) : ctr2 += 19937;  break;
            case ( 746) : ctr2 += 14523;  break;
            case ( 747) : ctr2 += 14103;  break;
            case ( 748) : ctr2 += 17400;  break;
            case ( 749) : ctr2 += 30570;  break;
            case ( 750) : ctr2 += 14598;  break;
            case ( 751) : ctr2 += 25036;  break;
            case ( 752) : ctr2 += 23129;  break;
            case ( 753) : ctr2 +=  9478;  break;
            case ( 754) : ctr2 += 16689;  break;
            case ( 755) : ctr2 += 27786;  break;
            case ( 756) : ctr2 += 19875;  break;
            case ( 757) : ctr2 +=  6362;  break;
            case ( 758) : ctr2 += 25570;  break;
            case ( 759) : ctr2 += 21550;  break;
            case ( 760) : ctr2 += 18643;  break;
            case ( 761) : ctr2 += 11578;  break;
            case ( 762) : ctr2 += 16429;  break;
            case ( 763) : ctr2 += 29004;  break;
            case ( 764) : ctr2 += 24760;  break;
            case ( 765) : ctr2 +=  2063;  break;
            case ( 766) : ctr2 += 30566;  break;
            case ( 767) : ctr2 += 26298;  break;
            case ( 768) : ctr2 += 22624;  break;
            case ( 769) : ctr2 +=  7548;  break;
            case ( 770) : ctr2 += 13620;  break;
            case ( 771) : ctr2 += 22867;  break;
            case ( 772) : ctr2 +=  2512;  break;
            case ( 773) : ctr2 += 17857;  break;
            case ( 774) : ctr2 += 32231;  break;
            case ( 775) : ctr2 += 21749;  break;
            case ( 776) : ctr2 += 18167;  break;
            case ( 777) : ctr2 += 27231;  break;
            case ( 778) : ctr2 += 14092;  break;
            case ( 779) : ctr2 +=   716;  break;
            case ( 780) : ctr2 += 18149;  break;
            case ( 781) : ctr2 +=  3709;  break;
            case ( 782) : ctr2 +=  7742;  break;
            case ( 783) : ctr2 +=  5331;  break;
            case ( 784) : ctr2 += 29497;  break;
            case ( 785) : ctr2 += 13962;  break;
            case ( 786) : ctr2 +=  8767;  break;
            case ( 787) : ctr2 +=  2711;  break;
            case ( 788) : ctr2 += 10712;  break;
            case ( 789) : ctr2 += 29476;  break;
            case ( 790) : ctr2 += 21063;  break;
            case ( 791) : ctr2 += 13119;  break;
            case ( 792) : ctr2 += 18149;  break;
            case ( 793) : ctr2 +=  4920;  break;
            case ( 794) : ctr2 += 22427;  break;
            case ( 795) : ctr2 +=  4297;  break;
            case ( 796) : ctr2 +=  2797;  break;
            case ( 797) : ctr2 += 16747;  break;
            case ( 798) : ctr2 += 11618;  break;
            case ( 799) : ctr2 +=   150;  break;
            case ( 800) : ctr2 += 12641;  break;
            case ( 801) : ctr2 +=  4281;  break;
            case ( 802) : ctr2 +=  2740;  break;
            case ( 803) : ctr2 += 19753;  break;
            case ( 804) : ctr2 += 19274;  break;
            case ( 805) : ctr2 += 15452;  break;
            case ( 806) : ctr2 += 13045;  break;
            case ( 807) : ctr2 +=  3372;  break;
            case ( 808) : ctr2 += 12856;  break;
            case ( 809) : ctr2 +=  7920;  break;
            case ( 810) : ctr2 +=  8289;  break;
            case ( 811) : ctr2 += 29619;  break;
            case ( 812) : ctr2 += 10107;  break;
            case ( 813) : ctr2 +=  9428;  break;
            case ( 814) : ctr2 += 15591;  break;
            case ( 815) : ctr2 += 30149;  break;
            case ( 816) : ctr2 += 29590;  break;
            case ( 817) : ctr2 += 15827;  break;
            case ( 818) : ctr2 +=  7483;  break;
            case ( 819) : ctr2 += 26905;  break;
            case ( 820) : ctr2 +=  6641;  break;
            case ( 821) : ctr2 +=  4612;  break;
            case ( 822) : ctr2 += 29223;  break;
            case ( 823) : ctr2 +=    29;  break;
            case ( 824) : ctr2 += 29902;  break;
            case ( 825) : ctr2 += 32238;  break;
            case ( 826) : ctr2 +=  9250;  break;
            case ( 827) : ctr2 += 18236;  break;
            case ( 828) : ctr2 += 19838;  break;
            case ( 829) : ctr2 +=  6640;  break;
            case ( 830) : ctr2 += 19747;  break;
            case ( 831) : ctr2 +=  1889;  break;
            case ( 832) : ctr2 += 17621;  break;
            case ( 833) : ctr2 += 20705;  break;
            case ( 834) : ctr2 +=  1207;  break;
            case ( 835) : ctr2 += 12727;  break;
            case ( 836) : ctr2 +=  8155;  break;
            case ( 837) : ctr2 += 18931;  break;
            case ( 838) : ctr2 += 12882;  break;
            case ( 839) : ctr2 += 14516;  break;
            case ( 840) : ctr2 += 19652;  break;
            case ( 841) : ctr2 += 10717;  break;
            case ( 842) : ctr2 += 23010;  break;
            case ( 843) : ctr2 += 31317;  break;
            case ( 844) : ctr2 += 13347;  break;
            case ( 845) : ctr2 += 28473;  break;
            case ( 846) : ctr2 +=  5802;  break;
            case ( 847) : ctr2 +=  8107;  break;
            case ( 848) : ctr2 += 10842;  break;
            case ( 849) : ctr2 += 28202;  break;
            case ( 850) : ctr2 += 14414;  break;
            case ( 851) : ctr2 +=  5526;  break;
            case ( 852) : ctr2 +=  5461;  break;
            case ( 853) : ctr2 += 12099;  break;
            case ( 854) : ctr2 += 13866;  break;
            case ( 855) : ctr2 +=   721;  break;
            case ( 856) : ctr2 +=  6776;  break;
            case ( 857) : ctr2 += 13732;  break;
            case ( 858) : ctr2 += 27880;  break;
            case ( 859) : ctr2 += 24366;  break;
            case ( 860) : ctr2 += 26837;  break;
            case ( 861) : ctr2 += 28774;  break;
            case ( 862) : ctr2 += 23122;  break;
            case ( 863) : ctr2 +=  4131;  break;
            case ( 864) : ctr2 += 29603;  break;
            case ( 865) : ctr2 += 23354;  break;
            case ( 866) : ctr2 += 19300;  break;
            case ( 867) : ctr2 += 11910;  break;
            case ( 868) : ctr2 += 12523;  break;
            case ( 869) : ctr2 +=  4684;  break;
            case ( 870) : ctr2 += 12454;  break;
            case ( 871) : ctr2 += 22933;  break;
            case ( 872) : ctr2 += 12421;  break;
            case ( 873) : ctr2 += 23918;  break;
            case ( 874) : ctr2 +=  3257;  break;
            case ( 875) : ctr2 += 15161;  break;
            case ( 876) : ctr2 +=  8003;  break;
            case ( 877) : ctr2 += 30322;  break;
            case ( 878) : ctr2 += 12591;  break;
            case ( 879) : ctr2 +=  8588;  break;
            case ( 880) : ctr2 +=  2668;  break;
            case ( 881) : ctr2 +=  3799;  break;
            case ( 882) : ctr2 += 15776;  break;
            case ( 883) : ctr2 += 20888;  break;
            case ( 884) : ctr2 += 30572;  break;
            case ( 885) : ctr2 += 22697;  break;
            case ( 886) : ctr2 +=  5369;  break;
            case ( 887) : ctr2 += 30562;  break;
            case ( 888) : ctr2 +=  9161;  break;
            case ( 889) : ctr2 +=  5794;  break;
            case ( 890) : ctr2 += 15640;  break;
            case ( 891) : ctr2 += 22311;  break;
            case ( 892) : ctr2 +=   345;  break;
            case ( 893) : ctr2 += 30613;  break;
            case ( 894) : ctr2 += 23702;  break;
            case ( 895) : ctr2 +=  9189;  break;
            case ( 896) : ctr2 += 17075;  break;
            case ( 897) : ctr2 += 16653;  break;
            case ( 898) : ctr2 += 19172;  break;
            case ( 899) : ctr2 +=  7965;  break;
            case ( 900) : ctr2 +=  3043;  break;
            case ( 901) : ctr2 +=  3377;  break;
            case ( 902) : ctr2 += 26266;  break;
            case ( 903) : ctr2 += 26071;  break;
            case ( 904) : ctr2 +=  7010;  break;
            case ( 905) : ctr2 +=  8170;  break;
            case ( 906) : ctr2 +=  9739;  break;
            case ( 907) : ctr2 +=  3816;  break;
            case ( 908) : ctr2 += 32581;  break;
            case ( 909) : ctr2 +=  5960;  break;
            case ( 910) : ctr2 +=  5661;  break;
            case ( 911) : ctr2 += 32368;  break;
            case ( 912) : ctr2 += 10932;  break;
            case ( 913) : ctr2 += 31522;  break;
            case ( 914) : ctr2 += 15192;  break;
            case ( 915) : ctr2 +=  4774;  break;
            case ( 916) : ctr2 += 32670;  break;
            case ( 917) : ctr2 += 28669;  break;
            case ( 918) : ctr2 +=  2364;  break;
            case ( 919) : ctr2 +=  3544;  break;
            case ( 920) : ctr2 +=  8363;  break;
            case ( 921) : ctr2 +=  4399;  break;
            case ( 922) : ctr2 += 25560;  break;
            case ( 923) : ctr2 += 25005;  break;
            case ( 924) : ctr2 +=  8050;  break;
            case ( 925) : ctr2 += 13893;  break;
            case ( 926) : ctr2 += 24472;  break;
            case ( 927) : ctr2 += 16302;  break;
            case ( 928) : ctr2 += 23277;  break;
            case ( 929) : ctr2 += 10145;  break;
            case ( 930) : ctr2 += 13151;  break;
            case ( 931) : ctr2 +=  4868;  break;
            case ( 932) : ctr2 +=  8745;  break;
            case ( 933) : ctr2 +=  1640;  break;
            case ( 934) : ctr2 +=  4309;  break;
            case ( 935) : ctr2 += 18307;  break;
            case ( 936) : ctr2 += 28482;  break;
            case ( 937) : ctr2 += 27547;  break;
            case ( 938) : ctr2 += 22275;  break;
            case ( 939) : ctr2 +=   488;  break;
            case ( 940) : ctr2 += 20111;  break;
            case ( 941) : ctr2 +=   643;  break;
            case ( 942) : ctr2 += 21277;  break;
            case ( 943) : ctr2 += 11615;  break;
            case ( 944) : ctr2 += 17946;  break;
            case ( 945) : ctr2 +=  8787;  break;
            case ( 946) : ctr2 +=   926;  break;
            case ( 947) : ctr2 +=   585;  break;
            case ( 948) : ctr2 += 20819;  break;
            case ( 949) : ctr2 += 11017;  break;
            case ( 950) : ctr2 +=  4506;  break;
            case ( 951) : ctr2 += 27195;  break;
            case ( 952) : ctr2 += 17669;  break;
            case ( 953) : ctr2 += 10645;  break;
            case ( 954) : ctr2 += 29776;  break;
            case ( 955) : ctr2 += 25930;  break;
            case ( 956) : ctr2 += 12168;  break;
            case ( 957) : ctr2 +=  1853;  break;
            case ( 958) : ctr2 += 29440;  break;
            case ( 959) : ctr2 += 21638;  break;
            case ( 960) : ctr2 +=  2361;  break;
            case ( 961) : ctr2 += 18496;  break;
            case ( 962) : ctr2 += 30972;  break;
            case ( 963) : ctr2 += 19908;  break;
            case ( 964) : ctr2 += 18727;  break;
            case ( 965) : ctr2 +=  7609;  break;
            case ( 966) : ctr2 += 28672;  break;
            case ( 967) : ctr2 += 23713;  break;
            case ( 968) : ctr2 += 12815;  break;
            case ( 969) : ctr2 += 20167;  break;
            case ( 970) : ctr2 +=  5318;  break;
            case ( 971) : ctr2 += 21699;  break;
            case ( 972) : ctr2 += 27531;  break;
            case ( 973) : ctr2 += 15595;  break;
            case ( 974) : ctr2 += 31190;  break;
            case ( 975) : ctr2 +=  6498;  break;
            case ( 976) : ctr2 += 15238;  break;
            case ( 977) : ctr2 +=  1969;  break;
            case ( 978) : ctr2 += 11420;  break;
            case ( 979) : ctr2 += 32263;  break;
            case ( 980) : ctr2 += 29683;  break;
            case ( 981) : ctr2 +=  5011;  break;
            case ( 982) : ctr2 += 12476;  break;
            case ( 983) : ctr2 +=  9364;  break;
            case ( 984) : ctr2 += 26814;  break;
            case ( 985) : ctr2 += 30746;  break;
            case ( 986) : ctr2 += 17834;  break;
            case ( 987) : ctr2 += 31877;  break;
            case ( 988) : ctr2 +=   515;  break;
            case ( 989) : ctr2 +=  6470;  break;
            case ( 990) : ctr2 += 10869;  break;
            case ( 991) : ctr2 += 18293;  break;
            case ( 992) : ctr2 += 15999;  break;
            case ( 993) : ctr2 += 28720;  break;
            case ( 994) : ctr2 += 21475;  break;
            case ( 995) : ctr2 += 18148;  break;
            case ( 996) : ctr2 += 14916;  break;
            case ( 997) : ctr2 += 18158;  break;
            case ( 998) : ctr2 += 18627;  break;
            case ( 999) : ctr2 += 30519;  break;
            case (1000) : ctr2 +=  3504;  break;
            case (1001) : ctr2 += 27575;  break;
            case (1002) : ctr2 +=  6271;  break;
            case (1003) : ctr2 += 31744;  break;
            case (1004) : ctr2 +=  6303;  break;
            case (1005) : ctr2 +=  8007;  break;
            case (1006) : ctr2 +=  8177;  break;
            case (1007) : ctr2 +=  8576;  break;
            case (1008) : ctr2 +=  3552;  break;
            case (1009) : ctr2 += 17029;  break;
            case (1010) : ctr2 +=  4215;  break;
            case (1011) : ctr2 +=  5995;  break;
            case (1012) : ctr2 += 21222;  break;
            case (1013) : ctr2 +=  1892;  break;
            case (1014) : ctr2 += 27978;  break;
            case (1015) : ctr2 += 18666;  break;
            case (1016) : ctr2 +=  1984;  break;
            case (1017) : ctr2 += 10503;  break;
            case (1018) : ctr2 += 29451;  break;
            case (1019) : ctr2 += 30182;  break;
            case (1020) : ctr2 += 19276;  break;
            case (1021) : ctr2 += 28456;  break;
            case (1022) : ctr2 +=  7583;  break;
            case (1023) : ctr2 += 29060;  break;
            default : break;
       }

       stack_table[ctr] = ctr ^ (tmp_val * ctr2);
    }

MANIPULATE:


    while (key_len-- != 0)
    {
        for (ctr2 = 0; ctr2 < (user_input[key_len]); ctr2++)
        {
            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1 == 0)
                {
                   stack_table[ctr] -= 3 * 1;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 2 == 0)
                {
                   stack_table[ctr] -= 3 * 2;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 3 == 0)
                {
                   stack_table[ctr] -= 3 * 3;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 4 == 0)
                {
                   stack_table[ctr] -= 3 * 4;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 5 == 0)
                {
                   stack_table[ctr] -= 3 * 5;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 6 == 0)
                {
                   stack_table[ctr] -= 3 * 6;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 7 == 0)
                {
                   stack_table[ctr] -= 3 * 7;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 8 == 0)
                {
                   stack_table[ctr] -= 3 * 8;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 9 == 0)
                {
                   stack_table[ctr] -= 3 * 9;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 10 == 0)
                {
                   stack_table[ctr] -= 3 * 10;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 11 == 0)
                {
                   stack_table[ctr] -= 3 * 11;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 12 == 0)
                {
                   stack_table[ctr] -= 3 * 12;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 13 == 0)
                {
                   stack_table[ctr] -= 3 * 13;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 14 == 0)
                {
                   stack_table[ctr] -= 3 * 14;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 15 == 0)
                {
                   stack_table[ctr] -= 3 * 15;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 16 == 0)
                {
                   stack_table[ctr] -= 3 * 16;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 17 == 0)
                {
                   stack_table[ctr] -= 3 * 17;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 18 == 0)
                {
                   stack_table[ctr] -= 3 * 18;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 19 == 0)
                {
                   stack_table[ctr] -= 3 * 19;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 20 == 0)
                {
                   stack_table[ctr] -= 3 * 20;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 21 == 0)
                {
                   stack_table[ctr] -= 3 * 21;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 22 == 0)
                {
                   stack_table[ctr] -= 3 * 22;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 23 == 0)
                {
                   stack_table[ctr] -= 3 * 23;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 24 == 0)
                {
                   stack_table[ctr] -= 3 * 24;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 25 == 0)
                {
                   stack_table[ctr] -= 3 * 25;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 26 == 0)
                {
                   stack_table[ctr] -= 3 * 26;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 27 == 0)
                {
                   stack_table[ctr] -= 3 * 27;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 28 == 0)
                {
                   stack_table[ctr] -= 3 * 28;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 29 == 0)
                {
                   stack_table[ctr] -= 3 * 29;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 30 == 0)
                {
                   stack_table[ctr] -= 3 * 30;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 31 == 0)
                {
                   stack_table[ctr] -= 3 * 31;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 32 == 0)
                {
                   stack_table[ctr] -= 3 * 32;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 33 == 0)
                {
                   stack_table[ctr] -= 3 * 33;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 34 == 0)
                {
                   stack_table[ctr] -= 3 * 34;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 35 == 0)
                {
                   stack_table[ctr] -= 3 * 35;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 36 == 0)
                {
                   stack_table[ctr] -= 3 * 36;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 37 == 0)
                {
                   stack_table[ctr] -= 3 * 37;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 38 == 0)
                {
                   stack_table[ctr] -= 3 * 38;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 39 == 0)
                {
                   stack_table[ctr] -= 3 * 39;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 40 == 0)
                {
                   stack_table[ctr] -= 3 * 40;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 41 == 0)
                {
                   stack_table[ctr] -= 3 * 41;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 42 == 0)
                {
                   stack_table[ctr] -= 3 * 42;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 43 == 0)
                {
                   stack_table[ctr] -= 3 * 43;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 44 == 0)
                {
                   stack_table[ctr] -= 3 * 44;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 45 == 0)
                {
                   stack_table[ctr] -= 3 * 45;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 46 == 0)
                {
                   stack_table[ctr] -= 3 * 46;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 47 == 0)
                {
                   stack_table[ctr] -= 3 * 47;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 48 == 0)
                {
                   stack_table[ctr] -= 3 * 48;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 49 == 0)
                {
                   stack_table[ctr] -= 3 * 49;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 50 == 0)
                {
                   stack_table[ctr] -= 3 * 50;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 51 == 0)
                {
                   stack_table[ctr] -= 3 * 51;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 52 == 0)
                {
                   stack_table[ctr] -= 3 * 52;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 53 == 0)
                {
                   stack_table[ctr] -= 3 * 53;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 54 == 0)
                {
                   stack_table[ctr] -= 3 * 54;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 55 == 0)
                {
                   stack_table[ctr] -= 3 * 55;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 56 == 0)
                {
                   stack_table[ctr] -= 3 * 56;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 57 == 0)
                {
                   stack_table[ctr] -= 3 * 57;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 58 == 0)
                {
                   stack_table[ctr] -= 3 * 58;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 59 == 0)
                {
                   stack_table[ctr] -= 3 * 59;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 60 == 0)
                {
                   stack_table[ctr] -= 3 * 60;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 61 == 0)
                {
                   stack_table[ctr] -= 3 * 61;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 62 == 0)
                {
                   stack_table[ctr] -= 3 * 62;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 63 == 0)
                {
                   stack_table[ctr] -= 3 * 63;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 64 == 0)
                {
                   stack_table[ctr] -= 3 * 64;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 65 == 0)
                {
                   stack_table[ctr] -= 3 * 65;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 66 == 0)
                {
                   stack_table[ctr] -= 3 * 66;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 67 == 0)
                {
                   stack_table[ctr] -= 3 * 67;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 68 == 0)
                {
                   stack_table[ctr] -= 3 * 68;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 69 == 0)
                {
                   stack_table[ctr] -= 3 * 69;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 70 == 0)
                {
                   stack_table[ctr] -= 3 * 70;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 71 == 0)
                {
                   stack_table[ctr] -= 3 * 71;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 72 == 0)
                {
                   stack_table[ctr] -= 3 * 72;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 73 == 0)
                {
                   stack_table[ctr] -= 3 * 73;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 74 == 0)
                {
                   stack_table[ctr] -= 3 * 74;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 75 == 0)
                {
                   stack_table[ctr] -= 3 * 75;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 76 == 0)
                {
                   stack_table[ctr] -= 3 * 76;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 77 == 0)
                {
                   stack_table[ctr] -= 3 * 77;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 78 == 0)
                {
                   stack_table[ctr] -= 3 * 78;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 79 == 0)
                {
                   stack_table[ctr] -= 3 * 79;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 80 == 0)
                {
                   stack_table[ctr] -= 3 * 80;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 81 == 0)
                {
                   stack_table[ctr] -= 3 * 81;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 82 == 0)
                {
                   stack_table[ctr] -= 3 * 82;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 83 == 0)
                {
                   stack_table[ctr] -= 3 * 83;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 84 == 0)
                {
                   stack_table[ctr] -= 3 * 84;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 85 == 0)
                {
                   stack_table[ctr] -= 3 * 85;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 86 == 0)
                {
                   stack_table[ctr] -= 3 * 86;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 87 == 0)
                {
                   stack_table[ctr] -= 3 * 87;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 88 == 0)
                {
                   stack_table[ctr] -= 3 * 88;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 89 == 0)
                {
                   stack_table[ctr] -= 3 * 89;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 90 == 0)
                {
                   stack_table[ctr] -= 3 * 90;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 91 == 0)
                {
                   stack_table[ctr] -= 3 * 91;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 92 == 0)
                {
                   stack_table[ctr] -= 3 * 92;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 93 == 0)
                {
                   stack_table[ctr] -= 3 * 93;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 94 == 0)
                {
                   stack_table[ctr] -= 3 * 94;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 95 == 0)
                {
                   stack_table[ctr] -= 3 * 95;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 96 == 0)
                {
                   stack_table[ctr] -= 3 * 96;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 97 == 0)
                {
                   stack_table[ctr] -= 3 * 97;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 98 == 0)
                {
                   stack_table[ctr] -= 3 * 98;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 99 == 0)
                {
                   stack_table[ctr] -= 3 * 99;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 100 == 0)
                {
                   stack_table[ctr] -= 3 * 100;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 101 == 0)
                {
                   stack_table[ctr] -= 3 * 101;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 102 == 0)
                {
                   stack_table[ctr] -= 3 * 102;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 103 == 0)
                {
                   stack_table[ctr] -= 3 * 103;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 104 == 0)
                {
                   stack_table[ctr] -= 3 * 104;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 105 == 0)
                {
                   stack_table[ctr] -= 3 * 105;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 106 == 0)
                {
                   stack_table[ctr] -= 3 * 106;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 107 == 0)
                {
                   stack_table[ctr] -= 3 * 107;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 108 == 0)
                {
                   stack_table[ctr] -= 3 * 108;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 109 == 0)
                {
                   stack_table[ctr] -= 3 * 109;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 110 == 0)
                {
                   stack_table[ctr] -= 3 * 110;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 111 == 0)
                {
                   stack_table[ctr] -= 3 * 111;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 112 == 0)
                {
                   stack_table[ctr] -= 3 * 112;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 113 == 0)
                {
                   stack_table[ctr] -= 3 * 113;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 114 == 0)
                {
                   stack_table[ctr] -= 3 * 114;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 115 == 0)
                {
                   stack_table[ctr] -= 3 * 115;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 116 == 0)
                {
                   stack_table[ctr] -= 3 * 116;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 117 == 0)
                {
                   stack_table[ctr] -= 3 * 117;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 118 == 0)
                {
                   stack_table[ctr] -= 3 * 118;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 119 == 0)
                {
                   stack_table[ctr] -= 3 * 119;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 120 == 0)
                {
                   stack_table[ctr] -= 3 * 120;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 121 == 0)
                {
                   stack_table[ctr] -= 3 * 121;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 122 == 0)
                {
                   stack_table[ctr] -= 3 * 122;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 123 == 0)
                {
                   stack_table[ctr] -= 3 * 123;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 124 == 0)
                {
                   stack_table[ctr] -= 3 * 124;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 125 == 0)
                {
                   stack_table[ctr] -= 3 * 125;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 126 == 0)
                {
                   stack_table[ctr] -= 3 * 126;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 127 == 0)
                {
                   stack_table[ctr] -= 3 * 127;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 128 == 0)
                {
                   stack_table[ctr] -= 3 * 128;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 129 == 0)
                {
                   stack_table[ctr] -= 3 * 129;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 130 == 0)
                {
                   stack_table[ctr] -= 3 * 130;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 131 == 0)
                {
                   stack_table[ctr] -= 3 * 131;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 132 == 0)
                {
                   stack_table[ctr] -= 3 * 132;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 133 == 0)
                {
                   stack_table[ctr] -= 3 * 133;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 134 == 0)
                {
                   stack_table[ctr] -= 3 * 134;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 135 == 0)
                {
                   stack_table[ctr] -= 3 * 135;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 136 == 0)
                {
                   stack_table[ctr] -= 3 * 136;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 137 == 0)
                {
                   stack_table[ctr] -= 3 * 137;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 138 == 0)
                {
                   stack_table[ctr] -= 3 * 138;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 139 == 0)
                {
                   stack_table[ctr] -= 3 * 139;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 140 == 0)
                {
                   stack_table[ctr] -= 3 * 140;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 141 == 0)
                {
                   stack_table[ctr] -= 3 * 141;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 142 == 0)
                {
                   stack_table[ctr] -= 3 * 142;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 143 == 0)
                {
                   stack_table[ctr] -= 3 * 143;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 144 == 0)
                {
                   stack_table[ctr] -= 3 * 144;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 145 == 0)
                {
                   stack_table[ctr] -= 3 * 145;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 146 == 0)
                {
                   stack_table[ctr] -= 3 * 146;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 147 == 0)
                {
                   stack_table[ctr] -= 3 * 147;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 148 == 0)
                {
                   stack_table[ctr] -= 3 * 148;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 149 == 0)
                {
                   stack_table[ctr] -= 3 * 149;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 150 == 0)
                {
                   stack_table[ctr] -= 3 * 150;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 151 == 0)
                {
                   stack_table[ctr] -= 3 * 151;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 152 == 0)
                {
                   stack_table[ctr] -= 3 * 152;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 153 == 0)
                {
                   stack_table[ctr] -= 3 * 153;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 154 == 0)
                {
                   stack_table[ctr] -= 3 * 154;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 155 == 0)
                {
                   stack_table[ctr] -= 3 * 155;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 156 == 0)
                {
                   stack_table[ctr] -= 3 * 156;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 157 == 0)
                {
                   stack_table[ctr] -= 3 * 157;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 158 == 0)
                {
                   stack_table[ctr] -= 3 * 158;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 159 == 0)
                {
                   stack_table[ctr] -= 3 * 159;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 160 == 0)
                {
                   stack_table[ctr] -= 3 * 160;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 161 == 0)
                {
                   stack_table[ctr] -= 3 * 161;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 162 == 0)
                {
                   stack_table[ctr] -= 3 * 162;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 163 == 0)
                {
                   stack_table[ctr] -= 3 * 163;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 164 == 0)
                {
                   stack_table[ctr] -= 3 * 164;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 165 == 0)
                {
                   stack_table[ctr] -= 3 * 165;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 166 == 0)
                {
                   stack_table[ctr] -= 3 * 166;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 167 == 0)
                {
                   stack_table[ctr] -= 3 * 167;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 168 == 0)
                {
                   stack_table[ctr] -= 3 * 168;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 169 == 0)
                {
                   stack_table[ctr] -= 3 * 169;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 170 == 0)
                {
                   stack_table[ctr] -= 3 * 170;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 171 == 0)
                {
                   stack_table[ctr] -= 3 * 171;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 172 == 0)
                {
                   stack_table[ctr] -= 3 * 172;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 173 == 0)
                {
                   stack_table[ctr] -= 3 * 173;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 174 == 0)
                {
                   stack_table[ctr] -= 3 * 174;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 175 == 0)
                {
                   stack_table[ctr] -= 3 * 175;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 176 == 0)
                {
                   stack_table[ctr] -= 3 * 176;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 177 == 0)
                {
                   stack_table[ctr] -= 3 * 177;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 178 == 0)
                {
                   stack_table[ctr] -= 3 * 178;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 179 == 0)
                {
                   stack_table[ctr] -= 3 * 179;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 180 == 0)
                {
                   stack_table[ctr] -= 3 * 180;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 181 == 0)
                {
                   stack_table[ctr] -= 3 * 181;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 182 == 0)
                {
                   stack_table[ctr] -= 3 * 182;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 183 == 0)
                {
                   stack_table[ctr] -= 3 * 183;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 184 == 0)
                {
                   stack_table[ctr] -= 3 * 184;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 185 == 0)
                {
                   stack_table[ctr] -= 3 * 185;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 186 == 0)
                {
                   stack_table[ctr] -= 3 * 186;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 187 == 0)
                {
                   stack_table[ctr] -= 3 * 187;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 188 == 0)
                {
                   stack_table[ctr] -= 3 * 188;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 189 == 0)
                {
                   stack_table[ctr] -= 3 * 189;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 190 == 0)
                {
                   stack_table[ctr] -= 3 * 190;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 191 == 0)
                {
                   stack_table[ctr] -= 3 * 191;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 192 == 0)
                {
                   stack_table[ctr] -= 3 * 192;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 193 == 0)
                {
                   stack_table[ctr] -= 3 * 193;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 194 == 0)
                {
                   stack_table[ctr] -= 3 * 194;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 195 == 0)
                {
                   stack_table[ctr] -= 3 * 195;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 196 == 0)
                {
                   stack_table[ctr] -= 3 * 196;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 197 == 0)
                {
                   stack_table[ctr] -= 3 * 197;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 198 == 0)
                {
                   stack_table[ctr] -= 3 * 198;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 199 == 0)
                {
                   stack_table[ctr] -= 3 * 199;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 200 == 0)
                {
                   stack_table[ctr] -= 3 * 200;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 201 == 0)
                {
                   stack_table[ctr] -= 3 * 201;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 202 == 0)
                {
                   stack_table[ctr] -= 3 * 202;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 203 == 0)
                {
                   stack_table[ctr] -= 3 * 203;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 204 == 0)
                {
                   stack_table[ctr] -= 3 * 204;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 205 == 0)
                {
                   stack_table[ctr] -= 3 * 205;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 206 == 0)
                {
                   stack_table[ctr] -= 3 * 206;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 207 == 0)
                {
                   stack_table[ctr] -= 3 * 207;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 208 == 0)
                {
                   stack_table[ctr] -= 3 * 208;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 209 == 0)
                {
                   stack_table[ctr] -= 3 * 209;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 210 == 0)
                {
                   stack_table[ctr] -= 3 * 210;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 211 == 0)
                {
                   stack_table[ctr] -= 3 * 211;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 212 == 0)
                {
                   stack_table[ctr] -= 3 * 212;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 213 == 0)
                {
                   stack_table[ctr] -= 3 * 213;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 214 == 0)
                {
                   stack_table[ctr] -= 3 * 214;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 215 == 0)
                {
                   stack_table[ctr] -= 3 * 215;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 216 == 0)
                {
                   stack_table[ctr] -= 3 * 216;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 217 == 0)
                {
                   stack_table[ctr] -= 3 * 217;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 218 == 0)
                {
                   stack_table[ctr] -= 3 * 218;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 219 == 0)
                {
                   stack_table[ctr] -= 3 * 219;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 220 == 0)
                {
                   stack_table[ctr] -= 3 * 220;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 221 == 0)
                {
                   stack_table[ctr] -= 3 * 221;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 222 == 0)
                {
                   stack_table[ctr] -= 3 * 222;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 223 == 0)
                {
                   stack_table[ctr] -= 3 * 223;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 224 == 0)
                {
                   stack_table[ctr] -= 3 * 224;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 225 == 0)
                {
                   stack_table[ctr] -= 3 * 225;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 226 == 0)
                {
                   stack_table[ctr] -= 3 * 226;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 227 == 0)
                {
                   stack_table[ctr] -= 3 * 227;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 228 == 0)
                {
                   stack_table[ctr] -= 3 * 228;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 229 == 0)
                {
                   stack_table[ctr] -= 3 * 229;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 230 == 0)
                {
                   stack_table[ctr] -= 3 * 230;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 231 == 0)
                {
                   stack_table[ctr] -= 3 * 231;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 232 == 0)
                {
                   stack_table[ctr] -= 3 * 232;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 233 == 0)
                {
                   stack_table[ctr] -= 3 * 233;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 234 == 0)
                {
                   stack_table[ctr] -= 3 * 234;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 235 == 0)
                {
                   stack_table[ctr] -= 3 * 235;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 236 == 0)
                {
                   stack_table[ctr] -= 3 * 236;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 237 == 0)
                {
                   stack_table[ctr] -= 3 * 237;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 238 == 0)
                {
                   stack_table[ctr] -= 3 * 238;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 239 == 0)
                {
                   stack_table[ctr] -= 3 * 239;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 240 == 0)
                {
                   stack_table[ctr] -= 3 * 240;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 241 == 0)
                {
                   stack_table[ctr] -= 3 * 241;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 242 == 0)
                {
                   stack_table[ctr] -= 3 * 242;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 243 == 0)
                {
                   stack_table[ctr] -= 3 * 243;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 244 == 0)
                {
                   stack_table[ctr] -= 3 * 244;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 245 == 0)
                {
                   stack_table[ctr] -= 3 * 245;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 246 == 0)
                {
                   stack_table[ctr] -= 3 * 246;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 247 == 0)
                {
                   stack_table[ctr] -= 3 * 247;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 248 == 0)
                {
                   stack_table[ctr] -= 3 * 248;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 249 == 0)
                {
                   stack_table[ctr] -= 3 * 249;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 250 == 0)
                {
                   stack_table[ctr] -= 3 * 250;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 251 == 0)
                {
                   stack_table[ctr] -= 3 * 251;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 252 == 0)
                {
                   stack_table[ctr] -= 3 * 252;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 253 == 0)
                {
                   stack_table[ctr] -= 3 * 253;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 254 == 0)
                {
                   stack_table[ctr] -= 3 * 254;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 255 == 0)
                {
                   stack_table[ctr] -= 3 * 255;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 256 == 0)
                {
                   stack_table[ctr] -= 3 * 256;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 257 == 0)
                {
                   stack_table[ctr] -= 3 * 257;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 258 == 0)
                {
                   stack_table[ctr] -= 3 * 258;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 259 == 0)
                {
                   stack_table[ctr] -= 3 * 259;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 260 == 0)
                {
                   stack_table[ctr] -= 3 * 260;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 261 == 0)
                {
                   stack_table[ctr] -= 3 * 261;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 262 == 0)
                {
                   stack_table[ctr] -= 3 * 262;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 263 == 0)
                {
                   stack_table[ctr] -= 3 * 263;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 264 == 0)
                {
                   stack_table[ctr] -= 3 * 264;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 265 == 0)
                {
                   stack_table[ctr] -= 3 * 265;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 266 == 0)
                {
                   stack_table[ctr] -= 3 * 266;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 267 == 0)
                {
                   stack_table[ctr] -= 3 * 267;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 268 == 0)
                {
                   stack_table[ctr] -= 3 * 268;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 269 == 0)
                {
                   stack_table[ctr] -= 3 * 269;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 270 == 0)
                {
                   stack_table[ctr] -= 3 * 270;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 271 == 0)
                {
                   stack_table[ctr] -= 3 * 271;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 272 == 0)
                {
                   stack_table[ctr] -= 3 * 272;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 273 == 0)
                {
                   stack_table[ctr] -= 3 * 273;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 274 == 0)
                {
                   stack_table[ctr] -= 3 * 274;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 275 == 0)
                {
                   stack_table[ctr] -= 3 * 275;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 276 == 0)
                {
                   stack_table[ctr] -= 3 * 276;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 277 == 0)
                {
                   stack_table[ctr] -= 3 * 277;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 278 == 0)
                {
                   stack_table[ctr] -= 3 * 278;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 279 == 0)
                {
                   stack_table[ctr] -= 3 * 279;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 280 == 0)
                {
                   stack_table[ctr] -= 3 * 280;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 281 == 0)
                {
                   stack_table[ctr] -= 3 * 281;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 282 == 0)
                {
                   stack_table[ctr] -= 3 * 282;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 283 == 0)
                {
                   stack_table[ctr] -= 3 * 283;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 284 == 0)
                {
                   stack_table[ctr] -= 3 * 284;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 285 == 0)
                {
                   stack_table[ctr] -= 3 * 285;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 286 == 0)
                {
                   stack_table[ctr] -= 3 * 286;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 287 == 0)
                {
                   stack_table[ctr] -= 3 * 287;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 288 == 0)
                {
                   stack_table[ctr] -= 3 * 288;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 289 == 0)
                {
                   stack_table[ctr] -= 3 * 289;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 290 == 0)
                {
                   stack_table[ctr] -= 3 * 290;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 291 == 0)
                {
                   stack_table[ctr] -= 3 * 291;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 292 == 0)
                {
                   stack_table[ctr] -= 3 * 292;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 293 == 0)
                {
                   stack_table[ctr] -= 3 * 293;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 294 == 0)
                {
                   stack_table[ctr] -= 3 * 294;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 295 == 0)
                {
                   stack_table[ctr] -= 3 * 295;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 296 == 0)
                {
                   stack_table[ctr] -= 3 * 296;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 297 == 0)
                {
                   stack_table[ctr] -= 3 * 297;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 298 == 0)
                {
                   stack_table[ctr] -= 3 * 298;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 299 == 0)
                {
                   stack_table[ctr] -= 3 * 299;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 300 == 0)
                {
                   stack_table[ctr] -= 3 * 300;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 301 == 0)
                {
                   stack_table[ctr] -= 3 * 301;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 302 == 0)
                {
                   stack_table[ctr] -= 3 * 302;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 303 == 0)
                {
                   stack_table[ctr] -= 3 * 303;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 304 == 0)
                {
                   stack_table[ctr] -= 3 * 304;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 305 == 0)
                {
                   stack_table[ctr] -= 3 * 305;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 306 == 0)
                {
                   stack_table[ctr] -= 3 * 306;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 307 == 0)
                {
                   stack_table[ctr] -= 3 * 307;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 308 == 0)
                {
                   stack_table[ctr] -= 3 * 308;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 309 == 0)
                {
                   stack_table[ctr] -= 3 * 309;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 310 == 0)
                {
                   stack_table[ctr] -= 3 * 310;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 311 == 0)
                {
                   stack_table[ctr] -= 3 * 311;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 312 == 0)
                {
                   stack_table[ctr] -= 3 * 312;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 313 == 0)
                {
                   stack_table[ctr] -= 3 * 313;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 314 == 0)
                {
                   stack_table[ctr] -= 3 * 314;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 315 == 0)
                {
                   stack_table[ctr] -= 3 * 315;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 316 == 0)
                {
                   stack_table[ctr] -= 3 * 316;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 317 == 0)
                {
                   stack_table[ctr] -= 3 * 317;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 318 == 0)
                {
                   stack_table[ctr] -= 3 * 318;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 319 == 0)
                {
                   stack_table[ctr] -= 3 * 319;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 320 == 0)
                {
                   stack_table[ctr] -= 3 * 320;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 321 == 0)
                {
                   stack_table[ctr] -= 3 * 321;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 322 == 0)
                {
                   stack_table[ctr] -= 3 * 322;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 323 == 0)
                {
                   stack_table[ctr] -= 3 * 323;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 324 == 0)
                {
                   stack_table[ctr] -= 3 * 324;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 325 == 0)
                {
                   stack_table[ctr] -= 3 * 325;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 326 == 0)
                {
                   stack_table[ctr] -= 3 * 326;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 327 == 0)
                {
                   stack_table[ctr] -= 3 * 327;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 328 == 0)
                {
                   stack_table[ctr] -= 3 * 328;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 329 == 0)
                {
                   stack_table[ctr] -= 3 * 329;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 330 == 0)
                {
                   stack_table[ctr] -= 3 * 330;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 331 == 0)
                {
                   stack_table[ctr] -= 3 * 331;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 332 == 0)
                {
                   stack_table[ctr] -= 3 * 332;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 333 == 0)
                {
                   stack_table[ctr] -= 3 * 333;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 334 == 0)
                {
                   stack_table[ctr] -= 3 * 334;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 335 == 0)
                {
                   stack_table[ctr] -= 3 * 335;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 336 == 0)
                {
                   stack_table[ctr] -= 3 * 336;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 337 == 0)
                {
                   stack_table[ctr] -= 3 * 337;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 338 == 0)
                {
                   stack_table[ctr] -= 3 * 338;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 339 == 0)
                {
                   stack_table[ctr] -= 3 * 339;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 340 == 0)
                {
                   stack_table[ctr] -= 3 * 340;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 341 == 0)
                {
                   stack_table[ctr] -= 3 * 341;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 342 == 0)
                {
                   stack_table[ctr] -= 3 * 342;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 343 == 0)
                {
                   stack_table[ctr] -= 3 * 343;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 344 == 0)
                {
                   stack_table[ctr] -= 3 * 344;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 345 == 0)
                {
                   stack_table[ctr] -= 3 * 345;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 346 == 0)
                {
                   stack_table[ctr] -= 3 * 346;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 347 == 0)
                {
                   stack_table[ctr] -= 3 * 347;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 348 == 0)
                {
                   stack_table[ctr] -= 3 * 348;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 349 == 0)
                {
                   stack_table[ctr] -= 3 * 349;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 350 == 0)
                {
                   stack_table[ctr] -= 3 * 350;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 351 == 0)
                {
                   stack_table[ctr] -= 3 * 351;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 352 == 0)
                {
                   stack_table[ctr] -= 3 * 352;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 353 == 0)
                {
                   stack_table[ctr] -= 3 * 353;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 354 == 0)
                {
                   stack_table[ctr] -= 3 * 354;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 355 == 0)
                {
                   stack_table[ctr] -= 3 * 355;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 356 == 0)
                {
                   stack_table[ctr] -= 3 * 356;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 357 == 0)
                {
                   stack_table[ctr] -= 3 * 357;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 358 == 0)
                {
                   stack_table[ctr] -= 3 * 358;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 359 == 0)
                {
                   stack_table[ctr] -= 3 * 359;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 360 == 0)
                {
                   stack_table[ctr] -= 3 * 360;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 361 == 0)
                {
                   stack_table[ctr] -= 3 * 361;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 362 == 0)
                {
                   stack_table[ctr] -= 3 * 362;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 363 == 0)
                {
                   stack_table[ctr] -= 3 * 363;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 364 == 0)
                {
                   stack_table[ctr] -= 3 * 364;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 365 == 0)
                {
                   stack_table[ctr] -= 3 * 365;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 366 == 0)
                {
                   stack_table[ctr] -= 3 * 366;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 367 == 0)
                {
                   stack_table[ctr] -= 3 * 367;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 368 == 0)
                {
                   stack_table[ctr] -= 3 * 368;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 369 == 0)
                {
                   stack_table[ctr] -= 3 * 369;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 370 == 0)
                {
                   stack_table[ctr] -= 3 * 370;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 371 == 0)
                {
                   stack_table[ctr] -= 3 * 371;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 372 == 0)
                {
                   stack_table[ctr] -= 3 * 372;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 373 == 0)
                {
                   stack_table[ctr] -= 3 * 373;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 374 == 0)
                {
                   stack_table[ctr] -= 3 * 374;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 375 == 0)
                {
                   stack_table[ctr] -= 3 * 375;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 376 == 0)
                {
                   stack_table[ctr] -= 3 * 376;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 377 == 0)
                {
                   stack_table[ctr] -= 3 * 377;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 378 == 0)
                {
                   stack_table[ctr] -= 3 * 378;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 379 == 0)
                {
                   stack_table[ctr] -= 3 * 379;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 380 == 0)
                {
                   stack_table[ctr] -= 3 * 380;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 381 == 0)
                {
                   stack_table[ctr] -= 3 * 381;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 382 == 0)
                {
                   stack_table[ctr] -= 3 * 382;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 383 == 0)
                {
                   stack_table[ctr] -= 3 * 383;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 384 == 0)
                {
                   stack_table[ctr] -= 3 * 384;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 385 == 0)
                {
                   stack_table[ctr] -= 3 * 385;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 386 == 0)
                {
                   stack_table[ctr] -= 3 * 386;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 387 == 0)
                {
                   stack_table[ctr] -= 3 * 387;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 388 == 0)
                {
                   stack_table[ctr] -= 3 * 388;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 389 == 0)
                {
                   stack_table[ctr] -= 3 * 389;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 390 == 0)
                {
                   stack_table[ctr] -= 3 * 390;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 391 == 0)
                {
                   stack_table[ctr] -= 3 * 391;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 392 == 0)
                {
                   stack_table[ctr] -= 3 * 392;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 393 == 0)
                {
                   stack_table[ctr] -= 3 * 393;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 394 == 0)
                {
                   stack_table[ctr] -= 3 * 394;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 395 == 0)
                {
                   stack_table[ctr] -= 3 * 395;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 396 == 0)
                {
                   stack_table[ctr] -= 3 * 396;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 397 == 0)
                {
                   stack_table[ctr] -= 3 * 397;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 398 == 0)
                {
                   stack_table[ctr] -= 3 * 398;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 399 == 0)
                {
                   stack_table[ctr] -= 3 * 399;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 400 == 0)
                {
                   stack_table[ctr] -= 3 * 400;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 401 == 0)
                {
                   stack_table[ctr] -= 3 * 401;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 402 == 0)
                {
                   stack_table[ctr] -= 3 * 402;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 403 == 0)
                {
                   stack_table[ctr] -= 3 * 403;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 404 == 0)
                {
                   stack_table[ctr] -= 3 * 404;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 405 == 0)
                {
                   stack_table[ctr] -= 3 * 405;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 406 == 0)
                {
                   stack_table[ctr] -= 3 * 406;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 407 == 0)
                {
                   stack_table[ctr] -= 3 * 407;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 408 == 0)
                {
                   stack_table[ctr] -= 3 * 408;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 409 == 0)
                {
                   stack_table[ctr] -= 3 * 409;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 410 == 0)
                {
                   stack_table[ctr] -= 3 * 410;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 411 == 0)
                {
                   stack_table[ctr] -= 3 * 411;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 412 == 0)
                {
                   stack_table[ctr] -= 3 * 412;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 413 == 0)
                {
                   stack_table[ctr] -= 3 * 413;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 414 == 0)
                {
                   stack_table[ctr] -= 3 * 414;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 415 == 0)
                {
                   stack_table[ctr] -= 3 * 415;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 416 == 0)
                {
                   stack_table[ctr] -= 3 * 416;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 417 == 0)
                {
                   stack_table[ctr] -= 3 * 417;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 418 == 0)
                {
                   stack_table[ctr] -= 3 * 418;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 419 == 0)
                {
                   stack_table[ctr] -= 3 * 419;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 420 == 0)
                {
                   stack_table[ctr] -= 3 * 420;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 421 == 0)
                {
                   stack_table[ctr] -= 3 * 421;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 422 == 0)
                {
                   stack_table[ctr] -= 3 * 422;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 423 == 0)
                {
                   stack_table[ctr] -= 3 * 423;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 424 == 0)
                {
                   stack_table[ctr] -= 3 * 424;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 425 == 0)
                {
                   stack_table[ctr] -= 3 * 425;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 426 == 0)
                {
                   stack_table[ctr] -= 3 * 426;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 427 == 0)
                {
                   stack_table[ctr] -= 3 * 427;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 428 == 0)
                {
                   stack_table[ctr] -= 3 * 428;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 429 == 0)
                {
                   stack_table[ctr] -= 3 * 429;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 430 == 0)
                {
                   stack_table[ctr] -= 3 * 430;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 431 == 0)
                {
                   stack_table[ctr] -= 3 * 431;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 432 == 0)
                {
                   stack_table[ctr] -= 3 * 432;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 433 == 0)
                {
                   stack_table[ctr] -= 3 * 433;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 434 == 0)
                {
                   stack_table[ctr] -= 3 * 434;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 435 == 0)
                {
                   stack_table[ctr] -= 3 * 435;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 436 == 0)
                {
                   stack_table[ctr] -= 3 * 436;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 437 == 0)
                {
                   stack_table[ctr] -= 3 * 437;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 438 == 0)
                {
                   stack_table[ctr] -= 3 * 438;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 439 == 0)
                {
                   stack_table[ctr] -= 3 * 439;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 440 == 0)
                {
                   stack_table[ctr] -= 3 * 440;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 441 == 0)
                {
                   stack_table[ctr] -= 3 * 441;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 442 == 0)
                {
                   stack_table[ctr] -= 3 * 442;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 443 == 0)
                {
                   stack_table[ctr] -= 3 * 443;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 444 == 0)
                {
                   stack_table[ctr] -= 3 * 444;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 445 == 0)
                {
                   stack_table[ctr] -= 3 * 445;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 446 == 0)
                {
                   stack_table[ctr] -= 3 * 446;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 447 == 0)
                {
                   stack_table[ctr] -= 3 * 447;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 448 == 0)
                {
                   stack_table[ctr] -= 3 * 448;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 449 == 0)
                {
                   stack_table[ctr] -= 3 * 449;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 450 == 0)
                {
                   stack_table[ctr] -= 3 * 450;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 451 == 0)
                {
                   stack_table[ctr] -= 3 * 451;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 452 == 0)
                {
                   stack_table[ctr] -= 3 * 452;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 453 == 0)
                {
                   stack_table[ctr] -= 3 * 453;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 454 == 0)
                {
                   stack_table[ctr] -= 3 * 454;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 455 == 0)
                {
                   stack_table[ctr] -= 3 * 455;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 456 == 0)
                {
                   stack_table[ctr] -= 3 * 456;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 457 == 0)
                {
                   stack_table[ctr] -= 3 * 457;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 458 == 0)
                {
                   stack_table[ctr] -= 3 * 458;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 459 == 0)
                {
                   stack_table[ctr] -= 3 * 459;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 460 == 0)
                {
                   stack_table[ctr] -= 3 * 460;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 461 == 0)
                {
                   stack_table[ctr] -= 3 * 461;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 462 == 0)
                {
                   stack_table[ctr] -= 3 * 462;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 463 == 0)
                {
                   stack_table[ctr] -= 3 * 463;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 464 == 0)
                {
                   stack_table[ctr] -= 3 * 464;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 465 == 0)
                {
                   stack_table[ctr] -= 3 * 465;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 466 == 0)
                {
                   stack_table[ctr] -= 3 * 466;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 467 == 0)
                {
                   stack_table[ctr] -= 3 * 467;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 468 == 0)
                {
                   stack_table[ctr] -= 3 * 468;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 469 == 0)
                {
                   stack_table[ctr] -= 3 * 469;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 470 == 0)
                {
                   stack_table[ctr] -= 3 * 470;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 471 == 0)
                {
                   stack_table[ctr] -= 3 * 471;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 472 == 0)
                {
                   stack_table[ctr] -= 3 * 472;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 473 == 0)
                {
                   stack_table[ctr] -= 3 * 473;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 474 == 0)
                {
                   stack_table[ctr] -= 3 * 474;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 475 == 0)
                {
                   stack_table[ctr] -= 3 * 475;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 476 == 0)
                {
                   stack_table[ctr] -= 3 * 476;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 477 == 0)
                {
                   stack_table[ctr] -= 3 * 477;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 478 == 0)
                {
                   stack_table[ctr] -= 3 * 478;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 479 == 0)
                {
                   stack_table[ctr] -= 3 * 479;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 480 == 0)
                {
                   stack_table[ctr] -= 3 * 480;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 481 == 0)
                {
                   stack_table[ctr] -= 3 * 481;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 482 == 0)
                {
                   stack_table[ctr] -= 3 * 482;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 483 == 0)
                {
                   stack_table[ctr] -= 3 * 483;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 484 == 0)
                {
                   stack_table[ctr] -= 3 * 484;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 485 == 0)
                {
                   stack_table[ctr] -= 3 * 485;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 486 == 0)
                {
                   stack_table[ctr] -= 3 * 486;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 487 == 0)
                {
                   stack_table[ctr] -= 3 * 487;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 488 == 0)
                {
                   stack_table[ctr] -= 3 * 488;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 489 == 0)
                {
                   stack_table[ctr] -= 3 * 489;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 490 == 0)
                {
                   stack_table[ctr] -= 3 * 490;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 491 == 0)
                {
                   stack_table[ctr] -= 3 * 491;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 492 == 0)
                {
                   stack_table[ctr] -= 3 * 492;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 493 == 0)
                {
                   stack_table[ctr] -= 3 * 493;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 494 == 0)
                {
                   stack_table[ctr] -= 3 * 494;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 495 == 0)
                {
                   stack_table[ctr] -= 3 * 495;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 496 == 0)
                {
                   stack_table[ctr] -= 3 * 496;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 497 == 0)
                {
                   stack_table[ctr] -= 3 * 497;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 498 == 0)
                {
                   stack_table[ctr] -= 3 * 498;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 499 == 0)
                {
                   stack_table[ctr] -= 3 * 499;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 500 == 0)
                {
                   stack_table[ctr] -= 3 * 500;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 501 == 0)
                {
                   stack_table[ctr] -= 3 * 501;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 502 == 0)
                {
                   stack_table[ctr] -= 3 * 502;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 503 == 0)
                {
                   stack_table[ctr] -= 3 * 503;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 504 == 0)
                {
                   stack_table[ctr] -= 3 * 504;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 505 == 0)
                {
                   stack_table[ctr] -= 3 * 505;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 506 == 0)
                {
                   stack_table[ctr] -= 3 * 506;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 507 == 0)
                {
                   stack_table[ctr] -= 3 * 507;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 508 == 0)
                {
                   stack_table[ctr] -= 3 * 508;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 509 == 0)
                {
                   stack_table[ctr] -= 3 * 509;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 510 == 0)
                {
                   stack_table[ctr] -= 3 * 510;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 511 == 0)
                {
                   stack_table[ctr] -= 3 * 511;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 512 == 0)
                {
                   stack_table[ctr] -= 3 * 512;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 513 == 0)
                {
                   stack_table[ctr] -= 3 * 513;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 514 == 0)
                {
                   stack_table[ctr] -= 3 * 514;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 515 == 0)
                {
                   stack_table[ctr] -= 3 * 515;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 516 == 0)
                {
                   stack_table[ctr] -= 3 * 516;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 517 == 0)
                {
                   stack_table[ctr] -= 3 * 517;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 518 == 0)
                {
                   stack_table[ctr] -= 3 * 518;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 519 == 0)
                {
                   stack_table[ctr] -= 3 * 519;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 520 == 0)
                {
                   stack_table[ctr] -= 3 * 520;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 521 == 0)
                {
                   stack_table[ctr] -= 3 * 521;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 522 == 0)
                {
                   stack_table[ctr] -= 3 * 522;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 523 == 0)
                {
                   stack_table[ctr] -= 3 * 523;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 524 == 0)
                {
                   stack_table[ctr] -= 3 * 524;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 525 == 0)
                {
                   stack_table[ctr] -= 3 * 525;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 526 == 0)
                {
                   stack_table[ctr] -= 3 * 526;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 527 == 0)
                {
                   stack_table[ctr] -= 3 * 527;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 528 == 0)
                {
                   stack_table[ctr] -= 3 * 528;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 529 == 0)
                {
                   stack_table[ctr] -= 3 * 529;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 530 == 0)
                {
                   stack_table[ctr] -= 3 * 530;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 531 == 0)
                {
                   stack_table[ctr] -= 3 * 531;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 532 == 0)
                {
                   stack_table[ctr] -= 3 * 532;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 533 == 0)
                {
                   stack_table[ctr] -= 3 * 533;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 534 == 0)
                {
                   stack_table[ctr] -= 3 * 534;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 535 == 0)
                {
                   stack_table[ctr] -= 3 * 535;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 536 == 0)
                {
                   stack_table[ctr] -= 3 * 536;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 537 == 0)
                {
                   stack_table[ctr] -= 3 * 537;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 538 == 0)
                {
                   stack_table[ctr] -= 3 * 538;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 539 == 0)
                {
                   stack_table[ctr] -= 3 * 539;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 540 == 0)
                {
                   stack_table[ctr] -= 3 * 540;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 541 == 0)
                {
                   stack_table[ctr] -= 3 * 541;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 542 == 0)
                {
                   stack_table[ctr] -= 3 * 542;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 543 == 0)
                {
                   stack_table[ctr] -= 3 * 543;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 544 == 0)
                {
                   stack_table[ctr] -= 3 * 544;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 545 == 0)
                {
                   stack_table[ctr] -= 3 * 545;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 546 == 0)
                {
                   stack_table[ctr] -= 3 * 546;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 547 == 0)
                {
                   stack_table[ctr] -= 3 * 547;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 548 == 0)
                {
                   stack_table[ctr] -= 3 * 548;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 549 == 0)
                {
                   stack_table[ctr] -= 3 * 549;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 550 == 0)
                {
                   stack_table[ctr] -= 3 * 550;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 551 == 0)
                {
                   stack_table[ctr] -= 3 * 551;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 552 == 0)
                {
                   stack_table[ctr] -= 3 * 552;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 553 == 0)
                {
                   stack_table[ctr] -= 3 * 553;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 554 == 0)
                {
                   stack_table[ctr] -= 3 * 554;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 555 == 0)
                {
                   stack_table[ctr] -= 3 * 555;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 556 == 0)
                {
                   stack_table[ctr] -= 3 * 556;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 557 == 0)
                {
                   stack_table[ctr] -= 3 * 557;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 558 == 0)
                {
                   stack_table[ctr] -= 3 * 558;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 559 == 0)
                {
                   stack_table[ctr] -= 3 * 559;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 560 == 0)
                {
                   stack_table[ctr] -= 3 * 560;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 561 == 0)
                {
                   stack_table[ctr] -= 3 * 561;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 562 == 0)
                {
                   stack_table[ctr] -= 3 * 562;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 563 == 0)
                {
                   stack_table[ctr] -= 3 * 563;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 564 == 0)
                {
                   stack_table[ctr] -= 3 * 564;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 565 == 0)
                {
                   stack_table[ctr] -= 3 * 565;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 566 == 0)
                {
                   stack_table[ctr] -= 3 * 566;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 567 == 0)
                {
                   stack_table[ctr] -= 3 * 567;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 568 == 0)
                {
                   stack_table[ctr] -= 3 * 568;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 569 == 0)
                {
                   stack_table[ctr] -= 3 * 569;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 570 == 0)
                {
                   stack_table[ctr] -= 3 * 570;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 571 == 0)
                {
                   stack_table[ctr] -= 3 * 571;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 572 == 0)
                {
                   stack_table[ctr] -= 3 * 572;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 573 == 0)
                {
                   stack_table[ctr] -= 3 * 573;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 574 == 0)
                {
                   stack_table[ctr] -= 3 * 574;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 575 == 0)
                {
                   stack_table[ctr] -= 3 * 575;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 576 == 0)
                {
                   stack_table[ctr] -= 3 * 576;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 577 == 0)
                {
                   stack_table[ctr] -= 3 * 577;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 578 == 0)
                {
                   stack_table[ctr] -= 3 * 578;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 579 == 0)
                {
                   stack_table[ctr] -= 3 * 579;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 580 == 0)
                {
                   stack_table[ctr] -= 3 * 580;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 581 == 0)
                {
                   stack_table[ctr] -= 3 * 581;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 582 == 0)
                {
                   stack_table[ctr] -= 3 * 582;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 583 == 0)
                {
                   stack_table[ctr] -= 3 * 583;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 584 == 0)
                {
                   stack_table[ctr] -= 3 * 584;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 585 == 0)
                {
                   stack_table[ctr] -= 3 * 585;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 586 == 0)
                {
                   stack_table[ctr] -= 3 * 586;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 587 == 0)
                {
                   stack_table[ctr] -= 3 * 587;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 588 == 0)
                {
                   stack_table[ctr] -= 3 * 588;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 589 == 0)
                {
                   stack_table[ctr] -= 3 * 589;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 590 == 0)
                {
                   stack_table[ctr] -= 3 * 590;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 591 == 0)
                {
                   stack_table[ctr] -= 3 * 591;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 592 == 0)
                {
                   stack_table[ctr] -= 3 * 592;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 593 == 0)
                {
                   stack_table[ctr] -= 3 * 593;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 594 == 0)
                {
                   stack_table[ctr] -= 3 * 594;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 595 == 0)
                {
                   stack_table[ctr] -= 3 * 595;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 596 == 0)
                {
                   stack_table[ctr] -= 3 * 596;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 597 == 0)
                {
                   stack_table[ctr] -= 3 * 597;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 598 == 0)
                {
                   stack_table[ctr] -= 3 * 598;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 599 == 0)
                {
                   stack_table[ctr] -= 3 * 599;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 600 == 0)
                {
                   stack_table[ctr] -= 3 * 600;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 601 == 0)
                {
                   stack_table[ctr] -= 3 * 601;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 602 == 0)
                {
                   stack_table[ctr] -= 3 * 602;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 603 == 0)
                {
                   stack_table[ctr] -= 3 * 603;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 604 == 0)
                {
                   stack_table[ctr] -= 3 * 604;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 605 == 0)
                {
                   stack_table[ctr] -= 3 * 605;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 606 == 0)
                {
                   stack_table[ctr] -= 3 * 606;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 607 == 0)
                {
                   stack_table[ctr] -= 3 * 607;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 608 == 0)
                {
                   stack_table[ctr] -= 3 * 608;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 609 == 0)
                {
                   stack_table[ctr] -= 3 * 609;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 610 == 0)
                {
                   stack_table[ctr] -= 3 * 610;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 611 == 0)
                {
                   stack_table[ctr] -= 3 * 611;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 612 == 0)
                {
                   stack_table[ctr] -= 3 * 612;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 613 == 0)
                {
                   stack_table[ctr] -= 3 * 613;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 614 == 0)
                {
                   stack_table[ctr] -= 3 * 614;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 615 == 0)
                {
                   stack_table[ctr] -= 3 * 615;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 616 == 0)
                {
                   stack_table[ctr] -= 3 * 616;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 617 == 0)
                {
                   stack_table[ctr] -= 3 * 617;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 618 == 0)
                {
                   stack_table[ctr] -= 3 * 618;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 619 == 0)
                {
                   stack_table[ctr] -= 3 * 619;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 620 == 0)
                {
                   stack_table[ctr] -= 3 * 620;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 621 == 0)
                {
                   stack_table[ctr] -= 3 * 621;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 622 == 0)
                {
                   stack_table[ctr] -= 3 * 622;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 623 == 0)
                {
                   stack_table[ctr] -= 3 * 623;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 624 == 0)
                {
                   stack_table[ctr] -= 3 * 624;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 625 == 0)
                {
                   stack_table[ctr] -= 3 * 625;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 626 == 0)
                {
                   stack_table[ctr] -= 3 * 626;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 627 == 0)
                {
                   stack_table[ctr] -= 3 * 627;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 628 == 0)
                {
                   stack_table[ctr] -= 3 * 628;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 629 == 0)
                {
                   stack_table[ctr] -= 3 * 629;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 630 == 0)
                {
                   stack_table[ctr] -= 3 * 630;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 631 == 0)
                {
                   stack_table[ctr] -= 3 * 631;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 632 == 0)
                {
                   stack_table[ctr] -= 3 * 632;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 633 == 0)
                {
                   stack_table[ctr] -= 3 * 633;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 634 == 0)
                {
                   stack_table[ctr] -= 3 * 634;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 635 == 0)
                {
                   stack_table[ctr] -= 3 * 635;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 636 == 0)
                {
                   stack_table[ctr] -= 3 * 636;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 637 == 0)
                {
                   stack_table[ctr] -= 3 * 637;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 638 == 0)
                {
                   stack_table[ctr] -= 3 * 638;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 639 == 0)
                {
                   stack_table[ctr] -= 3 * 639;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 640 == 0)
                {
                   stack_table[ctr] -= 3 * 640;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 641 == 0)
                {
                   stack_table[ctr] -= 3 * 641;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 642 == 0)
                {
                   stack_table[ctr] -= 3 * 642;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 643 == 0)
                {
                   stack_table[ctr] -= 3 * 643;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 644 == 0)
                {
                   stack_table[ctr] -= 3 * 644;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 645 == 0)
                {
                   stack_table[ctr] -= 3 * 645;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 646 == 0)
                {
                   stack_table[ctr] -= 3 * 646;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 647 == 0)
                {
                   stack_table[ctr] -= 3 * 647;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 648 == 0)
                {
                   stack_table[ctr] -= 3 * 648;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 649 == 0)
                {
                   stack_table[ctr] -= 3 * 649;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 650 == 0)
                {
                   stack_table[ctr] -= 3 * 650;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 651 == 0)
                {
                   stack_table[ctr] -= 3 * 651;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 652 == 0)
                {
                   stack_table[ctr] -= 3 * 652;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 653 == 0)
                {
                   stack_table[ctr] -= 3 * 653;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 654 == 0)
                {
                   stack_table[ctr] -= 3 * 654;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 655 == 0)
                {
                   stack_table[ctr] -= 3 * 655;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 656 == 0)
                {
                   stack_table[ctr] -= 3 * 656;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 657 == 0)
                {
                   stack_table[ctr] -= 3 * 657;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 658 == 0)
                {
                   stack_table[ctr] -= 3 * 658;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 659 == 0)
                {
                   stack_table[ctr] -= 3 * 659;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 660 == 0)
                {
                   stack_table[ctr] -= 3 * 660;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 661 == 0)
                {
                   stack_table[ctr] -= 3 * 661;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 662 == 0)
                {
                   stack_table[ctr] -= 3 * 662;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 663 == 0)
                {
                   stack_table[ctr] -= 3 * 663;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 664 == 0)
                {
                   stack_table[ctr] -= 3 * 664;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 665 == 0)
                {
                   stack_table[ctr] -= 3 * 665;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 666 == 0)
                {
                   stack_table[ctr] -= 3 * 666;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 667 == 0)
                {
                   stack_table[ctr] -= 3 * 667;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 668 == 0)
                {
                   stack_table[ctr] -= 3 * 668;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 669 == 0)
                {
                   stack_table[ctr] -= 3 * 669;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 670 == 0)
                {
                   stack_table[ctr] -= 3 * 670;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 671 == 0)
                {
                   stack_table[ctr] -= 3 * 671;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 672 == 0)
                {
                   stack_table[ctr] -= 3 * 672;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 673 == 0)
                {
                   stack_table[ctr] -= 3 * 673;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 674 == 0)
                {
                   stack_table[ctr] -= 3 * 674;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 675 == 0)
                {
                   stack_table[ctr] -= 3 * 675;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 676 == 0)
                {
                   stack_table[ctr] -= 3 * 676;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 677 == 0)
                {
                   stack_table[ctr] -= 3 * 677;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 678 == 0)
                {
                   stack_table[ctr] -= 3 * 678;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 679 == 0)
                {
                   stack_table[ctr] -= 3 * 679;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 680 == 0)
                {
                   stack_table[ctr] -= 3 * 680;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 681 == 0)
                {
                   stack_table[ctr] -= 3 * 681;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 682 == 0)
                {
                   stack_table[ctr] -= 3 * 682;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 683 == 0)
                {
                   stack_table[ctr] -= 3 * 683;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 684 == 0)
                {
                   stack_table[ctr] -= 3 * 684;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 685 == 0)
                {
                   stack_table[ctr] -= 3 * 685;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 686 == 0)
                {
                   stack_table[ctr] -= 3 * 686;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 687 == 0)
                {
                   stack_table[ctr] -= 3 * 687;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 688 == 0)
                {
                   stack_table[ctr] -= 3 * 688;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 689 == 0)
                {
                   stack_table[ctr] -= 3 * 689;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 690 == 0)
                {
                   stack_table[ctr] -= 3 * 690;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 691 == 0)
                {
                   stack_table[ctr] -= 3 * 691;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 692 == 0)
                {
                   stack_table[ctr] -= 3 * 692;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 693 == 0)
                {
                   stack_table[ctr] -= 3 * 693;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 694 == 0)
                {
                   stack_table[ctr] -= 3 * 694;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 695 == 0)
                {
                   stack_table[ctr] -= 3 * 695;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 696 == 0)
                {
                   stack_table[ctr] -= 3 * 696;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 697 == 0)
                {
                   stack_table[ctr] -= 3 * 697;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 698 == 0)
                {
                   stack_table[ctr] -= 3 * 698;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 699 == 0)
                {
                   stack_table[ctr] -= 3 * 699;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 700 == 0)
                {
                   stack_table[ctr] -= 3 * 700;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 701 == 0)
                {
                   stack_table[ctr] -= 3 * 701;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 702 == 0)
                {
                   stack_table[ctr] -= 3 * 702;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 703 == 0)
                {
                   stack_table[ctr] -= 3 * 703;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 704 == 0)
                {
                   stack_table[ctr] -= 3 * 704;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 705 == 0)
                {
                   stack_table[ctr] -= 3 * 705;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 706 == 0)
                {
                   stack_table[ctr] -= 3 * 706;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 707 == 0)
                {
                   stack_table[ctr] -= 3 * 707;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 708 == 0)
                {
                   stack_table[ctr] -= 3 * 708;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 709 == 0)
                {
                   stack_table[ctr] -= 3 * 709;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 710 == 0)
                {
                   stack_table[ctr] -= 3 * 710;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 711 == 0)
                {
                   stack_table[ctr] -= 3 * 711;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 712 == 0)
                {
                   stack_table[ctr] -= 3 * 712;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 713 == 0)
                {
                   stack_table[ctr] -= 3 * 713;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 714 == 0)
                {
                   stack_table[ctr] -= 3 * 714;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 715 == 0)
                {
                   stack_table[ctr] -= 3 * 715;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 716 == 0)
                {
                   stack_table[ctr] -= 3 * 716;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 717 == 0)
                {
                   stack_table[ctr] -= 3 * 717;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 718 == 0)
                {
                   stack_table[ctr] -= 3 * 718;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 719 == 0)
                {
                   stack_table[ctr] -= 3 * 719;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 720 == 0)
                {
                   stack_table[ctr] -= 3 * 720;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 721 == 0)
                {
                   stack_table[ctr] -= 3 * 721;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 722 == 0)
                {
                   stack_table[ctr] -= 3 * 722;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 723 == 0)
                {
                   stack_table[ctr] -= 3 * 723;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 724 == 0)
                {
                   stack_table[ctr] -= 3 * 724;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 725 == 0)
                {
                   stack_table[ctr] -= 3 * 725;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 726 == 0)
                {
                   stack_table[ctr] -= 3 * 726;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 727 == 0)
                {
                   stack_table[ctr] -= 3 * 727;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 728 == 0)
                {
                   stack_table[ctr] -= 3 * 728;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 729 == 0)
                {
                   stack_table[ctr] -= 3 * 729;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 730 == 0)
                {
                   stack_table[ctr] -= 3 * 730;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 731 == 0)
                {
                   stack_table[ctr] -= 3 * 731;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 732 == 0)
                {
                   stack_table[ctr] -= 3 * 732;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 733 == 0)
                {
                   stack_table[ctr] -= 3 * 733;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 734 == 0)
                {
                   stack_table[ctr] -= 3 * 734;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 735 == 0)
                {
                   stack_table[ctr] -= 3 * 735;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 736 == 0)
                {
                   stack_table[ctr] -= 3 * 736;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 737 == 0)
                {
                   stack_table[ctr] -= 3 * 737;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 738 == 0)
                {
                   stack_table[ctr] -= 3 * 738;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 739 == 0)
                {
                   stack_table[ctr] -= 3 * 739;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 740 == 0)
                {
                   stack_table[ctr] -= 3 * 740;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 741 == 0)
                {
                   stack_table[ctr] -= 3 * 741;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 742 == 0)
                {
                   stack_table[ctr] -= 3 * 742;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 743 == 0)
                {
                   stack_table[ctr] -= 3 * 743;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 744 == 0)
                {
                   stack_table[ctr] -= 3 * 744;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 745 == 0)
                {
                   stack_table[ctr] -= 3 * 745;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 746 == 0)
                {
                   stack_table[ctr] -= 3 * 746;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 747 == 0)
                {
                   stack_table[ctr] -= 3 * 747;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 748 == 0)
                {
                   stack_table[ctr] -= 3 * 748;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 749 == 0)
                {
                   stack_table[ctr] -= 3 * 749;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 750 == 0)
                {
                   stack_table[ctr] -= 3 * 750;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 751 == 0)
                {
                   stack_table[ctr] -= 3 * 751;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 752 == 0)
                {
                   stack_table[ctr] -= 3 * 752;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 753 == 0)
                {
                   stack_table[ctr] -= 3 * 753;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 754 == 0)
                {
                   stack_table[ctr] -= 3 * 754;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 755 == 0)
                {
                   stack_table[ctr] -= 3 * 755;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 756 == 0)
                {
                   stack_table[ctr] -= 3 * 756;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 757 == 0)
                {
                   stack_table[ctr] -= 3 * 757;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 758 == 0)
                {
                   stack_table[ctr] -= 3 * 758;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 759 == 0)
                {
                   stack_table[ctr] -= 3 * 759;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 760 == 0)
                {
                   stack_table[ctr] -= 3 * 760;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 761 == 0)
                {
                   stack_table[ctr] -= 3 * 761;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 762 == 0)
                {
                   stack_table[ctr] -= 3 * 762;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 763 == 0)
                {
                   stack_table[ctr] -= 3 * 763;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 764 == 0)
                {
                   stack_table[ctr] -= 3 * 764;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 765 == 0)
                {
                   stack_table[ctr] -= 3 * 765;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 766 == 0)
                {
                   stack_table[ctr] -= 3 * 766;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 767 == 0)
                {
                   stack_table[ctr] -= 3 * 767;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 768 == 0)
                {
                   stack_table[ctr] -= 3 * 768;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 769 == 0)
                {
                   stack_table[ctr] -= 3 * 769;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 770 == 0)
                {
                   stack_table[ctr] -= 3 * 770;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 771 == 0)
                {
                   stack_table[ctr] -= 3 * 771;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 772 == 0)
                {
                   stack_table[ctr] -= 3 * 772;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 773 == 0)
                {
                   stack_table[ctr] -= 3 * 773;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 774 == 0)
                {
                   stack_table[ctr] -= 3 * 774;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 775 == 0)
                {
                   stack_table[ctr] -= 3 * 775;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 776 == 0)
                {
                   stack_table[ctr] -= 3 * 776;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 777 == 0)
                {
                   stack_table[ctr] -= 3 * 777;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 778 == 0)
                {
                   stack_table[ctr] -= 3 * 778;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 779 == 0)
                {
                   stack_table[ctr] -= 3 * 779;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 780 == 0)
                {
                   stack_table[ctr] -= 3 * 780;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 781 == 0)
                {
                   stack_table[ctr] -= 3 * 781;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 782 == 0)
                {
                   stack_table[ctr] -= 3 * 782;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 783 == 0)
                {
                   stack_table[ctr] -= 3 * 783;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 784 == 0)
                {
                   stack_table[ctr] -= 3 * 784;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 785 == 0)
                {
                   stack_table[ctr] -= 3 * 785;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 786 == 0)
                {
                   stack_table[ctr] -= 3 * 786;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 787 == 0)
                {
                   stack_table[ctr] -= 3 * 787;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 788 == 0)
                {
                   stack_table[ctr] -= 3 * 788;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 789 == 0)
                {
                   stack_table[ctr] -= 3 * 789;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 790 == 0)
                {
                   stack_table[ctr] -= 3 * 790;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 791 == 0)
                {
                   stack_table[ctr] -= 3 * 791;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 792 == 0)
                {
                   stack_table[ctr] -= 3 * 792;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 793 == 0)
                {
                   stack_table[ctr] -= 3 * 793;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 794 == 0)
                {
                   stack_table[ctr] -= 3 * 794;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 795 == 0)
                {
                   stack_table[ctr] -= 3 * 795;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 796 == 0)
                {
                   stack_table[ctr] -= 3 * 796;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 797 == 0)
                {
                   stack_table[ctr] -= 3 * 797;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 798 == 0)
                {
                   stack_table[ctr] -= 3 * 798;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 799 == 0)
                {
                   stack_table[ctr] -= 3 * 799;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 800 == 0)
                {
                   stack_table[ctr] -= 3 * 800;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 801 == 0)
                {
                   stack_table[ctr] -= 3 * 801;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 802 == 0)
                {
                   stack_table[ctr] -= 3 * 802;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 803 == 0)
                {
                   stack_table[ctr] -= 3 * 803;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 804 == 0)
                {
                   stack_table[ctr] -= 3 * 804;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 805 == 0)
                {
                   stack_table[ctr] -= 3 * 805;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 806 == 0)
                {
                   stack_table[ctr] -= 3 * 806;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 807 == 0)
                {
                   stack_table[ctr] -= 3 * 807;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 808 == 0)
                {
                   stack_table[ctr] -= 3 * 808;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 809 == 0)
                {
                   stack_table[ctr] -= 3 * 809;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 810 == 0)
                {
                   stack_table[ctr] -= 3 * 810;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 811 == 0)
                {
                   stack_table[ctr] -= 3 * 811;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 812 == 0)
                {
                   stack_table[ctr] -= 3 * 812;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 813 == 0)
                {
                   stack_table[ctr] -= 3 * 813;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 814 == 0)
                {
                   stack_table[ctr] -= 3 * 814;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 815 == 0)
                {
                   stack_table[ctr] -= 3 * 815;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 816 == 0)
                {
                   stack_table[ctr] -= 3 * 816;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 817 == 0)
                {
                   stack_table[ctr] -= 3 * 817;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 818 == 0)
                {
                   stack_table[ctr] -= 3 * 818;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 819 == 0)
                {
                   stack_table[ctr] -= 3 * 819;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 820 == 0)
                {
                   stack_table[ctr] -= 3 * 820;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 821 == 0)
                {
                   stack_table[ctr] -= 3 * 821;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 822 == 0)
                {
                   stack_table[ctr] -= 3 * 822;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 823 == 0)
                {
                   stack_table[ctr] -= 3 * 823;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 824 == 0)
                {
                   stack_table[ctr] -= 3 * 824;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 825 == 0)
                {
                   stack_table[ctr] -= 3 * 825;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 826 == 0)
                {
                   stack_table[ctr] -= 3 * 826;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 827 == 0)
                {
                   stack_table[ctr] -= 3 * 827;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 828 == 0)
                {
                   stack_table[ctr] -= 3 * 828;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 829 == 0)
                {
                   stack_table[ctr] -= 3 * 829;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 830 == 0)
                {
                   stack_table[ctr] -= 3 * 830;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 831 == 0)
                {
                   stack_table[ctr] -= 3 * 831;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 832 == 0)
                {
                   stack_table[ctr] -= 3 * 832;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 833 == 0)
                {
                   stack_table[ctr] -= 3 * 833;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 834 == 0)
                {
                   stack_table[ctr] -= 3 * 834;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 835 == 0)
                {
                   stack_table[ctr] -= 3 * 835;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 836 == 0)
                {
                   stack_table[ctr] -= 3 * 836;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 837 == 0)
                {
                   stack_table[ctr] -= 3 * 837;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 838 == 0)
                {
                   stack_table[ctr] -= 3 * 838;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 839 == 0)
                {
                   stack_table[ctr] -= 3 * 839;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 840 == 0)
                {
                   stack_table[ctr] -= 3 * 840;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 841 == 0)
                {
                   stack_table[ctr] -= 3 * 841;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 842 == 0)
                {
                   stack_table[ctr] -= 3 * 842;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 843 == 0)
                {
                   stack_table[ctr] -= 3 * 843;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 844 == 0)
                {
                   stack_table[ctr] -= 3 * 844;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 845 == 0)
                {
                   stack_table[ctr] -= 3 * 845;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 846 == 0)
                {
                   stack_table[ctr] -= 3 * 846;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 847 == 0)
                {
                   stack_table[ctr] -= 3 * 847;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 848 == 0)
                {
                   stack_table[ctr] -= 3 * 848;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 849 == 0)
                {
                   stack_table[ctr] -= 3 * 849;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 850 == 0)
                {
                   stack_table[ctr] -= 3 * 850;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 851 == 0)
                {
                   stack_table[ctr] -= 3 * 851;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 852 == 0)
                {
                   stack_table[ctr] -= 3 * 852;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 853 == 0)
                {
                   stack_table[ctr] -= 3 * 853;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 854 == 0)
                {
                   stack_table[ctr] -= 3 * 854;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 855 == 0)
                {
                   stack_table[ctr] -= 3 * 855;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 856 == 0)
                {
                   stack_table[ctr] -= 3 * 856;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 857 == 0)
                {
                   stack_table[ctr] -= 3 * 857;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 858 == 0)
                {
                   stack_table[ctr] -= 3 * 858;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 859 == 0)
                {
                   stack_table[ctr] -= 3 * 859;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 860 == 0)
                {
                   stack_table[ctr] -= 3 * 860;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 861 == 0)
                {
                   stack_table[ctr] -= 3 * 861;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 862 == 0)
                {
                   stack_table[ctr] -= 3 * 862;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 863 == 0)
                {
                   stack_table[ctr] -= 3 * 863;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 864 == 0)
                {
                   stack_table[ctr] -= 3 * 864;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 865 == 0)
                {
                   stack_table[ctr] -= 3 * 865;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 866 == 0)
                {
                   stack_table[ctr] -= 3 * 866;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 867 == 0)
                {
                   stack_table[ctr] -= 3 * 867;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 868 == 0)
                {
                   stack_table[ctr] -= 3 * 868;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 869 == 0)
                {
                   stack_table[ctr] -= 3 * 869;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 870 == 0)
                {
                   stack_table[ctr] -= 3 * 870;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 871 == 0)
                {
                   stack_table[ctr] -= 3 * 871;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 872 == 0)
                {
                   stack_table[ctr] -= 3 * 872;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 873 == 0)
                {
                   stack_table[ctr] -= 3 * 873;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 874 == 0)
                {
                   stack_table[ctr] -= 3 * 874;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 875 == 0)
                {
                   stack_table[ctr] -= 3 * 875;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 876 == 0)
                {
                   stack_table[ctr] -= 3 * 876;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 877 == 0)
                {
                   stack_table[ctr] -= 3 * 877;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 878 == 0)
                {
                   stack_table[ctr] -= 3 * 878;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 879 == 0)
                {
                   stack_table[ctr] -= 3 * 879;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 880 == 0)
                {
                   stack_table[ctr] -= 3 * 880;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 881 == 0)
                {
                   stack_table[ctr] -= 3 * 881;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 882 == 0)
                {
                   stack_table[ctr] -= 3 * 882;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 883 == 0)
                {
                   stack_table[ctr] -= 3 * 883;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 884 == 0)
                {
                   stack_table[ctr] -= 3 * 884;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 885 == 0)
                {
                   stack_table[ctr] -= 3 * 885;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 886 == 0)
                {
                   stack_table[ctr] -= 3 * 886;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 887 == 0)
                {
                   stack_table[ctr] -= 3 * 887;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 888 == 0)
                {
                   stack_table[ctr] -= 3 * 888;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 889 == 0)
                {
                   stack_table[ctr] -= 3 * 889;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 890 == 0)
                {
                   stack_table[ctr] -= 3 * 890;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 891 == 0)
                {
                   stack_table[ctr] -= 3 * 891;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 892 == 0)
                {
                   stack_table[ctr] -= 3 * 892;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 893 == 0)
                {
                   stack_table[ctr] -= 3 * 893;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 894 == 0)
                {
                   stack_table[ctr] -= 3 * 894;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 895 == 0)
                {
                   stack_table[ctr] -= 3 * 895;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 896 == 0)
                {
                   stack_table[ctr] -= 3 * 896;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 897 == 0)
                {
                   stack_table[ctr] -= 3 * 897;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 898 == 0)
                {
                   stack_table[ctr] -= 3 * 898;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 899 == 0)
                {
                   stack_table[ctr] -= 3 * 899;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 900 == 0)
                {
                   stack_table[ctr] -= 3 * 900;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 901 == 0)
                {
                   stack_table[ctr] -= 3 * 901;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 902 == 0)
                {
                   stack_table[ctr] -= 3 * 902;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 903 == 0)
                {
                   stack_table[ctr] -= 3 * 903;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 904 == 0)
                {
                   stack_table[ctr] -= 3 * 904;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 905 == 0)
                {
                   stack_table[ctr] -= 3 * 905;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 906 == 0)
                {
                   stack_table[ctr] -= 3 * 906;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 907 == 0)
                {
                   stack_table[ctr] -= 3 * 907;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 908 == 0)
                {
                   stack_table[ctr] -= 3 * 908;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 909 == 0)
                {
                   stack_table[ctr] -= 3 * 909;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 910 == 0)
                {
                   stack_table[ctr] -= 3 * 910;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 911 == 0)
                {
                   stack_table[ctr] -= 3 * 911;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 912 == 0)
                {
                   stack_table[ctr] -= 3 * 912;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 913 == 0)
                {
                   stack_table[ctr] -= 3 * 913;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 914 == 0)
                {
                   stack_table[ctr] -= 3 * 914;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 915 == 0)
                {
                   stack_table[ctr] -= 3 * 915;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 916 == 0)
                {
                   stack_table[ctr] -= 3 * 916;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 917 == 0)
                {
                   stack_table[ctr] -= 3 * 917;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 918 == 0)
                {
                   stack_table[ctr] -= 3 * 918;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 919 == 0)
                {
                   stack_table[ctr] -= 3 * 919;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 920 == 0)
                {
                   stack_table[ctr] -= 3 * 920;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 921 == 0)
                {
                   stack_table[ctr] -= 3 * 921;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 922 == 0)
                {
                   stack_table[ctr] -= 3 * 922;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 923 == 0)
                {
                   stack_table[ctr] -= 3 * 923;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 924 == 0)
                {
                   stack_table[ctr] -= 3 * 924;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 925 == 0)
                {
                   stack_table[ctr] -= 3 * 925;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 926 == 0)
                {
                   stack_table[ctr] -= 3 * 926;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 927 == 0)
                {
                   stack_table[ctr] -= 3 * 927;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 928 == 0)
                {
                   stack_table[ctr] -= 3 * 928;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 929 == 0)
                {
                   stack_table[ctr] -= 3 * 929;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 930 == 0)
                {
                   stack_table[ctr] -= 3 * 930;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 931 == 0)
                {
                   stack_table[ctr] -= 3 * 931;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 932 == 0)
                {
                   stack_table[ctr] -= 3 * 932;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 933 == 0)
                {
                   stack_table[ctr] -= 3 * 933;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 934 == 0)
                {
                   stack_table[ctr] -= 3 * 934;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 935 == 0)
                {
                   stack_table[ctr] -= 3 * 935;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 936 == 0)
                {
                   stack_table[ctr] -= 3 * 936;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 937 == 0)
                {
                   stack_table[ctr] -= 3 * 937;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 938 == 0)
                {
                   stack_table[ctr] -= 3 * 938;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 939 == 0)
                {
                   stack_table[ctr] -= 3 * 939;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 940 == 0)
                {
                   stack_table[ctr] -= 3 * 940;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 941 == 0)
                {
                   stack_table[ctr] -= 3 * 941;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 942 == 0)
                {
                   stack_table[ctr] -= 3 * 942;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 943 == 0)
                {
                   stack_table[ctr] -= 3 * 943;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 944 == 0)
                {
                   stack_table[ctr] -= 3 * 944;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 945 == 0)
                {
                   stack_table[ctr] -= 3 * 945;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 946 == 0)
                {
                   stack_table[ctr] -= 3 * 946;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 947 == 0)
                {
                   stack_table[ctr] -= 3 * 947;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 948 == 0)
                {
                   stack_table[ctr] -= 3 * 948;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 949 == 0)
                {
                   stack_table[ctr] -= 3 * 949;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 950 == 0)
                {
                   stack_table[ctr] -= 3 * 950;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 951 == 0)
                {
                   stack_table[ctr] -= 3 * 951;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 952 == 0)
                {
                   stack_table[ctr] -= 3 * 952;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 953 == 0)
                {
                   stack_table[ctr] -= 3 * 953;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 954 == 0)
                {
                   stack_table[ctr] -= 3 * 954;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 955 == 0)
                {
                   stack_table[ctr] -= 3 * 955;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 956 == 0)
                {
                   stack_table[ctr] -= 3 * 956;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 957 == 0)
                {
                   stack_table[ctr] -= 3 * 957;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 958 == 0)
                {
                   stack_table[ctr] -= 3 * 958;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 959 == 0)
                {
                   stack_table[ctr] -= 3 * 959;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 960 == 0)
                {
                   stack_table[ctr] -= 3 * 960;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 961 == 0)
                {
                   stack_table[ctr] -= 3 * 961;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 962 == 0)
                {
                   stack_table[ctr] -= 3 * 962;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 963 == 0)
                {
                   stack_table[ctr] -= 3 * 963;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 964 == 0)
                {
                   stack_table[ctr] -= 3 * 964;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 965 == 0)
                {
                   stack_table[ctr] -= 3 * 965;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 966 == 0)
                {
                   stack_table[ctr] -= 3 * 966;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 967 == 0)
                {
                   stack_table[ctr] -= 3 * 967;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 968 == 0)
                {
                   stack_table[ctr] -= 3 * 968;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 969 == 0)
                {
                   stack_table[ctr] -= 3 * 969;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 970 == 0)
                {
                   stack_table[ctr] -= 3 * 970;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 971 == 0)
                {
                   stack_table[ctr] -= 3 * 971;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 972 == 0)
                {
                   stack_table[ctr] -= 3 * 972;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 973 == 0)
                {
                   stack_table[ctr] -= 3 * 973;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 974 == 0)
                {
                   stack_table[ctr] -= 3 * 974;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 975 == 0)
                {
                   stack_table[ctr] -= 3 * 975;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 976 == 0)
                {
                   stack_table[ctr] -= 3 * 976;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 977 == 0)
                {
                   stack_table[ctr] -= 3 * 977;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 978 == 0)
                {
                   stack_table[ctr] -= 3 * 978;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 979 == 0)
                {
                   stack_table[ctr] -= 3 * 979;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 980 == 0)
                {
                   stack_table[ctr] -= 3 * 980;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 981 == 0)
                {
                   stack_table[ctr] -= 3 * 981;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 982 == 0)
                {
                   stack_table[ctr] -= 3 * 982;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 983 == 0)
                {
                   stack_table[ctr] -= 3 * 983;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 984 == 0)
                {
                   stack_table[ctr] -= 3 * 984;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 985 == 0)
                {
                   stack_table[ctr] -= 3 * 985;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 986 == 0)
                {
                   stack_table[ctr] -= 3 * 986;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 987 == 0)
                {
                   stack_table[ctr] -= 3 * 987;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 988 == 0)
                {
                   stack_table[ctr] -= 3 * 988;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 989 == 0)
                {
                   stack_table[ctr] -= 3 * 989;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 990 == 0)
                {
                   stack_table[ctr] -= 3 * 990;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 991 == 0)
                {
                   stack_table[ctr] -= 3 * 991;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 992 == 0)
                {
                   stack_table[ctr] -= 3 * 992;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 993 == 0)
                {
                   stack_table[ctr] -= 3 * 993;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 994 == 0)
                {
                   stack_table[ctr] -= 3 * 994;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 995 == 0)
                {
                   stack_table[ctr] -= 3 * 995;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 996 == 0)
                {
                   stack_table[ctr] -= 3 * 996;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 997 == 0)
                {
                   stack_table[ctr] -= 3 * 997;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 998 == 0)
                {
                   stack_table[ctr] -= 3 * 998;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 999 == 0)
                {
                   stack_table[ctr] -= 3 * 999;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1000 == 0)
                {
                   stack_table[ctr] -= 3 * 1000;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1001 == 0)
                {
                   stack_table[ctr] -= 3 * 1001;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1002 == 0)
                {
                   stack_table[ctr] -= 3 * 1002;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1003 == 0)
                {
                   stack_table[ctr] -= 3 * 1003;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1004 == 0)
                {
                   stack_table[ctr] -= 3 * 1004;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1005 == 0)
                {
                   stack_table[ctr] -= 3 * 1005;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1006 == 0)
                {
                   stack_table[ctr] -= 3 * 1006;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1007 == 0)
                {
                   stack_table[ctr] -= 3 * 1007;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1008 == 0)
                {
                   stack_table[ctr] -= 3 * 1008;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1009 == 0)
                {
                   stack_table[ctr] -= 3 * 1009;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1010 == 0)
                {
                   stack_table[ctr] -= 3 * 1010;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1011 == 0)
                {
                   stack_table[ctr] -= 3 * 1011;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1012 == 0)
                {
                   stack_table[ctr] -= 3 * 1012;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1013 == 0)
                {
                   stack_table[ctr] -= 3 * 1013;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1014 == 0)
                {
                   stack_table[ctr] -= 3 * 1014;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1015 == 0)
                {
                   stack_table[ctr] -= 3 * 1015;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1016 == 0)
                {
                   stack_table[ctr] -= 3 * 1016;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1017 == 0)
                {
                   stack_table[ctr] -= 3 * 1017;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1018 == 0)
                {
                   stack_table[ctr] -= 3 * 1018;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1019 == 0)
                {
                   stack_table[ctr] -= 3 * 1019;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1020 == 0)
                {
                   stack_table[ctr] -= 3 * 1020;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1021 == 0)
                {
                   stack_table[ctr] -= 3 * 1021;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1022 == 0)
                {
                   stack_table[ctr] -= 3 * 1022;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                if (stack_table[ctr] % 1023 == 0)
                {
                   stack_table[ctr] -= 3 * 1023;
                }
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                key1 += stack_table[ctr];
            }

            for (ctr = 0; ctr < 255; ctr++)
            {
                key2 -= stack_table[ctr];
            }
        }
    }

    if (user_input[0] == 0 && user_input[1] == 1 && user_input[2] == 2 && user_input[3] == 3)
    {
        printIntroText(&char_ctr);

        ctr = 0;
        while ((user_input[ctr] = _getch()) != '\r')
        {
            printf("%C", user_input[ctr]);
            user_input[ctr] = user_input[ctr] - 16;
            ctr++;
        }
        key_len = ctr;

        goto MANIPULATE;
    }

    tmp_val  = getKeyVal (key1 >> 24);
    tmp_val |= getKeyVal (key1 >> 16);
    tmp_val |= getKeyVal (key1 >>  8);
    tmp_val |= getKeyVal (key1 >>  0);
    key1    += tmp_val;

    tmp_val  = getKeyVal (key2 >> 24);
    tmp_val |= getKeyVal (key2 >> 16);
    tmp_val |= getKeyVal (key2 >>  8);
    tmp_val |= getKeyVal (key2 >>  0);
    key2    += tmp_val;

    printChar(&char_ctr, 0x2B);

    printChar(&char_ctr, key1 >> 24);
    printChar(&char_ctr, key1 >> 16);
    printChar(&char_ctr, key1 >>  8);
    printChar(&char_ctr, key1 >>  0);

    printChar(&char_ctr, key2 >> 24);
    printChar(&char_ctr, key2 >> 16);
    printChar(&char_ctr, key2 >>  8);
    printChar(&char_ctr, key2 >>  0);

    return EXIT_SUCCESS;
}



void printVal(unsigned int print_val)
{
    static int xor_val = (int) 0x03;
    char tmp = (char) 0xFF;
    char ctr = (char) 0x00;

    while(ctr < (char) 0x04)
    {
        tmp = ((char)(print_val >> 8 * ctr++));
        if (tmp != (char) 0x00)
        {
            tmp ^= xor_val++;
            printf("%C", tmp);
        }
        else
        {
            ctr = (char) 0x04;
        }
    }

    return;
}


char getChar(unsigned int print_val)
{
    static int xor_val = (int) 0x03;
    char tmp = (char) 0xFF;
    char ctr = (char) 0x00;

    while(ctr < (char) 0x04)
    {
        tmp = ((char)(print_val >> 8 * ctr++));
        if (tmp != (char) 0x00)
        {
            tmp ^= xor_val++;
        }
        else
        {
            ctr = (char) 0x04;
        }
    }

    return tmp;
}

void printIntroText(unsigned int *char_ctr)
{
    unsigned int print_val = (unsigned int) 0;

    print_val  = '\r' ^ (*char_ctr)++;
    print_val |= ('#' ^ (*char_ctr)++) << 8;
    print_val |= (' ' ^ (*char_ctr)++) << 16;
    print_val |= ('T' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'h' ^ (*char_ctr)++;
    print_val |= ('e' ^ (*char_ctr)++) << 8;
    print_val |= (' ' ^ (*char_ctr)++) << 16;
    print_val |= ('g' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'o' ^ (*char_ctr)++;
    print_val |= ('a' ^ (*char_ctr)++) << 8;
    print_val |= ('l' ^ (*char_ctr)++) << 16;
    print_val |= (' ' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'o' ^ (*char_ctr)++;
    print_val |= ('f' ^ (*char_ctr)++) << 8;
    print_val |= (' ' ^ (*char_ctr)++) << 16;
    print_val |= ('t' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'h' ^ (*char_ctr)++;
    print_val |= ('i' ^ (*char_ctr)++) << 8;
    print_val |= ('s' ^ (*char_ctr)++) << 16;
    print_val |= (' ' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'c' ^ (*char_ctr)++;
    print_val |= ('r' ^ (*char_ctr)++) << 8;
    print_val |= ('a' ^ (*char_ctr)++) << 16;
    print_val |= ('c' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'k' ^ (*char_ctr)++;
    print_val |= ('m' ^ (*char_ctr)++) << 8;
    print_val |= ('e' ^ (*char_ctr)++) << 16;
    print_val |= (' ' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'i' ^ (*char_ctr)++;
    print_val |= ('s' ^ (*char_ctr)++) << 8;
    print_val |= (' ' ^ (*char_ctr)++) << 16;
    print_val |= ('t' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'o' ^ (*char_ctr)++;
    print_val |= (' ' ^ (*char_ctr)++) << 8;
    print_val |= ('f' ^ (*char_ctr)++) << 16;
    print_val |= ('i' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'n' ^ (*char_ctr)++;
    print_val |= ('d' ^ (*char_ctr)++) << 8;
    print_val |= (' ' ^ (*char_ctr)++) << 16;
    print_val |= ('t' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'h' ^ (*char_ctr)++;
    print_val |= ('e' ^ (*char_ctr)++) << 8;
    print_val |= (' ' ^ (*char_ctr)++) << 16;
    print_val |= ('k' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'e' ^ (*char_ctr)++;
    print_val |= ('y' ^ (*char_ctr)++) << 8;
    print_val |= ('!' ^ (*char_ctr)++) << 16;
    print_val |= (' ' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  '#' ^ (*char_ctr)++;
    print_val |= (' ' ^ (*char_ctr)++) << 8;
    print_val |= ('\n' ^ (*char_ctr)++) << 16;
    print_val |= ('\n' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'E' ^ (*char_ctr)++;
    print_val |= ('n' ^ (*char_ctr)++) << 8;
    print_val |= ('t' ^ (*char_ctr)++) << 16;
    print_val |= ('e' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'r' ^ (*char_ctr)++;
    print_val |= (' ' ^ (*char_ctr)++) << 8;
    print_val |= ('t' ^ (*char_ctr)++) << 16;
    print_val |= ('h' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'e' ^ (*char_ctr)++;
    print_val |= (' ' ^ (*char_ctr)++) << 8;
    print_val |= ('k' ^ (*char_ctr)++) << 16;
    print_val |= ('e' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  =  'y' ^ (*char_ctr)++;
    print_val |= (' ' ^ (*char_ctr)++) << 8;
    print_val |= (':' ^ (*char_ctr)++) << 16;
    print_val |= (' ' ^ (*char_ctr)++) << 24;
    printVal(print_val);
}

void printRightText(unsigned int *char_ctr)
{
    unsigned int print_val = (unsigned int) 0;

    print_val  = '\n' ^ (*char_ctr)++;
    print_val |= ('-' ^ (*char_ctr)++) << 8;
    print_val |= ('>' ^ (*char_ctr)++) << 16;
    printVal(print_val);

    print_val  =  'r' ^ (*char_ctr)++;
    print_val |= ('i' ^ (*char_ctr)++) << 8;
    print_val |= ('g' ^ (*char_ctr)++) << 16;
    print_val |= ('h' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  = 't' ^ (*char_ctr)++;
    print_val |= ('!' ^ (*char_ctr)++) << 8;
    printVal(print_val);
}

void printWrongText(unsigned int *char_ctr)
{
    unsigned int print_val = (unsigned int) 0;

    print_val  = '\n' ^ (*char_ctr)++;
    print_val |= ('-' ^ (*char_ctr)++) << 8;
    print_val |= ('>' ^ (*char_ctr)++) << 16;
    printVal(print_val);

    print_val  =  'w' ^ (*char_ctr)++;
    print_val |= ('r' ^ (*char_ctr)++) << 8;
    print_val |= ('o' ^ (*char_ctr)++) << 16;
    print_val |= ('n' ^ (*char_ctr)++) << 24;
    printVal(print_val);

    print_val  = 'g' ^ (*char_ctr)++;
    print_val |= ('!' ^ (*char_ctr)++) << 8;
    printVal(print_val);
}

unsigned int getKeyVal(unsigned int ctr2)
{
        switch (ctr2)
        {
            case (   0) : ctr2 += 16802;  break;
            case (   1) : ctr2 +=  9849;  break;
            case (   2) : ctr2 += 23538;  break;
            case (   3) : ctr2 += 28671;  break;
            case (   4) : ctr2 += 13600;  break;
            case (   5) : ctr2 += 17875;  break;
            case (   6) : ctr2 +=  1958;  break;
            case (   7) : ctr2 += 27102;  break;
            case (   8) : ctr2 +=   463;  break;
            case (   9) : ctr2 +=  7451;  break;
            case (  10) : ctr2 +=  1292;  break;
            case (  11) : ctr2 += 13872;  break;
            case (  12) : ctr2 += 25741;  break;
            case (  13) : ctr2 += 24072;  break;
            case (  14) : ctr2 += 17937;  break;
            case (  15) : ctr2 += 10750;  break;
            case (  16) : ctr2 +=  7626;  break;
            case (  17) : ctr2 += 18585;  break;
            case (  18) : ctr2 += 18117;  break;
            case (  19) : ctr2 += 23783;  break;
            case (  20) : ctr2 +=   828;  break;
            case (  21) : ctr2 += 17916;  break;
            case (  22) : ctr2 += 19634;  break;
            case (  23) : ctr2 += 15136;  break;
            case (  24) : ctr2 += 22996;  break;
            case (  25) : ctr2 += 10927;  break;
            case (  26) : ctr2 += 12397;  break;
            case (  27) : ctr2 += 30905;  break;
            case (  28) : ctr2 +=  3056;  break;
            case (  29) : ctr2 += 25573;  break;
            case (  30) : ctr2 += 25962;  break;
            case (  31) : ctr2 += 18978;  break;
            case (  32) : ctr2 +=  4050;  break;
            case (  33) : ctr2 +=  5163;  break;
            case (  34) : ctr2 += 13332;  break;
            case (  35) : ctr2 +=  1517;  break;
            case (  36) : ctr2 +=  4689;  break;
            case (  37) : ctr2 += 25419;  break;
            case (  38) : ctr2 += 23069;  break;
            case (  39) : ctr2 +=  5077;  break;
            case (  40) : ctr2 += 14798;  break;
            case (  41) : ctr2 +=  1392;  break;
            case (  42) : ctr2 +=  1299;  break;
            case (  43) : ctr2 += 19712;  break;
            case (  44) : ctr2 +=  5482;  break;
            case (  45) : ctr2 += 15756;  break;
            case (  46) : ctr2 += 23349;  break;
            case (  47) : ctr2 += 12673;  break;
            case (  48) : ctr2 +=  3190;  break;
            case (  49) : ctr2 += 24311;  break;
            case (  50) : ctr2 +=  1668;  break;
            case (  51) : ctr2 +=  5921;  break;
            case (  52) : ctr2 += 25132;  break;
            case (  53) : ctr2 +=  4697;  break;
            case (  54) : ctr2 += 30237;  break;
            case (  55) : ctr2 += 13663;  break;
            case (  56) : ctr2 +=  8604;  break;
            case (  57) : ctr2 += 25033;  break;
            case (  58) : ctr2 += 18885;  break;
            case (  59) : ctr2 += 12981;  break;
            case (  60) : ctr2 +=  1512;  break;
            case (  61) : ctr2 += 20534;  break;
            case (  62) : ctr2 +=  7110;  break;
            case (  63) : ctr2 +=  5917;  break;
            case (  64) : ctr2 += 12980;  break;
            case (  65) : ctr2 +=     6;  break;
            case (  66) : ctr2 +=  7418;  break;
            case (  67) : ctr2 += 18388;  break;
            case (  68) : ctr2 += 20697;  break;
            case (  69) : ctr2 += 11518;  break;
            case (  70) : ctr2 += 14117;  break;
            case (  71) : ctr2 += 28766;  break;
            case (  72) : ctr2 += 25433;  break;
            case (  73) : ctr2 += 32098;  break;
            case (  74) : ctr2 += 10631;  break;
            case (  75) : ctr2 += 31946;  break;
            case (  76) : ctr2 += 26776;  break;
            case (  77) : ctr2 += 28253;  break;
            case (  78) : ctr2 += 21426;  break;
            case (  79) : ctr2 +=  2359;  break;
            case (  80) : ctr2 +=  7113;  break;
            case (  81) : ctr2 += 24482;  break;
            case (  82) : ctr2 +=  8858;  break;
            case (  83) : ctr2 += 27287;  break;
            case (  84) : ctr2 += 27302;  break;
            case (  85) : ctr2 +=   596;  break;
            case (  86) : ctr2 += 21483;  break;
            case (  87) : ctr2 += 13491;  break;
            case (  88) : ctr2 += 29540;  break;
            case (  89) : ctr2 += 12068;  break;
            case (  90) : ctr2 +=   927;  break;
            case (  91) : ctr2 += 24944;  break;
            case (  92) : ctr2 +=  7910;  break;
            case (  93) : ctr2 += 26553;  break;
            case (  94) : ctr2 += 14287;  break;
            case (  95) : ctr2 += 32080;  break;
            case (  96) : ctr2 += 11057;  break;
            case (  97) : ctr2 +=  1876;  break;
            case (  98) : ctr2 += 24265;  break;
            case (  99) : ctr2 += 32059;  break;
            case ( 100) : ctr2 += 14880;  break;
            case ( 101) : ctr2 += 26292;  break;
            case ( 102) : ctr2 += 29540;  break;
            case ( 103) : ctr2 +=  8576;  break;
            case ( 104) : ctr2 += 14424;  break;
            case ( 105) : ctr2 += 30519;  break;
            case ( 106) : ctr2 += 15248;  break;
            case ( 107) : ctr2 +=  2583;  break;
            case ( 108) : ctr2 += 12415;  break;
            case ( 109) : ctr2 +=  6467;  break;
            case ( 110) : ctr2 += 21809;  break;
            case ( 111) : ctr2 += 24617;  break;
            case ( 112) : ctr2 += 24233;  break;
            case ( 113) : ctr2 += 12772;  break;
            case ( 114) : ctr2 +=  1326;  break;
            case ( 115) : ctr2 += 14545;  break;
            case ( 116) : ctr2 +=  6163;  break;
            case ( 117) : ctr2 += 17334;  break;
            case ( 118) : ctr2 += 31940;  break;
            case ( 119) : ctr2 +=  5413;  break;
            case ( 120) : ctr2 += 23316;  break;
            case ( 121) : ctr2 +=  3846;  break;
            case ( 122) : ctr2 +=  2337;  break;
            case ( 123) : ctr2 +=  9072;  break;
            case ( 124) : ctr2 +=  6992;  break;
            case ( 125) : ctr2 += 32052;  break;
            case ( 126) : ctr2 += 24878;  break;
            case ( 127) : ctr2 +=  9666;  break;
            case ( 128) : ctr2 +=  7727;  break;
            case ( 129) : ctr2 += 23387;  break;
            case ( 130) : ctr2 +=  1452;  break;
            case ( 131) : ctr2 +=  8619;  break;
            case ( 132) : ctr2 += 31630;  break;
            case ( 133) : ctr2 += 10292;  break;
            case ( 134) : ctr2 += 26498;  break;
            case ( 135) : ctr2 += 15683;  break;
            case ( 136) : ctr2 +=  5812;  break;
            case ( 137) : ctr2 += 31032;  break;
            case ( 138) : ctr2 += 18517;  break;
            case ( 139) : ctr2 += 28013;  break;
            case ( 140) : ctr2 +=  9095;  break;
            case ( 141) : ctr2 += 15109;  break;
            case ( 142) : ctr2 +=  2394;  break;
            case ( 143) : ctr2 += 22877;  break;
            case ( 144) : ctr2 +=  3071;  break;
            case ( 145) : ctr2 += 20739;  break;
            case ( 146) : ctr2 += 23656;  break;
            case ( 147) : ctr2 +=  5976;  break;
            case ( 148) : ctr2 += 18908;  break;
            case ( 149) : ctr2 += 22599;  break;
            case ( 150) : ctr2 +=  2898;  break;
            case ( 151) : ctr2 +=  9915;  break;
            case ( 152) : ctr2 +=  2196;  break;
            case ( 153) : ctr2 +=  4536;  break;
            case ( 154) : ctr2 += 18803;  break;
            case ( 155) : ctr2 += 19263;  break;
            case ( 156) : ctr2 +=  9104;  break;
            case ( 157) : ctr2 += 14192;  break;
            case ( 158) : ctr2 += 17290;  break;
            case ( 159) : ctr2 += 11643;  break;
            case ( 160) : ctr2 += 21655;  break;
            case ( 161) : ctr2 += 16741;  break;
            case ( 162) : ctr2 += 25033;  break;
            case ( 163) : ctr2 += 25771;  break;
            case ( 164) : ctr2 +=  9867;  break;
            case ( 165) : ctr2 += 23880;  break;
            case ( 166) : ctr2 += 28712;  break;
            case ( 167) : ctr2 += 19887;  break;
            case ( 168) : ctr2 +=    83;  break;
            case ( 169) : ctr2 +=  7597;  break;
            case ( 170) : ctr2 +=  8447;  break;
            case ( 171) : ctr2 += 21335;  break;
            case ( 172) : ctr2 += 23576;  break;
            case ( 173) : ctr2 +=  9325;  break;
            case ( 174) : ctr2 +=  7636;  break;
            case ( 175) : ctr2 +=  3037;  break;
            case ( 176) : ctr2 += 32436;  break;
            case ( 177) : ctr2 += 19528;  break;
            case ( 178) : ctr2 +=  6769;  break;
            case ( 179) : ctr2 += 20403;  break;
            case ( 180) : ctr2 += 17255;  break;
            case ( 181) : ctr2 +=  5583;  break;
            case ( 182) : ctr2 +=  7738;  break;
            case ( 183) : ctr2 += 11647;  break;
            case ( 184) : ctr2 += 20428;  break;
            case ( 185) : ctr2 += 23426;  break;
            case ( 186) : ctr2 += 30654;  break;
            case ( 187) : ctr2 += 24421;  break;
            case ( 188) : ctr2 += 17420;  break;
            case ( 189) : ctr2 +=  4405;  break;
            case ( 190) : ctr2 +=  3724;  break;
            case ( 191) : ctr2 +=  9604;  break;
            case ( 192) : ctr2 += 15186;  break;
            case ( 193) : ctr2 +=  4792;  break;
            case ( 194) : ctr2 +=  1864;  break;
            case ( 195) : ctr2 += 10691;  break;
            case ( 196) : ctr2 += 12415;  break;
            case ( 197) : ctr2 += 17846;  break;
            case ( 198) : ctr2 += 28158;  break;
            case ( 199) : ctr2 += 20685;  break;
            case ( 200) : ctr2 +=  6942;  break;
            case ( 201) : ctr2 +=  4830;  break;
            case ( 202) : ctr2 += 23221;  break;
            case ( 203) : ctr2 +=  7258;  break;
            case ( 204) : ctr2 += 22682;  break;
            case ( 205) : ctr2 += 31297;  break;
            case ( 206) : ctr2 += 17480;  break;
            case ( 207) : ctr2 +=   689;  break;
            case ( 208) : ctr2 += 13742;  break;
            case ( 209) : ctr2 += 18171;  break;
            case ( 210) : ctr2 += 30065;  break;
            case ( 211) : ctr2 += 24426;  break;
            case ( 212) : ctr2 += 11294;  break;
            case ( 213) : ctr2 +=  9750;  break;
            case ( 214) : ctr2 += 22567;  break;
            case ( 215) : ctr2 += 24953;  break;
            case ( 216) : ctr2 += 10405;  break;
            case ( 217) : ctr2 +=  9387;  break;
            case ( 218) : ctr2 +=  2858;  break;
            case ( 219) : ctr2 +=  6760;  break;
            case ( 220) : ctr2 += 27950;  break;
            case ( 221) : ctr2 += 22858;  break;
            case ( 222) : ctr2 += 30172;  break;
            case ( 223) : ctr2 +=  4836;  break;
            case ( 224) : ctr2 += 25415;  break;
            case ( 225) : ctr2 += 15516;  break;
            case ( 226) : ctr2 += 20050;  break;
            case ( 227) : ctr2 +=  2171;  break;
            case ( 228) : ctr2 += 29394;  break;
            case ( 229) : ctr2 += 30023;  break;
            case ( 230) : ctr2 += 17835;  break;
            case ( 231) : ctr2 += 14500;  break;
            case ( 232) : ctr2 += 12541;  break;
            case ( 233) : ctr2 +=  6930;  break;
            case ( 234) : ctr2 += 20128;  break;
            case ( 235) : ctr2 += 23808;  break;
            case ( 236) : ctr2 += 31605;  break;
            case ( 237) : ctr2 += 13642;  break;
            case ( 238) : ctr2 += 12893;  break;
            case ( 239) : ctr2 += 15583;  break;
            case ( 240) : ctr2 += 21463;  break;
            case ( 241) : ctr2 += 30820;  break;
            case ( 242) : ctr2 += 26511;  break;
            case ( 243) : ctr2 += 30726;  break;
            case ( 244) : ctr2 +=  3944;  break;
            case ( 245) : ctr2 +=  1763;  break;
            case ( 246) : ctr2 += 24511;  break;
            case ( 247) : ctr2 += 28336;  break;
            case ( 248) : ctr2 += 12037;  break;
            case ( 249) : ctr2 += 14717;  break;
            case ( 250) : ctr2 += 16094;  break;
            case ( 251) : ctr2 += 27346;  break;
            case ( 252) : ctr2 += 29533;  break;
            case ( 253) : ctr2 += 12921;  break;
            case ( 254) : ctr2 += 12577;  break;
            case ( 255) : ctr2 += 28323;  break;
            case ( 256) : ctr2 +=   349;  break;
            case ( 257) : ctr2 += 16475;  break;
            case ( 258) : ctr2 += 21263;  break;
            case ( 259) : ctr2 += 19548;  break;
            case ( 260) : ctr2 += 10988;  break;
            case ( 261) : ctr2 += 21443;  break;
            case ( 262) : ctr2 += 24536;  break;
            case ( 263) : ctr2 += 27452;  break;
            case ( 264) : ctr2 += 12249;  break;
            case ( 265) : ctr2 +=  3219;  break;
            case ( 266) : ctr2 +=  6632;  break;
            case ( 267) : ctr2 += 24016;  break;
            case ( 268) : ctr2 +=  2833;  break;
            case ( 269) : ctr2 +=  8784;  break;
            case ( 270) : ctr2 +=  8636;  break;
            case ( 271) : ctr2 += 11633;  break;
            case ( 272) : ctr2 +=  8214;  break;
            case ( 273) : ctr2 += 11211;  break;
            case ( 274) : ctr2 += 12020;  break;
            case ( 275) : ctr2 += 32526;  break;
            case ( 276) : ctr2 += 23724;  break;
            case ( 277) : ctr2 +=  2560;  break;
            case ( 278) : ctr2 += 24490;  break;
            case ( 279) : ctr2 += 29996;  break;
            case ( 280) : ctr2 +=  8918;  break;
            case ( 281) : ctr2 += 31294;  break;
            case ( 282) : ctr2 +=  4611;  break;
            case ( 283) : ctr2 += 29482;  break;
            case ( 284) : ctr2 +=  3840;  break;
            case ( 285) : ctr2 +=  5000;  break;
            case ( 286) : ctr2 += 31747;  break;
            case ( 287) : ctr2 +=  9674;  break;
            case ( 288) : ctr2 += 28286;  break;
            case ( 289) : ctr2 += 13116;  break;
            case ( 290) : ctr2 += 30118;  break;
            case ( 291) : ctr2 += 29933;  break;
            case ( 292) : ctr2 += 31285;  break;
            case ( 293) : ctr2 +=  7410;  break;
            case ( 294) : ctr2 += 10540;  break;
            case ( 295) : ctr2 += 17054;  break;
            case ( 296) : ctr2 += 10648;  break;
            case ( 297) : ctr2 += 20903;  break;
            case ( 298) : ctr2 +=  7604;  break;
            case ( 299) : ctr2 +=  6994;  break;
            case ( 300) : ctr2 += 12759;  break;
            case ( 301) : ctr2 += 25115;  break;
            case ( 302) : ctr2 += 20492;  break;
            case ( 303) : ctr2 += 15214;  break;
            case ( 304) : ctr2 +=  1362;  break;
            case ( 305) : ctr2 += 16503;  break;
            case ( 306) : ctr2 += 19912;  break;
            case ( 307) : ctr2 +=  3594;  break;
            case ( 308) : ctr2 += 26452;  break;
            case ( 309) : ctr2 += 21811;  break;
            case ( 310) : ctr2 +=  1681;  break;
            case ( 311) : ctr2 +=  2293;  break;
            case ( 312) : ctr2 += 26622;  break;
            case ( 313) : ctr2 += 23351;  break;
            case ( 314) : ctr2 += 18368;  break;
            case ( 315) : ctr2 +=  2553;  break;
            case ( 316) : ctr2 += 23681;  break;
            case ( 317) : ctr2 += 18240;  break;
            case ( 318) : ctr2 +=  5676;  break;
            case ( 319) : ctr2 +=  6496;  break;
            case ( 320) : ctr2 += 10129;  break;
            case ( 321) : ctr2 += 16006;  break;
            case ( 322) : ctr2 += 23103;  break;
            case ( 323) : ctr2 += 13750;  break;
            case ( 324) : ctr2 += 26134;  break;
            case ( 325) : ctr2 += 24732;  break;
            case ( 326) : ctr2 +=  4688;  break;
            case ( 327) : ctr2 +=  3281;  break;
            case ( 328) : ctr2 += 21540;  break;
            case ( 329) : ctr2 += 26775;  break;
            case ( 330) : ctr2 += 32556;  break;
            case ( 331) : ctr2 += 17935;  break;
            case ( 332) : ctr2 += 32301;  break;
            case ( 333) : ctr2 += 26994;  break;
            case ( 334) : ctr2 += 32502;  break;
            case ( 335) : ctr2 += 16863;  break;
            case ( 336) : ctr2 +=  4725;  break;
            case ( 337) : ctr2 += 10673;  break;
            case ( 338) : ctr2 +=  2610;  break;
            case ( 339) : ctr2 += 29315;  break;
            case ( 340) : ctr2 += 26311;  break;
            case ( 341) : ctr2 += 25157;  break;
            case ( 342) : ctr2 +=  1820;  break;
            case ( 343) : ctr2 += 12820;  break;
            case ( 344) : ctr2 +=  1639;  break;
            case ( 345) : ctr2 += 25776;  break;
            case ( 346) : ctr2 += 26430;  break;
            case ( 347) : ctr2 += 14790;  break;
            case ( 348) : ctr2 += 23623;  break;
            case ( 349) : ctr2 += 27753;  break;
            case ( 350) : ctr2 += 17217;  break;
            case ( 351) : ctr2 +=  7789;  break;
            case ( 352) : ctr2 += 19837;  break;
            case ( 353) : ctr2 +=  8066;  break;
            case ( 354) : ctr2 += 26884;  break;
            case ( 355) : ctr2 += 30272;  break;
            case ( 356) : ctr2 += 22517;  break;
            case ( 357) : ctr2 +=   648;  break;
            case ( 358) : ctr2 +=  4075;  break;
            case ( 359) : ctr2 +=  3037;  break;
            case ( 360) : ctr2 +=  2403;  break;
            case ( 361) : ctr2 += 25515;  break;
            case ( 362) : ctr2 += 10106;  break;
            case ( 363) : ctr2 += 17038;  break;
            case ( 364) : ctr2 += 25212;  break;
            case ( 365) : ctr2 +=   286;  break;
            case ( 366) : ctr2 += 29730;  break;
            case ( 367) : ctr2 +=  4043;  break;
            case ( 368) : ctr2 += 31334;  break;
            case ( 369) : ctr2 += 28353;  break;
            case ( 370) : ctr2 += 28250;  break;
            case ( 371) : ctr2 += 11776;  break;
            case ( 372) : ctr2 += 30317;  break;
            case ( 373) : ctr2 += 32510;  break;
            case ( 374) : ctr2 +=  6130;  break;
            case ( 375) : ctr2 += 27792;  break;
            case ( 376) : ctr2 += 10743;  break;
            case ( 377) : ctr2 += 13040;  break;
            case ( 378) : ctr2 += 15268;  break;
            case ( 379) : ctr2 += 16665;  break;
            case ( 380) : ctr2 += 29370;  break;
            case ( 381) : ctr2 += 30155;  break;
            case ( 382) : ctr2 += 19181;  break;
            case ( 383) : ctr2 += 32250;  break;
            case ( 384) : ctr2 +=  9516;  break;
            case ( 385) : ctr2 += 10104;  break;
            case ( 386) : ctr2 += 19995;  break;
            case ( 387) : ctr2 += 21010;  break;
            case ( 388) : ctr2 +=  7483;  break;
            case ( 389) : ctr2 += 14975;  break;
            case ( 390) : ctr2 +=  6822;  break;
            case ( 391) : ctr2 += 30155;  break;
            case ( 392) : ctr2 += 18239;  break;
            case ( 393) : ctr2 += 26922;  break;
            case ( 394) : ctr2 += 17347;  break;
            case ( 395) : ctr2 += 10583;  break;
            case ( 396) : ctr2 += 13613;  break;
            case ( 397) : ctr2 += 17896;  break;
            case ( 398) : ctr2 += 31031;  break;
            case ( 399) : ctr2 += 26682;  break;
            case ( 400) : ctr2 +=  5133;  break;
            case ( 401) : ctr2 += 10991;  break;
            case ( 402) : ctr2 += 18537;  break;
            case ( 403) : ctr2 += 30217;  break;
            case ( 404) : ctr2 +=  5550;  break;
            case ( 405) : ctr2 += 19749;  break;
            case ( 406) : ctr2 += 29628;  break;
            case ( 407) : ctr2 += 10353;  break;
            case ( 408) : ctr2 +=  8856;  break;
            case ( 409) : ctr2 += 30273;  break;
            case ( 410) : ctr2 += 21531;  break;
            case ( 411) : ctr2 +=  4730;  break;
            case ( 412) : ctr2 += 26690;  break;
            case ( 413) : ctr2 += 10797;  break;
            case ( 414) : ctr2 += 30934;  break;
            case ( 415) : ctr2 += 29965;  break;
            case ( 416) : ctr2 +=  6021;  break;
            case ( 417) : ctr2 += 15279;  break;
            case ( 418) : ctr2 += 31148;  break;
            case ( 419) : ctr2 +=  6325;  break;
            case ( 420) : ctr2 += 26449;  break;
            case ( 421) : ctr2 +=  5193;  break;
            case ( 422) : ctr2 += 12073;  break;
            case ( 423) : ctr2 += 29858;  break;
            case ( 424) : ctr2 += 12191;  break;
            case ( 425) : ctr2 += 13150;  break;
            case ( 426) : ctr2 += 17714;  break;
            case ( 427) : ctr2 += 18163;  break;
            case ( 428) : ctr2 += 12454;  break;
            case ( 429) : ctr2 += 10389;  break;
            case ( 430) : ctr2 += 23518;  break;
            case ( 431) : ctr2 +=   565;  break;
            case ( 432) : ctr2 += 23122;  break;
            case ( 433) : ctr2 +=  3459;  break;
            case ( 434) : ctr2 += 10887;  break;
            case ( 435) : ctr2 += 13350;  break;
            case ( 436) : ctr2 += 10226;  break;
            case ( 437) : ctr2 += 17028;  break;
            case ( 438) : ctr2 += 22817;  break;
            case ( 439) : ctr2 += 18879;  break;
            case ( 440) : ctr2 += 25649;  break;
            case ( 441) : ctr2 += 29417;  break;
            case ( 442) : ctr2 +=   971;  break;
            case ( 443) : ctr2 += 21618;  break;
            case ( 444) : ctr2 += 26951;  break;
            case ( 445) : ctr2 +=  9305;  break;
            case ( 446) : ctr2 +=  7332;  break;
            case ( 447) : ctr2 += 13489;  break;
            case ( 448) : ctr2 += 12656;  break;
            case ( 449) : ctr2 += 21873;  break;
            case ( 450) : ctr2 +=  8160;  break;
            case ( 451) : ctr2 += 19887;  break;
            case ( 452) : ctr2 += 19357;  break;
            case ( 453) : ctr2 += 28590;  break;
            case ( 454) : ctr2 += 19995;  break;
            case ( 455) : ctr2 +=  9834;  break;
            case ( 456) : ctr2 +=  2154;  break;
            case ( 457) : ctr2 +=  4237;  break;
            case ( 458) : ctr2 += 24812;  break;
            case ( 459) : ctr2 +=  7145;  break;
            case ( 460) : ctr2 += 29521;  break;
            case ( 461) : ctr2 += 28144;  break;
            case ( 462) : ctr2 += 28094;  break;
            case ( 463) : ctr2 +=  2242;  break;
            case ( 464) : ctr2 += 27677;  break;
            case ( 465) : ctr2 += 22980;  break;
            case ( 466) : ctr2 += 27355;  break;
            case ( 467) : ctr2 +=  1504;  break;
            case ( 468) : ctr2 += 29857;  break;
            case ( 469) : ctr2 += 10465;  break;
            case ( 470) : ctr2 +=  2762;  break;
            case ( 471) : ctr2 += 10371;  break;
            case ( 472) : ctr2 +=  1705;  break;
            case ( 473) : ctr2 +=   305;  break;
            case ( 474) : ctr2 += 25051;  break;
            case ( 475) : ctr2 += 24968;  break;
            case ( 476) : ctr2 +=  1585;  break;
            case ( 477) : ctr2 += 21269;  break;
            case ( 478) : ctr2 +=  2560;  break;
            case ( 479) : ctr2 += 25067;  break;
            case ( 480) : ctr2 +=  9173;  break;
            case ( 481) : ctr2 +=   516;  break;
            case ( 482) : ctr2 += 14558;  break;
            case ( 483) : ctr2 += 10378;  break;
            case ( 484) : ctr2 += 17289;  break;
            case ( 485) : ctr2 +=   118;  break;
            case ( 486) : ctr2 += 31780;  break;
            case ( 487) : ctr2 +=  7468;  break;
            case ( 488) : ctr2 += 15242;  break;
            case ( 489) : ctr2 += 25344;  break;
            case ( 490) : ctr2 +=  4124;  break;
            case ( 491) : ctr2 += 23745;  break;
            case ( 492) : ctr2 += 32661;  break;
            case ( 493) : ctr2 += 11968;  break;
            case ( 494) : ctr2 +=  1152;  break;
            case ( 495) : ctr2 +=  6892;  break;
            case ( 496) : ctr2 +=  3158;  break;
            case ( 497) : ctr2 += 26363;  break;
            case ( 498) : ctr2 +=  9102;  break;
            case ( 499) : ctr2 += 15550;  break;
            case ( 500) : ctr2 += 10019;  break;
            case ( 501) : ctr2 +=  7685;  break;
            case ( 502) : ctr2 += 20318;  break;
            case ( 503) : ctr2 +=  4293;  break;
            case ( 504) : ctr2 += 17898;  break;
            case ( 505) : ctr2 +=  3425;  break;
            case ( 506) : ctr2 += 18804;  break;
            case ( 507) : ctr2 += 18501;  break;
            case ( 508) : ctr2 += 13160;  break;
            case ( 509) : ctr2 += 31018;  break;
            case ( 510) : ctr2 +=  6290;  break;
            case ( 511) : ctr2 +=  5573;  break;
            case ( 512) : ctr2 += 17308;  break;
            case ( 513) : ctr2 += 25265;  break;
            case ( 514) : ctr2 +=   207;  break;
            case ( 515) : ctr2 +=  5325;  break;
            case ( 516) : ctr2 += 11388;  break;
            case ( 517) : ctr2 += 20072;  break;
            case ( 518) : ctr2 += 16877;  break;
            case ( 519) : ctr2 += 24303;  break;
            case ( 520) : ctr2 += 22246;  break;
            case ( 521) : ctr2 +=  8447;  break;
            case ( 522) : ctr2 +=  4072;  break;
            case ( 523) : ctr2 += 29188;  break;
            case ( 524) : ctr2 += 15321;  break;
            case ( 525) : ctr2 += 22476;  break;
            case ( 526) : ctr2 += 31179;  break;
            case ( 527) : ctr2 += 19384;  break;
            case ( 528) : ctr2 +=  8677;  break;
            case ( 529) : ctr2 +=  8304;  break;
            case ( 530) : ctr2 += 12999;  break;
            case ( 531) : ctr2 += 24137;  break;
            case ( 532) : ctr2 += 20192;  break;
            case ( 533) : ctr2 +=  5048;  break;
            case ( 534) : ctr2 += 29062;  break;
            case ( 535) : ctr2 += 17035;  break;
            case ( 536) : ctr2 +=   475;  break;
            case ( 537) : ctr2 +=  6081;  break;
            case ( 538) : ctr2 += 22973;  break;
            case ( 539) : ctr2 += 19248;  break;
            case ( 540) : ctr2 += 18772;  break;
            case ( 541) : ctr2 += 11616;  break;
            case ( 542) : ctr2 +=  9217;  break;
            case ( 543) : ctr2 += 23878;  break;
            case ( 544) : ctr2 +=  2478;  break;
            case ( 545) : ctr2 += 11456;  break;
            case ( 546) : ctr2 += 30683;  break;
            case ( 547) : ctr2 += 12801;  break;
            case ( 548) : ctr2 += 18398;  break;
            case ( 549) : ctr2 += 13645;  break;
            case ( 550) : ctr2 += 11294;  break;
            case ( 551) : ctr2 += 26043;  break;
            case ( 552) : ctr2 +=  3174;  break;
            case ( 553) : ctr2 += 21713;  break;
            case ( 554) : ctr2 += 24952;  break;
            case ( 555) : ctr2 += 30777;  break;
            case ( 556) : ctr2 += 29319;  break;
            case ( 557) : ctr2 += 10717;  break;
            case ( 558) : ctr2 += 11080;  break;
            case ( 559) : ctr2 +=  8752;  break;
            case ( 560) : ctr2 += 14258;  break;
            case ( 561) : ctr2 +=  1387;  break;
            case ( 562) : ctr2 += 15023;  break;
            case ( 563) : ctr2 +=  9223;  break;
            case ( 564) : ctr2 += 24385;  break;
            case ( 565) : ctr2 += 20417;  break;
            case ( 566) : ctr2 += 16362;  break;
            case ( 567) : ctr2 += 29151;  break;
            case ( 568) : ctr2 += 15972;  break;
            case ( 569) : ctr2 += 13465;  break;
            case ( 570) : ctr2 += 30175;  break;
            case ( 571) : ctr2 += 24785;  break;
            case ( 572) : ctr2 +=  1118;  break;
            case ( 573) : ctr2 += 23166;  break;
            case ( 574) : ctr2 +=  3061;  break;
            case ( 575) : ctr2 += 14710;  break;
            case ( 576) : ctr2 +=  4849;  break;
            case ( 577) : ctr2 += 10617;  break;
            case ( 578) : ctr2 += 25129;  break;
            case ( 579) : ctr2 += 21421;  break;
            case ( 580) : ctr2 += 15126;  break;
            case ( 581) : ctr2 += 25837;  break;
            case ( 582) : ctr2 += 19295;  break;
            case ( 583) : ctr2 +=  8088;  break;
            case ( 584) : ctr2 += 12786;  break;
            case ( 585) : ctr2 +=  7360;  break;
            case ( 586) : ctr2 += 18933;  break;
            case ( 587) : ctr2 += 16360;  break;
            case ( 588) : ctr2 += 20998;  break;
            case ( 589) : ctr2 += 14779;  break;
            case ( 590) : ctr2 += 31390;  break;
            case ( 591) : ctr2 +=  6491;  break;
            case ( 592) : ctr2 += 31910;  break;
            case ( 593) : ctr2 += 10548;  break;
            case ( 594) : ctr2 +=  8558;  break;
            case ( 595) : ctr2 += 31618;  break;
            case ( 596) : ctr2 += 12204;  break;
            case ( 597) : ctr2 += 27626;  break;
            case ( 598) : ctr2 +=  3377;  break;
            case ( 599) : ctr2 += 18120;  break;
            case ( 600) : ctr2 +=  9069;  break;
            case ( 601) : ctr2 +=  3120;  break;
            case ( 602) : ctr2 += 17665;  break;
            case ( 603) : ctr2 += 13232;  break;
            case ( 604) : ctr2 +=  1260;  break;
            case ( 605) : ctr2 += 16206;  break;
            case ( 606) : ctr2 += 13336;  break;
            case ( 607) : ctr2 +=  8030;  break;
            case ( 608) : ctr2 +=  8270;  break;
            case ( 609) : ctr2 += 13860;  break;
            case ( 610) : ctr2 += 18402;  break;
            case ( 611) : ctr2 +=   345;  break;
            case ( 612) : ctr2 +=  3982;  break;
            case ( 613) : ctr2 += 24848;  break;
            case ( 614) : ctr2 += 13398;  break;
            case ( 615) : ctr2 += 28303;  break;
            case ( 616) : ctr2 += 16754;  break;
            case ( 617) : ctr2 += 11026;  break;
            case ( 618) : ctr2 += 21127;  break;
            case ( 619) : ctr2 += 19866;  break;
            case ( 620) : ctr2 += 27838;  break;
            case ( 621) : ctr2 += 28718;  break;
            case ( 622) : ctr2 += 19830;  break;
            case ( 623) : ctr2 +=  8257;  break;
            case ( 624) : ctr2 += 17319;  break;
            case ( 625) : ctr2 += 13074;  break;
            case ( 626) : ctr2 +=  4395;  break;
            case ( 627) : ctr2 +=  1602;  break;
            case ( 628) : ctr2 += 31626;  break;
            case ( 629) : ctr2 += 22009;  break;
            case ( 630) : ctr2 += 12292;  break;
            case ( 631) : ctr2 += 23887;  break;
            case ( 632) : ctr2 += 31966;  break;
            case ( 633) : ctr2 += 23247;  break;
            case ( 634) : ctr2 += 12876;  break;
            case ( 635) : ctr2 +=  8790;  break;
            case ( 636) : ctr2 += 20328;  break;
            case ( 637) : ctr2 += 28310;  break;
            case ( 638) : ctr2 +=  1039;  break;
            case ( 639) : ctr2 += 30725;  break;
            case ( 640) : ctr2 +=  5805;  break;
            case ( 641) : ctr2 += 17416;  break;
            case ( 642) : ctr2 += 29997;  break;
            case ( 643) : ctr2 += 30350;  break;
            case ( 644) : ctr2 += 12973;  break;
            case ( 645) : ctr2 +=   382;  break;
            case ( 646) : ctr2 += 32686;  break;
            case ( 647) : ctr2 += 10407;  break;
            case ( 648) : ctr2 += 22734;  break;
            case ( 649) : ctr2 += 17936;  break;
            case ( 650) : ctr2 += 18517;  break;
            case ( 651) : ctr2 += 22997;  break;
            case ( 652) : ctr2 += 14615;  break;
            case ( 653) : ctr2 +=  2558;  break;
            case ( 654) : ctr2 +=  3448;  break;
            case ( 655) : ctr2 +=  6635;  break;
            case ( 656) : ctr2 +=   926;  break;
            case ( 657) : ctr2 += 24143;  break;
            case ( 658) : ctr2 += 30735;  break;
            case ( 659) : ctr2 +=  6605;  break;
            case ( 660) : ctr2 += 25156;  break;
            case ( 661) : ctr2 += 20407;  break;
            case ( 662) : ctr2 +=   778;  break;
            case ( 663) : ctr2 += 17786;  break;
            case ( 664) : ctr2 += 15007;  break;
            case ( 665) : ctr2 += 28862;  break;
            case ( 666) : ctr2 += 27880;  break;
            case ( 667) : ctr2 += 16202;  break;
            case ( 668) : ctr2 += 19512;  break;
            case ( 669) : ctr2 += 20255;  break;
            case ( 670) : ctr2 += 26501;  break;
            case ( 671) : ctr2 +=  8308;  break;
            case ( 672) : ctr2 += 32503;  break;
            case ( 673) : ctr2 += 22638;  break;
            case ( 674) : ctr2 += 31283;  break;
            case ( 675) : ctr2 +=  8914;  break;
            case ( 676) : ctr2 += 30171;  break;
            case ( 677) : ctr2 += 29182;  break;
            case ( 678) : ctr2 += 18957;  break;
            case ( 679) : ctr2 +=  6121;  break;
            case ( 680) : ctr2 += 14830;  break;
            case ( 681) : ctr2 += 18434;  break;
            case ( 682) : ctr2 += 15496;  break;
            case ( 683) : ctr2 += 20772;  break;
            case ( 684) : ctr2 +=  4473;  break;
            case ( 685) : ctr2 +=  6130;  break;
            case ( 686) : ctr2 += 10315;  break;
            case ( 687) : ctr2 += 23904;  break;
            case ( 688) : ctr2 += 22388;  break;
            case ( 689) : ctr2 += 31281;  break;
            case ( 690) : ctr2 +=  2113;  break;
            case ( 691) : ctr2 += 16301;  break;
            case ( 692) : ctr2 += 26432;  break;
            case ( 693) : ctr2 += 28396;  break;
            case ( 694) : ctr2 += 25836;  break;
            case ( 695) : ctr2 +=   851;  break;
            case ( 696) : ctr2 += 28825;  break;
            case ( 697) : ctr2 += 12869;  break;
            case ( 698) : ctr2 += 26620;  break;
            case ( 699) : ctr2 += 20756;  break;
            case ( 700) : ctr2 += 18374;  break;
            case ( 701) : ctr2 +=  7089;  break;
            case ( 702) : ctr2 += 20000;  break;
            case ( 703) : ctr2 += 27057;  break;
            case ( 704) : ctr2 +=  1554;  break;
            case ( 705) : ctr2 +=  3230;  break;
            case ( 706) : ctr2 += 11036;  break;
            case ( 707) : ctr2 += 10672;  break;
            case ( 708) : ctr2 +=  3712;  break;
            case ( 709) : ctr2 += 12890;  break;
            case ( 710) : ctr2 += 13340;  break;
            case ( 711) : ctr2 += 31323;  break;
            case ( 712) : ctr2 += 19131;  break;
            case ( 713) : ctr2 +=  7984;  break;
            case ( 714) : ctr2 +=  1095;  break;
            case ( 715) : ctr2 += 21516;  break;
            case ( 716) : ctr2 += 13388;  break;
            case ( 717) : ctr2 += 32468;  break;
            case ( 718) : ctr2 +=  3992;  break;
            case ( 719) : ctr2 += 13736;  break;
            case ( 720) : ctr2 += 32271;  break;
            case ( 721) : ctr2 += 27137;  break;
            case ( 722) : ctr2 += 14313;  break;
            case ( 723) : ctr2 += 13674;  break;
            case ( 724) : ctr2 += 29160;  break;
            case ( 725) : ctr2 +=  7520;  break;
            case ( 726) : ctr2 += 14417;  break;
            case ( 727) : ctr2 +=  3810;  break;
            case ( 728) : ctr2 += 22194;  break;
            case ( 729) : ctr2 +=  6060;  break;
            case ( 730) : ctr2 += 23216;  break;
            case ( 731) : ctr2 += 21053;  break;
            case ( 732) : ctr2 += 29304;  break;
            case ( 733) : ctr2 += 25364;  break;
            case ( 734) : ctr2 += 11144;  break;
            case ( 735) : ctr2 +=  6342;  break;
            case ( 736) : ctr2 += 31976;  break;
            case ( 737) : ctr2 +=  3552;  break;
            case ( 738) : ctr2 +=  8207;  break;
            case ( 739) : ctr2 += 25261;  break;
            case ( 740) : ctr2 +=  5636;  break;
            case ( 741) : ctr2 +=  5720;  break;
            case ( 742) : ctr2 += 25218;  break;
            case ( 743) : ctr2 +=   519;  break;
            case ( 744) : ctr2 +=  5403;  break;
            case ( 745) : ctr2 += 19937;  break;
            case ( 746) : ctr2 += 14523;  break;
            case ( 747) : ctr2 += 14103;  break;
            case ( 748) : ctr2 += 17400;  break;
            case ( 749) : ctr2 += 30570;  break;
            case ( 750) : ctr2 += 14598;  break;
            case ( 751) : ctr2 += 25036;  break;
            case ( 752) : ctr2 += 23129;  break;
            case ( 753) : ctr2 +=  9478;  break;
            case ( 754) : ctr2 += 16689;  break;
            case ( 755) : ctr2 += 27786;  break;
            case ( 756) : ctr2 += 19875;  break;
            case ( 757) : ctr2 +=  6362;  break;
            case ( 758) : ctr2 += 25570;  break;
            case ( 759) : ctr2 += 21550;  break;
            case ( 760) : ctr2 += 18643;  break;
            case ( 761) : ctr2 += 11578;  break;
            case ( 762) : ctr2 += 16429;  break;
            case ( 763) : ctr2 += 29004;  break;
            case ( 764) : ctr2 += 24760;  break;
            case ( 765) : ctr2 +=  2063;  break;
            case ( 766) : ctr2 += 30566;  break;
            case ( 767) : ctr2 += 26298;  break;
            case ( 768) : ctr2 += 22624;  break;
            case ( 769) : ctr2 +=  7548;  break;
            case ( 770) : ctr2 += 13620;  break;
            case ( 771) : ctr2 += 22867;  break;
            case ( 772) : ctr2 +=  2512;  break;
            case ( 773) : ctr2 += 17857;  break;
            case ( 774) : ctr2 += 32231;  break;
            case ( 775) : ctr2 += 21749;  break;
            case ( 776) : ctr2 += 18167;  break;
            case ( 777) : ctr2 += 27231;  break;
            case ( 778) : ctr2 += 14092;  break;
            case ( 779) : ctr2 +=   716;  break;
            case ( 780) : ctr2 += 18149;  break;
            case ( 781) : ctr2 +=  3709;  break;
            case ( 782) : ctr2 +=  7742;  break;
            case ( 783) : ctr2 +=  5331;  break;
            case ( 784) : ctr2 += 29497;  break;
            case ( 785) : ctr2 += 13962;  break;
            case ( 786) : ctr2 +=  8767;  break;
            case ( 787) : ctr2 +=  2711;  break;
            case ( 788) : ctr2 += 10712;  break;
            case ( 789) : ctr2 += 29476;  break;
            case ( 790) : ctr2 += 21063;  break;
            case ( 791) : ctr2 += 13119;  break;
            case ( 792) : ctr2 += 18149;  break;
            case ( 793) : ctr2 +=  4920;  break;
            case ( 794) : ctr2 += 22427;  break;
            case ( 795) : ctr2 +=  4297;  break;
            case ( 796) : ctr2 +=  2797;  break;
            case ( 797) : ctr2 += 16747;  break;
            case ( 798) : ctr2 += 11618;  break;
            case ( 799) : ctr2 +=   150;  break;
            case ( 800) : ctr2 += 12641;  break;
            case ( 801) : ctr2 +=  4281;  break;
            case ( 802) : ctr2 +=  2740;  break;
            case ( 803) : ctr2 += 19753;  break;
            case ( 804) : ctr2 += 19274;  break;
            case ( 805) : ctr2 += 15452;  break;
            case ( 806) : ctr2 += 13045;  break;
            case ( 807) : ctr2 +=  3372;  break;
            case ( 808) : ctr2 += 12856;  break;
            case ( 809) : ctr2 +=  7920;  break;
            case ( 810) : ctr2 +=  8289;  break;
            case ( 811) : ctr2 += 29619;  break;
            case ( 812) : ctr2 += 10107;  break;
            case ( 813) : ctr2 +=  9428;  break;
            case ( 814) : ctr2 += 15591;  break;
            case ( 815) : ctr2 += 30149;  break;
            case ( 816) : ctr2 += 29590;  break;
            case ( 817) : ctr2 += 15827;  break;
            case ( 818) : ctr2 +=  7483;  break;
            case ( 819) : ctr2 += 26905;  break;
            case ( 820) : ctr2 +=  6641;  break;
            case ( 821) : ctr2 +=  4612;  break;
            case ( 822) : ctr2 += 29223;  break;
            case ( 823) : ctr2 +=    29;  break;
            case ( 824) : ctr2 += 29902;  break;
            case ( 825) : ctr2 += 32238;  break;
            case ( 826) : ctr2 +=  9250;  break;
            case ( 827) : ctr2 += 18236;  break;
            case ( 828) : ctr2 += 19838;  break;
            case ( 829) : ctr2 +=  6640;  break;
            case ( 830) : ctr2 += 19747;  break;
            case ( 831) : ctr2 +=  1889;  break;
            case ( 832) : ctr2 += 17621;  break;
            case ( 833) : ctr2 += 20705;  break;
            case ( 834) : ctr2 +=  1207;  break;
            case ( 835) : ctr2 += 12727;  break;
            case ( 836) : ctr2 +=  8155;  break;
            case ( 837) : ctr2 += 18931;  break;
            case ( 838) : ctr2 += 12882;  break;
            case ( 839) : ctr2 += 14516;  break;
            case ( 840) : ctr2 += 19652;  break;
            case ( 841) : ctr2 += 10717;  break;
            case ( 842) : ctr2 += 23010;  break;
            case ( 843) : ctr2 += 31317;  break;
            case ( 844) : ctr2 += 13347;  break;
            case ( 845) : ctr2 += 28473;  break;
            case ( 846) : ctr2 +=  5802;  break;
            case ( 847) : ctr2 +=  8107;  break;
            case ( 848) : ctr2 += 10842;  break;
            case ( 849) : ctr2 += 28202;  break;
            case ( 850) : ctr2 += 14414;  break;
            case ( 851) : ctr2 +=  5526;  break;
            case ( 852) : ctr2 +=  5461;  break;
            case ( 853) : ctr2 += 12099;  break;
            case ( 854) : ctr2 += 13866;  break;
            case ( 855) : ctr2 +=   721;  break;
            case ( 856) : ctr2 +=  6776;  break;
            case ( 857) : ctr2 += 13732;  break;
            case ( 858) : ctr2 += 27880;  break;
            case ( 859) : ctr2 += 24366;  break;
            case ( 860) : ctr2 += 26837;  break;
            case ( 861) : ctr2 += 28774;  break;
            case ( 862) : ctr2 += 23122;  break;
            case ( 863) : ctr2 +=  4131;  break;
            case ( 864) : ctr2 += 29603;  break;
            case ( 865) : ctr2 += 23354;  break;
            case ( 866) : ctr2 += 19300;  break;
            case ( 867) : ctr2 += 11910;  break;
            case ( 868) : ctr2 += 12523;  break;
            case ( 869) : ctr2 +=  4684;  break;
            case ( 870) : ctr2 += 12454;  break;
            case ( 871) : ctr2 += 22933;  break;
            case ( 872) : ctr2 += 12421;  break;
            case ( 873) : ctr2 += 23918;  break;
            case ( 874) : ctr2 +=  3257;  break;
            case ( 875) : ctr2 += 15161;  break;
            case ( 876) : ctr2 +=  8003;  break;
            case ( 877) : ctr2 += 30322;  break;
            case ( 878) : ctr2 += 12591;  break;
            case ( 879) : ctr2 +=  8588;  break;
            case ( 880) : ctr2 +=  2668;  break;
            case ( 881) : ctr2 +=  3799;  break;
            case ( 882) : ctr2 += 15776;  break;
            case ( 883) : ctr2 += 20888;  break;
            case ( 884) : ctr2 += 30572;  break;
            case ( 885) : ctr2 += 22697;  break;
            case ( 886) : ctr2 +=  5369;  break;
            case ( 887) : ctr2 += 30562;  break;
            case ( 888) : ctr2 +=  9161;  break;
            case ( 889) : ctr2 +=  5794;  break;
            case ( 890) : ctr2 += 15640;  break;
            case ( 891) : ctr2 += 22311;  break;
            case ( 892) : ctr2 +=   345;  break;
            case ( 893) : ctr2 += 30613;  break;
            case ( 894) : ctr2 += 23702;  break;
            case ( 895) : ctr2 +=  9189;  break;
            case ( 896) : ctr2 += 17075;  break;
            case ( 897) : ctr2 += 16653;  break;
            case ( 898) : ctr2 += 19172;  break;
            case ( 899) : ctr2 +=  7965;  break;
            case ( 900) : ctr2 +=  3043;  break;
            case ( 901) : ctr2 +=  3377;  break;
            case ( 902) : ctr2 += 26266;  break;
            case ( 903) : ctr2 += 26071;  break;
            case ( 904) : ctr2 +=  7010;  break;
            case ( 905) : ctr2 +=  8170;  break;
            case ( 906) : ctr2 +=  9739;  break;
            case ( 907) : ctr2 +=  3816;  break;
            case ( 908) : ctr2 += 32581;  break;
            case ( 909) : ctr2 +=  5960;  break;
            case ( 910) : ctr2 +=  5661;  break;
            case ( 911) : ctr2 += 32368;  break;
            case ( 912) : ctr2 += 10932;  break;
            case ( 913) : ctr2 += 31522;  break;
            case ( 914) : ctr2 += 15192;  break;
            case ( 915) : ctr2 +=  4774;  break;
            case ( 916) : ctr2 += 32670;  break;
            case ( 917) : ctr2 += 28669;  break;
            case ( 918) : ctr2 +=  2364;  break;
            case ( 919) : ctr2 +=  3544;  break;
            case ( 920) : ctr2 +=  8363;  break;
            case ( 921) : ctr2 +=  4399;  break;
            case ( 922) : ctr2 += 25560;  break;
            case ( 923) : ctr2 += 25005;  break;
            case ( 924) : ctr2 +=  8050;  break;
            case ( 925) : ctr2 += 13893;  break;
            case ( 926) : ctr2 += 24472;  break;
            case ( 927) : ctr2 += 16302;  break;
            case ( 928) : ctr2 += 23277;  break;
            case ( 929) : ctr2 += 10145;  break;
            case ( 930) : ctr2 += 13151;  break;
            case ( 931) : ctr2 +=  4868;  break;
            case ( 932) : ctr2 +=  8745;  break;
            case ( 933) : ctr2 +=  1640;  break;
            case ( 934) : ctr2 +=  4309;  break;
            case ( 935) : ctr2 += 18307;  break;
            case ( 936) : ctr2 += 28482;  break;
            case ( 937) : ctr2 += 27547;  break;
            case ( 938) : ctr2 += 22275;  break;
            case ( 939) : ctr2 +=   488;  break;
            case ( 940) : ctr2 += 20111;  break;
            case ( 941) : ctr2 +=   643;  break;
            case ( 942) : ctr2 += 21277;  break;
            case ( 943) : ctr2 += 11615;  break;
            case ( 944) : ctr2 += 17946;  break;
            case ( 945) : ctr2 +=  8787;  break;
            case ( 946) : ctr2 +=   926;  break;
            case ( 947) : ctr2 +=   585;  break;
            case ( 948) : ctr2 += 20819;  break;
            case ( 949) : ctr2 += 11017;  break;
            case ( 950) : ctr2 +=  4506;  break;
            case ( 951) : ctr2 += 27195;  break;
            case ( 952) : ctr2 += 17669;  break;
            case ( 953) : ctr2 += 10645;  break;
            case ( 954) : ctr2 += 29776;  break;
            case ( 955) : ctr2 += 25930;  break;
            case ( 956) : ctr2 += 12168;  break;
            case ( 957) : ctr2 +=  1853;  break;
            case ( 958) : ctr2 += 29440;  break;
            case ( 959) : ctr2 += 21638;  break;
            case ( 960) : ctr2 +=  2361;  break;
            case ( 961) : ctr2 += 18496;  break;
            case ( 962) : ctr2 += 30972;  break;
            case ( 963) : ctr2 += 19908;  break;
            case ( 964) : ctr2 += 18727;  break;
            case ( 965) : ctr2 +=  7609;  break;
            case ( 966) : ctr2 += 28672;  break;
            case ( 967) : ctr2 += 23713;  break;
            case ( 968) : ctr2 += 12815;  break;
            case ( 969) : ctr2 += 20167;  break;
            case ( 970) : ctr2 +=  5318;  break;
            case ( 971) : ctr2 += 21699;  break;
            case ( 972) : ctr2 += 27531;  break;
            case ( 973) : ctr2 += 15595;  break;
            case ( 974) : ctr2 += 31190;  break;
            case ( 975) : ctr2 +=  6498;  break;
            case ( 976) : ctr2 += 15238;  break;
            case ( 977) : ctr2 +=  1969;  break;
            case ( 978) : ctr2 += 11420;  break;
            case ( 979) : ctr2 += 32263;  break;
            case ( 980) : ctr2 += 29683;  break;
            case ( 981) : ctr2 +=  5011;  break;
            case ( 982) : ctr2 += 12476;  break;
            case ( 983) : ctr2 +=  9364;  break;
            case ( 984) : ctr2 += 26814;  break;
            case ( 985) : ctr2 += 30746;  break;
            case ( 986) : ctr2 += 17834;  break;
            case ( 987) : ctr2 += 31877;  break;
            case ( 988) : ctr2 +=   515;  break;
            case ( 989) : ctr2 +=  6470;  break;
            case ( 990) : ctr2 += 10869;  break;
            case ( 991) : ctr2 += 18293;  break;
            case ( 992) : ctr2 += 15999;  break;
            case ( 993) : ctr2 += 28720;  break;
            case ( 994) : ctr2 += 21475;  break;
            case ( 995) : ctr2 += 18148;  break;
            case ( 996) : ctr2 += 14916;  break;
            case ( 997) : ctr2 += 18158;  break;
            case ( 998) : ctr2 += 18627;  break;
            case ( 999) : ctr2 += 30519;  break;
            case (1000) : ctr2 +=  3504;  break;
            case (1001) : ctr2 += 27575;  break;
            case (1002) : ctr2 +=  6271;  break;
            case (1003) : ctr2 += 31744;  break;
            case (1004) : ctr2 +=  6303;  break;
            case (1005) : ctr2 +=  8007;  break;
            case (1006) : ctr2 +=  8177;  break;
            case (1007) : ctr2 +=  8576;  break;
            case (1008) : ctr2 +=  3552;  break;
            case (1009) : ctr2 += 17029;  break;
            case (1010) : ctr2 +=  4215;  break;
            case (1011) : ctr2 +=  5995;  break;
            case (1012) : ctr2 += 21222;  break;
            case (1013) : ctr2 +=  1892;  break;
            case (1014) : ctr2 += 27978;  break;
            case (1015) : ctr2 += 18666;  break;
            case (1016) : ctr2 +=  1984;  break;
            case (1017) : ctr2 += 10503;  break;
            case (1018) : ctr2 += 29451;  break;
            case (1019) : ctr2 += 30182;  break;
            case (1020) : ctr2 += 19276;  break;
            case (1021) : ctr2 += 28456;  break;
            case (1022) : ctr2 +=  7583;  break;
            case (1023) : ctr2 += 29060;  break;
            default : break;
       }
    return ctr2;
}

void printChar(unsigned int *char_ctr, unsigned char val)
{
    unsigned int print_val = (unsigned int) 0;

    switch (val)
    {
        case (0x01) : print_val  = ' ' ^ (*char_ctr)++;;  break;
        case (0x02) : print_val  = '\2' ^ (*char_ctr)++;;  break;
        case (0x03) : print_val  = '\3' ^ (*char_ctr)++;;  break;
        case (0x04) : print_val  = '\4' ^ (*char_ctr)++;;  break;
        case (0x05) : print_val  = '\5' ^ (*char_ctr)++;;  break;
        case (0x06) : print_val  = '\6' ^ (*char_ctr)++;;  break;
        case (0x07) : print_val  = '\7' ^ (*char_ctr)++;;  break;
        case (0x08) : print_val  = '\8' ^ (*char_ctr)++;;  break;
        case (0x09) : print_val  = '\9' ^ (*char_ctr)++;;  break;
        case (0x0A) : print_val  = '\10' ^ (*char_ctr)++;;  break;
        case (0x0B) : print_val  = '\11' ^ (*char_ctr)++;;  break;
        case (0x0C) : print_val  = '\12' ^ (*char_ctr)++;;  break;
        case (0x0D) : print_val  = '\13' ^ (*char_ctr)++;;  break;
        case (0x0E) : print_val  = '\14' ^ (*char_ctr)++;;  break;
        case (0x0F) : print_val  = 'd' ^ (*char_ctr)++;;  break;
        case (0x10) : print_val  = '\16' ^ (*char_ctr)++;;  break;
        case (0x11) : print_val  = '\17' ^ (*char_ctr)++;;  break;
        case (0x12) : print_val  = '\18' ^ (*char_ctr)++;;  break;
        case (0x13) : print_val  = '\19' ^ (*char_ctr)++;;  break;
        case (0x14) : print_val  = '\20' ^ (*char_ctr)++;;  break;
        case (0x15) : print_val  = '\21' ^ (*char_ctr)++;;  break;
        case (0x16) : print_val  = '\22' ^ (*char_ctr)++;;  break;
        case (0x17) : print_val  = 'a' ^ (*char_ctr)++;;  break;
        case (0x18) : print_val  = '\24' ^ (*char_ctr)++;;  break;
        case (0x19) : print_val  = '\25' ^ (*char_ctr)++;;  break;
        case (0x1A) : print_val  = '\26' ^ (*char_ctr)++;;  break;
        case (0x1B) : print_val  = '\27' ^ (*char_ctr)++;;  break;
        case (0x1C) : print_val  = '\28' ^ (*char_ctr)++;;  break;
        case (0x1D) : print_val  = '\29' ^ (*char_ctr)++;;  break;
        case (0x1E) : print_val  = 'b' ^ (*char_ctr)++;;  break;
        case (0x1F) : print_val  = '\31' ^ (*char_ctr)++;;  break;
        case (0x20) : print_val  = '\32' ^ (*char_ctr)++;;  break;
        case (0x21) : print_val  = '\33' ^ (*char_ctr)++;;  break;
        case (0x22) : print_val  = '\34' ^ (*char_ctr)++;;  break;
        case (0x23) : print_val  = '\35' ^ (*char_ctr)++;;  break;
        case (0x24) : print_val  = 'c' ^ (*char_ctr)++;;  break;
        case (0x25) : print_val  = 't'   ^ (*char_ctr)++;;  break;
        case (0x26) : print_val  = '\38' ^ (*char_ctr)++;;  break;
        case (0x27) : print_val  = '\39' ^ (*char_ctr)++;;  break;
        case (0x28) : print_val  = '\40' ^ (*char_ctr)++;;  break;
        case (0x29) : print_val  = '\41' ^ (*char_ctr)++;;  break;
        case (0x2A) : print_val  = '\42' ^ (*char_ctr)++;;  break;
        case (0x2B) : print_val  = '\n'   ^ (*char_ctr)++;;  break;
        case (0x2C) : print_val  = '\44' ^ (*char_ctr)++;;  break;
        case (0x2D) : print_val  = '\45' ^ (*char_ctr)++;;  break;
        case (0x2E) : print_val  = '-'   ^ (*char_ctr)++;;  break;
        case (0x2F) : print_val  = '>'   ^ (*char_ctr)++;;  break;
        case (0x30) : print_val  = '\48' ^ (*char_ctr)++;;  break;
        case (0x31) : print_val  = '\49' ^ (*char_ctr)++;;  break;
        case (0x32) : print_val  = '\50' ^ (*char_ctr)++;;  break;
        case (0x33) : print_val  = '\51' ^ (*char_ctr)++;;  break;
        case (0x34) : print_val  = '\52' ^ (*char_ctr)++;;  break;
        case (0x35) : print_val  = '\53' ^ (*char_ctr)++;;  break;
        case (0x36) : print_val  = '\54' ^ (*char_ctr)++;;  break;
        case (0x37) : print_val  = '\55' ^ (*char_ctr)++;;  break;
        case (0x38) : print_val  = '\56' ^ (*char_ctr)++;;  break;
        case (0x39) : print_val  = '\57' ^ (*char_ctr)++;;  break;
        case (0x3A) : print_val  = '\58' ^ (*char_ctr)++;;  break;
        case (0x3B) : print_val  = '\59' ^ (*char_ctr)++;;  break;
        case (0x3C) : print_val  = '\60' ^ (*char_ctr)++;;  break;
        case (0x3D) : print_val  = 'h' ^ (*char_ctr)++;;  break;
        case (0x3E) : print_val  = '\62' ^ (*char_ctr)++;;  break;
        case (0x3F) : print_val  = '\63' ^ (*char_ctr)++;;  break;
        case (0x40) : print_val  = '\64' ^ (*char_ctr)++;;  break;
        case (0x41) : print_val  = 'g' ^ (*char_ctr)++;;  break;
        case (0x42) : print_val  = '\66' ^ (*char_ctr)++;;  break;
        case (0x43) : print_val  = '\67' ^ (*char_ctr)++;;  break;
        case (0x44) : print_val  = '\68' ^ (*char_ctr)++;;  break;
        case (0x45) : print_val  = '\69' ^ (*char_ctr)++;;  break;
        case (0x46) : print_val  = 'f' ^ (*char_ctr)++;;  break;
        case (0x47) : print_val  = '\71' ^ (*char_ctr)++;;  break;
        case (0x48) : print_val  = '\72' ^ (*char_ctr)++;;  break;
        case (0x49) : print_val  = '\73' ^ (*char_ctr)++;;  break;
        case (0x4A) : print_val  = '\74' ^ (*char_ctr)++;;  break;
        case (0x4B) : print_val  = 'e' ^ (*char_ctr)++;;  break;
        case (0x4C) : print_val  = '\76' ^ (*char_ctr)++;;  break;
        case (0x4D) : print_val  = '\77' ^ (*char_ctr)++;;  break;
        case (0x4E) : print_val  = '\78' ^ (*char_ctr)++;;  break;
        case (0x4F) : print_val  = '\79' ^ (*char_ctr)++;;  break;
        case (0x50) : print_val  = '\80' ^ (*char_ctr)++;;  break;
        case (0x51) : print_val  = '\81' ^ (*char_ctr)++;;  break;
        case (0x52) : print_val  = '\82' ^ (*char_ctr)++;;  break;
        case (0x53) : print_val  = '\83' ^ (*char_ctr)++;;  break;
        case (0x54) : print_val  = '\84' ^ (*char_ctr)++;;  break;
        case (0x55) : print_val  = '\85' ^ (*char_ctr)++;;  break;
        case (0x56) : print_val  = '\86' ^ (*char_ctr)++;;  break;
        case (0x57) : print_val  = '\87' ^ (*char_ctr)++;;  break;
        case (0x58) : print_val  = '\88' ^ (*char_ctr)++;;  break;
        case (0x59) : print_val  = '\89' ^ (*char_ctr)++;;  break;
        case (0x5A) : print_val  = '\90' ^ (*char_ctr)++;;  break;
        case (0x5B) : print_val  = '\91' ^ (*char_ctr)++;;  break;
        case (0x5C) : print_val  = '\92' ^ (*char_ctr)++;;  break;
        case (0x5D) : print_val  = '\93' ^ (*char_ctr)++;;  break;
        case (0x5E) : print_val  = '\94' ^ (*char_ctr)++;;  break;
        case (0x5F) : print_val  = '\95' ^ (*char_ctr)++;;  break;
        case (0x60) : print_val  = '\96' ^ (*char_ctr)++;;  break;
        case (0x61) : print_val  = '\97' ^ (*char_ctr)++;;  break;
        case (0x62) : print_val  = '\98' ^ (*char_ctr)++;;  break;
        case (0x63) : print_val  = '\99' ^ (*char_ctr)++;;  break;
        case (0x64) : print_val  = '\100' ^ (*char_ctr)++;;  break;
        case (0x65) : print_val  = '\101' ^ (*char_ctr)++;;  break;
        case (0x66) : print_val  = '\102' ^ (*char_ctr)++;;  break;
        case (0x67) : print_val  = '\103' ^ (*char_ctr)++;;  break;
        case (0x68) : print_val  = 'i' ^ (*char_ctr)++;;  break;
        case (0x69) : print_val  = '\105' ^ (*char_ctr)++;;  break;
        case (0x6A) : print_val  = '\106' ^ (*char_ctr)++;;  break;
        case (0x6B) : print_val  = 'j' ^ (*char_ctr)++;;  break;
        case (0x6C) : print_val  = '\108' ^ (*char_ctr)++;;  break;
        case (0x6D) : print_val  = '\109' ^ (*char_ctr)++;;  break;
        case (0x6E) : print_val  = '\110' ^ (*char_ctr)++;;  break;
        case (0x6F) : print_val  = 'k' ^ (*char_ctr)++;;  break;
        case (0x70) : print_val  = '\112' ^ (*char_ctr)++;;  break;
        case (0x71) : print_val  = '\113' ^ (*char_ctr)++;;  break;
        case (0x72) : print_val  = 'l' ^ (*char_ctr)++;;  break;
        case (0x73) : print_val  = '\115' ^ (*char_ctr)++;;  break;
        case (0x74) : print_val  = '\116' ^ (*char_ctr)++;;  break;
        case (0x75) : print_val  = '\117' ^ (*char_ctr)++;;  break;
        case (0x76) : print_val  = 'm' ^ (*char_ctr)++;;  break;
        case (0x77) : print_val  = '\119' ^ (*char_ctr)++;;  break;
        case (0x78) : print_val  = '\120' ^ (*char_ctr)++;;  break;
        case (0x79) : print_val  = '\121' ^ (*char_ctr)++;;  break;
        case (0x7A) : print_val  = 'n' ^ (*char_ctr)++;;  break;
        case (0x7B) : print_val  = '\123' ^ (*char_ctr)++;;  break;
        case (0x7C) : print_val  = '\124' ^ (*char_ctr)++;;  break;
        case (0x7D) : print_val  = '\125' ^ (*char_ctr)++;;  break;
        case (0x7E) : print_val  = 'o' ^ (*char_ctr)++;;  break;
        case (0x7F) : print_val  = '\127' ^ (*char_ctr)++;;  break;
        case (0x80) : print_val  = '\128' ^ (*char_ctr)++;;  break;
        case (0x81) : print_val  = 'p' ^ (*char_ctr)++;;  break;
        case (0x82) : print_val  = '\130' ^ (*char_ctr)++;;  break;
        case (0x83) : print_val  = '\131' ^ (*char_ctr)++;;  break;
        case (0x84) : print_val  = 'q' ^ (*char_ctr)++;;  break;
        case (0x85) : print_val  = '\133' ^ (*char_ctr)++;;  break;
        case (0x86) : print_val  = '\134' ^ (*char_ctr)++;;  break;
        case (0x87) : print_val  = 'r' ^ (*char_ctr)++;;  break;
        case (0x88) : print_val  = '\136' ^ (*char_ctr)++;;  break;
        case (0x89) : print_val  = '\137' ^ (*char_ctr)++;;  break;
        case (0x8A) : print_val  = 's' ^ (*char_ctr)++;;  break;
        case (0x8B) : print_val  = '\139' ^ (*char_ctr)++;;  break;
        case (0x8C) : print_val  = 't' ^ (*char_ctr)++;;  break;
        case (0x8D) : print_val  = '\141' ^ (*char_ctr)++;;  break;
        case (0x8E) : print_val  = '\142' ^ (*char_ctr)++;;  break;
        case (0x8F) : print_val  = 'u' ^ (*char_ctr)++;;  break;
        case (0x90) : print_val  = '\144' ^ (*char_ctr)++;;  break;
        case (0x91) : print_val  = '\145' ^ (*char_ctr)++;;  break;
        case (0x92) : print_val  = 'v' ^ (*char_ctr)++;;  break;
        case (0x93) : print_val  = '\147' ^ (*char_ctr)++;;  break;
        case (0x94) : print_val  = '\148' ^ (*char_ctr)++;;  break;
        case (0x95) : print_val  = 'w' ^ (*char_ctr)++;;  break;
        case (0x96) : print_val  = '\150' ^ (*char_ctr)++;;  break;
        case (0x97) : print_val  = '\151' ^ (*char_ctr)++;;  break;
        case (0x98) : print_val  = '\152' ^ (*char_ctr)++;;  break;
        case (0x99) : print_val  = 'x' ^ (*char_ctr)++;;  break;
        case (0x9A) : print_val  = '\154' ^ (*char_ctr)++;;  break;
        case (0x9B) : print_val  = '\155' ^ (*char_ctr)++;;  break;
        case (0x9C) : print_val  = 'y' ^ (*char_ctr)++;;  break;
        case (0x9D) : print_val  = '\157' ^ (*char_ctr)++;;  break;
        case (0x9E) : print_val  = '\158' ^ (*char_ctr)++;;  break;
        case (0x9F) : print_val  = 'z' ^ (*char_ctr)++;;  break;
        case (0xA0) : print_val  = '\160' ^ (*char_ctr)++;;  break;
        case (0xA1) : print_val  = '\161' ^ (*char_ctr)++;;  break;
        case (0xA2) : print_val  = '1' ^ (*char_ctr)++;;  break;
        case (0xA3) : print_val  = '\163' ^ (*char_ctr)++;;  break;
        case (0xA4) : print_val  = '\164' ^ (*char_ctr)++;;  break;
        case (0xA5) : print_val  = '2' ^ (*char_ctr)++;;  break;
        case (0xA6) : print_val  = '\166' ^ (*char_ctr)++;;  break;
        case (0xA7) : print_val  = '\167' ^ (*char_ctr)++;;  break;
        case (0xA8) : print_val  = '3' ^ (*char_ctr)++;;  break;
        case (0xA9) : print_val  = '\169' ^ (*char_ctr)++;;  break;
        case (0xAA) : print_val  = '\170' ^ (*char_ctr)++;;  break;
        case (0xAB) : print_val  = '4' ^ (*char_ctr)++;;  break;
        case (0xAC) : print_val  = '\172' ^ (*char_ctr)++;;  break;
        case (0xAD) : print_val  = 'g'    ^ (*char_ctr)++;;  break;
        case (0xAE) : print_val  = '\174' ^ (*char_ctr)++;;  break;
        case (0xAF) : print_val  = '\175' ^ (*char_ctr)++;;  break;
        case (0xB0) : print_val  = '5' ^ (*char_ctr)++;;  break;
        case (0xB1) : print_val  = '\177' ^ (*char_ctr)++;;  break;
        case (0xB2) : print_val  = '\178' ^ (*char_ctr)++;;  break;
        case (0xB3) : print_val  = '\179' ^ (*char_ctr)++;;  break;
        case (0xB4) : print_val  = '6' ^ (*char_ctr)++;;  break;
        case (0xB5) : print_val  = '\181' ^ (*char_ctr)++;;  break;
        case (0xB6) : print_val  = '\182' ^ (*char_ctr)++;;  break;
        case (0xB7) : print_val  = '\183' ^ (*char_ctr)++;;  break;
        case (0xB8) : print_val  = '7' ^ (*char_ctr)++;;  break;
        case (0xB9) : print_val  = '\185' ^ (*char_ctr)++;;  break;
        case (0xBA) : print_val  = '\186' ^ (*char_ctr)++;;  break;
        case (0xBB) : print_val  = '\187' ^ (*char_ctr)++;;  break;
        case (0xBC) : print_val  = '\188' ^ (*char_ctr)++;;  break;
        case (0xBD) : print_val  = '\189' ^ (*char_ctr)++;;  break;
        case (0xBE) : print_val  = '8' ^ (*char_ctr)++;;  break;
        case (0xBF) : print_val  = '\191' ^ (*char_ctr)++;;  break;
        case (0xC0) : print_val  = '\192' ^ (*char_ctr)++;;  break;
        case (0xC1) : print_val  = '\193' ^ (*char_ctr)++;;  break;
        case (0xC2) : print_val  = '9' ^ (*char_ctr)++;;  break;
        case (0xC3) : print_val  = '\195' ^ (*char_ctr)++;;  break;
        case (0xC4) : print_val  = '\196' ^ (*char_ctr)++;;  break;
        case (0xC5) : print_val  = '\197' ^ (*char_ctr)++;;  break;
        case (0xC6) : print_val  = '\198' ^ (*char_ctr)++;;  break;
        case (0xC7) : print_val  = '\199' ^ (*char_ctr)++;;  break;
        case (0xC8) : print_val  = '\200' ^ (*char_ctr)++;;  break;
        case (0xC9) : print_val  = '\201' ^ (*char_ctr)++;;  break;
        case (0xCA) : print_val  = '\202' ^ (*char_ctr)++;;  break;
        case (0xCB) : print_val  = '\203' ^ (*char_ctr)++;;  break;
        case (0xCC) : print_val  = '\h'   ^ (*char_ctr)++;;  break;
        case (0xCD) : print_val  = '\205' ^ (*char_ctr)++;;  break;
        case (0xCE) : print_val  = '\206' ^ (*char_ctr)++;;  break;
        case (0xCF) : print_val  = '\207' ^ (*char_ctr)++;;  break;
        case (0xD0) : print_val  = '\208' ^ (*char_ctr)++;;  break;
        case (0xD1) : print_val  = '\209' ^ (*char_ctr)++;;  break;
        case (0xD2) : print_val  = '\210' ^ (*char_ctr)++;;  break;
        case (0xD3) : print_val  = 'r'    ^ (*char_ctr)++;;  break;
        case (0xD4) : print_val  = '\212' ^ (*char_ctr)++;;  break;
        case (0xD5) : print_val  = '\i'   ^ (*char_ctr)++;;  break;
        case (0xD6) : print_val  = '\214' ^ (*char_ctr)++;;  break;
        case (0xD7) : print_val  = '\215' ^ (*char_ctr)++;;  break;
        case (0xD8) : print_val  = '\216' ^ (*char_ctr)++;;  break;
        case (0xD9) : print_val  = '\217' ^ (*char_ctr)++;;  break;
        case (0xDA) : print_val  = '\218' ^ (*char_ctr)++;;  break;
        case (0xDB) : print_val  = '\219' ^ (*char_ctr)++;;  break;
        case (0xDC) : print_val  = '\220' ^ (*char_ctr)++;;  break;
        case (0xDD) : print_val  = '\221' ^ (*char_ctr)++;;  break;
        case (0xDE) : print_val  = '\222' ^ (*char_ctr)++;;  break;
        case (0xDF) : print_val  = '\223' ^ (*char_ctr)++;;  break;
        case (0xE0) : print_val  = '\224' ^ (*char_ctr)++;;  break;
        case (0xE1) : print_val  = '\225' ^ (*char_ctr)++;;  break;
        case (0xE2) : print_val  = '\226' ^ (*char_ctr)++;;  break;
        case (0xE3) : print_val  = '\227' ^ (*char_ctr)++;;  break;
        case (0xE4) : print_val  = '\228' ^ (*char_ctr)++;;  break;
        case (0xE5) : print_val  = '\229' ^ (*char_ctr)++;;  break;
        case (0xE6) : print_val  = '\230' ^ (*char_ctr)++;;  break;
        case (0xE7) : print_val  = '\231' ^ (*char_ctr)++;;  break;
        case (0xE8) : print_val  = '\232' ^ (*char_ctr)++;;  break;
        case (0xE9) : print_val  = '\233' ^ (*char_ctr)++;;  break;
        case (0xEA) : print_val  = '\234' ^ (*char_ctr)++;;  break;
        case (0xEB) : print_val  = '\235' ^ (*char_ctr)++;;  break;
        case (0xEC) : print_val  = '\236' ^ (*char_ctr)++;;  break;
        case (0xED) : print_val  = '\237' ^ (*char_ctr)++;;  break;
        case (0xEE) : print_val  = '\238' ^ (*char_ctr)++;;  break;
        case (0xEF) : print_val  = '\239' ^ (*char_ctr)++;;  break;
        case (0xF0) : print_val  = '\240' ^ (*char_ctr)++;;  break;
        case (0xF1) : print_val  = '\241' ^ (*char_ctr)++;;  break;
        case (0xF2) : print_val  = '\242' ^ (*char_ctr)++;;  break;
        case (0xF3) : print_val  = '\243' ^ (*char_ctr)++;;  break;
        case (0xF4) : print_val  = '\244' ^ (*char_ctr)++;;  break;
        case (0xF5) : print_val  = '\245' ^ (*char_ctr)++;;  break;
        case (0xF6) : print_val  = '\246' ^ (*char_ctr)++;;  break;
        case (0xF7) : print_val  = '\247' ^ (*char_ctr)++;;  break;
        case (0xF8) : print_val  = '\248' ^ (*char_ctr)++;;  break;
        case (0xF9) : print_val  = '\249' ^ (*char_ctr)++;;  break;
        case (0xFA) : print_val  = '\250' ^ (*char_ctr)++;;  break;
        case (0xFB) : print_val  = '\251' ^ (*char_ctr)++;;  break;
        case (0xFC) : print_val  = '\252' ^ (*char_ctr)++;;  break;
        case (0xFD) : print_val  = '\253' ^ (*char_ctr)++;;  break;
        case (0xFE) : print_val  = '\254' ^ (*char_ctr)++;;  break;
        case (0xFF) : print_val  = '\255' ^ (*char_ctr)++;;  break;
        default : print_val  = ' ' ^ (*char_ctr)++;;  break;
    }

    printVal(print_val);
}
