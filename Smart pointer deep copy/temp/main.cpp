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

	
	
	std::shared_ptr<AAA> t(new AAA(3)); // 새로 할당해주고
	
	AAA temp = *s; // s의 값을 가져오고

	printf(" t : %d \n", t->get());
	printf(" s : %d \n", s->get());
	printf(" temp : %d \n", temp.get());

	
	*t = temp;  // s 의 값만 t에 넣어주면 deep copy 가 됨
	
	printf(" t : %d \n", t->get());
	printf(" s : %d \n", s->get());
	printf(" temp : %d \n", temp.get());

	t->set(7);

	printf(" t : %d \n", t->get());
	printf(" s : %d \n", s->get());
	printf(" temp : %d \n", temp.get());
}