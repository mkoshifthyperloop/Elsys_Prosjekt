// Registers-------------------------------------
#define Product_ID  0x00
#define Revision_ID 0x01
#define Motion  0x02
#define Delta_X_L 0x03
#define Delta_X_H 0x04
#define Delta_Y_L 0x05
#define Delta_Y_H 0x06
//#define SQUAL 0x07
#define Raw_Data_Sum  0x08
#define Maximum_Raw_data  0x09
#define Minimum_Raw_data  0x0A
#define Shutter_Lower 0x0B
#define Shutter_Upper 0x0C
#define Control 0x0D
#define Config1 0x0F
#define Config2 0x10
#define Angle_Tune  0x11
#define Frame_Capture 0x12
#define SROM_Enable 0x13
#define Run_Downshift 0x14
#define Rest1_Rate_Lower  0x15
#define Rest1_Rate_Upper  0x16
#define Rest1_Downshift 0x17
#define Rest2_Rate_Lower  0x18
#define Rest2_Rate_Upper  0x19
#define Rest2_Downshift 0x1A
#define Rest3_Rate_Lower  0x1B
#define Rest3_Rate_Upper  0x1C
#define Observation 0x24
#define Data_Out_Lower  0x25
#define Data_Out_Upper  0x26
#define Raw_Data_Dump 0x29
#define SROM_ID 0x2A
#define Min_SQ_Run  0x2B
#define Raw_Data_Threshold  0x2C
#define Config5 0x2F
#define Power_Up_Reset  0x3A
#define Shutdown  0x3B
#define Inverse_Product_ID  0x3F
#define LiftCutoff_Tune3  0x41
#define Angle_Snap  0x42
#define LiftCutoff_Tune1  0x4A
#define Motion_Burst  0x50
#define LiftCutoff_Tune_Timeout 0x58
#define LiftCutoff_Tune_Min_Length  0x5A
#define SROM_Load_Burst 0x62
#define Lift_Config 0x63
#define Raw_Data_Burst  0x64
#define LiftCutoff_Tune2  0x65

//Firmware------------------------------------------
const unsigned short firmware_length = 4094;

const unsigned char firmware_data[] PROGMEM = {
0x01, 0xe8, 0xba, 0x26, 0x0b, 0xb2, 0xbe, 0xfe, 0x7e, 0x5f, 0x3c, 0xdb, 0x15, 0xa8, 0xb3, 
0xe4, 0x2b, 0xb5, 0xe8, 0x53, 0x07, 0x6d, 0x3b, 0xd1, 0x20, 0xc2, 0x06, 0x6f, 0x3d, 0xd9, 
0x11, 0xa0, 0xc2, 0xe7, 0x2d, 0xb9, 0xd1, 0x20, 0xa3, 0xa5, 0xc8, 0xf3, 0x64, 0x4a, 0xf7, 
0x4d, 0x18, 0x93, 0xa4, 0xca, 0xf7, 0x6c, 0x5a, 0x36, 0xee, 0x5e, 0x3e, 0xfe, 0x7e, 0x7e, 
0x5f, 0x1d, 0x99, 0xb0, 0xc3, 0xe5, 0x29, 0xd3, 0x03, 0x65, 0x48, 0x12, 0x87, 0x6d, 0x58, 
0x32, 0xe6, 0x2f, 0xdc, 0x3a, 0xf2, 0x4f, 0xfd, 0x59, 0x11, 0x81, 0x61, 0x21, 0xc0, 0x02, 
0x86, 0x8e, 0x7f, 0x5d, 0x38, 0xf2, 0x47, 0x0c, 0x7b, 0x55, 0x28, 0xb3, 0xe4, 0x4a, 0x16, 
0xab, 0xbf, 0xdd, 0x38, 0xf2, 0x66, 0x4e, 0xff, 0x5d, 0x19, 0x91, 0xa0, 0xa3, 0xa5, 0xc8, 
0x12, 0xa6, 0xaf, 0xdc, 0x3a, 0xd1, 0x41, 0x60, 0x75, 0x58, 0x24, 0x92, 0xd4, 0x72, 0x6c, 
0xe0, 0x2f, 0xfd, 0x23, 0x8d, 0x1c, 0x5b, 0xb2, 0x97, 0x36, 0x3d, 0x0b, 0xa2, 0x49, 0xb1, 
0x58, 0xf2, 0x1f, 0xc0, 0xcb, 0xf8, 0x41, 0x4f, 0xcd, 0x1e, 0x6b, 0x39, 0xa7, 0x2b, 0xe9, 
0x30, 0x16, 0x83, 0xd2, 0x0e, 0x47, 0x8f, 0xe3, 0xb1, 0xdf, 0xa2, 0x15, 0xdb, 0x5d, 0x30, 
0xc5, 0x1a, 0xab, 0x31, 0x99, 0xf3, 0xfa, 0xb2, 0x86, 0x69, 0xad, 0x7a, 0xe8, 0xa7, 0x18, 
0x6a, 0xcc, 0xc8, 0x65, 0x23, 0x87, 0xa8, 0x5f, 0xf5, 0x21, 0x59, 0x75, 0x09, 0x71, 0x45, 
0x55, 0x25, 0x4b, 0xda, 0xa1, 0xc3, 0xf7, 0x41, 0xab, 0x59, 0xd9, 0x74, 0x12, 0x55, 0x5f, 
0xbc, 0xaf, 0xd9, 0xfd, 0xb0, 0x1e, 0xa3, 0x0f, 0xff, 0xde, 0x11, 0x16, 0x6a, 0xae, 0x0e, 
0xe1, 0x5d, 0x3c, 0x10, 0x43, 0x9a, 0xa1, 0x0b, 0x24, 0x8f, 0x0d, 0x7f, 0x0b, 0x5e, 0x4c, 
0x42, 0xa4, 0x84, 0x2c, 0x40, 0xd0, 0x55, 0x39, 0xe6, 0x4b, 0xf8, 0x9b, 0x2f, 0xdc, 0x28, 
0xff, 0xfa, 0xb5, 0x85, 0x19, 0xe5, 0x28, 0xa1, 0x77, 0xaa, 0x73, 0xf3, 0x03, 0xc7, 0x62, 
0xa6, 0x91, 0x18, 0xc9, 0xb0, 0xcd, 0x05, 0xdc, 0xca, 0x81, 0x26, 0x1a, 0x47, 0x40, 0xda, 
0x36, 0x7d, 0x6a, 0x53, 0xc8, 0x5a, 0x77, 0x5d, 0x19, 0xa4, 0x1b, 0x23, 0x83, 0xd0, 0xb2, 
0xaa, 0x0e, 0xbf, 0x77, 0x4e, 0x3a, 0x3b, 0x59, 0x00, 0x31, 0x0d, 0x02, 0x1b, 0x88, 0x7a, 
0xd4, 0xbd, 0x9d, 0xcc, 0x58, 0x04, 0x69, 0xf6, 0x3b, 0xca, 0x42, 0xe2, 0xfd, 0xc3, 0x3d, 
0x39, 0xc5, 0xd0, 0x71, 0xe4, 0xc8, 0xb7, 0x3e, 0x3f, 0xc8, 0xe9, 0xca, 0xc9, 0x3f, 0x04, 
0x4e, 0x1b, 0x79, 0xca, 0xa5, 0x61, 0xc2, 0xed, 0x1d, 0xa6, 0xda, 0x5a, 0xe9, 0x7f, 0x65, 
0x8c, 0xbe, 0x12, 0x6e, 0xa4, 0x5b, 0x33, 0x2f, 0x84, 0x28, 0x9c, 0x1c, 0x88, 0x2d, 0xff, 
0x07, 0xbf, 0xa6, 0xd7, 0x5a, 0x88, 0x86, 0xb0, 0x3f, 0xf6, 0x31, 0x5b, 0x11, 0x6d, 0xf5, 
0x58, 0xeb, 0x58, 0x02, 0x9e, 0xb5, 0x9a, 0xb1, 0xff, 0x25, 0x9d, 0x8b, 0x4f, 0xb6, 0x0a, 
0xf9, 0xea, 0x3e, 0x3f, 0x21, 0x09, 0x65, 0x21, 0x22, 0xfe, 0x3d, 0x4e, 0x11, 0x5b, 0x9e, 
0x5a, 0x59, 0x8b, 0xdd, 0xd8, 0xce, 0xd6, 0xd9, 0x59, 0xd2, 0x1e, 0xfd, 0xef, 0x0d, 0x1b, 
0xd9, 0x61, 0x7f, 0xd7, 0x2d, 0xad, 0x62, 0x09, 0xe5, 0x22, 0x63, 0xea, 0xc7, 0x31, 0xd9, 
0xa1, 0x38, 0x80, 0x5c, 0xa7, 0x32, 0x82, 0xec, 0x1b, 0xa2, 0x49, 0x5a, 0x06, 0xd2, 0x7c, 
0xc9, 0x96, 0x57, 0xbb, 0x17, 0x75, 0xfc, 0x7a, 0x8f, 0x0d, 0x77, 0xb5, 0x7a, 0x8e, 0x3e, 
0xf4, 0xba, 0x2f, 0x69, 0x13, 0x26, 0xd6, 0xd9, 0x21, 0x60, 0x2f, 0x21, 0x3e, 0x87, 0xee, 
0xfd, 0x87, 0x16, 0x0d, 0xc8, 0x08, 0x00, 0x25, 0x71, 0xac, 0x2c, 0x03, 0x2a, 0x37, 0x2d, 
0xb3, 0x34, 0x09, 0x91, 0xe3, 0x06, 0x2c, 0x38, 0x37, 0x95, 0x3b, 0x17, 0x7a, 0xaf, 0xac, 
0x99, 0x55, 0xab, 0x41, 0x39, 0x5f, 0x8e, 0xa6, 0x43, 0x80, 0x03, 0x88, 0x6f, 0x7d, 0xbd, 
0x5a, 0xb4, 0x2b, 0x32, 0x23, 0x5a, 0xa9, 0x31, 0x32, 0x39, 0x4c, 0x5b, 0xf4, 0x6b, 0xaf, 
0x66, 0x6f, 0x3c, 0x8e, 0x2d, 0x82, 0x97, 0x9f, 0x4a, 0x01, 0xdc, 0x99, 0x98, 0x00, 0xec, 
0x38, 0x7a, 0x79, 0x70, 0xa6, 0x85, 0xd6, 0x21, 0x63, 0x0d, 0x45, 0x9a, 0x2e, 0x5e, 0xa7, 
0xb1, 0xea, 0x66, 0x6a, 0xbc, 0x62, 0x2d, 0x7b, 0x7d, 0x85, 0xea, 0x95, 0x2f, 0xc0, 0xe8, 
0x6f, 0x35, 0xa0, 0x3a, 0x02, 0x25, 0xbc, 0xb2, 0x5f, 0x5c, 0x43, 0x96, 0xcc, 0x26, 0xd2, 
0x16, 0xb4, 0x96, 0x73, 0xd7, 0x13, 0xc7, 0xae, 0x53, 0x15, 0x31, 0x89, 0x68, 0x66, 0x6d, 
0x2c, 0x92, 0x1f, 0xcc, 0x5b, 0xa7, 0x8f, 0x5d, 0xbb, 0xc9, 0xdb, 0xe8, 0x3b, 0x9d, 0x61, 
0x74, 0x8b, 0x05, 0xa1, 0x58, 0x52, 0x68, 0xee, 0x3d, 0x39, 0x79, 0xa0, 0x9b, 0xdd, 0xe1, 
0x55, 0xc9, 0x60, 0xeb, 0xad, 0xb8, 0x5b, 0xc2, 0x5a, 0xb5, 0x2c, 0x18, 0x55, 0xa9, 0x50, 
0xc3, 0xf6, 0x72, 0x5f, 0xcc, 0xe2, 0xf4, 0x55, 0xb5, 0xd6, 0xb5, 0x4a, 0x99, 0xa5, 0x28, 
0x74, 0x97, 0x18, 0xe8, 0xc0, 0x84, 0x89, 0x50, 0x03, 0x86, 0x4d, 0x1a, 0xb7, 0x09, 0x90, 
0xa2, 0x01, 0x04, 0xbb, 0x73, 0x62, 0xcb, 0x97, 0x22, 0x70, 0x5d, 0x52, 0x41, 0x8e, 0xd9, 
0x90, 0x15, 0xaa, 0xab, 0x0a, 0x31, 0x65, 0xb4, 0xda, 0xd0, 0xee, 0x24, 0xc9, 0x41, 0x91, 
0x1e, 0xbc, 0x46, 0x70, 0x40, 0x9d, 0xda, 0x0e, 0x2a, 0xe4, 0xb2, 0x4c, 0x9f, 0xf2, 0xfc, 
0xf3, 0x84, 0x17, 0x44, 0x1e, 0xd7, 0xca, 0x23, 0x1f, 0x3f, 0x5a, 0x22, 0x3d, 0xaf, 0x9b, 
0x2d, 0xfc, 0x41, 0xad, 0x26, 0xb4, 0x45, 0x67, 0x0b, 0x80, 0x0e, 0xf9, 0x61, 0x37, 0xec, 
0x3b, 0xf4, 0x4b, 0x14, 0xdf, 0x5a, 0x0c, 0x3a, 0x50, 0x0b, 0x14, 0x0c, 0x72, 0xae, 0xc6, 
0xc5, 0xec, 0x35, 0x53, 0x2d, 0x59, 0xed, 0x91, 0x74, 0xe2, 0xc4, 0xc8, 0xf2, 0x25, 0x6b, 
0x97, 0x6f, 0xc9, 0x76, 0xce, 0xa9, 0xb1, 0x99, 0x8f, 0x5a, 0x92, 0x3b, 0xc4, 0x8d, 0x54, 
0x50, 0x40, 0x72, 0xd6, 0x90, 0x83, 0xfc, 0xe5, 0x49, 0x8b, 0x17, 0xf5, 0xfd, 0x6b, 0x8d, 
0x32, 0x02, 0xe9, 0x0a, 0xfe, 0xbf, 0x00, 0x6b, 0xa3, 0xad, 0x5f, 0x09, 0x4b, 0x97, 0x2b, 
0x00, 0x58, 0x65, 0x2e, 0x07, 0x49, 0x0a, 0x3b, 0x6b, 0x2e, 0x50, 0x6c, 0x1d, 0xac, 0xb7, 
0x6a, 0x26, 0xd8, 0x13, 0xa4, 0xca, 0x16, 0xae, 0xab, 0x93, 0xb9, 0x1c, 0x1c, 0xb4, 0x47, 
0x6a, 0x38, 0x36, 0x17, 0x27, 0xc9, 0x7f, 0xc7, 0x64, 0xcb, 0x89, 0x58, 0xc5, 0x61, 0xc2, 
0xc6, 0xea, 0x15, 0x0b, 0x34, 0x0c, 0x5d, 0x61, 0x76, 0x6e, 0x2b, 0x62, 0x40, 0x92, 0xa3, 
0x6c, 0xef, 0xf4, 0xe4, 0xc3, 0xa1, 0xa8, 0xf5, 0x94, 0x79, 0x0d, 0xd1, 0x3d, 0xcb, 0x3d, 
0x40, 0xb6, 0xd0, 0xf0, 0x10, 0x54, 0xd8, 0x47, 0x25, 0x51, 0xc5, 0x41, 0x79, 0x00, 0xe5, 
0xa0, 0x72, 0xde, 0xbb, 0x3b, 0x62, 0x17, 0xf6, 0xbc, 0x5d, 0x00, 0x76, 0x2e, 0xa7, 0x3b, 
0xb6, 0xf1, 0x98, 0x72, 0x59, 0x2a, 0x73, 0xb0, 0x21, 0xd6, 0x49, 0xe0, 0xc0, 0xd5, 0xeb, 
0x02, 0x7d, 0x4b, 0x41, 0x28, 0x70, 0x2d, 0xec, 0x2b, 0x71, 0x1f, 0x0b, 0xb9, 0x71, 0x63, 
0x06, 0xe6, 0xbc, 0x60, 0xbb, 0xf4, 0x9a, 0x62, 0x43, 0x09, 0x18, 0x4e, 0x93, 0x06, 0x4d, 
0x76, 0xfa, 0x7f, 0xbd, 0x02, 0xe4, 0x50, 0x91, 0x12, 0xe5, 0x86, 0xff, 0x64, 0x1e, 0xaf, 
0x7e, 0xb3, 0xb2, 0xde, 0x89, 0xc1, 0xa2, 0x6f, 0x40, 0x7b, 0x41, 0x51, 0x63, 0xea, 0x25, 
0xd1, 0x97, 0x57, 0x92, 0xa8, 0x45, 0xa1, 0xa5, 0x45, 0x21, 0x43, 0x7f, 0x83, 0x15, 0x29, 
0xd0, 0x30, 0x53, 0x32, 0xb4, 0x5a, 0x17, 0x96, 0xbc, 0xc2, 0x68, 0xa9, 0xb7, 0xaf, 0xac, 
0xdf, 0xf1, 0xe3, 0x89, 0xba, 0x24, 0x79, 0x54, 0xc6, 0x14, 0x07, 0x1c, 0x1e, 0x0d, 0x3a, 
0x6b, 0xe5, 0x3d, 0x4e, 0x10, 0x60, 0x96, 0xec, 0x6c, 0xda, 0x47, 0xae, 0x03, 0x25, 0x39, 
0x1d, 0x74, 0xc8, 0xac, 0x6a, 0xf2, 0x6b, 0x05, 0x2a, 0x9a, 0xe7, 0xe8, 0x92, 0xd6, 0xc2, 
0x6d, 0xfa, 0xe8, 0xa7, 0x9d, 0x5f, 0x48, 0xc9, 0x75, 0xf1, 0x66, 0x6a, 0xdb, 0x5d, 0x9a, 
0xcd, 0x27, 0xdd, 0xb9, 0x24, 0x04, 0x9c, 0x18, 0xc2, 0x6d, 0x0c, 0x91, 0x34, 0x48, 0x42, 
0x6f, 0xe9, 0x59, 0x70, 0xc4, 0x7e, 0x81, 0x0e, 0x32, 0x0a, 0x93, 0x48, 0xb0, 0xc0, 0x15, 
0x9e, 0x05, 0xac, 0x36, 0x16, 0xcb, 0x59, 0x65, 0xa0, 0x83, 0xdf, 0x3e, 0xda, 0xfb, 0x1d, 
0x1a, 0xdb, 0x65, 0xec, 0x9a, 0xc6, 0xc3, 0x8e, 0x3c, 0x45, 0xfd, 0xc8, 0xf5, 0x1c, 0x6a, 
0x67, 0x0d, 0x8f, 0x99, 0x7d, 0x30, 0x21, 0x8c, 0xea, 0x22, 0x87, 0x65, 0xc9, 0xb2, 0x4c, 
0xe4, 0x1b, 0x46, 0xba, 0x54, 0xbd, 0x7c, 0xca, 0xd5, 0x8f, 0x5b, 0xa5, 0x01, 0x04, 0xd8, 
0x0a, 0x16, 0xbf, 0xb9, 0x50, 0x2e, 0x37, 0x2f, 0x64, 0xf3, 0x70, 0x11, 0x02, 0x05, 0x31, 
0x9b, 0xa0, 0xb2, 0x01, 0x5e, 0x4f, 0x19, 0xc9, 0xd4, 0xea, 0xa1, 0x79, 0x54, 0x53, 0xa7, 
0xde, 0x2f, 0x49, 0xd3, 0xd1, 0x63, 0xb5, 0x03, 0x15, 0x4e, 0xbf, 0x04, 0xb3, 0x26, 0x8b, 
0x20, 0xb2, 0x45, 0xcf, 0xcd, 0x5b, 0x82, 0x32, 0x88, 0x61, 0xa7, 0xa8, 0xb2, 0xa0, 0x72, 
0x96, 0xc0, 0xdb, 0x2b, 0xe2, 0x5f, 0xba, 0xe3, 0xf5, 0x8a, 0xde, 0xf1, 0x18, 0x01, 0x16, 
0x40, 0xd9, 0x86, 0x12, 0x09, 0x18, 0x1b, 0x05, 0x0c, 0xb1, 0xb5, 0x47, 0xe2, 0x43, 0xab, 
0xfe, 0x92, 0x63, 0x7e, 0x95, 0x2b, 0xf0, 0xaf, 0xe1, 0xf1, 0xc3, 0x4a, 0xff, 0x2b, 0x09, 
0xbb, 0x4a, 0x0e, 0x9a, 0xc4, 0xd8, 0x64, 0x7d, 0x83, 0xa0, 0x4f, 0x44, 0xdb, 0xc4, 0xa8, 
0x58, 0xef, 0xfc, 0x9e, 0x77, 0xf9, 0xa6, 0x8f, 0x58, 0x8b, 0x12, 0xf4, 0xe9, 0x81, 0x12, 
0x47, 0x51, 0x41, 0x83, 0xef, 0xf6, 0x73, 0xbc, 0x8e, 0x0f, 0x4c, 0x8f, 0x4e, 0x69, 0x90, 
0x77, 0x29, 0x5d, 0x92, 0xb0, 0x6d, 0x06, 0x67, 0x29, 0x60, 0xbd, 0x4b, 0x17, 0xc8, 0x89, 
0x69, 0x28, 0x29, 0xd6, 0x78, 0xcb, 0x11, 0x4c, 0xba, 0x8b, 0x68, 0xae, 0x7e, 0x9f, 0xef, 
0x95, 0xda, 0xe2, 0x9e, 0x7f, 0xe9, 0x55, 0xe5, 0xe1, 0xe2, 0xb7, 0xe6, 0x5f, 0xbb, 0x2c, 
0xa2, 0xe6, 0xee, 0xc7, 0x0a, 0x60, 0xa9, 0xd1, 0x80, 0xdf, 0x7f, 0xd6, 0x97, 0xab, 0x1d, 
0x22, 0x25, 0xfc, 0x79, 0x23, 0xe0, 0xae, 0xc5, 0xef, 0x16, 0xa4, 0xa1, 0x0f, 0x92, 0xa9, 
0xc7, 0xe3, 0x3a, 0x55, 0xdf, 0x62, 0x49, 0xd9, 0xf5, 0x84, 0x49, 0xc5, 0x90, 0x34, 0xd3, 
0xe1, 0xac, 0x99, 0x21, 0xb1, 0x02, 0x76, 0x4a, 0xfa, 0xd4, 0xbb, 0xa4, 0x9c, 0xa2, 0xe2, 
0xcb, 0x3d, 0x3b, 0x14, 0x75, 0x60, 0xd1, 0x02, 0xb4, 0xa3, 0xb4, 0x72, 0x06, 0xf9, 0x19, 
0x9c, 0xe2, 0xe4, 0xa7, 0x0f, 0x25, 0x88, 0xc6, 0x86, 0xd6, 0x8c, 0x74, 0x4e, 0x6e, 0xfc, 
0xa8, 0x48, 0x9e, 0xa7, 0x9d, 0x1a, 0x4b, 0x37, 0x09, 0xc8, 0xb0, 0x10, 0xbe, 0x6f, 0xfe, 
0xa3, 0xc4, 0x7a, 0xb5, 0x3d, 0xe8, 0x30, 0xf1, 0x0d, 0xa0, 0xb2, 0x44, 0xfc, 0x9b, 0x8c, 
0xf8, 0x61, 0xed, 0x81, 0xd1, 0x62, 0x11, 0xb4, 0xe1, 0xd5, 0x39, 0x52, 0x89, 0xd3, 0xa8, 
0x49, 0x31, 0xdf, 0xb6, 0xf9, 0x91, 0xf4, 0x1c, 0x9d, 0x09, 0x95, 0x40, 0x56, 0xe7, 0xe3, 
0xcd, 0x5c, 0x92, 0xc1, 0x1d, 0x6b, 0xe9, 0x78, 0x6f, 0x8e, 0x94, 0x42, 0x66, 0xa2, 0xaa, 
0xd3, 0xc8, 0x2e, 0xe3, 0xf6, 0x07, 0x72, 0x0b, 0x6b, 0x1e, 0x7b, 0xb9, 0x7c, 0xe0, 0xa0, 
0xbc, 0xd9, 0x25, 0xdf, 0x87, 0xa8, 0x5f, 0x9c, 0xcc, 0xf0, 0xdb, 0x42, 0x8e, 0x07, 0x31, 
0x13, 0x01, 0x66, 0x32, 0xd1, 0xb8, 0xd6, 0xe3, 0x5e, 0x12, 0x76, 0x61, 0xd3, 0x38, 0x89, 
0xe6, 0x17, 0x6f, 0xa5, 0xf2, 0x71, 0x0e, 0xa5, 0xe2, 0x88, 0x30, 0xbb, 0xbe, 0x8a, 0xea, 
0xc7, 0x62, 0xc4, 0xcf, 0xb8, 0xcd, 0x33, 0x8d, 0x3d, 0x3e, 0xb5, 0x60, 0x3a, 0x03, 0x92, 
0xe4, 0x6d, 0x1b, 0xe0, 0xb4, 0x84, 0x08, 0x55, 0x88, 0xa7, 0x3a, 0xb9, 0x3d, 0x43, 0xc3, 
0xc0, 0xfa, 0x07, 0x6a, 0xca, 0x94, 0xad, 0x99, 0x55, 0xf1, 0xf1, 0xc0, 0x23, 0x87, 0x1d, 
0x3d, 0x1c, 0xd1, 0x66, 0xa0, 0x57, 0x10, 0x52, 0xa2, 0x7f, 0xbe, 0xf9, 0x88, 0xb6, 0x02, 
0xbf, 0x08, 0x23, 0xa9, 0x0c, 0x63, 0x17, 0x2a, 0xae, 0xf5, 0xf7, 0xb7, 0x21, 0x83, 0x92, 
0x31, 0x23, 0x0d, 0x20, 0xc3, 0xc2, 0x05, 0x21, 0x62, 0x8e, 0x45, 0xe8, 0x14, 0xc1, 0xda, 
0x75, 0xb8, 0xf8, 0x92, 0x01, 0xd0, 0x5d, 0x18, 0x9f, 0x99, 0x11, 0x19, 0xf5, 0x35, 0xe8, 
0x7f, 0x20, 0x88, 0x8c, 0x05, 0x75, 0xf5, 0xd7, 0x40, 0x17, 0xbb, 0x1e, 0x36, 0x52, 0xd9, 
0xa4, 0x9c, 0xc2, 0x9d, 0x42, 0x81, 0xd8, 0xc7, 0x8a, 0xe7, 0x4c, 0x81, 0xe0, 0xb7, 0x57, 
0xed, 0x48, 0x8b, 0xf0, 0x97, 0x15, 0x61, 0xd9, 0x2c, 0x7c, 0x45, 0xaf, 0xc2, 0xcd, 0xfc, 
0xaa, 0x13, 0xad, 0x59, 0xcc, 0xb2, 0xb2, 0x6e, 0xdd, 0x63, 0x9c, 0x32, 0x0f, 0xec, 0x83, 
0xbe, 0x78, 0xac, 0x91, 0x44, 0x1a, 0x1f, 0xea, 0xfd, 0x5d, 0x8e, 0xb4, 0xc0, 0x84, 0xd4, 
0xac, 0xb4, 0x87, 0x5f, 0xac, 0xef, 0xdf, 0xcd, 0x12, 0x56, 0xc8, 0xcd, 0xfe, 0xc5, 0xda, 
0xd3, 0xc1, 0x69, 0xf3, 0x61, 0x05, 0xea, 0x25, 0xe2, 0x12, 0x05, 0x8f, 0x39, 0x08, 0x08, 
0x7c, 0x37, 0xb6, 0x7e, 0x5b, 0xd8, 0xb1, 0x0e, 0xf2, 0xdb, 0x4b, 0xf1, 0xad, 0x90, 0x01, 
0x57, 0xcd, 0xa0, 0xb4, 0x52, 0xe8, 0xf3, 0xd7, 0x8a, 0xbd, 0x4f, 0x9f, 0x21, 0x40, 0x72, 
0xa4, 0xfc, 0x0b, 0x01, 0x2b, 0x2f, 0xb6, 0x4c, 0x95, 0x2d, 0x35, 0x33, 0x41, 0x6b, 0xa0, 
0x93, 0xe7, 0x2c, 0xf2, 0xd3, 0x72, 0x8b, 0xf4, 0x4f, 0x15, 0x3c, 0xaf, 0xd6, 0x12, 0xde, 
0x3f, 0x83, 0x3f, 0xff, 0xf8, 0x7f, 0xf6, 0xcc, 0xa6, 0x7f, 0xc9, 0x9a, 0x6e, 0x1f, 0xc1, 
0x0c, 0xfb, 0xee, 0x9c, 0xe7, 0xaf, 0xc9, 0x26, 0x54, 0xef, 0xb0, 0x39, 0xef, 0xb2, 0xe9, 
0x23, 0xc4, 0xef, 0xd1, 0xa1, 0xa4, 0x25, 0x24, 0x6f, 0x8d, 0x6a, 0xe5, 0x8a, 0x32, 0x3a, 
0xaf, 0xfc, 0xda, 0xce, 0x18, 0x25, 0x42, 0x07, 0x4d, 0x45, 0x8b, 0xdf, 0x85, 0xcf, 0x55, 
0xb2, 0x24, 0xfe, 0x9c, 0x69, 0x74, 0xa7, 0x6e, 0xa0, 0xce, 0xc0, 0x39, 0xf4, 0x86, 0xc6, 
0x8d, 0xae, 0xb9, 0x48, 0x64, 0x13, 0x0b, 0x40, 0x81, 0xa2, 0xc9, 0xa8, 0x85, 0x51, 0xee, 
0x9f, 0xcf, 0xa2, 0x8c, 0x19, 0x52, 0x48, 0xe2, 0xc1, 0xa8, 0x58, 0xb4, 0x10, 0x24, 0x06, 
0x58, 0x51, 0xfc, 0xb9, 0x12, 0xec, 0xfd, 0x73, 0xb4, 0x6d, 0x84, 0xfa, 0x06, 0x8b, 0x05, 
0x0b, 0x2d, 0xd6, 0xd6, 0x1f, 0x29, 0x82, 0x9f, 0x19, 0x12, 0x1e, 0xb2, 0x04, 0x8f, 0x7f, 
0x4d, 0xbd, 0x30, 0x2e, 0xe3, 0xe0, 0x88, 0x29, 0xc5, 0x93, 0xd6, 0x6c, 0x1f, 0x29, 0x45, 
0x91, 0xa7, 0x58, 0xcd, 0x05, 0x17, 0xd6, 0x6d, 0xb3, 0xca, 0x66, 0xcc, 0x3c, 0x4a, 0x74, 
0xfd, 0x08, 0x10, 0xa6, 0x99, 0x92, 0x10, 0xd2, 0x85, 0xab, 0x6e, 0x1d, 0x0e, 0x8b, 0x26, 
0x46, 0xd1, 0x6c, 0x84, 0xc0, 0x26, 0x43, 0x59, 0x68, 0xf0, 0x13, 0x1d, 0xfb, 0xe3, 0xd1, 
0xd2, 0xb4, 0x71, 0x9e, 0xf2, 0x59, 0x6a, 0x33, 0x29, 0x79, 0xd2, 0xd7, 0x26, 0xf1, 0xae, 
0x78, 0x9e, 0x1f, 0x0f, 0x3f, 0xe3, 0xe8, 0xd0, 0x27, 0x78, 0x77, 0xf6, 0xac, 0x9c, 0x56, 
0x39, 0x73, 0x8a, 0x6b, 0x2f, 0x34, 0x78, 0xb1, 0x11, 0xdb, 0xa4, 0x5c, 0x80, 0x01, 0x71, 
0x6a, 0xc2, 0xd1, 0x2e, 0x5e, 0x76, 0x28, 0x70, 0x93, 0xae, 0x3e, 0x78, 0xb0, 0x1f, 0x0f, 
0xda, 0xbf, 0xfb, 0x8a, 0x67, 0x65, 0x4f, 0x91, 0xed, 0x49, 0x75, 0x78, 0x62, 0xa2, 0x93, 
0xb5, 0x70, 0x7f, 0x4d, 0x08, 0x4e, 0x79, 0x61, 0xa8, 0x5f, 0x7f, 0xb4, 0x65, 0x9f, 0x91, 
0x54, 0x3a, 0xe8, 0x50, 0x33, 0xd3, 0xd5, 0x8a, 0x7c, 0xf3, 0x9e, 0x8b, 0x77, 0x7b, 0xc6, 
0xc6, 0x0c, 0x45, 0x95, 0x1f, 0xb0, 0xd0, 0x0b, 0x27, 0x4a, 0xfd, 0xc7, 0xf7, 0x0d, 0x5a, 
0x43, 0xc9, 0x7d, 0x35, 0xb0, 0x7d, 0xc4, 0x9c, 0x57, 0x1e, 0x76, 0x0d, 0xf1, 0x95, 0x30, 
0x71, 0xcc, 0xb3, 0x66, 0x3b, 0x63, 0xa8, 0x6c, 0xa3, 0x43, 0xa0, 0x24, 0xcc, 0xb7, 0x53, 
0xfe, 0xfe, 0xbc, 0x6e, 0x60, 0x89, 0xaf, 0x16, 0x21, 0xc8, 0x91, 0x6a, 0x89, 0xce, 0x80, 
0x2c, 0xf1, 0x59, 0xce, 0xc3, 0x60, 0x61, 0x3b, 0x0b, 0x19, 0xfe, 0x99, 0xac, 0x65, 0x90, 
0x15, 0x12, 0x05, 0xac, 0x7e, 0xff, 0x98, 0x7b, 0x66, 0x64, 0x0e, 0x4b, 0x5b, 0xaa, 0x8d, 
0x3b, 0xd2, 0x56, 0xcf, 0x99, 0x39, 0xee, 0x22, 0x81, 0xd0, 0x60, 0x06, 0x66, 0x20, 0x81, 
0x48, 0x3c, 0x6f, 0x3a, 0x77, 0xba, 0xcb, 0x52, 0xac, 0x79, 0x56, 0xaf, 0xe9, 0x16, 0x17, 
0x0a, 0xa3, 0x82, 0x08, 0xd5, 0x3c, 0x97, 0xcb, 0x09, 0xff, 0x7f, 0xf9, 0x4f, 0x60, 0x05, 
0xb9, 0x53, 0x26, 0xaa, 0xb8, 0x50, 0xaa, 0x19, 0x25, 0xae, 0x5f, 0xea, 0x8a, 0xd0, 0x89, 
0x12, 0x80, 0x43, 0x50, 0x24, 0x12, 0x21, 0x14, 0xcd, 0x77, 0xeb, 0x21, 0xcc, 0x5c, 0x09, 
0x64, 0xf3, 0xc7, 0xcb, 0xc5, 0x4b, 0xc3, 0xe7, 0xed, 0xe7, 0x86, 0x2c, 0x1d, 0x8e, 0x19, 
0x52, 0x9b, 0x2a, 0x0c, 0x18, 0x72, 0x0b, 0x1e, 0x1b, 0xb0, 0x0f, 0x42, 0x99, 0x04, 0xae, 
0xd5, 0xb7, 0x89, 0x1a, 0xb9, 0x4f, 0xd6, 0xaf, 0xf3, 0xc9, 0x93, 0x6f, 0xb0, 0x60, 0x83, 
0x6e, 0x6b, 0xd1, 0x5f, 0x3f, 0x1a, 0x83, 0x1e, 0x24, 0x00, 0x87, 0xb5, 0x3e, 0xdb, 0xf9, 
0x4d, 0xa7, 0x16, 0x2e, 0x19, 0x5b, 0x8f, 0x1b, 0x0d, 0x47, 0x72, 0x42, 0xe9, 0x0a, 0x11, 
0x08, 0x2d, 0x88, 0x1c, 0xbc, 0xc7, 0xb4, 0xbe, 0x29, 0x4d, 0x03, 0x5e, 0xec, 0xdf, 0xf3, 
0x3d, 0x2f, 0xe8, 0x1d, 0x9a, 0xd2, 0xd1, 0xab, 0x41, 0x3d, 0x87, 0x11, 0x45, 0xb0, 0x0d, 
0x46, 0xf5, 0xe8, 0x95, 0x62, 0x1c, 0x68, 0xf7, 0xa6, 0x5b, 0x39, 0x4e, 0xbf, 0x47, 0xba, 
0x5d, 0x7f, 0xb7, 0x6a, 0xf4, 0xba, 0x1d, 0x69, 0xf6, 0xa4, 0xe7, 0xe4, 0x6b, 0x3b, 0x0d, 
0x23, 0x16, 0x4a, 0xb2, 0x68, 0xf0, 0xb2, 0x0d, 0x09, 0x17, 0x6a, 0x63, 0x8c, 0x83, 0xd3, 
0xbd, 0x05, 0xc9, 0xf6, 0xf0, 0xa1, 0x31, 0x0b, 0x2c, 0xac, 0x83, 0xac, 0x80, 0x34, 0x32, 
0xb4, 0xec, 0xd0, 0xbc, 0x54, 0x82, 0x9a, 0xc8, 0xf6, 0xa0, 0x7d, 0xc6, 0x79, 0x73, 0xf4, 
0x20, 0x99, 0xf3, 0xb4, 0x01, 0xde, 0x91, 0x27, 0xf2, 0xc0, 0xdc, 0x81, 0x00, 0x4e, 0x7e, 
0x07, 0x99, 0xc8, 0x3a, 0x51, 0xbc, 0x38, 0xd6, 0x8a, 0xa2, 0xde, 0x3b, 0x6a, 0x8c, 0x1a, 
0x7c, 0x81, 0x0f, 0x3a, 0x1f, 0xe4, 0x05, 0x7b, 0x20, 0x35, 0x6b, 0xa5, 0x6a, 0xa7, 0xe7, 
0xbc, 0x9c, 0x20, 0xec, 0x00, 0x15, 0xe2, 0x51, 0xaf, 0x77, 0xeb, 0x29, 0x3c, 0x7d, 0x2e, 
0x00, 0x5c, 0x81, 0x21, 0xfa, 0x35, 0x6f, 0x40, 0xef, 0xfb, 0xd1, 0x3f, 0xcc, 0x9d, 0x55, 
0x53, 0xfb, 0x5a, 0xa5, 0x56, 0x89, 0x0b, 0x52, 0xeb, 0x57, 0x73, 0x4f, 0x1b, 0x67, 0x24, 
0xcb, 0xb8, 0x6a, 0x10, 0x69, 0xd6, 0xfb, 0x52, 0x40, 0xff, 0x20, 0xa5, 0xf3, 0x72, 0xe1, 
0x3d, 0xa4, 0x8c, 0x81, 0x66, 0x16, 0x0d, 0x5d, 0xad, 0xa8, 0x50, 0x25, 0x78, 0x31, 0x77, 
0x0c, 0x57, 0xe4, 0xe9, 0x15, 0x2d, 0xdb, 0x07, 0x87, 0xc8, 0xb0, 0x43, 0xde, 0xfc, 0xfe, 
0xa9, 0xeb, 0xf5, 0xb0, 0xd3, 0x7b, 0xe9, 0x1f, 0x6e, 0xca, 0xe4, 0x03, 0x95, 0xc5, 0xd1, 
0x59, 0x72, 0x63, 0xf0, 0x86, 0x54, 0xe8, 0x16, 0x62, 0x0b, 0x35, 0x29, 0xc2, 0x68, 0xd0, 
0xd6, 0x3e, 0x90, 0x60, 0x57, 0x1d, 0xc9, 0xed, 0x3f, 0xed, 0xb0, 0x2f, 0x7e, 0x97, 0x02, 
0x51, 0xec, 0xee, 0x6f, 0x82, 0x74, 0x76, 0x7f, 0xfb, 0xd6, 0xc4, 0xc3, 0xdd, 0xe8, 0xb1, 
0x60, 0xfc, 0xc6, 0xb9, 0x0d, 0x6a, 0x33, 0x78, 0xc6, 0xc1, 0xbf, 0x86, 0x2c, 0x50, 0xcc, 
0x9a, 0x70, 0x8e, 0x7b, 0xec, 0xab, 0x95, 0xac, 0x53, 0xa0, 0x4b, 0x07, 0x88, 0xaf, 0x42, 
0xed, 0x19, 0x8d, 0xf6, 0x32, 0x17, 0x48, 0x47, 0x1d, 0x41, 0x6f, 0xfe, 0x2e, 0xa7, 0x8f, 
0x4b, 0xa0, 0x51, 0xf3, 0xbf, 0x02, 0x0a, 0x48, 0x58, 0xf7, 0xa1, 0x6d, 0xea, 0xa5, 0x13, 
0x5a, 0x5b, 0xea, 0x0c, 0x9e, 0x52, 0x4f, 0x9e, 0xb9, 0x71, 0x7f, 0x23, 0x83, 0xda, 0x1b, 
0x86, 0x9a, 0x41, 0x29, 0xda, 0x70, 0xe7, 0x64, 0xa1, 0x7b, 0xd5, 0x0a, 0x22, 0x0d, 0x5c, 
0x40, 0xc4, 0x81, 0x07, 0x25, 0x35, 0x4a, 0x1c, 0x10, 0xdb, 0x45, 0x0a, 0xff, 0x36, 0xd4, 
0xe0, 0xeb, 0x5f, 0x68, 0xd6, 0x67, 0xc6, 0xd0, 0x8b, 0x76, 0x1a, 0x7d, 0x59, 0x42, 0xa1, 
0xcb, 0x96, 0x4d, 0x84, 0x09, 0x9a, 0x3d, 0xe0, 0x52, 0x85, 0x6e, 0x48, 0x90, 0x85, 0x2a, 
0x63, 0xb2, 0x69, 0xd2, 0x00, 0x43, 0x31, 0x37, 0xb3, 0x52, 0xaf, 0x62, 0xfa, 0xc1, 0xe0, 
0x03, 0xfb, 0x62, 0xaa, 0x88, 0xc9, 0xb2, 0x2c, 0xd5, 0xa8, 0xf5, 0xa5, 0x4c, 0x12, 0x59, 
0x4e, 0x06, 0x5e, 0x9b, 0x15, 0x66, 0x11, 0xb2, 0x27, 0x92, 0xdc, 0x98, 0x59, 0xde, 0xdf, 
0xfa, 0x9a, 0x32, 0x2e, 0xc0, 0x5d, 0x3c, 0x33, 0x41, 0x6d, 0xaf, 0xb2, 0x25, 0x23, 0x14, 
0xa5, 0x7b, 0xc7, 0x9b, 0x68, 0xf3, 0xda, 0xeb, 0xe3, 0xa9, 0xe2, 0x6f, 0x0e, 0x1d, 0x1c, 
0xba, 0x55, 0xb6, 0x34, 0x6a, 0x93, 0x1f, 0x1f, 0xb8, 0x34, 0xc8, 0x84, 0x08, 0xb1, 0x6b, 
0x6a, 0x28, 0x74, 0x74, 0xe5, 0xeb, 0x75, 0xe9, 0x7c, 0xd8, 0xba, 0xd8, 0x42, 0xa5, 0xee, 
0x1f, 0x80, 0xd9, 0x96, 0xb2, 0x2e, 0xe7, 0xbf, 0xba, 0xeb, 0xd1, 0x69, 0xbb, 0x8f, 0xfd, 
0x5a, 0x63, 0x8f, 0x39, 0x7f, 0xdf, 0x1d, 0x37, 0xd2, 0x18, 0x35, 0x9d, 0xb6, 0xcc, 0xe4, 
0x27, 0x81, 0x89, 0x38, 0x38, 0x68, 0x33, 0xe7, 0x78, 0xd8, 0x76, 0xf5, 0xee, 0xd0, 0x4a, 
0x07, 0x69, 0x19, 0x7a, 0xad, 0x18, 0xb1, 0x94, 0x61, 0x45, 0x53, 0xa2, 0x48, 0xda, 0x96, 
0x4a, 0xf9, 0xee, 0x94, 0x2a, 0x1f, 0x6e, 0x18, 0x3c, 0x92, 0x46, 0xd1, 0x1a, 0x28, 0x18, 
0x32, 0x1f, 0x3a, 0x45, 0xbe, 0x04, 0x35, 0x92, 0xe5, 0xa3, 0xcb, 0xb5, 0x2e, 0x32, 0x43, 
0xac, 0x65, 0x17, 0x89, 0x99, 0x15, 0x03, 0x9e, 0xb1, 0x23, 0x2f, 0xed, 0x76, 0x4d, 0xd8, 
0xac, 0x21, 0x40, 0xc4, 0x99, 0x4e, 0x65, 0x71, 0x2c, 0xb3, 0x45, 0xab, 0xfb, 0xe7, 0x72, 
0x39, 0x56, 0x30, 0x6d, 0xfb, 0x74, 0xeb, 0x99, 0xf3, 0xcd, 0x57, 0x5c, 0x78, 0x75, 0xe9, 
0x8d, 0xc3, 0xa2, 0xfb, 0x5d, 0xe0, 0x90, 0xc5, 0x55, 0xad, 0x91, 0x53, 0x4e, 0x9e, 0xbd, 
0x8c, 0x49, 0xa4, 0xa4, 0x69, 0x10, 0x0c, 0xc5, 0x76, 0xe9, 0x25, 0x86, 0x8d, 0x66, 0x23, 
0xa8, 0xdb, 0x5c, 0xe8, 0xd9, 0x30, 0xe1, 0x15, 0x7b, 0xc0, 0x99, 0x0f, 0x03, 0xec, 0xaa, 
0x12, 0xef, 0xce, 0xd4, 0xea, 0x55, 0x5c, 0x08, 0x86, 0xf4, 0xf4, 0xb0, 0x83, 0x42, 0x95, 
0x37, 0xb6, 0x38, 0xe0, 0x2b, 0x54, 0x89, 0xbd, 0x4e, 0x20, 0x9d, 0x3f, 0xc3, 0x4b, 0xb7, 
0xec, 0xfa, 0x5a, 0x14, 0x03, 0xcb, 0x64, 0xc8, 0x34, 0x4a, 0x4b, 0x6e, 0xf8, 0x6e, 0x56, 
0xf6, 0xdd, 0x5f, 0xa1, 0x24, 0xe2, 0xd4, 0xd0, 0x82, 0x64, 0x1f, 0x8e, 0x9b, 0xfa, 0xb4, 
0xcb, 0xdb, 0x0a, 0xe8, 0x15, 0xfc, 0x15, 0xab, 0x4b, 0x18, 0xbf, 0xd4, 0x42, 0x14, 0x48, 
0x82, 0x85, 0xdd, 0xeb, 0x49, 0x1b, 0x0b, 0x0b, 0x05, 0xe9, 0xb4, 0xa1, 0x33, 0x0a, 0x5d, 
0x0e, 0x6c, 0x4b, 0xc0, 0xd6, 0x6c, 0x7c, 0xfb, 0x69, 0x0b, 0x53, 0x19, 0xe4, 0xf3, 0x35, 
0xfc, 0xbe, 0xa1, 0x34, 0x02, 0x09, 0x4f, 0x74, 0x86, 0x92, 0xcd, 0x5d, 0x1a, 0xc1, 0x27, 
0x0c, 0xf2, 0xc5, 0xcf, 0xdd, 0x23, 0x93, 0x02, 0xbd, 0x41, 0x5e, 0x42, 0xf0, 0xa0, 0x9d, 
0x0c, 0x72, 0xc8, 0xec, 0x32, 0x0a, 0x8a, 0xfd, 0x3d, 0x5a, 0x41, 0x27, 0x0c, 0x88, 0x59, 
0xad, 0x94, 0x2e, 0xef, 0x5d, 0x8f, 0xc7, 0xdf, 0x66, 0xe4, 0xdd, 0x56, 0x6c, 0x7b, 0xca, 
0x55, 0x81, 0xae, 0xae, 0x5c, 0x1b, 0x1a, 0xab, 0xae, 0x99, 0x8d, 0xcc, 0x42, 0x97, 0x59, 
0xf4, 0x14, 0x3f, 0x75, 0xc6, 0xd1, 0x88, 0xba, 0xaa, 0x84, 0x4a, 0xd0, 0x34, 0x08, 0x3b, 
0x7d, 0xdb, 0x15, 0x06, 0xb0, 0x5c, 0xbd, 0x40, 0xf5, 0xa8, 0xec, 0xae, 0x36, 0x40, 0xdd, 
0x90, 0x1c, 0x3e, 0x0d, 0x7e, 0x73, 0xc7, 0xc2, 0xc5, 0x6a, 0xff, 0x52, 0x05, 0x7f, 0xbe, 
0xd0, 0x92, 0xfd, 0xb3, 0x6f, 0xff, 0x5d, 0xb7, 0x97, 0x64, 0x73, 0x7b, 0xca, 0xd1, 0x98, 
0x24, 0x6b, 0x0b, 0x01, 0x68, 0xdd, 0x27, 0x85, 0x85, 0xb5, 0x83, 0xc1, 0xe0, 0x50, 0x64, 
0xc7, 0xaf, 0xf1, 0xc6, 0x4d, 0xb1, 0xef, 0xc9, 0xb4, 0x0a, 0x6d, 0x65, 0xf3, 0x47, 0xcc, 
0xa3, 0x02, 0x21, 0x0c, 0xbe, 0x22, 0x29, 0x05, 0xcf, 0x5f, 0xe8, 0x94, 0x6c, 0xe5, 0xdc, 
0xc4, 0xdf, 0xbe, 0x3e, 0xa8, 0xb4, 0x18, 0xb0, 0x99, 0xb8, 0x6f, 0xff, 0x5d, 0xb9, 0xfd, 
0x3b, 0x5d, 0x16, 0xbf, 0x3e, 0xd8, 0xb3, 0xd8, 0x08, 0x34, 0xf6, 0x47, 0x35, 0x5b, 0x72, 
0x1a, 0x33, 0xad, 0x52, 0x5d, 0xb8, 0xd0, 0x77, 0xc6, 0xab, 0xba, 0x55, 0x09, 0x5f, 0x02, 
0xf8, 0xd4, 0x5f, 0x53, 0x06, 0x91, 0xcd, 0x74, 0x42, 0xae, 0x54, 0x91, 0x81, 0x62, 0x13, 
0x6f, 0xd8, 0xa9, 0x77, 0xc3, 0x6c, 0xcb, 0xf1, 0x29, 0x5a, 0xcc, 0xda, 0x35, 0xbd, 0x52, 
0x23, 0xbe, 0x59, 0xeb, 0x12, 0x6d, 0xb7, 0x53, 0xee, 0xfc, 0xb4, 0x1b, 0x13, 0x5e, 0xba, 
0x16, 0x7c, 0xc5, 0xf3, 0xe3, 0x6d, 0x07, 0x78, 0xf5, 0x2b, 0x21, 0x05, 0x88, 0x4c, 0xc0, 
0xa1, 0xe3, 0x36, 0x10, 0xf8, 0x1b, 0xd8, 0x17, 0xfb, 0x6a, 0x4e, 0xd8, 0xb3, 0x47, 0x2d, 
0x99, 0xbd, 0xbb, 0x5d, 0x37, 0x7d, 0xba, 0xf1, 0xe1, 0x7c, 0xc0, 0xc5, 0x54, 0x62, 0x7f, 
0xcf, 0x5a, 0x4a, 0x93, 0xcc, 0xf1, 0x1b, 0x34, 0xc8, 0xa6, 0x05, 0x4c, 0x55, 0x8b, 0x54, 
0x84, 0xd5, 0x77, 0xeb, 0xc0, 0x6d, 0x3a, 0x29, 0xbd, 0x75, 0x61, 0x09, 0x9a, 0x2c, 0xbb, 
0xf7, 0x18, 0x79, 0x34, 0x90, 0x24, 0xa5, 0x81, 0x70, 0x87, 0xc5, 0x02, 0x7c, 0xba, 0xd4, 
0x5e, 0x14, 0x8e, 0xe4, 0xed, 0xa2, 0x61, 0x6a, 0xb9, 0x6e, 0xb5, 0x4a, 0xb9, 0x01, 0x46, 
0xf4, 0xcf, 0xbc, 0x09, 0x2f, 0x27, 0x4b, 0xbd, 0x86, 0x7a, 0x10, 0xe1, 0xd4, 0xc8, 0xd9, 
0x20, 0x8d, 0x8a, 0x63, 0x00, 0x63, 0x44, 0xeb, 0x54, 0x0b, 0x75, 0x49, 0x10, 0xa2, 0xa7, 
0xad, 0xb9, 0xd1, 0x01, 0x80, 0x63, 0x25, 0xc8, 0x12, 0xa6, 0xce, 0x1e, 0xbe, 0xfe, 0x7e, 
0x5f, 0x3c, 0xdb, 0x34, 0xea, 0x37, 0xec, 0x3b, 0xd5, 0x28, 0xd2, 0x07, 0x8c, 0x9a, 0xb6, 
0xee, 0x5e, 0x3e, 0xdf, 0x1d, 0x99, 0xb0, 0xe2, 0x46, 0xef, 0x5c, 0x1b, 0xb4, 0xea, 0x56, 
0x2e, 0xde, 0x1f, 0x9d, 0xb8, 0xd3, 0x24, 0xab, 0xd4, 0x2a, 0xd6, 0x2e, 0xde, 0x1f, 0x9d, 
0xb8, 0xf2, 0x66, 0x2f, 0xbd, 0xf8, 0x72, 0x66, 0x4e, 0x1e, 0x9f, 0x9d, 0xb8, 0xf2, 0x47, 
0x0c, 0x9a, 0xb6, 0xee, 0x3f, 0xfc, 0x7a, 0x57, 0x0d, 0x79, 0x70, 0x62, 0x27, 0xad, 0xb9, 
0xd1, 0x01, 0x61, 0x40, 0x02, 0x67, 0x2d, 0xd8, 0x32, 0xe6, 0x2f, 0xdc, 0x3a, 0xd7, 0x2c, 
0xbb, 0xf4, 0x4b, 0xf5, 0x49, 0xf1, 0x60, 0x23, 0xc4, 0x0a, 0x77, 0x4d, 0xf9, 0x51, 0x01, 
0x80, 0x63, 0x25, 0xa9, 0xb1, 0xe0, 0x42, 0xe7, 0x4c, 0x1a, 0x97, 0xac, 0xbb, 0xf4, 0x6a, 
0x37, 0xcd, 0x18, 0xb2, 0xe6, 0x2f, 0xdc, 0x1b, 0x95, 0xa8, 0xd2, 0x07, 0x6d, 0x58, 0x32, 
0xe6, 0x4e, 0x1e, 0x9f, 0xbc, 0xfa, 0x57, 0x0d, 0x79, 0x51, 0x20, 0xc2, 0x06, 0x6f, 0x5c, 
0x1b, 0x95, 0xa8, 0xb3, 0xc5, 0xe9, 0x31, 0xe0, 0x23, 0xc4, 0x0a, 0x77, 0x4d, 0x18, 0x93, 
0x85, 0x69, 0x31, 0xc1, 0xe1, 0x21, 0xc0, 0xe3, 0x44, 0x0a, 0x77, 0x6c, 0x5a, 0x17, 0x8d, 
0x98, 0x93, 0xa4, 0xab, 0xd4, 0x2a, 0xb7, 0xec, 0x5a, 0x17, 0xac, 0xbb, 0xf4, 0x4b, 0x14, 
0xaa, 0xb7, 0xec, 0x3b, 0xd5, 0x28, 0xb3, 0xc5, 0xe9, 0x31, 0xc1, 0x00, 0x82, 0x67, 0x4c, 
0xfb, 0x55, 0x28, 0xd2, 0x26, 0xaf, 0xbd, 0xd9, 0x11, 0x81, 0x61, 0x21, 0xa1, 0xa1, 0xc0, 
0x02, 0x86, 0x6f, 0x5c, 0x1b, 0xb4, 0xcb, 0x14, 0x8b, 0x94, 0xaa, 0xd6, 0x2e, 0xbf, 0xdd, 
0x19, 0xb0, 0xe2, 0x46, 0x0e, 0x7f, 0x7c, 0x5b, 0x15, 0x89, 0x90, 0x83, 0x84, 0x6b, 0x54, 
0x0b, 0x75, 0x68, 0x52, 0x07, 0x6d, 0x58, 0x32, 0xc7, 0xed, 0x58, 0x32, 0xc7, 0xed, 0x58, 
0x32, 0xe6, 0x4e, 0xff, 0x7c, 0x7a, 0x76, 0x6e, 0x3f, 0xdd, 0x38, 0xd3, 0x05, 0x88, 0x92, 
0xa6, 0xaf, 0xdc, 0x1b, 0xb4, 0xcb, 0xf5, 0x68, 0x52, 0x07, 0x8c, 0x7b, 0x55, 0x09, 0x90, 
0x83, 0x84, 0x6b, 0x54, 0x2a, 0xb7, 0xec, 0x3b, 0xd5, 0x09, 0x90, 0xa2, 0xc6, 0x0e, 0x7f, 
0x7c, 0x7a, 0x57, 0x0d, 0x98, 0xb2, 0xc7, 0xed, 0x58, 0x32, 0xc7, 0x0c, 0x7b, 0x74, 0x4b, 
0x14, 0x8b, 0x94, 0xaa, 0xb7, 0xcd, 0x18, 0x93, 0xa4, 0xca, 0x16, 0xae, 0xbf, 0xdd, 0x19, 
0xb0, 0xe2, 0x46, 0x0e, 0x7f, 0x5d, 0x19, 0x91, 0x81, 0x80, 0x63, 0x44, 0xeb, 0x35, 0xc9, 
0x10, 0x83, 0x65, 0x48, 0x12, 0xa6, 0xce, 0x1e, 0x9f, 0xbc, 0xdb, 0x15, 0x89, 0x71, 0x60, 
0x23, 0xc4, 0xeb, 0x54, 0x2a, 0xb7, 0xec, 0x5a, 0x36, 0xcf, 0x81, 0x10, 0xac, 0x74 };

//Real start here--------------------------------------------------

//Network includes
#include "WiFi.h"
#include "esp_wifi.h"
#include "ESPAsyncWebServer.h"
#include "ArduinoJson.h"

//Sensor includes
#include "PMW3360.h" //Mus bruker SPI
#include "Adafruit_Sensor.h"
#include "Adafruit_BNO055.h" //IMU bruker I2C
#include "Wire.h"
#include "utility/imumaths.h"
#include "SPI.h"

bool performStartup(void);
void GetData();

typedef struct {
  float x;
  float y;
  //float angle;
} coordinate_t;

//Network things
const char* ssid = "ESP32-AP";
const char* password = "123456789";
IPAddress IP;
AsyncWebServer server(80); // Create AsyncWebServer object on port 80

//Sensors
Adafruit_BNO055 IMU = Adafruit_BNO055(-1, 0x28);
#define Motion_Interrupt_Pin 28 //Interrupt pin for Mouse Sensor
#define ncs 5  //SPI Chip Select
bool BNO = false;
bool PMW = false;

byte initComplete=0;
volatile int16_t xydat[2];
volatile byte movementflag=0;
byte testctr=0;
unsigned long currTime;
unsigned long timer;
unsigned long pollTimer;
bool active = true;
#define SampleDelay 10000 //Micro seconds
int cnt = 1;
float startHeading;

//Data
double x[1000] = {0};
double y[1000] = {0};
double Heading[1000] = {0};

coordinate_t coordinate;
coordinate_t dCoordinate;

void setup() {
  
  Serial.begin(2000000);

  //startServer();
  //Serial.println(IP);

  if(!IMU.begin()){
    Serial.println("BNO055 failed");
  } else {
    Serial.println("BNO055 connected");
    BNO = true;  
  }
  
  if (performStartup()){
     Serial.println("PMW initialization was successful");
     PMW = true;  
  } else {
     Serial.println("PMW initialization failed");
  }  
  
}

void loop() { //Real one
  unsigned long Time = micros();  
  
  if (active){
   
    GetData();
    
    if (cnt >= 999){
      cnt = 0;
      //active = true;
    }
    
    //delay(1);

    while (micros() < Time + SampleDelay){}    

    //PostData();
    
    }
}

void GetData(){
  float rot;
  
  //Read IMU
  if (BNO){
    //uint8_t system, gyro, accel, mag = 0;
    //IMU.getCalibration(&system, &gyro, &accel, &mag);
    
    imu::Vector<3> euler = IMU.getVector(Adafruit_BNO055::VECTOR_EULER);
    rot = euler.x();
    Heading[cnt] = rot; //Legg til dataen i vector;
    
    /*euler = IMU.getVector(Adafruit_BNO055::VECTOR_LINEARACCEL).x();
    acclX[cnt] = euler.x();
    acclY[cnt] = euler.y();
    euler = IMU.getVector(Adafruit_BNO055::VECTOR_GYROSCOPE);
    angVel[cnt] = euler.z();*/
    }

  if (PMW){
    UpdatePointer();
   
    dCoordinate.x = xydat[0]*cos(-DEG_TO_RAD*(rot - startHeading))+xydat[1]*sin(-DEG_TO_RAD*(rot - startHeading));
    dCoordinate.y = xydat[1]*cos(-DEG_TO_RAD*(rot - startHeading))-xydat[0]*sin(-DEG_TO_RAD*(rot - startHeading));

    coordinate.x = coordinate.x + dCoordinate.x; //Les og prosseser x-data
    coordinate.y = coordinate.y + dCoordinate.y; //Les og prosseser y-data
    
    Serial.print(coordinate.x);
    Serial.print(",");
    Serial.println(coordinate.y);
  }
  
  cnt++;
}

void PostData() {
  Serial.println("Throw done! Here is Data");
  for(int i = 0; i < 100; i++){
    Serial.print("step: ");
    Serial.print(i * 10);
    Serial.print("x: ");  
    Serial.print(x[i * 10]);
    Serial.print("y: ");  
    Serial.println(y[i * 10]);
  }  
}

void Calibrate(){
  delay(1000); //Lets things stabilize
  
  //Clear previous data
  for (int i = 0; i < 1000; i++){
    x[i] = 0;
    x[i] = 0;  
  }  
  cnt = 0;

  //Find Heading
  imu::Vector<3> euler = IMU.getVector(Adafruit_BNO055::VECTOR_EULER);
  startHeading = euler.x();
}


//Wifi-----------------------------------------
void startServer(){
  //Init server
  WiFi.softAP(ssid, password);
  IP = WiFi.softAPIP();

  //Attach functions to queries
  server.onNotFound(notFound);
  server.on("/data.json", HTTP_GET, [](AsyncWebServerRequest *request){sendData(request, GenerateData());});
  //server.on("/state", HTTP_GET, [](AsyncWebServerRequest *request){sendData(request, GenerateResponse());});
  server.on("/play", HTTP_GET, [] (AsyncWebServerRequest *request){StartPlay(request);});

  //Start
  server.begin();
}

void notFound(AsyncWebServerRequest *request){
  request->send(404, "application/json", "Invalid data path"); 
}

void StartPlay(AsyncWebServerRequest *request){
  if (PMW && BNO){
    active = true;
    Calibrate();
    request->send(200, "application/json", "1");
    Serial.println("Start throw!");  
  }  
  else{
    request->send(200, "application/json", "0");  
  }
}

void sendData(AsyncWebServerRequest *request, String Data){
  Serial.println("Data request get, sending...");
  request->send(200, "application/json", Data.c_str());
  //Serial.println(Data);
}

String GenerateData(){
  StaticJsonDocument<2000> doc;
  
  JsonArray xVal = doc.createNestedArray("rotation");
  for (int a = 0; a < 10; a++){
    for (int i = 0; i<10; i++){
      xVal.add(i);  
    }
  }

  String body;
  serializeJsonPretty(doc, body);  
  return body;
}


//Mouse Sensor----------------------------------
void adns_com_begin(){
  digitalWrite(ncs, LOW);
}

void adns_com_end(){
  digitalWrite(ncs, HIGH);
}

byte adns_read_reg(byte reg_addr){
  adns_com_begin();
  
  // send adress of the register, with MSBit = 0 to indicate it's a read
  SPI.transfer(reg_addr & 0x7f );
  delayMicroseconds(100); // tSRAD
  // read data
  byte data = SPI.transfer(0);
  
  delayMicroseconds(1); // tSCLK-NCS for read operation is 120ns
  adns_com_end();
  delayMicroseconds(19); //  tSRW/tSRR (=20us) minus tSCLK-NCS

  return data;
}

void adns_write_reg(byte reg_addr, byte data){
  adns_com_begin();
  
  //send adress of the register, with MSBit = 1 to indicate it's a write
  SPI.transfer(reg_addr | 0x80 );
  //sent data
  SPI.transfer(data);
  
  delayMicroseconds(20); // tSCLK-NCS for write operation
  adns_com_end();
  delayMicroseconds(100); // tSWW/tSWR (=120us) minus tSCLK-NCS. Could be shortened, but is looks like a safe lower bound 
}

void adns_upload_firmware(){
  // send the firmware to the chip, cf p.18 of the datasheet
  Serial.println("Uploading firmware...");

  //Write 0 to Rest_En bit of Config2 register to disable Rest mode.
  adns_write_reg(Config2, 0x20);
  
  // write 0x1d in SROM_enable reg for initializing
  adns_write_reg(SROM_Enable, 0x1d); 
  
  // wait for more than one frame period
  delay(10); // assume that the frame rate is as low as 100fps... even if it should never be that low
  
  // write 0x18 to SROM_enable to start SROM download
  adns_write_reg(SROM_Enable, 0x18); 
  
  // write the SROM file (=firmware data) 
  adns_com_begin();
  SPI.transfer(SROM_Load_Burst | 0x80); // write burst destination adress
  delayMicroseconds(15);
  
  // send all bytes of the firmware
  unsigned char c;
  for(int i = 0; i < firmware_length; i++){ 
    c = (unsigned char)pgm_read_byte(firmware_data + i);
    SPI.transfer(c);
    delayMicroseconds(15);
  }

  //Read the SROM_ID register to verify the ID before any other register reads or writes.
  adns_read_reg(SROM_ID);

  //Write 0x00 to Config2 register for wired mouse or 0x20 for wireless mouse design.
  adns_write_reg(Config2, 0x00);

  // set initial CPI resolution
  adns_write_reg(Config1, 0x15);
  
  adns_com_end();
}


bool performStartup(void){
  pinMode (ncs, OUTPUT);
  
  pinMode(Motion_Interrupt_Pin, INPUT);
  digitalWrite(Motion_Interrupt_Pin, HIGH);
  attachInterrupt(9, UpdatePointer, FALLING);

  SPI.begin();
  SPI.setDataMode(SPI_MODE3);
  SPI.setBitOrder(MSBFIRST);
  SPI.setClockDivider(SPI_CLOCK_DIV128);
 
  adns_com_end(); // ensure that the serial port is reset
  adns_com_begin(); // ensure that the serial port is reset
  adns_com_end(); // ensure that the serial port is reset
  adns_write_reg(Power_Up_Reset, 0x5a); // force reset
  delay(50); // wait for it to reboot
  
  //upload the firmware
  adns_upload_firmware();
  
  delay(100);

  initComplete=9;

  if (adns_read_reg(Product_ID) != 0){
    return true;  
  }
  else{
    return false;  
  }
}

void UpdatePointer(){
  if(initComplete==9){
    
    //write 0x01 to Motion register and read from it to freeze the motion values and make them available
    adns_write_reg(Motion, 0x01);
    adns_read_reg(Motion);

    xydat[0] = (uint16_t)((adns_read_reg(Delta_X_H) << 8) + adns_read_reg(Delta_X_L));
    xydat[1] = (uint16_t)((adns_read_reg(Delta_Y_H) << 8) + adns_read_reg(Delta_Y_L));
    
    //movementflag=1;
    }
  }

int convTwosComp(int b){
  //Convert from 2's complement
  if(b & 0x80){
    b = -1 * ((b ^ 0xff) + 1);
    }
  return b;
}
