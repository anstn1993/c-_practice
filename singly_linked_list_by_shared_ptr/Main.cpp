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

	cout << "Use count for lastNode: " << lastNode.use_count() << endl;

	return 0; 
}