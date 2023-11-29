/*
 * Which bit has to be turned ON or OFF is found
 * with the below function.
 * 
 * The range of music notes used for the control
 * of lights is from C3 to E6.
 * (sharp notes are excluded)     (total 24 lights)
 * 
 * So, this function will return the number of the bit
 * to be set.
 * For eg, C3(note 62) corresponds to the first light.
 * So this function will return '1'.
 * 
 * Similarly, '2' is returned for D3(note 64), etc.
 * 
 */

int getBit(int p) {
  switch(p) {
    case 24: return 0; //note C0
    case 26: return 1; //D0 
    case 28: return 2; //E0
    case 29: return 3; //F0
    case 31: return 4; //G0
    case 33: return 5; //A0
    case 35: return 6; //B0

    case 36: return 7; //note C1
    case 38: return 8; //D1
    case 40: return 9; //E1
    case 41: return 10; //F1
    case 43: return 11; //G1
    case 45: return 12; //A1
    case 47: return 13; //B1

    case 48: return 14; //note C2
    case 50: return 15; //D2
    case 52: return 16; //E2
    case 53: return 17; //F2
    case 55: return 18; //G2
    case 57: return 19; //A2
    case 59: return 20; //B2
    
    case 60: return 0; //note C3 (middle C)
    case 62: return 1; //D3
    case 64: return 2; //E3
    case 65: return 3; //F3
    case 67: return 4; //G3
    case 69: return 5; //A3
    case 71: return 6; //B3
    case 72: return 7; //C4
    case 74: return 8; //D4
    case 76: return 9; //E4
    case 77: return 10; //F4
    case 79: return 11; //G4
    case 81: return 12; //A4
    case 83: return 13; //B4
    case 84: return 14; //C5
    case 86: return 15; //D5
    case 88: return 16; //E5
    case 89: return 17; //F5
    case 91: return 18; //G5
    case 93: return 19; //A5
    case 95: return 20; //B5
    case 96: return 21; //C6
    case 98: return 22; //D6
    case 100: return 23; //E6
  }
}
