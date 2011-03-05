/* FreeEMS - the open source engine management system
 *
 * Copyright 2010 Fred Cooke
 *
 * This file is part of the FreeEMS project.
 *
 * FreeEMS software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FreeEMS software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with any FreeEMS software.  If not, see http://www.gnu.org/licenses/
 *
 * We ask that if you make any changes to this file you email them upstream to
 * us at admin(at)diyefi(dot)org or, even better, fork the code on github.com!
 *
 * Thank you for choosing FreeEMS to run your engine!
 */


/** @file FredsTruckVE.h
 *
 * @ingroup dataInitialisers
 *
 * @brief Will eventually contain my pre-canned tune
 *
 * For now this will be used to ID that tables are being parsed and rendered
 * correctly in mtx 16 by 16
 *
 * This file only contains the data to be hash included into the VE tables
 * in the fuel table files for car specific builds.
 *
 * @author Fred Cooke
 */


// Low RPM                                                                                                           High RPM
//250     700    1000    1600    2200    2800    3400    4000    4600    5200    5800    6400    7000    7600    8000    8001 // Vacuum
25600,  20480,  15360,  15360,  15360,  15360,  20000,  30000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, //  15
25600,  20480,  20480,  20480,  20480,  20480,  30000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, //  30
25600,  20480,  20480,  24576,  25600,  26624,  35000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, //  45
28160,  23040,  23040,  25600,  28160,  28160,  35000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, //  60

35840,  25600,  25600,  28160,  29184,  30720,  35000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, //  75
38400,  25600,  28160,  28160,  29184,  30720,  35000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, //  90
41000,  25600,  28160,  28160,  29184,  30720,  35000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, // 105
41000,  33000,  35000,  35000,  35000,  35000,  35000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, // 120

41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, // 135
41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, // 150
41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, // 165
41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, // 180

41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, // 195
41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  41000,  65535,      0, // 210
55555,  55555,  55555,  55555,  55555,  55555,  55555,  55555,  55555,  55555,  55555,  55555,  55555,  55555,  56665,      0, // 225
    0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0, // 226
//250     700    1000    1600    2200    2800    3400    4000    4600    5200    5800    6400    7000    7600    8000    8001 // Boost
// Low RPM                                                                                                           High RPM



// The rest are UNUSED until we get full variable size table tuning, firmware can handle it, tuning currently can't :

0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,
0,  0,  0,


0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
0,  0,  0,  0,  0,  0xFFFF /* 6 extras to allow different axis sizes. */
