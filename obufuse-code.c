#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<string.h> 
char *vgasehgyg = "\x49 \x77\x61\x6e\x74 \x74\x6f \x6c\x65\x61\x72\x6e \x50\x45\x5f\x66\x6f\x72\x6d\x61\x74"; 
char *fgfayewibfqhjhlfebwjghe = "\x50\x45\x2d\x31\x2e\x74\x78\x74"; 
int main() {    
	FILE *feamhgjgwilepanp;     
	char bfwbehghjwfhjhashiu[10240];     
	unsigned int fhajkhu = 1, hafkhukh = 1; 
    unsigned int adasgghe = 46;     
	unsigned int n; for(n = 3; n <= adasgghe; ++n)     {         
		unsigned int shakyhiu = fhajkhu + hafkhukh;         
		fhajkhu = hafkhukh;         
		hafkhukh = shakyhiu;  
		}
	if( access(fgfayewibfqhjhlfebwjghe, F_OK ) != -1 ) {
		feamhgjgwilepanp = fopen(fgfayewibfqhjhlfebwjghe, "a+");
		fgets(bfwbehghjwfhjhashiu, 10240, feamhgjgwilepanp);         
		if (strstr(bfwbehghjwfhjhashiu, vgasehgyg) != NULL) {             
			printf("%s", bfwbehghjwfhjhashiu);         
			} else 
			{fputs(vgasehgyg, feamhgjgwilepanp);
			}
	}else{      
		feamhgjgwilepanp = fopen(fgfayewibfqhjhlfebwjghe,"w+");         
		fputs(vgasehgyg, feamhgjgwilepanp);         
		fclose(feamhgjgwilepanp);     
	}     
	return 0; 
} 
