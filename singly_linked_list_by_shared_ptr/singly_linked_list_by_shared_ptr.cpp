
#include "Node.h"
#include <iostream>
#include <memory>

using namespace std;
using namespace samples;

int main()
{
	shared_ptr<Node> root = make_shared<Node>(1);
	root->SetNext(make_shared<Node>(2));
	root->GetNext()->SetNext(make_shared<Node>(3));
	root->GetNext()->GetNext()->SetNext(make_shared<Node>(4));


	shared_ptr<Node> lastNode = make_shared<Node>(5);//lastNode는 다음 노드를 가리키는 공유 포인터가 없음(nullptr)

	root->GetNext()->GetNext()->GetNext()->SetNext(lastNode);

	cout << "---Print linked list---" << endl;
	shared_ptr<Node> node = root;
	while (node != nullptr) {
		cout << node->GetData() << endl;
		node = node->GetNext();//다음 노드로 이동
	}
	
	//lastNode는 따로 로컬 변수로 만들어서 참조카운트가 1인 상태에서 root가 타고타고 넘어와 서 4번째 노드가 또 참조를 하기 때문에 참조 카운트는 2
	cout << "Use count for lastNode: " << lastNode.use_count() << endl;//2

	return 0;
}

