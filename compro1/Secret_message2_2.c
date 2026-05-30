
#include<stdio.h>
void main(){
	int code_a, N;
	scanf("%d%d", &code_a, &N);

	int isEncode = 0;
	for (int i=0; i<N; i+=1){
		char input;
		scanf(" %c", &input);

		if (input >= 'A' && input <= 'Z'){
			int input_int = (int)input - 65;

			int output_int = (input_int + code_a)%26 + 65;

			char output = (char)output_int;
			printf("%c\n", output);
			code_a = (code_a+1)%10;
			isEncode = 1;
		}
	}
	if (isEncode==0){
		printf("None");
	}

}
