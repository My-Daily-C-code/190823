#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int villa[4][2];
	int popu;
	int i, j;

	/*가구 당 거주인원 입력 받기*/

	for (i = 0; i < 4; i++)
		for (j = 0; j < 2; j++)
		{
			printf("%dfloor room%d population is: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	/*빌라 층별 인구수 출력하기 */

	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%dfloor population: %d\n", i + 1, popu);
	}


	return 0;
}