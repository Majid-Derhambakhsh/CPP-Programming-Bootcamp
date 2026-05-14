#pragma once

/* ---------------------- Define ---------------------- */
#define GAMER1_MARKER 'X'
#define GAMER2_MARKER 'O'

/* ------------------ Extern Variable ----------------- */
extern int nullPos;

/* -------------------- Prototype --------------------- */
void ShowTable();
bool CheckTable(char GamerMarker);
bool MarkPos(int Pos, char Marker);
