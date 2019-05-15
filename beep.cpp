#include <windows.h>
#include <cstdio> 
//µÕ“Ù
#define C1 262
#define D1 294
#define E1 330
#define F1 349
#define G1 392
#define A1 440
#define B1 493
//÷–“Ù
#define C2 532
#define D2 588
#define E2 660
#define F2 698
#define G2 784
#define A2 880
#define AA2 934 //#A 
#define B2 988
//∏ﬂ“Ù ∞Îœ““Ù 
#define C3 1046
#define D3 1175
#define E3 1319
#define F3 1397
#define G3 1568
#define A3 1760
#define B3 1976
//≈ƒ
#define pai 500 
const int tpai=pai*3;
const int dpai=pai*2;
const int hpai=pai/2;
const int thpai=hpai*3;
const int qpai=pai/4;
const int tqpai=qpai*3;


int main(){
	Beep(D2,tqpai); Sleep(1); Beep(D2,qpai); Sleep(1); Beep(D2,hpai); Beep(C2,hpai); Beep(D2,hpai); Beep(F2,hpai); Sleep(1); Beep(F2,hpai); Beep(G2,hpai); 
	Beep(D2,tqpai); Sleep(1); Beep(D2,qpai); Sleep(1); Beep(D2,hpai); Beep(C2,hpai); Beep(D2,hpai); Beep(C2,hpai); Beep(A1,hpai); Beep(C2,hpai);
	Beep(D2,tqpai); Sleep(1); Beep(D2,qpai); Sleep(1); Beep(D2,hpai); Beep(C2,hpai); Beep(D2,hpai); Beep(F2,hpai); Sleep(1); Beep(F2,hpai); Beep(G2,hpai);
	Beep(A2,pai); Beep(G2,hpai); Beep(A2,qpai); Beep(G2,qpai); Beep(F2,pai); Beep(D2,pai);
	Beep(D2,tqpai); Sleep(1); Beep(D2,qpai); Sleep(1); Beep(D2,hpai); Beep(C2,hpai); Sleep(1); Beep(D2,hpai); Beep(F2,hpai); Sleep(1); Beep(F2,hpai); Beep(G2,hpai); 
	Beep(D2,tqpai); Sleep(1); Beep(D2,qpai); Sleep(1); Beep(D2,hpai); Beep(C2,hpai); Beep(D2,hpai); Beep(C2,hpai); Beep(A1,hpai); Beep(C2,hpai); 
	Beep(D2,tqpai); Sleep(1); Beep(D2,qpai); Sleep(1); Beep(D2,hpai); Beep(C2,hpai); Beep(D2,hpai); Beep(F2,hpai); Sleep(1); Beep(F2,hpai); Beep(G2,hpai); 
	Beep(A2,pai); Beep(G2,hpai); Beep(A2,qpai); Beep(G2,qpai); Beep(F2,pai); Beep(D2,pai); 
	Beep(F2,pai); Beep(E2,pai); Beep(D2,pai); Beep(C2,pai); 
	Beep(C2,hpai); Sleep(1); Beep(C2,qpai); Beep(D2,qpai); Beep(A1,hpai); Beep(G1,hpai); Beep(A1,dpai); 
	Beep(A1,hpai); Beep(C2,hpai); Beep(D2,pai); Beep(G2,pai); Beep(E2,pai); 
	Beep(F2,tqpai); Sleep(1); Beep(F2,qpai); Beep(E2,hpai); Beep(C2,hpai); Beep(D2,dpai); 
	Beep(F2,pai); Beep(E2,pai); Beep(D2,pai); Beep(C2,pai); 
	Beep(C2,hpai); Sleep(1); Beep(C2,qpai); Beep(D2,qpai); Beep(A1,hpai); Beep(G1,hpai); Beep(A1,pai); Sleep(1); Beep(A1,hpai); Beep(C2,hpai); 
	Beep(D2,hpai); Sleep(1); Beep(D2,pai); Sleep(1); Beep(D2,hpai); Beep(F2,pai); Beep(G2,pai); 
	Beep(E2,tpai); Beep(D2,hpai); Beep(F2,hpai); 
	
	
	Beep(G2,tqpai); Sleep(1); Beep(G2,tqpai); Beep(A2,hpai); Sleep(1); Beep(A2,thpai); Sleep(1); Beep(A2,hpai); 
	Beep(C3,hpai); Beep(D3,hpai); Beep(G2,hpai); Beep(F2,hpai); Beep(A2,pai); Beep(D2,hpai); Beep(F2,hpai); 
	Beep(G2,tqpai); Sleep(1); Beep(G2,tqpai); Beep(A2,hpai); Sleep(1); Beep(A2,thpai); Sleep(1); Beep(A2,hpai); 
	Beep(AA2,hpai); Beep(A2,hpai); Beep(G2,hpai); Beep(F2,hpai); Sleep(1); Beep(F2,pai); Beep(D2,hpai); Beep(F2,hpai); 
	Beep(G2,tqpai); Sleep(1); Beep(G2,tqpai); Beep(A2,hpai); Sleep(1); Beep(A2,thpai); Sleep(1); Beep(A2,hpai); 
	Beep(C3,hpai); Beep(D3,hpai); Beep(G2,hpai); Beep(F2,hpai); Beep(A2,pai); Beep(D2,hpai); Beep(F2,hpai); 
	Beep(AA2,pai); Beep(A2,pai); Beep(G2,pai); Beep(F2,pai); 
	Beep(G2,hpai); Beep(A2,hpai); Beep(E2,hpai); Beep(C2,hpai); Beep(D2,pai); Sleep(1); Beep(D2,hpai); Beep(F2,hpai); 
	
	Beep(G2,tqpai); Sleep(1); Beep(G2,tqpai); Beep(A2,hpai); Sleep(1); Beep(A2,thpai); Sleep(1); Beep(A2,hpai); 
	Beep(C3,hpai); Beep(D3,hpai); Beep(G2,hpai); Beep(F2,hpai); Beep(A2,pai); Beep(D2,hpai); Beep(F2,hpai); 
	Beep(G2,tqpai); Sleep(1); Beep(G2,tqpai); Beep(A2,hpai); Sleep(1); Beep(A2,thpai); Sleep(1); Beep(A2,hpai); 
	Beep(AA2,hpai); Beep(A2,hpai); Beep(G2,hpai); Beep(F2,hpai); Sleep(1); Beep(F2,pai); Beep(D2,hpai); Beep(F2,hpai); 
	Beep(G2,tqpai); Sleep(1); Beep(G2,tqpai); Beep(A2,hpai); Sleep(1); Beep(A2,thpai); Sleep(1); Beep(A2,hpai); 
	Beep(C3,hpai); Beep(D3,hpai); Beep(G2,hpai); Beep(F2,hpai); Beep(A2,pai); Beep(D2,hpai); Beep(F2,hpai); 
	Beep(AA2,pai); Beep(A2,pai); Beep(G2,pai); Beep(F2,pai); 
	Beep(G2,hpai); Beep(F2,hpai); Beep(A2,hpai); Beep(C3,hpai); Beep(D3,pai); Sleep(pai); 
	
	Beep(F2,pai); Beep(E2,pai); Beep(D2,pai); Beep(C2,pai); 
	Beep(C2,hpai); Sleep(1); Beep(C2,qpai); Beep(D2,qpai); Beep(A1,hpai); Beep(G1,hpai); Beep(A1,dpai); 
	Beep(A1,hpai); Beep(C2,hpai); Beep(D2,pai); Beep(G2,pai); Beep(E2,pai); 
	Beep(F2,tqpai); Sleep(1); Beep(F2,qpai); Beep(E2,hpai); Beep(C2,hpai); Beep(D2,dpai); 
	Beep(F2,pai); Beep(E2,pai); Beep(D2,pai); Beep(C2,pai); 
	Beep(C2,hpai); Sleep(1); Beep(C2,qpai); Beep(D2,qpai); Beep(A1,hpai); Beep(G1,hpai); Beep(A1,pai); Sleep(1); Beep(A1,hpai); Beep(C2,hpai); 
	Beep(D2,hpai); Sleep(1); Beep(D2,pai); Sleep(1); Beep(D2,hpai); Beep(F2,pai); Beep(G2,pai); 
	Beep(E2,tpai); Beep(D2,hpai); Beep(F2,hpai); 
	Beep(G2,tqpai); Sleep(1); Beep(G2,tqpai); Beep(A2,hpai); Sleep(1); Beep(A2,thpai); Sleep(1); Beep(A2,hpai); 
	Beep(C3,hpai); Beep(D3,hpai); Beep(G2,hpai); Beep(F2,hpai); Beep(A2,pai); Beep(D2,hpai); Beep(F2,hpai); 
	Beep(G2,tqpai); Sleep(1); Beep(G2,tqpai); Beep(A2,hpai); Sleep(1); Beep(A2,thpai); Sleep(1); Beep(A2,hpai); 
	Beep(AA2,hpai); Beep(A2,hpai); Beep(G2,hpai); Beep(F2,hpai); Sleep(1); Beep(F2,pai); Beep(D2,hpai); Beep(F2,hpai); 
	Beep(G2,tqpai); Sleep(1); Beep(G2,tqpai); Beep(A2,hpai); Sleep(1); Beep(A2,thpai); Sleep(1); Beep(A2,hpai); 
	Beep(C3,hpai); Beep(D3,hpai); Beep(G2,hpai); Beep(F2,hpai); Beep(A2,pai); Beep(D2,hpai); Beep(F2,hpai); 
	Beep(AA2,pai); Beep(A2,pai); Beep(G2,pai); Beep(F2,pai); 
	Beep(G2,hpai); Beep(A2,hpai); Beep(G2,hpai); Beep(A2,hpai); Sleep(1); Beep(A2,pai); Beep(E2,hpai); Beep(G2,hpai); 
	Beep(A2,tqpai); Sleep(1); Beep(A2,tqpai); Beep(B2,hpai); Sleep(1); Beep(B2,thpai); Sleep(1); Beep(B2,hpai); 
	Beep(D3,hpai); Beep(E3,hpai); Beep(A2,hpai); Beep(G2,hpai); Beep(B2,pai); Beep(E2,hpai); Beep(G2,hpai); 
	Beep(A2,tqpai); Sleep(1); Beep(A2,tqpai); Beep(B2,hpai); Sleep(1); Beep(B2,thpai); Sleep(1); Beep(B2,hpai); 
	Beep(C3,hpai); Beep(B2,hpai); Beep(A2,hpai); Beep(G2,hpai); Sleep(1); Beep(G2,pai); Beep(E2,hpai); Beep(G2,hpai); 
	Beep(A2,tqpai); Sleep(1); Beep(A2,tqpai); Beep(B2,hpai); Sleep(1); Beep(B2,thpai); Sleep(1); Beep(B2,hpai); 
	Beep(D3,hpai); Beep(E3,hpai); Beep(A2,hpai); Beep(G2,hpai); Beep(B2,pai); Beep(E2,hpai); Beep(G2,hpai); 
	Beep(C3,pai); Beep(B2,pai); Beep(A2,pai); Beep(G2,pai); 
	Beep(A2,hpai); Beep(G2,hpai); Beep(B2,hpai); Beep(D3,hpai); Beep(E3,dpai); 

}
