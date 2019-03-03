#include <stdio.h>
#include <assert.h>
#define N 1<<20
char in[N], out[N];
double score[N];
int main(int argc, char *argv[])
 {
	int n, m=0, i, j;
	double time;
	FILE *fin=fopen(argv[1], "r"), *fout=fopen(argv[2], "w");
	fscanf(fin, "%d ", &n);
	fprintf(fout, "{\n\t\"cases\":[\n");
	for(i=1; i<=n; ++i) {
		fscanf(fin, "%[^|]|%[^|]|%lf|%lf\n", in, out, &time, &score[i]);
		fprintf(fout, "\t\t{\"in\":\"%s\",\"out\":\"%s\",\"time\":%g,\"score\":%g", in, out, time, score[i]);
		if(i>1 && !score[i-1]) fprintf(fout, ",\"depends\":[%d]", i-1);
		fprintf(fout, "}");
		if(i<n) fprintf(fout, ",");
		fprintf(fout, "\n");
	}
	fprintf(fout, "\t]\n}");
	fclose(fin);
	fclose(fout);
	return 0;
}
