
#include"CCore.h"

int main()
{
	if (!GET_SINGLE(CCore)->Init())//init ���� �ʱ�ȭ
	{
		DESTROY_SINGLE(CCore);
		return 0;
	}

	GET_SINGLE(CCore)->Run(); //run���� ���� ����

	DESTROY_SINGLE(CCore); //������ �Ŀ� �޸� ���� ���ְ�.

	return 0;
}
