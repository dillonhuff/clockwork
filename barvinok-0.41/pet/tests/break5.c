void foo()
{
	int i, j, a[100];

#pragma scop
	for (i = 0; i < 100; ++i)
		for (j = 0; j < 100; ++j) {
			a[i] = 0;
			if (i < 10)
				continue;
			if (i == j)
				break;
			if (j > 60)
				continue;
			if (i + j >= 150)
				break;
			a[i] = i + j;
		}
#pragma endscop
}
