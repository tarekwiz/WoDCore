/*
 * Copyright (C) 2013-2015 DeathCore <http://www.noffearrdeathproject.net/>
 * Copyright (C) 2006-2009 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEF_THE_EYE_H
#define DEF_THE_EYE_H

#define DataHeader "TE"

uint32 const EncounterCount = 4;

enum DataTypes
{
    // Encounter States/Boss GUIDs
    DATA_KAELTHAS                       = 0,
    DATA_ALAR                           = 1,
    DATA_HIGH_ASTROMANCER_SOLARIAN      = 2,
    DATA_VOID_REAVER                    = 3,

    DATA_ASTROMANCER                    = 4,
    DATA_GRANDASTROMANCERCAPERNIAN      = 5,
    DATA_KAELTHASEVENT                  = 6,
    DATA_LORDSANGUINAR                  = 7,
    DATA_MASTERENGINEERTELONICUS        = 8,
    DATA_THALADREDTHEDARKENER           = 9
};

enum CreatureIds
{
    NPC_SANGUINAR                       = 20060,
    NPC_CAPERNIAN                       = 20062,
    NPC_TELONICUS                       = 20063,
    NPC_THALADRED                       = 20064,
    NPC_KAELTHAS                        = 19622,
    NPC_HIGH_ASTROMANCER_SOLARIAN       = 18805,
    NPC_ALAR                            = 19514
};

#endif
