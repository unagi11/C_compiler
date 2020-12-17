struct key {
	char *word;
	int count;
} keytab[20];

int strcmp(char *s, char *t) {
	for (;*s == *t; s++) {
		if (*s == 0)
			return 0;
		t++;		
	}
	return *s - *t;
}

int search(char *word, struct key tab[], int n) {
	int cond;
	int low, high, mid;
	low = 0;
	high = n-1;
	while (low <= high) {
		mid = (low+high)/2;
		if ((cond = strcmp(word, tab[mid].word)) < 0)
			high = mid -1;
		else if (cond > 0)
			low = mid +1;
		else
			return mid;
	}
	return -1;
}

void main () {
	int i,j;
	char str[10];

	keytab[0].word = "chang";
	keytab[1].word = "kim";
	keytab[2].word = "lee";
	keytab[3].word = "park";
	keytab[4].word = "yoo";
	for (i = 0; i< 5; i++) {
		keytab[i].count = 0;
		printf("%s,%d\n", keytab[i].word, keytab[i].count);
	}
	while (1) {
		printf("enter:");
		scanf("%s",str);
		printf("search = %s\n", str);
		i = search(str, keytab,5);
		if (i >= 0)
			keytab[i].count++;
		printf("%s found at %d\n", str, i);
		for (i = 0; i < 5; i++)
			printf("%s,%d\n", keytab[i].word, keytab[i].count);
	}
}