
#include"CCore.h"

int main()
{
	if (!GET_SINGLE(CCore)->Init())//init 으로 초기화
	{
		DESTROY_SINGLE(CCore);
		return 0;
	}

	GET_SINGLE(CCore)->Run(); //run으로 게임 구동

	DESTROY_SINGLE(CCore); //구동한 후에 메모리 해제 해주고.

	return 0;
}
