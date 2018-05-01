#include <iostream>
#include <memory>

class AAA
{
	int a;

public:

	AAA(int n)
	{
		a = n;
	}

	void set(int k)
	{
		a = k;
	}

	int get()
	{
		return a;
	}
};
void main()
{
	std::shared_ptr<AAA> s(new AAA(5));

	
	
	std::shared_ptr<AAA> t(new AAA(3)); // ���� �Ҵ����ְ�
	
	AAA temp = *s; // s�� ���� ��������

	printf(" t : %d \n", t->get());
	printf(" s : %d \n", s->get());
	printf(" temp : %d \n", temp.get());

	
	*t = temp;  // s �� ���� t�� �־��ָ� deep copy �� ��
	
	printf(" t : %d \n", t->get());
	printf(" s : %d \n", s->get());
	printf(" temp : %d \n", temp.get());

	t->set(7);

	printf(" t : %d \n", t->get());
	printf(" s : %d \n", s->get());
	printf(" temp : %d \n", temp.get());
}