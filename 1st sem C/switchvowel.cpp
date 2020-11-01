//Using switch check entered alphabet is vowel or not.
#include<stdio.h>
int main()
{
	char inpt;
	printf("Enter an alphabet to check whether vowel or not:");
	scanf("%c",&inpt);
	switch(inpt)
	{
		case 'A':
			case 'E':
				case 'I':
					case 'O':
						case 'U':
							case 'a':
								case 'e':
									case'i':
										case 'o':
											case 'u':
												printf("%c is a vowel.",inpt);
												break;
												default:
													printf("%c is a consonant.",inpt);
	}
}
