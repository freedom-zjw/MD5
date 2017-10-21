#include"MD5.h"
#include<cstdio> 
int main(){

	int i;
	unsigned char encrypt[] = "admin";//21232f297a57a5a743894a0e4a801fc3  
	unsigned char decrypt[16];

	MD5_CTX md5;

	MD5Init(&md5);
	MD5Update(&md5, encrypt, strlen((char *)encrypt));
	MD5Final(&md5, decrypt);

	//Md5加密后的32位结果
	printf("Before encryption:%s\nAfter encryption 16bits:", encrypt);
	for (i = 4; i<12; i++){
		printf("%02x", decrypt[i]);  
	}

	//Md5加密后的32位结果
	printf("\nBefore encryption:%s\nAfter encryption 32bits:", encrypt);
	for (i = 0; i<16; i++)
	{
		printf("%02x", decrypt[i]);  
	}

	getchar();

	return 0;
}