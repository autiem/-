#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<windows.h> 
//
//
//int main() {
//
//	char str1[520] = "π‘π‘º””Õ…œ∞‡";
//
//	for (int i = 0; i < strlen(str1); i++)
//	{
//		if (str1[i] == '#')
//		{
//			putchar('\n');
//			continue;
//		}
//		putchar(str1[i]);
//		Sleep(120);
//	}
//	putchar('\n');
//
//	float y, x, z, f;
//	// …Ë÷√∫Ï◊÷ 
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
//	for (y = 1.5f; y > -1.5f; y -= 0.1f) {
//		for (x = -1.5f; x < 1.5f; x += 0.05f) {
//			z = x * x + y * y - 1;
//			f = z * z * z - x * x * y * y * y;
//			putchar(f <= 0.0f ? "ZZZCCCWWW"[(int)(f * -8.0f)] : ' ');
//			if (f <= 0.0f)
//				Sleep(10);
//		}
//		putchar('\n');
//	}
//	getchar();
//	return 0;
//}
