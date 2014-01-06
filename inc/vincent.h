#ifndef VINCENT_H
#define VINCENT_H


char vincent_data[128][8] = {
// rotated for OLED
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
{ 0x00, 0x7C, 0x82, 0xAA, 0xC2, 0xAA, 0x82, 0x7C },
{ 0x00, 0x7C, 0xFE, 0xD6, 0xBE, 0xD6, 0xFE, 0x7C },
{ 0x00, 0x1C, 0x3E, 0x7C, 0xF8, 0x7C, 0x3E, 0x1C },
{ 0x00, 0x10, 0x38, 0x7C, 0xFE, 0x7C, 0x38, 0x10 },
{ 0x00, 0x10, 0x38, 0x94, 0xFE, 0x94, 0x38, 0x10 },
{ 0x00, 0x10, 0x38, 0xBC, 0xFE, 0xBC, 0x38, 0x10 },
{ 0x00, 0x00, 0x38, 0x7C, 0x7C, 0x7C, 0x38, 0x00 },
{ 0xFF, 0xFF, 0xC7, 0x83, 0x83, 0x83, 0xC7, 0xFF },
{ 0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00 },
{ 0xFF, 0xFF, 0xC7, 0xBB, 0xBB, 0xBB, 0xC7, 0xFF },
{ 0x00, 0x60, 0x90, 0x90, 0x72, 0x0A, 0x06, 0x1E },
{ 0x00, 0x00, 0x64, 0x94, 0x9E, 0x94, 0x64, 0x00 },
{ 0x00, 0xC0, 0xE0, 0x7E, 0x02, 0x04, 0x00, 0x00 },
{ 0x00, 0xC0, 0xE0, 0x7C, 0x06, 0x62, 0x72, 0x3E },
{ 0x00, 0x10, 0x54, 0x38, 0xEE, 0x38, 0x54, 0x10 },
{ 0x00, 0xFE, 0xFE, 0x7C, 0x7C, 0x38, 0x38, 0x10 },
{ 0x00, 0x10, 0x38, 0x38, 0x7C, 0x7C, 0xFE, 0xFE },
{ 0x00, 0x00, 0x28, 0x44, 0xFE, 0x44, 0x28, 0x00 },
{ 0x00, 0xDE, 0xDE, 0x00, 0x00, 0xDE, 0xDE, 0x00 },
{ 0x00, 0x0C, 0x1E, 0x12, 0x12, 0xFE, 0x02, 0xFE },
{ 0x00, 0x48, 0x94, 0xA4, 0x4A, 0x52, 0x24, 0x00 },
{ 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0 },
{ 0x00, 0x00, 0xA8, 0xC4, 0xFE, 0xC4, 0xA8, 0x00 },
{ 0x00, 0x10, 0x18, 0xFC, 0xFE, 0xFC, 0x18, 0x10 },
{ 0x00, 0x10, 0x30, 0x7E, 0xFE, 0x7E, 0x30, 0x10 },
{ 0x00, 0x38, 0x38, 0x38, 0xFE, 0x7C, 0x38, 0x10 },
{ 0x00, 0x10, 0x38, 0x7C, 0xFE, 0x38, 0x38, 0x38 },
{ 0x00, 0xF8, 0xF8, 0xF8, 0xC0, 0xC0, 0xC0, 0xC0 },
{ 0x00, 0x10, 0x38, 0x54, 0x10, 0x54, 0x38, 0x10 },
{ 0x00, 0xC0, 0xF0, 0xFC, 0xFE, 0xFC, 0xF0, 0xC0 },
{ 0x00, 0x06, 0x1E, 0x7E, 0xFE, 0x7E, 0x1E, 0x06 },
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
{ 0x00, 0x00, 0x0C, 0xBE, 0xBE, 0x0C, 0x00, 0x00 },
{ 0x00, 0x00, 0x06, 0x0E, 0x00, 0x0E, 0x06, 0x00 },
{ 0x00, 0x28, 0xFE, 0xFE, 0x28, 0xFE, 0xFE, 0x28 },
{ 0x00, 0x00, 0x48, 0x54, 0xD6, 0x54, 0x24, 0x00 },
{ 0x00, 0x46, 0x66, 0x30, 0x18, 0xCC, 0xC4, 0x00 },
{ 0x00, 0x64, 0xFE, 0x8A, 0x9A, 0xEE, 0xC4, 0xA0 },
{ 0x00, 0x00, 0x10, 0x1E, 0x0E, 0x00, 0x00, 0x00 },
{ 0x00, 0x82, 0xC6, 0x7C, 0x38, 0x00, 0x00, 0x00 },
{ 0x00, 0x00, 0x00, 0x38, 0x7C, 0xC6, 0x82, 0x00 },
{ 0x00, 0x10, 0x54, 0x7C, 0x38, 0x7C, 0x54, 0x10 },
{ 0x00, 0x00, 0x10, 0x10, 0x7C, 0x10, 0x10, 0x00 },
{ 0x00, 0x80, 0xF0, 0x70, 0x00, 0x00, 0x00, 0x00 },
{ 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00 },
{ 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00 },
{ 0x00, 0x40, 0x60, 0x30, 0x18, 0x0C, 0x04, 0x00 },
{ 0x00, 0x7C, 0xFE, 0x92, 0x8A, 0xFE, 0x7C, 0x00 },
{ 0x00, 0x80, 0x88, 0xFE, 0xFE, 0x80, 0x80, 0x00 },
{ 0x00, 0xC4, 0xE6, 0xA2, 0x92, 0x9E, 0x8C, 0x00 },
{ 0x00, 0x44, 0xC6, 0x92, 0x92, 0xFE, 0x6C, 0x00 },
{ 0x00, 0x30, 0x28, 0x24, 0xFE, 0xFE, 0x20, 0x00 },
{ 0x00, 0x4E, 0xCE, 0x8A, 0x8A, 0xFA, 0x72, 0x00 },
{ 0x00, 0x7C, 0xFE, 0x92, 0x92, 0xF6, 0x64, 0x00 },
{ 0x00, 0x06, 0x06, 0xE2, 0xFA, 0x1E, 0x06, 0x00 },
{ 0x00, 0x6C, 0xFE, 0x92, 0x92, 0xFE, 0x6C, 0x00 },
{ 0x00, 0x4C, 0xDE, 0x92, 0x92, 0xFE, 0x7C, 0x00 },
{ 0x00, 0x00, 0x00, 0x6C, 0x6C, 0x00, 0x00, 0x00 },
{ 0x00, 0x00, 0x80, 0xEC, 0x6C, 0x00, 0x00, 0x00 },
{ 0x00, 0x00, 0x10, 0x38, 0x6C, 0xC6, 0x82, 0x00 },
{ 0x00, 0x00, 0x28, 0x28, 0x28, 0x28, 0x00, 0x00 },
{ 0x00, 0x82, 0xC6, 0x6C, 0x38, 0x10, 0x00, 0x00 },
{ 0x00, 0x04, 0x06, 0xB2, 0xB2, 0x1E, 0x0C, 0x00 },
{ 0x00, 0x3C, 0x42, 0x5A, 0x5A, 0x4C, 0x20, 0x00 },
{ 0x00, 0xFC, 0xFE, 0x12, 0x12, 0xFE, 0xFC, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x92, 0x92, 0xFE, 0x6C, 0x00 },
{ 0x00, 0x7C, 0xFE, 0x82, 0x82, 0xC6, 0x44, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x82, 0x82, 0xFE, 0x7C, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x92, 0x92, 0x92, 0x82, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x12, 0x12, 0x12, 0x02, 0x00 },
{ 0x00, 0x7C, 0xFE, 0x82, 0xA2, 0xE6, 0x64, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x10, 0x10, 0xFE, 0xFE, 0x00 },
{ 0x00, 0x00, 0x82, 0xFE, 0xFE, 0x82, 0x00, 0x00 },
{ 0x00, 0x60, 0xE0, 0x82, 0xFE, 0x7E, 0x02, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x38, 0x6C, 0xC6, 0x82, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x0C, 0x18, 0x0C, 0xFE, 0xFE },
{ 0x00, 0xFE, 0xFE, 0x0C, 0x18, 0x30, 0xFE, 0xFE },
{ 0x00, 0x7C, 0xFE, 0x82, 0x82, 0xFE, 0x7C, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x22, 0x22, 0x3E, 0x1C, 0x00 },
{ 0x00, 0x3C, 0x7E, 0x42, 0x62, 0xFE, 0xBC, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x32, 0x72, 0xDE, 0x8C, 0x00 },
{ 0x00, 0x4C, 0xDE, 0x92, 0x92, 0xF6, 0x64, 0x00 },
{ 0x00, 0x06, 0x02, 0xFE, 0xFE, 0x02, 0x06, 0x00 },
{ 0x00, 0x7E, 0xFE, 0x80, 0x80, 0xFE, 0xFE, 0x00 },
{ 0x00, 0x3E, 0x7E, 0xC0, 0xC0, 0x7E, 0x3E, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x60, 0x30, 0x60, 0xFE, 0xFE },
{ 0x00, 0xC6, 0xEE, 0x38, 0x10, 0x38, 0xEE, 0xC6 },
{ 0x00, 0x0E, 0x1E, 0xF0, 0xF0, 0x1E, 0x0E, 0x00 },
{ 0x00, 0xC2, 0xE2, 0xB2, 0x9A, 0x8E, 0x86, 0x00 },
{ 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x82, 0x82, 0x00 },
{ 0x00, 0x04, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00 },
{ 0x00, 0x82, 0x82, 0xFE, 0xFE, 0x00, 0x00, 0x00 },
{ 0x00, 0x10, 0x08, 0x04, 0x02, 0x04, 0x08, 0x10 },
{ 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80 },
{ 0x00, 0x00, 0x00, 0x00, 0x06, 0x0E, 0x08, 0x00 },
{ 0x00, 0x40, 0xE8, 0xA8, 0xA8, 0xF8, 0xF0, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x90, 0x90, 0xF0, 0x60, 0x00 },
{ 0x00, 0x70, 0xF8, 0x88, 0x88, 0xD8, 0x50, 0x00 },
{ 0x00, 0x60, 0xF0, 0x90, 0x90, 0xFE, 0xFE, 0x00 },
{ 0x00, 0x70, 0xF8, 0xA8, 0xA8, 0xB8, 0x30, 0x00 },
{ 0x00, 0x20, 0xFC, 0xFE, 0x22, 0x26, 0x04, 0x00 },
{ 0x00, 0x18, 0xBC, 0xA4, 0xA4, 0xFC, 0x7C, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x10, 0x10, 0xF0, 0xE0, 0x00 },
{ 0x00, 0x00, 0x80, 0xF4, 0xF4, 0x80, 0x00, 0x00 },
{ 0x00, 0x60, 0xE0, 0x80, 0xFA, 0x7A, 0x00, 0x00 },
{ 0x00, 0xFE, 0xFE, 0x20, 0x70, 0xD8, 0x88, 0x00 },
{ 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00 },
{ 0x00, 0xF8, 0xF8, 0x30, 0xE0, 0x30, 0xF8, 0xF8 },
{ 0x00, 0xF8, 0xF8, 0x18, 0x18, 0xF8, 0xF0, 0x00 },
{ 0x00, 0x70, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00 },
{ 0x00, 0xFC, 0xFC, 0x24, 0x24, 0x3C, 0x18, 0x00 },
{ 0x00, 0x18, 0x3C, 0x24, 0xFC, 0xFC, 0x80, 0xC0 },
{ 0x00, 0xF8, 0xF8, 0x08, 0x08, 0x38, 0x30, 0x00 },
{ 0x00, 0x90, 0xA8, 0xA8, 0xA8, 0xA8, 0x48, 0x00 },
{ 0x00, 0x10, 0x10, 0xFC, 0xFC, 0x10, 0x10, 0x00 },
{ 0x00, 0x78, 0xF8, 0x80, 0x80, 0xF8, 0xF8, 0x00 },
{ 0x00, 0x30, 0x70, 0xC0, 0xC0, 0x70, 0x30, 0x00 },
{ 0x00, 0x78, 0xF8, 0x80, 0xF0, 0x80, 0xF8, 0x78 },
{ 0x00, 0x88, 0xD8, 0x70, 0x70, 0xD8, 0x88, 0x00 },
{ 0x00, 0x18, 0xB8, 0xA0, 0xA0, 0xF8, 0x78, 0x00 },
{ 0x00, 0x00, 0xC8, 0xE8, 0xB8, 0x98, 0x00, 0x00 },
{ 0x00, 0x00, 0x10, 0x7C, 0xEE, 0x82, 0x82, 0x00 },
{ 0x00, 0x00, 0x00, 0xEE, 0xEE, 0x00, 0x00, 0x00 },
{ 0x00, 0x82, 0x82, 0xEE, 0x7C, 0x10, 0x00, 0x00 },
{ 0x00, 0x10, 0x18, 0x08, 0x18, 0x10, 0x08, 0x00 },
{ 0x00, 0xF0, 0x98, 0x8C, 0x86, 0x8C, 0x98, 0xF0 }
// upside down
//{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
//{ 0x00, 0x3E, 0x41, 0x55, 0x43, 0x55, 0x41, 0x3E },
//{ 0x00, 0x3E, 0x7F, 0x6B, 0x7D, 0x6B, 0x7F, 0x3E },
//{ 0x00, 0x38, 0x7C, 0x3E, 0x1F, 0x3E, 0x7C, 0x38 },
//{ 0x00, 0x08, 0x1C, 0x3E, 0x7F, 0x3E, 0x1C, 0x08 },
//{ 0x00, 0x08, 0x1C, 0x29, 0x7F, 0x29, 0x1C, 0x08 },
//{ 0x00, 0x08, 0x1C, 0x3D, 0x7F, 0x3D, 0x1C, 0x08 },
//{ 0x00, 0x00, 0x1C, 0x3E, 0x3E, 0x3E, 0x1C, 0x00 },
//{ 0xFF, 0xFF, 0xE3, 0xC1, 0xC1, 0xC1, 0xE3, 0xFF },
//{ 0x00, 0x00, 0x1C, 0x22, 0x22, 0x22, 0x1C, 0x00 },
//{ 0xFF, 0xFF, 0xE3, 0xDD, 0xDD, 0xDD, 0xE3, 0xFF },
//{ 0x00, 0x06, 0x09, 0x09, 0x4E, 0x50, 0x60, 0x78 },
//{ 0x00, 0x00, 0x26, 0x29, 0x79, 0x29, 0x26, 0x00 },
//{ 0x00, 0x03, 0x07, 0x7E, 0x40, 0x20, 0x00, 0x00 },
//{ 0x00, 0x03, 0x07, 0x3E, 0x60, 0x46, 0x4E, 0x7C },
//{ 0x00, 0x08, 0x2A, 0x1C, 0x77, 0x1C, 0x2A, 0x08 },
//{ 0x00, 0x7F, 0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08 },
//{ 0x00, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x7F, 0x7F },
//{ 0x00, 0x00, 0x14, 0x22, 0x7F, 0x22, 0x14, 0x00 },
//{ 0x00, 0x7B, 0x7B, 0x00, 0x00, 0x7B, 0x7B, 0x00 },
//{ 0x00, 0x30, 0x78, 0x48, 0x48, 0x7F, 0x40, 0x7F },
//{ 0x00, 0x12, 0x29, 0x25, 0x52, 0x4A, 0x24, 0x00 },
//{ 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07 },
//{ 0x00, 0x00, 0x15, 0x23, 0x7F, 0x23, 0x15, 0x00 },
//{ 0x00, 0x08, 0x18, 0x3F, 0x7F, 0x3F, 0x18, 0x08 },
//{ 0x00, 0x08, 0x0C, 0x7E, 0x7F, 0x7E, 0x0C, 0x08 },
//{ 0x00, 0x1C, 0x1C, 0x1C, 0x7F, 0x3E, 0x1C, 0x08 },
//{ 0x00, 0x08, 0x1C, 0x3E, 0x7F, 0x1C, 0x1C, 0x1C },
//{ 0x00, 0x1F, 0x1F, 0x1F, 0x03, 0x03, 0x03, 0x03 },
//{ 0x00, 0x08, 0x1C, 0x2A, 0x08, 0x2A, 0x1C, 0x08 },
//{ 0x00, 0x03, 0x0F, 0x3F, 0x7F, 0x3F, 0x0F, 0x03 },
//{ 0x00, 0x60, 0x78, 0x7E, 0x7F, 0x7E, 0x78, 0x60 },
//{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
//{ 0x00, 0x00, 0x30, 0x7D, 0x7D, 0x30, 0x00, 0x00 },
//{ 0x00, 0x00, 0x60, 0x70, 0x00, 0x70, 0x60, 0x00 },
//{ 0x00, 0x14, 0x7F, 0x7F, 0x14, 0x7F, 0x7F, 0x14 },
//{ 0x00, 0x00, 0x12, 0x2A, 0x6B, 0x2A, 0x24, 0x00 },
//{ 0x00, 0x62, 0x66, 0x0C, 0x18, 0x33, 0x23, 0x00 },
//{ 0x00, 0x26, 0x7F, 0x51, 0x59, 0x77, 0x23, 0x05 },
//{ 0x00, 0x00, 0x08, 0x78, 0x70, 0x00, 0x00, 0x00 },
//{ 0x00, 0x41, 0x63, 0x3E, 0x1C, 0x00, 0x00, 0x00 },
//{ 0x00, 0x00, 0x00, 0x1C, 0x3E, 0x63, 0x41, 0x00 },
//{ 0x00, 0x08, 0x2A, 0x3E, 0x1C, 0x3E, 0x2A, 0x08 },
//{ 0x00, 0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00 },
//{ 0x00, 0x01, 0x0F, 0x0E, 0x00, 0x00, 0x00, 0x00 },
//{ 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00 },
//{ 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 },
//{ 0x00, 0x02, 0x06, 0x0C, 0x18, 0x30, 0x20, 0x00 },
//{ 0x00, 0x3E, 0x7F, 0x49, 0x51, 0x7F, 0x3E, 0x00 },
//{ 0x00, 0x01, 0x11, 0x7F, 0x7F, 0x01, 0x01, 0x00 },
//{ 0x00, 0x23, 0x67, 0x45, 0x49, 0x79, 0x31, 0x00 },
//{ 0x00, 0x22, 0x63, 0x49, 0x49, 0x7F, 0x36, 0x00 },
//{ 0x00, 0x0C, 0x14, 0x24, 0x7F, 0x7F, 0x04, 0x00 },
//{ 0x00, 0x72, 0x73, 0x51, 0x51, 0x5F, 0x4E, 0x00 },
//{ 0x00, 0x3E, 0x7F, 0x49, 0x49, 0x6F, 0x26, 0x00 },
//{ 0x00, 0x60, 0x60, 0x47, 0x5F, 0x78, 0x60, 0x00 },
//{ 0x00, 0x36, 0x7F, 0x49, 0x49, 0x7F, 0x36, 0x00 },
//{ 0x00, 0x32, 0x7B, 0x49, 0x49, 0x7F, 0x3E, 0x00 },
//{ 0x00, 0x00, 0x00, 0x36, 0x36, 0x00, 0x00, 0x00 },
//{ 0x00, 0x00, 0x01, 0x37, 0x36, 0x00, 0x00, 0x00 },
//{ 0x00, 0x00, 0x08, 0x1C, 0x36, 0x63, 0x41, 0x00 },
//{ 0x00, 0x00, 0x14, 0x14, 0x14, 0x14, 0x00, 0x00 },
//{ 0x00, 0x41, 0x63, 0x36, 0x1C, 0x08, 0x00, 0x00 },
//{ 0x00, 0x20, 0x60, 0x4D, 0x4D, 0x78, 0x30, 0x00 },
//{ 0x00, 0x3C, 0x42, 0x5A, 0x5A, 0x32, 0x04, 0x00 },
//{ 0x00, 0x3F, 0x7F, 0x48, 0x48, 0x7F, 0x3F, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x49, 0x49, 0x7F, 0x36, 0x00 },
//{ 0x00, 0x3E, 0x7F, 0x41, 0x41, 0x63, 0x22, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x41, 0x41, 0x7F, 0x3E, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x49, 0x49, 0x49, 0x41, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x48, 0x48, 0x48, 0x40, 0x00 },
//{ 0x00, 0x3E, 0x7F, 0x41, 0x45, 0x67, 0x26, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x08, 0x08, 0x7F, 0x7F, 0x00 },
//{ 0x00, 0x00, 0x41, 0x7F, 0x7F, 0x41, 0x00, 0x00 },
//{ 0x00, 0x06, 0x07, 0x41, 0x7F, 0x7E, 0x40, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x1C, 0x36, 0x63, 0x41, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x01, 0x01, 0x01, 0x01, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x30, 0x18, 0x30, 0x7F, 0x7F },
//{ 0x00, 0x7F, 0x7F, 0x30, 0x18, 0x0C, 0x7F, 0x7F },
//{ 0x00, 0x3E, 0x7F, 0x41, 0x41, 0x7F, 0x3E, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x44, 0x44, 0x7C, 0x38, 0x00 },
//{ 0x00, 0x3C, 0x7E, 0x42, 0x46, 0x7F, 0x3D, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x4C, 0x4E, 0x7B, 0x31, 0x00 },
//{ 0x00, 0x32, 0x7B, 0x49, 0x49, 0x6F, 0x26, 0x00 },
//{ 0x00, 0x60, 0x40, 0x7F, 0x7F, 0x40, 0x60, 0x00 },
//{ 0x00, 0x7E, 0x7F, 0x01, 0x01, 0x7F, 0x7F, 0x00 },
//{ 0x00, 0x7C, 0x7E, 0x03, 0x03, 0x7E, 0x7C, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x06, 0x0C, 0x06, 0x7F, 0x7F },
//{ 0x00, 0x63, 0x77, 0x1C, 0x08, 0x1C, 0x77, 0x63 },
//{ 0x00, 0x70, 0x78, 0x0F, 0x0F, 0x78, 0x70, 0x00 },
//{ 0x00, 0x43, 0x47, 0x4D, 0x59, 0x71, 0x61, 0x00 },
//{ 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x41, 0x41, 0x00 },
//{ 0x00, 0x20, 0x30, 0x18, 0x0C, 0x06, 0x02, 0x00 },
//{ 0x00, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00, 0x00 },
//{ 0x00, 0x08, 0x10, 0x20, 0x40, 0x20, 0x10, 0x08 },
//{ 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 },
//{ 0x00, 0x00, 0x00, 0x00, 0x60, 0x70, 0x10, 0x00 },
//{ 0x00, 0x02, 0x17, 0x15, 0x15, 0x1F, 0x0F, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x09, 0x09, 0x0F, 0x06, 0x00 },
//{ 0x00, 0x0E, 0x1F, 0x11, 0x11, 0x1B, 0x0A, 0x00 },
//{ 0x00, 0x06, 0x0F, 0x09, 0x09, 0x7F, 0x7F, 0x00 },
//{ 0x00, 0x0E, 0x1F, 0x15, 0x15, 0x1D, 0x0C, 0x00 },
//{ 0x00, 0x04, 0x3F, 0x7F, 0x44, 0x64, 0x20, 0x00 },
//{ 0x00, 0x18, 0x3D, 0x25, 0x25, 0x3F, 0x3E, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x08, 0x08, 0x0F, 0x07, 0x00 },
//{ 0x00, 0x00, 0x01, 0x2F, 0x2F, 0x01, 0x00, 0x00 },
//{ 0x00, 0x06, 0x07, 0x01, 0x5F, 0x5E, 0x00, 0x00 },
//{ 0x00, 0x7F, 0x7F, 0x04, 0x0E, 0x1B, 0x11, 0x00 },
//{ 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00 },
//{ 0x00, 0x1F, 0x1F, 0x0C, 0x07, 0x0C, 0x1F, 0x1F },
//{ 0x00, 0x1F, 0x1F, 0x18, 0x18, 0x1F, 0x0F, 0x00 },
//{ 0x00, 0x0E, 0x1F, 0x11, 0x11, 0x1F, 0x0E, 0x00 },
//{ 0x00, 0x3F, 0x3F, 0x24, 0x24, 0x3C, 0x18, 0x00 },
//{ 0x00, 0x18, 0x3C, 0x24, 0x3F, 0x3F, 0x01, 0x03 },
//{ 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x1C, 0x0C, 0x00 },
//{ 0x00, 0x09, 0x15, 0x15, 0x15, 0x15, 0x12, 0x00 },
//{ 0x00, 0x08, 0x08, 0x3F, 0x3F, 0x08, 0x08, 0x00 },
//{ 0x00, 0x1E, 0x1F, 0x01, 0x01, 0x1F, 0x1F, 0x00 },
//{ 0x00, 0x0C, 0x0E, 0x03, 0x03, 0x0E, 0x0C, 0x00 },
//{ 0x00, 0x1E, 0x1F, 0x01, 0x0F, 0x01, 0x1F, 0x1E },
//{ 0x00, 0x11, 0x1B, 0x0E, 0x0E, 0x1B, 0x11, 0x00 },
//{ 0x00, 0x18, 0x1D, 0x05, 0x05, 0x1F, 0x1E, 0x00 },
//{ 0x00, 0x00, 0x13, 0x17, 0x1D, 0x19, 0x00, 0x00 },
//{ 0x00, 0x00, 0x08, 0x3E, 0x77, 0x41, 0x41, 0x00 },
//{ 0x00, 0x00, 0x00, 0x77, 0x77, 0x00, 0x00, 0x00 },
//{ 0x00, 0x41, 0x41, 0x77, 0x3E, 0x08, 0x00, 0x00 },
//{ 0x00, 0x08, 0x18, 0x10, 0x18, 0x08, 0x10, 0x00 },
//{ 0x00, 0x0F, 0x19, 0x31, 0x61, 0x31, 0x19, 0x0F }

// original, rotated left 90
//  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
//  { 0x00, 0x3E, 0x41, 0x55, 0x41, 0x55, 0x49, 0x3E },
//  { 0x00, 0x3E, 0x7F, 0x6B, 0x7F, 0x6B, 0x77, 0x3E },
//  { 0x00, 0x22, 0x77, 0x7F, 0x7F, 0x3E, 0x1C, 0x08 },
//  { 0x00, 0x08, 0x1C, 0x3E, 0x7F, 0x3E, 0x1C, 0x08 },
//  { 0x00, 0x08, 0x1C, 0x2A, 0x7F, 0x2A, 0x08, 0x1C },
//  { 0x00, 0x08, 0x1C, 0x3E, 0x7F, 0x3E, 0x08, 0x1C },
//  { 0x00, 0x00, 0x1C, 0x3E, 0x3E, 0x3E, 0x1C, 0x00 },
//  { 0xFF, 0xFF, 0xE3, 0xC1, 0xC1, 0xC1, 0xE3, 0xFF },
//  { 0x00, 0x00, 0x1C, 0x22, 0x22, 0x22, 0x1C, 0x00 },
//  { 0xFF, 0xFF, 0xE3, 0xDD, 0xDD, 0xDD, 0xE3, 0xFF },
//  { 0x00, 0x0F, 0x03, 0x05, 0x39, 0x48, 0x48, 0x30 },
//  { 0x00, 0x08, 0x3E, 0x08, 0x1C, 0x22, 0x22, 0x1C },
//  { 0x00, 0x18, 0x14, 0x10, 0x10, 0x30, 0x70, 0x60 },
//  { 0x00, 0x0F, 0x19, 0x11, 0x13, 0x37, 0x76, 0x60 },
//  { 0x00, 0x08, 0x2A, 0x1C, 0x77, 0x1C, 0x2A, 0x08 },
//  { 0x00, 0x60, 0x78, 0x7E, 0x7F, 0x7E, 0x78, 0x60 },
//  { 0x00, 0x03, 0x0F, 0x3F, 0x7F, 0x3F, 0x0F, 0x03 },
//  { 0x00, 0x08, 0x1C, 0x2A, 0x08, 0x2A, 0x1C, 0x08 },
//  { 0x00, 0x66, 0x66, 0x66, 0x66, 0x00, 0x66, 0x66 },
//  { 0x00, 0x3F, 0x65, 0x65, 0x3D, 0x05, 0x05, 0x05 },
//  { 0x00, 0x0C, 0x32, 0x48, 0x24, 0x12, 0x4C, 0x30 },
//  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F },
//  { 0x00, 0x08, 0x1C, 0x2A, 0x08, 0x2A, 0x1C, 0x3E },
//  { 0x00, 0x08, 0x1C, 0x3E, 0x7F, 0x1C, 0x1C, 0x1C },
//  { 0x00, 0x1C, 0x1C, 0x1C, 0x7F, 0x3E, 0x1C, 0x08 },
//  { 0x00, 0x08, 0x0C, 0x7E, 0x7F, 0x7E, 0x0C, 0x08 },
//  { 0x00, 0x08, 0x18, 0x3F, 0x7F, 0x3F, 0x18, 0x08 },
//  { 0x00, 0x00, 0x00, 0x70, 0x70, 0x70, 0x7F, 0x7F },
//  { 0x00, 0x00, 0x14, 0x22, 0x7F, 0x22, 0x14, 0x00 },
//  { 0x00, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x7F, 0x7F },
//  { 0x00, 0x7F, 0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08 },
//  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
//  { 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18 },
//  { 0x00, 0x36, 0x36, 0x14, 0x00, 0x00, 0x00, 0x00 },
//  { 0x00, 0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36 },
//  { 0x00, 0x08, 0x1E, 0x20, 0x1C, 0x02, 0x3C, 0x08 },
//  { 0x00, 0x60, 0x66, 0x0C, 0x18, 0x30, 0x66, 0x06 },
//  { 0x00, 0x3C, 0x66, 0x3C, 0x28, 0x65, 0x66, 0x3F },
//  { 0x00, 0x18, 0x18, 0x18, 0x30, 0x00, 0x00, 0x00 },
//  { 0x00, 0x60, 0x30, 0x18, 0x18, 0x18, 0x30, 0x60 },
//  { 0x00, 0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06 },
//  { 0x00, 0x00, 0x36, 0x1C, 0x7F, 0x1C, 0x36, 0x00 },
//  { 0x00, 0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00 },
//  { 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x60 },
//  { 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00 },
//  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60 },
//  { 0x00, 0x00, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00 },
//  { 0x00, 0x3C, 0x66, 0x6E, 0x76, 0x66, 0x66, 0x3C },
//  { 0x00, 0x18, 0x18, 0x38, 0x18, 0x18, 0x18, 0x7E },
//  { 0x00, 0x3C, 0x66, 0x06, 0x0C, 0x30, 0x60, 0x7E },
//  { 0x00, 0x3C, 0x66, 0x06, 0x1C, 0x06, 0x66, 0x3C },
//  { 0x00, 0x0C, 0x1C, 0x2C, 0x4C, 0x7E, 0x0C, 0x0C },
//  { 0x00, 0x7E, 0x60, 0x7C, 0x06, 0x06, 0x66, 0x3C },
//  { 0x00, 0x3C, 0x66, 0x60, 0x7C, 0x66, 0x66, 0x3C },
//  { 0x00, 0x7E, 0x66, 0x0C, 0x0C, 0x18, 0x18, 0x18 },
//  { 0x00, 0x3C, 0x66, 0x66, 0x3C, 0x66, 0x66, 0x3C },
//  { 0x00, 0x3C, 0x66, 0x66, 0x3E, 0x06, 0x66, 0x3C },
//  { 0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00 },
//  { 0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x30 },
//  { 0x00, 0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06 },
//  { 0x00, 0x00, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x00 },
//  { 0x00, 0x60, 0x30, 0x18, 0x0C, 0x18, 0x30, 0x60 },
//  { 0x00, 0x3C, 0x66, 0x06, 0x1C, 0x18, 0x00, 0x18 },
//  { 0x00, 0x38, 0x44, 0x5C, 0x58, 0x42, 0x3C, 0x00 },
//  { 0x00, 0x3C, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66 },
//  { 0x00, 0x7C, 0x66, 0x66, 0x7C, 0x66, 0x66, 0x7C },
//  { 0x00, 0x3C, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3C },
//  { 0x00, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7C },
//  { 0x00, 0x7E, 0x60, 0x60, 0x7C, 0x60, 0x60, 0x7E },
//  { 0x00, 0x7E, 0x60, 0x60, 0x7C, 0x60, 0x60, 0x60 },
//  { 0x00, 0x3C, 0x66, 0x60, 0x60, 0x6E, 0x66, 0x3C },
//  { 0x00, 0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66 },
//  { 0x00, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C },
//  { 0x00, 0x1E, 0x0C, 0x0C, 0x0C, 0x6C, 0x6C, 0x38 },
//  { 0x00, 0x66, 0x6C, 0x78, 0x70, 0x78, 0x6C, 0x66 },
//  { 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7E },
//  { 0x00, 0x63, 0x77, 0x7F, 0x6B, 0x63, 0x63, 0x63 },
//  { 0x00, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x63, 0x63 },
//  { 0x00, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C },
//  { 0x00, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x60, 0x60 },
//  { 0x00, 0x3C, 0x66, 0x66, 0x66, 0x6E, 0x3C, 0x06 },
//  { 0x00, 0x7C, 0x66, 0x66, 0x7C, 0x78, 0x6C, 0x66 },
//  { 0x00, 0x3C, 0x66, 0x60, 0x3C, 0x06, 0x66, 0x3C },
//  { 0x00, 0x7E, 0x5A, 0x18, 0x18, 0x18, 0x18, 0x18 },
//  { 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3E },
//  { 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x18 },
//  { 0x00, 0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63 },
//  { 0x00, 0x63, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x63 },
//  { 0x00, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x18, 0x18 },
//  { 0x00, 0x7E, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x7E },
//  { 0x00, 0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E },
//  { 0x00, 0x00, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x00 },
//  { 0x00, 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78 },
//  { 0x00, 0x08, 0x14, 0x22, 0x41, 0x00, 0x00, 0x00 },
//  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F },
//  { 0x00, 0x0C, 0x0C, 0x06, 0x00, 0x00, 0x00, 0x00 },
//  { 0x00, 0x00, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x3E },
//  { 0x00, 0x60, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x7C },
//  { 0x00, 0x00, 0x00, 0x3C, 0x66, 0x60, 0x66, 0x3C },
//  { 0x00, 0x06, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3E },
//  { 0x00, 0x00, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x3C },
//  { 0x00, 0x1C, 0x36, 0x30, 0x30, 0x7C, 0x30, 0x30 },
//  { 0x00, 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x06, 0x3C },
//  { 0x00, 0x60, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x66 },
//  { 0x00, 0x00, 0x18, 0x00, 0x18, 0x18, 0x18, 0x3C },
//  { 0x00, 0x0C, 0x00, 0x0C, 0x0C, 0x6C, 0x6C, 0x38 },
//  { 0x00, 0x60, 0x60, 0x66, 0x6C, 0x78, 0x6C, 0x66 },
//  { 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },
//  { 0x00, 0x00, 0x00, 0x63, 0x77, 0x7F, 0x6B, 0x6B },
//  { 0x00, 0x00, 0x00, 0x7C, 0x7E, 0x66, 0x66, 0x66 },
//  { 0x00, 0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C },
//  { 0x00, 0x00, 0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60 },
//  { 0x00, 0x00, 0x3C, 0x6C, 0x6C, 0x3C, 0x0D, 0x0F },
//  { 0x00, 0x00, 0x00, 0x7C, 0x66, 0x66, 0x60, 0x60 },
//  { 0x00, 0x00, 0x00, 0x3E, 0x40, 0x3C, 0x02, 0x7C },
//  { 0x00, 0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x18 },
//  { 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E },
//  { 0x00, 0x00, 0x00, 0x00, 0x66, 0x66, 0x3C, 0x18 },
//  { 0x00, 0x00, 0x00, 0x63, 0x6B, 0x6B, 0x6B, 0x3E },
//  { 0x00, 0x00, 0x00, 0x66, 0x3C, 0x18, 0x3C, 0x66 },
//  { 0x00, 0x00, 0x00, 0x66, 0x66, 0x3E, 0x06, 0x3C },
//  { 0x00, 0x00, 0x00, 0x3C, 0x0C, 0x18, 0x30, 0x3C },
//  { 0x00, 0x0E, 0x18, 0x18, 0x30, 0x18, 0x18, 0x0E },
//  { 0x00, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18 },
//  { 0x00, 0x70, 0x18, 0x18, 0x0C, 0x18, 0x18, 0x70 },
//  { 0x00, 0x00, 0x00, 0x3A, 0x6C, 0x00, 0x00, 0x00 },
//  { 0x00, 0x08, 0x1C, 0x36, 0x63, 0x41, 0x41, 0x7F }
};



#endif // VINCENT_H
