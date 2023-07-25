
typedef struct
{
	int x;
	int y;
}point;


int add2(int one, int two)
{
	return (one + two);
}

int factorial(int n)
{
	if (n == 1)
		return 1;
	return n * factorial(n - 1);
}
void SomethingBadIsAboutToHappen(void)
{
	int *ptr;
	*ptr = 5;
}

void WalkOnTheWildSide()
{
	SomethingBadIsAboutToHappen();
}


int main(int argc, char *argv[])
{
//
//***************B R E A K P O I N T S********************
//
//
//	int to_init[8];
//	for(int i = 0; i < 8; i++)
//	{
//		to_init[i] = i;
//	}
//
//********************S T E P S***************************
//
//
//
//	int to_init[8];
//	for(int i = 0; i < 8; i++)
//	{
//		to_init[i] = i;
//	}
//
//
//
//*********************P R I N T**************************
//	
	int a = 5;
	a = 54;
//
	point pnt = {6, 17};
//
//
//
//
//
//***************W A T C H********************
//	int zero = 0;
//	int one;
//	int two;
//	 one = 5;
//	 two = 12;
//
//***************F R A M E S********************
int fact;
fact = factorial(5);
//
//SomethingBadIsAboutToHappen();
//WalkOnTheWildSide();
//
	return 0;
}
