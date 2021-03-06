#define true 1
#define false 0

/*
    price - Cost of the building
    numberCrates - Allowed number of crates
    restrictedPos[] - Same as the old fn_getBuildingPositions. A list of restricted building positions (i.e, to stop spawning outside, or by windows etc)
        default: {}
    canGarage - True if the building can be used as a garage (need to buy ontop)
        default: false
    garageSpawnPos[] - worldToModel position to spawn vehicles, leave {} if canGarage is false.
        default: {}
    garageSpawnDir - Offset to garage direction to spawn at (+-90 etc). It will be used in the manner: getDir _garage + spawnDir
        default: 0
    garageBlacklists[] - List of blacklisted houses for buying garages
        default: {}
*/

class Housing {

    class Altis {

        class Land_i_House_Big_02_V1_F {
            price = 1550000;
            numberCrates = 3;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Big_02_V2_F : Land_i_House_Big_02_V1_F{};
        class Land_i_House_Big_02_V3_F : Land_i_House_Big_02_V1_F{};

        class Land_i_House_Big_01_V1_F {
            price = 2200000;
            numberCrates = 4;
            restrictedPos[] = {2,3};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,3.8};
        };

        class Land_i_House_Big_01_V2_F : Land_i_House_Big_01_V1_F{};
        class Land_i_House_Big_01_V3_F : Land_i_House_Big_01_V1_F{};

        class Land_i_House_Small_01_V1_F {
            price = 1050000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-1.5,0,2};
        };

        class Land_i_House_Small_01_V2_F : Land_i_House_Small_01_V1_F{};
        class Land_i_House_Small_01_V3_F : Land_i_House_Small_01_V1_F{};

        class Land_i_House_Small_02_V1_F {
            price = 1000500;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,2.4};
        };

        class Land_i_House_Small_02_V2_F : Land_i_House_Small_02_V1_F{};
        class Land_i_House_Small_02_V3_F : Land_i_House_Small_02_V1_F{};

        class Land_i_House_Small_03_V1_F {
            price = 1250000;
            numberCrates = 3;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5};
        };

        class Land_i_House_Small_03_V3_F : Land_i_House_Small_03_V1_F{};

        class Land_i_Stone_HouseSmall_V1_F {
            price = 750000;
            numberCrates = 1;
            restrictedPos[] = {0,1,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0.90,2.3,4};
        };

        class Land_i_Stone_HouseSmall_V2_F : Land_i_Stone_HouseSmall_V1_F{};
        class Land_i_Stone_HouseSmall_V3_F : Land_i_Stone_HouseSmall_V1_F{};

    };

    class Tanoa {

        // Houses with Garages
        class Land_Hotel_01_F {
            price = 960000;
            numberCrates = 5;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {-1.27246,-11.4361,-5.63821};
            garageSpawnDir = 0;
            garageBlacklists[] = {{5909.93,10491.9,-0.153875}};
            lightPos[] = {0.5,0.5,7.5};
        };

        class Land_Hotel_02_F {
            price = 2000000;
            numberCrates = 8;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {14.1128,1.51736,-4.18449};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,1,3};
        };

        class Land_GarageShelter_01_F {
            price = 80000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {0.241684,-5.72266,-1.46744};
            garageSpawnDir = 90;
            garageBlacklists[] = {{10998,9698.24,-0.219376}};
            lightPos[] = {0,0,2};
        };

        class Land_House_Big_02_F {
            price = 450000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {12.8365,0.414551,-1.81252};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,0,2};
        };

        class Land_School_01_F {
            price = 3000000;
            numberCrates = 8;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {-6.91215,-11.5288,-1.70768};
            garageSpawnDir = 0;
            garageBlacklists[] = {{10957,9532.16,-0.528702}};
            lightPos[] = {0,0,2.65};
        };

        class Land_House_Big_04_F {
            price = 140000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {12.308,-0.228027,-3.34715};
            garageSpawnDir = 0;
            garageBlacklists[] = {{5879.2,10002.7,-0.278984},{9508.48,13082.7,0.021286}};
            lightPos[] = {0,0,3.5};
        };

        class Land_House_Big_03_F {
            price = 900000;
            numberCrates = 3;
            restrictedPos[] = {};
            canGarage = true;
            garageSpawnPos[] = {14.9072,0.394043,-3.60528};
            garageSpawnDir = 0;
            garageBlacklists[] = {{11507.2,2447.47,-0.145175}};
            lightPos[] = {0,0,3.5};
        };

        // Houses without Garages
        class Land_House_Big_01_F {
            price = 350000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-1,2,2};
        };

        class Land_House_Small_03_F {
            price = 600000;
            numberCrates = 3;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-2.35,1,2.8};
        };

        class Land_House_Small_06_F {
            price = 700000;
            numberCrates = 3;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {3,-2,2};
        };

        class Land_Slum_03_F {
            price = 450000;
            numberCrates = 4;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1,2,3};
        };

        class Land_Addon_04_F {
            price = 120000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,4};
        };

        class Land_Slum_01_F {
            price = 200000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.5,0,3.2};
        };

        class Land_House_Small_05_F {
            price = 100000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,1,2};
        };

        class Land_House_Small_02_F {
            price = 160000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-2,0,2.4};
        };

        class Land_House_Small_04_F {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

    };

    //Jackson
    class Jackson_County {

        class Land_i_House_Big_02_V1_F {
            price = 1550000;
            numberCrates = 3;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };

        class Land_i_House_Big_02_V2_F : Land_i_House_Big_02_V1_F{};
        class Land_i_House_Big_02_V3_F : Land_i_House_Big_02_V1_F{};

        class Land_i_House_Big_01_V1_F {
            price = 2200000;
            numberCrates = 4;
            restrictedPos[] = {2,3};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,3.8};
        };

        class Land_i_House_Big_01_V2_F : Land_i_House_Big_01_V1_F{};
        class Land_i_House_Big_01_V3_F : Land_i_House_Big_01_V1_F{};

        class Land_i_House_Small_01_V1_F {
            price = 1050000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-1.5,0,2};
        };

        class Land_i_House_Small_01_V2_F : Land_i_House_Small_01_V1_F{};
        class Land_i_House_Small_01_V3_F : Land_i_House_Small_01_V1_F{};

        class Land_i_House_Small_02_V1_F {
            price = 1000500;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,2.4};
        };

        class Land_i_House_Small_02_V2_F : Land_i_House_Small_02_V1_F{};
        class Land_i_House_Small_02_V3_F : Land_i_House_Small_02_V1_F{};

        class Land_i_House_Small_03_V1_F {
            price = 1250000;
            numberCrates = 3;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-3.3,1,2.5};
        };

        class Land_i_House_Small_03_V3_F : Land_i_House_Small_03_V1_F{};

        class Land_i_Stone_HouseSmall_V1_F {
            price = 750000;
            numberCrates = 1;
            restrictedPos[] = {0,1,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0.90,2.3,4};
        };

        class Land_i_Stone_HouseSmall_V2_F : Land_i_Stone_HouseSmall_V1_F{};
        class Land_i_Stone_HouseSmall_V3_F : Land_i_Stone_HouseSmall_V1_F{};

        //Metro House Class ID
        //오스트레일리아 1층 차고 있는 집(왼쪽 차고)
        class Land_HouseA1_L {
            price = 4000000;
            numberCrates = 3;
            restrictedPos[] = {0,1,3,4};
            canGarage = true;
            garageSpawnPos[] = {-4,-13,0.2};
            garageSpawnDir = -90;
            garageBlacklists[] = {};
            lightPos[] = {0,1,1.5};
        };

        class Land_HouseB1_L : Land_HouseA1_L{};
        class Land_HouseC1_L : Land_HouseA1_L{};

        //오스트레일리아 1층 차고 있는 집(오른쪽 차고 - 맵 대다수)
        class Land_HouseA {
            price = 4000000;
            numberCrates = 3;
            restrictedPos[] = {0,1,3,4};
            canGarage = true;
            garageSpawnPos[] = {4,-13,0.2};
            garageSpawnDir = -90;
            garageBlacklists[] = {};
            lightPos[] = {0,1,3};
        };

        class Land_HouseA1 : Land_HouseA{};
        class Land_HouseC_R : Land_HouseA{};
        class Land_HouseB : Land_HouseA{};
        class Land_HouseB1 : Land_HouseA{};

        //오스트레일리아 1층 옆으로 긴 집
        class Land_Ranch_DED_Ranch_01_F {
            price = 6000000;
            numberCrates = 4;
            restrictedPos[] = {0,1,3,4};
            canGarage = true;
            garageSpawnPos[] = {-8,10,0.2};
            garageSpawnDir = -90;
            garageBlacklists[] = {};
            lightPos[] = {0,1,3};
        };

        class Land_Ranch_DED_Ranch_02_F : Land_Ranch_DED_Ranch_01_F{};

        //오스트레일리아 2층 차고 있는 집
        class Land_HouseDoubleAL2 {
            price =10000000;
            numberCrates = 6;
            restrictedPos[] = {0,1,3,4};
            canGarage = true;
            garageSpawnPos[] = {-6,-16,0.2};
            garageSpawnDir = -90;
            garageBlacklists[] = {};
            lightPos[] = {0,1,3.5};
        };

        class Land_House_DoubleAL : Land_HouseDoubleAL2{};

        //두바위리조또 초호화 복층 빌라
        class land_pop_chalet {
            price = 20000000;
            numberCrates = 8;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,0,3};
        };

        class land_pop_chalet_r : land_pop_chalet{};
    };

};
